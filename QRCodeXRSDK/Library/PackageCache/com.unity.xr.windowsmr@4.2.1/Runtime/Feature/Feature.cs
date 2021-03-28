using System.Runtime.InteropServices;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.WindowsMR
{
    static class FeatureApi
    {
#if UNITY_EDITOR
            [DllImport("Packages/com.unity.xr.windowsmr/Runtime/Plugins/x64/WindowsMRXRSDK.dll", EntryPoint = "UnityWindowsMR_feature_setFeatureRequested", CharSet = CharSet.Auto)]
#elif ENABLE_DOTNET
            [DllImport("WindowsMRXRSDK.dll", EntryPoint = "UnityWindowsMR_feature_setFeatureRequested")]
#else
            [DllImport("WindowsMRXRSDK", EntryPoint = "UnityWindowsMR_feature_setFeatureRequested", CharSet=CharSet.Auto)]
#endif
            public static extern void SetFeatureRequested(Feature feature, bool requested);

            public static extern Feature RequestedFeatures
            {
#if UNITY_EDITOR
                [DllImport("Packages/com.unity.xr.windowsmr/Runtime/Plugins/x64/WindowsMRXRSDK.dll", EntryPoint = "UnityWindowsMR_feature_getRequestedFeatures", CharSet = CharSet.Auto)]
#elif ENABLE_DOTNET
                [DllImport("WindowsMRXRSDK.dll", EntryPoint = "UnityWindowsMR_feature_getRequestedFeatures")]
#else
                [DllImport("WindowsMRXRSDK", EntryPoint = "UnityWindowsMR_feature_getRequestedFeatures", CharSet=CharSet.Auto)]
#endif
                get;
            }
    }
}
