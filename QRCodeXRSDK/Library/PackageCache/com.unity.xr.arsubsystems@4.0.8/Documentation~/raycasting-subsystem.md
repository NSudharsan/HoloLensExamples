# XR raycast subsystem

Raycasts allow you to perform hit testing against AR-specific features. They use the same concept as the [Physics.Raycast](https://docs.unity3d.com/ScriptReference/Physics.Raycast.html), but raycast targets don't require a presence in the physics world.

There are two types of raycasts:
- Screen point
- Arbitrary ray

Some implementations only support one or the other. You can check for support with [`XRRaycastSubsystemDescriptor`](../api/UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor.html).
