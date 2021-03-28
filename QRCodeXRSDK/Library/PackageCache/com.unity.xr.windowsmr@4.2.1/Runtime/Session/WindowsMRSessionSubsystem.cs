using System;
using System.Runtime.InteropServices;

using Unity.Collections;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.WindowsMR
{
    /// <summary>
    /// The Windows MR implementation of the <c>XRSessionSubsystem</c>. Do not create this directly.
    /// Use <c>WindowsMRSessionSubsystemDescriptor.Create()</c> instead.
    /// </summary>
    [Preserve]
    public sealed class WindowsMRSessionSubsystem : XRSessionSubsystem
    {
#if !UNITY_2020_2_OR_NEWER
        protected override Provider CreateProvider()
        {
            return new WindowsMRProvider();
        }
#endif

        class WindowsMRProvider : Provider
        {
            public WindowsMRProvider()
            {
                NativeApi.UnityWindowsMR_session_construct();
            }

            public override Promise<SessionAvailability> GetAvailabilityAsync()
            {
                var availability =
                SessionAvailability.Installed | SessionAvailability.Supported;
                return Promise<SessionAvailability>.CreateResolvedPromise(availability);
            }

            public override TrackingState trackingState
            {
                get
                {
                    return NativeApi.UnityWindowsMR_session_getTrackingState();
                }
            }

            public override NotTrackingReason notTrackingReason
            {
                get
                {
                    return NativeApi.UnityWindowsMR_session_getNotTrackingReason();
                }
            }

            public override void Destroy()
            {
                NativeApi.UnityWindowsMR_session_destroy();
            }

#if UNITY_2020_2_OR_NEWER
            public override void Stop()
#else
            public override void Pause()
#endif
            {
                NativeApi.UnityWindowsMR_session_pause();
            }

#if UNITY_2020_2_OR_NEWER
            public override void Start()
#else
            public override void Resume()
#endif
            {
                NativeApi.UnityWindowsMR_session_resume();
            }

            public override void Reset()
            {
                NativeApi.UnityWindowsMR_session_reset();
            }

            /// <summary>
            /// Should return the features requested by the enabling of other <c>Subsystem</c>s.
            /// </summary>
            public override Feature requestedFeatures => FeatureApi.RequestedFeatures;

            /// <summary>
            /// Get or set the requested tracking mode, e.g., the <see cref="Feature.AnyTrackingMode"/> bits.
            /// </summary>
            public override Feature requestedTrackingMode
            {
                get => FeatureApi.RequestedFeatures;
                set
                {
                    FeatureApi.SetFeatureRequested(Feature.AnyTrackingMode, false);
                    FeatureApi.SetFeatureRequested(value, true);
                }
            }

            /// <summary>
            /// Get the current tracking mode, e.g., the <see cref="Feature.AnyTrackingMode"/> bits.
            /// </summary>
            public override Feature currentTrackingMode
            {
                get
                {
                    if (trackingState == TrackingState.Tracking)
                    {
                        // See HolographicSpaceManager::OnLocatabilityChanged for
                        // the reasoning behind this mapping
                        switch (notTrackingReason)
                        {
                            case NotTrackingReason.Initializing:
                                return Feature.RotationOnly;
                            case NotTrackingReason.None:
                                return Feature.PositionAndRotation;
                        }
                    }

                    return Feature.None;
                }
            }

            /// <summary>
            /// This getter should allocate a new <c>NativeArray</c> using <paramref name="allocator"/>
            /// and populate it with the supported <see cref="ConfigurationDescriptor"/>s.
            /// </summary>
            /// <param name="allocator">The <c>[Allocator](https://docs.unity3d.com/ScriptReference/Unity.Collections.Allocator.html)</c>
            /// to use to create the returned <c>NativeArray</c>.</param>
            /// <returns>A newly allocated <c>NativeArray</c> of <see cref="ConfigurationDescriptor"/>s describing the capabilities
            /// of all the supported configurations.</returns>
            public override NativeArray<ConfigurationDescriptor> GetConfigurationDescriptors(Allocator allocator)
            {
                var descriptors = new NativeArray<ConfigurationDescriptor>(1, allocator);
                descriptors[0] = new ConfigurationDescriptor(
                    new IntPtr(1),
                    Feature.Meshing | Feature.PositionAndRotation,
                    0);

                return descriptors;
            }
        }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void RegisterDescriptor()
        {
            XRSessionSubsystemDescriptor.RegisterDescriptor(new XRSessionSubsystemDescriptor.Cinfo
            {
                id = "Windows Mixed Reality Session",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(WindowsMRProvider),
                subsystemTypeOverride = typeof(WindowsMRSessionSubsystem),
#else
                subsystemImplementationType = typeof(WindowsMRSessionSubsystem),
#endif
                supportsInstall = false
            });
        }

        static class NativeApi
        {
#if UNITY_EDITOR
            [DllImport("Packages/com.unity.xr.windowsmr/Runtime/Plugins/x64/WindowsMRXRSDK.dll", CharSet = CharSet.Auto)]
#elif ENABLE_DOTNET
            [DllImport("WindowsMRXRSDK.dll")]
#else
            [DllImport("WindowsMRXRSDK", CharSet=CharSet.Auto)]
#endif
            public static extern void UnityWindowsMR_session_construct();

#if UNITY_EDITOR
            [DllImport("Packages/com.unity.xr.windowsmr/Runtime/Plugins/x64/WindowsMRXRSDK.dll", CharSet = CharSet.Auto)]
#elif ENABLE_DOTNET
            [DllImport("WindowsMRXRSDK.dll")]
#else
            [DllImport("WindowsMRXRSDK", CharSet=CharSet.Auto)]
#endif
            public static extern void UnityWindowsMR_session_destroy();


#if UNITY_EDITOR
            [DllImport("Packages/com.unity.xr.windowsmr/Runtime/Plugins/x64/WindowsMRXRSDK.dll", CharSet = CharSet.Auto)]
#elif ENABLE_DOTNET
            [DllImport("WindowsMRXRSDK.dll")]
#else
            [DllImport("WindowsMRXRSDK", CharSet=CharSet.Auto)]
#endif
            public static extern void UnityWindowsMR_session_pause();


#if UNITY_EDITOR
            [DllImport("Packages/com.unity.xr.windowsmr/Runtime/Plugins/x64/WindowsMRXRSDK.dll", CharSet = CharSet.Auto)]
#elif ENABLE_DOTNET
            [DllImport("WindowsMRXRSDK.dll")]
#else
            [DllImport("WindowsMRXRSDK", CharSet=CharSet.Auto)]
#endif
            public static extern void UnityWindowsMR_session_resume();


#if UNITY_EDITOR
            [DllImport("Packages/com.unity.xr.windowsmr/Runtime/Plugins/x64/WindowsMRXRSDK.dll", CharSet = CharSet.Auto)]
#elif ENABLE_DOTNET
            [DllImport("WindowsMRXRSDK.dll")]
#else
            [DllImport("WindowsMRXRSDK", CharSet=CharSet.Auto)]
#endif
            public static extern void UnityWindowsMR_session_reset();


#if UNITY_EDITOR
            [DllImport("Packages/com.unity.xr.windowsmr/Runtime/Plugins/x64/WindowsMRXRSDK.dll", CharSet = CharSet.Auto)]
#elif ENABLE_DOTNET
            [DllImport("WindowsMRXRSDK.dll")]
#else
            [DllImport("WindowsMRXRSDK", CharSet=CharSet.Auto)]
#endif
            public static extern TrackingState UnityWindowsMR_session_getTrackingState();

#if UNITY_EDITOR
            [DllImport("Packages/com.unity.xr.windowsmr/Runtime/Plugins/x64/WindowsMRXRSDK.dll", CharSet = CharSet.Auto)]
#elif ENABLE_DOTNET
            [DllImport("WindowsMRXRSDK.dll")]
#else
            [DllImport("WindowsMRXRSDK", CharSet=CharSet.Auto)]
#endif
            public static extern NotTrackingReason UnityWindowsMR_session_getNotTrackingReason();
        }
    }
}
