using HoloToolkit.Unity;
using HoloToolkit.Unity.InputModule;
using System;
using UnityEngine;
/*
 * This code has been adapted from: Mixed Reality Examples and 
 * https://medium.com/southworks/how-to-use-spatial-understanding-to-query-your-room-with-hololens-4a6192831a6f
 * It has been modified to fit this project by Nischita Sudharsan (https://codeholo.com)
 */
public class RoomSetup : MonoBehaviour, IInputClickHandler
    {
    public TextMesh visualInfo;
    private SpatialUnderstandingDll.Imports.RaycastResult rayCastResult;
    private bool textInfoDisplay = false;

    // Start is called before the first frame update
    void Start()
        {
        // start the scanning from spatial understanding
        InputManager.Instance.PushFallbackInputHandler(this.gameObject);
        SpatialUnderstanding.Instance.RequestBeginScanning();
        SpatialUnderstanding.Instance.ScanStateChanged += ScanStateChanged;

        }
    public void OnInputClicked(InputClickedEventData eventData)
        {
        // on tap start finishing the scan
        this.visualInfo.text = "Requested Finish Scan...";
        SpatialUnderstanding.Instance.RequestFinishScan();
        }
    private void ScanStateChanged()
        {
        if (SpatialUnderstanding.Instance.ScanState == SpatialUnderstanding.ScanStates.Scanning)
            {
            LogSurfaceState();
            }
        }
    private void Update()
        {
       
        switch (SpatialUnderstanding.Instance.ScanState)
            {
            case SpatialUnderstanding.ScanStates.None:
            case SpatialUnderstanding.ScanStates.ReadyToScan:
                break;
            case SpatialUnderstanding.ScanStates.Scanning:
                this.LogSurfaceState();
                break;
            case SpatialUnderstanding.ScanStates.Finishing:
                this.visualInfo.text = "Finishing Scan";
                break;
            case SpatialUnderstanding.ScanStates.Done:
                // only display the Scan Finished text if this flag is not set
                if (!textInfoDisplay) this.visualInfo.text = "Scan finished!";
                break;
            default: break;
            }
        }

    private void LogSurfaceState()
        {
        IntPtr statsPtr = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticPlayspaceStatsPtr();
        if (SpatialUnderstandingDll.Imports.QueryPlayspaceStats(statsPtr) != 0)
            {
            var stats = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticPlayspaceStats();
            this.visualInfo.text = string.Format("TotalSurfaceArea: {0:0.##}\nWallSurfaceArea: {1:0.##}\nHorizSurfaceArea: " +
                "{2:0.##}\nTap to initiate finish scan",
                stats.TotalSurfaceArea, stats.WallSurfaceArea, stats.HorizSurfaceArea);
            }
        }
    private void OnDestroy()
        {
        SpatialUnderstanding.Instance.ScanStateChanged -= ScanStateChanged;
        }

    public void RayCastChecker()
        {
        // Set this flag as soon as you say "Ray" so that Update knows not to show the visualInfo text
        textInfoDisplay = true;
        Debug.Log("Checking raycast...");
        if (SpatialUnderstanding.Instance.AllowSpatialUnderstanding &&
           SpatialUnderstanding.Instance.ScanState == SpatialUnderstanding.ScanStates.Done)
            {
            // camera to send out RayCast
            Vector3 rayPos = GazeManager.Instance.HitPosition;
            Vector3 rayVec = Camera.main.transform.forward;

            IntPtr raycastResultPtr = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticRaycastResultPtr();
            Debug.Log("raycastResultPtr is: " + raycastResultPtr);

            SpatialUnderstandingDll.Imports.PlayspaceRaycast(
                rayPos.x, rayPos.y, rayPos.z,
                rayVec.x, rayVec.y, rayVec.z,
                raycastResultPtr);
            rayCastResult = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticRaycastResult();

            Debug.Log("Raycast result is: " + rayCastResult.SurfaceType);

            this.visualInfo.text = "Type of surface is: " + rayCastResult.SurfaceType;

            }
        else
            {
            Debug.Log("Spatial Understanding not yet ready");
            this.visualInfo.text = "Spatial Understanding not yet ready";
            }
        Debug.Log("Finished checking raycast");

        }
    }
