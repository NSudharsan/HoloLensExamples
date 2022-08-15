using System;
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

        public GameObject StepHandlerPanel;
        public TextMeshPro LatestQRCodeDetails;

        private System.Collections.Generic.SortedDictionary<string, GameObject> qrCodesObjectsList;
        private bool clearExisting = false;
        public GameObject model;

        public TextMeshPro statusText;
        
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
            qrCodesObjectsList = new SortedDictionary<string, GameObject>();

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
                pendingActions.Enqueue(new ActionData(ActionData.Type.Updated,
                    e.Data)); // Enqueue adds an object to the end of the Queue
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
                        qrCodeObject.GetComponent<SpatialGraphNodeTracker>().Id = action.qrCode.SpatialGraphNodeId;
                        qrCodeObject.GetComponent<QRCode>().qrCode = action.qrCode;
                        qrCodesObjectsList.Add(action.qrCode.Data, qrCodeObject); //QRcode added
                        if (qrCodesObjectsList.ContainsKey(action.qrCode.Data))
                        {
                            Destroy(qrCodesObjectsList[action.qrCode.Data]);
                            qrCodesObjectsList.Remove(action.qrCode.Data);
                        }
                        LatestQRCodeDetails.text =
                            "Added " + action.qrCode
                                .Data; //added to show in our QRCodePanel the data of latest QR code scanned
                    }
                    else if (action.type == ActionData.Type.Updated)
                    {
                        if (!qrCodesObjectsList.ContainsKey(action.qrCode.Data))
                        {
                            GameObject qrCodeObject =
                                Instantiate(qrCodePrefab, new Vector3(0, 0, 0), Quaternion.identity);
                            qrCodeObject.GetComponent<SpatialGraphNodeTracker>().Id = action.qrCode.SpatialGraphNodeId;
                            qrCodeObject.GetComponent<QRCode>().qrCode = action.qrCode;
                            //if same key is already there, update its position
                            if (qrCodesObjectsList.ContainsKey(action.qrCode.Data))
                            {
                                Destroy(qrCodesObjectsList[action.qrCode.Data]);
                                qrCodesObjectsList.Remove(action.qrCode.Data);
                            }
                            qrCodesObjectsList.Add(action.qrCode.Data, qrCodeObject);
                            LatestQRCodeDetails.text = "Updated " + action.qrCode.Data; //updated
                        }
                    }
                    else if (action.type == ActionData.Type.Removed)
                    {
                        if (qrCodesObjectsList.ContainsKey(action.qrCode.Data))
                        {
                            Destroy(qrCodesObjectsList[action.qrCode.Data]);
                            qrCodesObjectsList.Remove(action.qrCode.Data);
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
        public void StartScan()
        {
            // start QR tracking with the press of a button
            QRCodesManager.Instance.StartQRTracking();
            statusText.text = "Started QRCode Tracking";
        }

        public void StopScan()
        {
            foreach (var qrcode in qrCodesObjectsList)
            {
                Debug.Log("qrcode.Data " + qrcode.Key.ToString());
                if (qrcode.Key.ToString() == "Alignment code")
                {
                    model.transform.localPosition = qrcode.Value.gameObject.transform.localPosition;
                    model.transform.localRotation = qrcode.Value.gameObject.transform.localRotation;

                    statusText.text = "qrcode pos: " + qrcode.Value.gameObject.transform.localPosition + "model pos: " +
                                      model.transform.localPosition;
                    StepHandlerPanel.SetActive(true);
                    // show the menu in front of user at that point in time at 50 cm distance
                    Vector3 inFrontOfCameraPos = (Camera.main.transform.forward * 0.5f) + Camera.main.transform.position;
                    StepHandlerPanel.transform.position = inFrontOfCameraPos;
                }
            }
            // Stop the tracking with the press of a button
            QRCodesManager.Instance.StopQRTracking();
           
        }

    }
    

   
}