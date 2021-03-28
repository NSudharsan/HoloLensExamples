using System.Collections;

using System.Collections.Generic;

using UnityEngine;

using Microsoft.MixedReality.QR;
using TMPro;

namespace QRTracking
{
    public class QRCodesVisualizer : MonoBehaviour
    {
        public GameObject qrCodePrefab;
        public TextMeshPro LatestQRCodeDetails;

        private System.Collections.Generic.SortedDictionary<System.Guid, GameObject> qrCodesObjectsList;
        private bool clearExisting = false;

        struct ActionData
        {
            public enum Type
            {
                Added,
                Updated,
                Removed
            };
            public Type type;
            public Microsoft.MixedReality.QR.QRCode qrCode;

            public ActionData(Type type, Microsoft.MixedReality.QR.QRCode qRCode) : this()
            {
                this.type = type;
                qrCode = qRCode;
            }
        }

        private System.Collections.Generic.Queue<ActionData> pendingActions = new Queue<ActionData>();
        void Awake()
        {

        }

        // Use this for initialization
        void Start()
        {
            Debug.Log("QRCodesVisualizer start");
            qrCodesObjectsList = new SortedDictionary<System.Guid, GameObject>();

            // listen to any event changes on QRCOdeManager
            QRCodesManager.Instance.QRCodesTrackingStateChanged += Instance_QRCodesTrackingStateChanged;
            QRCodesManager.Instance.QRCodeAdded += Instance_QRCodeAdded;
            QRCodesManager.Instance.QRCodeUpdated += Instance_QRCodeUpdated;
            QRCodesManager.Instance.QRCodeRemoved += Instance_QRCodeRemoved;
            if (qrCodePrefab == null)
            {
                throw new System.Exception("Prefab not assigned");
            }
        }
        // call this whenever the state has changed - line 120 of QRCodesManager - this method is invoked when we start QR Tracking from QRCodesManager
        private void Instance_QRCodesTrackingStateChanged(object sender, bool status)
        {
            if (!status)
            {
                clearExisting = true;
            }
        }

        // listen to QRCodesManager changes on QRCodeVisualizer
        private void Instance_QRCodeAdded(object sender, QRCodeEventArgs<Microsoft.MixedReality.QR.QRCode> e)
        {
            Debug.Log("QRCodesVisualizer Instance_QRCodeAdded");

            lock (pendingActions)
            {
                pendingActions.Enqueue(new ActionData(ActionData.Type.Added, e.Data));
            }
        }

        private void Instance_QRCodeUpdated(object sender, QRCodeEventArgs<Microsoft.MixedReality.QR.QRCode> e)
        {
            Debug.Log("QRCodesVisualizer Instance_QRCodeUpdated");

            lock (pendingActions)
            {
                pendingActions.Enqueue(new ActionData(ActionData.Type.Updated, e.Data)); // Enqueue adds an object to the end of the Queue
            }
        }

        private void Instance_QRCodeRemoved(object sender, QRCodeEventArgs<Microsoft.MixedReality.QR.QRCode> e)
        {
            Debug.Log("QRCodesVisualizer Instance_QRCodeRemoved");

            lock (pendingActions)
            {
                pendingActions.Enqueue(new ActionData(ActionData.Type.Removed, e.Data));
            }
        }

        private void HandleEvents()
        {
            lock (pendingActions)
            {
                while (pendingActions.Count > 0)
                {
                    var action = pendingActions.Dequeue(); // removes an element from the queue FIFO approach
                    if (action.type == ActionData.Type.Added)
                    {
                        GameObject qrCodeObject = Instantiate(qrCodePrefab, new Vector3(0, 0, 0), Quaternion.identity);
                        qrCodeObject.GetComponent<SpatialGraphCoordinateSystem>().Id = action.qrCode.SpatialGraphNodeId;
                        qrCodeObject.GetComponent<QRCode>().qrCode = action.qrCode;
                        LatestQRCodeDetails.text = action.qrCode.Data; //updating to show in our QRCodePanel the data of latest QR code scanned
                        qrCodesObjectsList.Add(action.qrCode.Id, qrCodeObject); //QRcode added
                    }
                    else if (action.type == ActionData.Type.Updated)
                    {
                        if (!qrCodesObjectsList.ContainsKey(action.qrCode.Id))
                        {
                            GameObject qrCodeObject = Instantiate(qrCodePrefab, new Vector3(0, 0, 0), Quaternion.identity);
                            qrCodeObject.GetComponent<SpatialGraphCoordinateSystem>().Id = action.qrCode.SpatialGraphNodeId;
                            qrCodeObject.GetComponent<QRCode>().qrCode = action.qrCode;
                            qrCodesObjectsList.Add(action.qrCode.Id, qrCodeObject);
                        }
                    }
                    else if (action.type == ActionData.Type.Removed)
                    {
                        if (qrCodesObjectsList.ContainsKey(action.qrCode.Id))
                        {
                            Destroy(qrCodesObjectsList[action.qrCode.Id]);
                            qrCodesObjectsList.Remove(action.qrCode.Id);
                        }
                    }
                }
            }
            if (clearExisting)
            {
                clearExisting = false;
                foreach (var obj in qrCodesObjectsList)
                {
                    Destroy(obj.Value);
                }
                qrCodesObjectsList.Clear();

            }
        }

        // Update is called once per frame
        void Update()
        {
            HandleEvents();
        }
    }

}