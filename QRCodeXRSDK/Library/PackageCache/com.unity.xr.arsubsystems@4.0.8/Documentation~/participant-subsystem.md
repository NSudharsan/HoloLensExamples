# XR participant subsystem

This subsystem provides information about other users in a multi-user collaborative session. It is a type of [tracking subsystem](index.html#tracking-subsystems) and follows the same `GetChanges` pattern to inform the user about changes to the state of tracked participants. Its trackable is [`XRParticipant`](../api/UnityEngine.XR.ARSubsystems.XRParticipant.html).

Participants are detected automatically, like planes or images. You can't create or display participants.
