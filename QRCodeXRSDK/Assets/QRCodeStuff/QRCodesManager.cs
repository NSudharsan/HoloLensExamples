using System;
using System.Collections;

using System.Collections.Generic;

using UnityEngine;

using Microsoft.MixedReality.QR;

namespace QRTracking
{
    public static class QRCodeEventArgs
    {
        public static QRCodeEventArgs<TData> Create<TData>(TData data)
        {
            return new QRCodeEventArgs<TData>(data);
        }
    }

    [Serializable]
    public class QRCodeEventArgs<TData> : EventArgs
    {
        public TData Data { get; private set; }

        public QRCodeEventArgs(TData data)
        {
            Data = data;
        }
    }

    public class QRCodesManager : Singleton<QRCodesManager>
    {
        [Tooltip("Determines if the QR codes scanner should be automatically started.")]
        public bool AutoStartQRTracking = false;

        public bool IsTrackerRunning { get; private set; }

        public bool IsSupported { get; private set; }

        public event EventHandler<bool> QRCodesTrackingStateChanged;
        public event EventHandler<QRCodeEventArgs<Microsoft.MixedReality.QR.QRCode>> QRCodeAdded;
        public event EventHandler<QRCodeEventArgs<Microsoft.MixedReality.QR.QRCode>> QRCodeUpdated;
        public event EventHandler<QRCodeEventArgs<Microsoft.MixedReality.QR.QRCode>> QRCodeRemoved;

        private System.Collections.Generic.SortedDictionary<System.Guid, Microsoft.MixedReality.QR.QRCode> qrCodesList = new SortedDictionary<System.Guid, Microsoft.MixedReality.QR.QRCode>();

        private QRCodeWatcher qrTracker; //getting reference to QRCodeWatcher class
        private bool capabilityInitialized = false;
        private QRCodeWatcherAccessStatus accessStatus; //Request user consent before using QR code detection.
        private System.Threading.Tasks.Task<QRCodeWatcherAccessStatus> capabilityTask;

        public System.Guid GetIdForQRCode(string qrCodeData)
        {
            lock (qrCodesList)
            {
                foreach (var ite in qrCodesList)
                {
                    if (ite.Value.Data == qrCodeData)
                    {
                        return ite.Key;
                    }
                }
            }
            return new System.Guid();
        }

        public System.Collections.Generic.IList<Microsoft.MixedReality.QR.QRCode> GetList()
        {
            lock (qrCodesList)
            {
                return new List<Microsoft.MixedReality.QR.QRCode>(qrCodesList.Values);
            }
        }
        protected void Awake()
        {

        }

        // Use this for initialization - this is where it starts!
        async protected virtual void Start()
        {
            Debug.Log("In Start() of QRCodesManager");
            IsSupported = QRCodeWatcher.IsSupported(); //Gets whether QR code detection is supported on the current device.
            capabilityTask = QRCodeWatcher.RequestAccessAsync(); //Request user consent before using QR code detection.
            accessStatus = await capabilityTask;
            capabilityInitialized = true;
        }

        private void SetupQRTracking()
        {
            Debug.Log("Setup QRTracking()");
            try
            {
                qrTracker = new QRCodeWatcher(); // get reference for QRCodeWatcher
                IsTrackerRunning = false; // it's not running
                qrTracker.Added += QRCodeWatcher_Added; //  Event representing the addition of a QR Code.
                qrTracker.Updated += QRCodeWatcher_Updated; // Event representing the update of a QR Code.
                qrTracker.Removed += QRCodeWatcher_Removed; // Event representing the removal of a QR Code.
                qrTracker.EnumerationCompleted += QRCodeWatcher_EnumerationCompleted; // Event representing the 
                //enumeration of QR Codes completing after a Start call.
            }
            catch (Exception ex)
            {
                Debug.Log("QRCodesManager : exception starting the tracker " + ex.ToString());
            }

            if (AutoStartQRTracking) // if we automatically have set it to start tracking, then call StartQRTracking()
            {
                StartQRTracking();
            }
        }

        public void StartQRTracking()
        {
            if (qrTracker != null && !IsTrackerRunning) // only if QRCodeWatcher is not null and Tracker is not already running
            {
                Debug.Log("QRCodesManager starting QRCodeWatcher");
                try
                {
                    qrTracker.Start(); // Starts detecting QR codes.
                    IsTrackerRunning = true; // change status of tracking to true
                    QRCodesTrackingStateChanged?.Invoke(this, true); //check if status has changed
                }
                catch(Exception ex)
                {
                    Debug.Log("QRCodesManager starting QRCodeWatcher Exception:" + ex.ToString());
                }
            }
        }

        public void StopQRTracking()
        {
            if (IsTrackerRunning)
            {
                IsTrackerRunning = false;
                if (qrTracker != null)
                {
                    qrTracker.Stop();
                    qrCodesList.Clear();
                }

                var handlers = QRCodesTrackingStateChanged;
                if (handlers != null)
                {
                    handlers(this, false);
                }
            }
        }

        private void QRCodeWatcher_Removed(object sender, QRCodeRemovedEventArgs args)
        {
            Debug.Log("QRCodesManager QRCodeWatcher_Removed");

            bool found = false;
            lock (qrCodesList)
            {
                if (qrCodesList.ContainsKey(args.Code.Id))
                {
                    qrCodesList.Remove(args.Code.Id);
                    found = true;
                }
            }
            if (found)
            {
                var handlers = QRCodeRemoved;
                if (handlers != null)
                {
                    handlers(this, QRCodeEventArgs.Create(args.Code));
                }
            }
        }

        private void QRCodeWatcher_Updated(object sender, QRCodeUpdatedEventArgs args)
        {
            Debug.Log("QRCodesManager QRCodeWatcher_Updated");

            bool found = false;
            lock (qrCodesList)
            {
                if (qrCodesList.ContainsKey(args.Code.Id))
                {
                    found = true;
                    qrCodesList[args.Code.Id] = args.Code;
                }
            }
            if (found)
            {
                var handlers = QRCodeUpdated;
                if (handlers != null)
                {
                    handlers(this, QRCodeEventArgs.Create(args.Code));
                }
            }
        }

        private void QRCodeWatcher_Added(object sender, QRCodeAddedEventArgs args)
        {
            Debug.Log("QRCodesManager QRCodeWatcher_Added");

            lock (qrCodesList) // Any other thread is blocked from acquiring the lock and waits until the lock is released
            {
                qrCodesList[args.Code.Id] = args.Code; // add that unique QRcode ID to the list
            }
            var handlers = QRCodeAdded; // update event handlers that something is added
            if (handlers != null)
            {
                handlers(this, QRCodeEventArgs.Create(args.Code));
            }
        }

        private void QRCodeWatcher_EnumerationCompleted(object sender, object e)
        {
            Debug.Log("QRCodesManager QrTracker_EnumerationCompleted");
        }

        private void Update()
        {
            if (qrTracker == null && capabilityInitialized && IsSupported)
            {
                if (accessStatus == QRCodeWatcherAccessStatus.Allowed)
                {
                    SetupQRTracking();
                }
                else
                {  
                    Debug.Log("Capability access status : " + accessStatus);
                }
            }
        }
    }

}