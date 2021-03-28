#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>
struct Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler>
struct EventFunction_1_tC6DFE979E146D64E95545E28D53699AB3941762A;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.InputDevice>
struct IEnumerable_1_t37A11B97B7FA1B094D2A1ADAA8B3A5F4B2E3502A;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>
struct IEqualityComparer_1_tC19DB848F703F8CA24DB77C30EBE9F5B58ABFDD4;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct IMixedRealitySpatialAwarenessObservationHandler_1_t88B06F8E4114392E2477915E207C028BB1ED51D7;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct IReadOnlyDictionary_2_t59BA56437ACBA05EE6659A87546D5AF5C7E3720E;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct KeyCollection_t4EF3551FD26E4D36973B76C63A8D6E522B387B7C;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.UInt32Enum>
struct List_1_tCCF8CE5C93EFA4F00ED38F32746CA8F01F14B439;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>
struct MixedRealitySpatialAwarenessEventData_1_t52A10DBB2D2873C60098A71908D246E056B0CC7C;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct ValueCollection_t5FED2B14AA5D400A2EE8F9829DEA1D8EC9308CA9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct ValueCollection_t2FFFBC48ECBBB8C501C336A9BE11FC40A68C4D2E;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>[]
struct EntryU5BU5D_t1F0BEE301CCBA128695805C44A54D060A6A40F15;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>[]
struct EntryU5BU5D_tEF85CA7FD3A40382C42D2FEE41209ADD9663F6F1;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Boundary.Edge[]
struct EdgeU5BU5D_tD4BF12E7A0F069DC376803E456C7D7443E331004;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE;
// UnityEngine.XR.InputDeviceCharacteristics[]
struct InputDeviceCharacteristicsU5BU5D_t4FBB6B14A11B0DCDA4B5A50A2A1BEE4A67C91DFE;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.XR.MeshId[]
struct MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E;
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.XR.XRInputSubsystem[]
struct XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C;
// UnityEngine.XR.XRMeshSubsystemDescriptor[]
struct XRMeshSubsystemDescriptorU5BU5D_tB9A67E1878198B84ED875AF0EE3FDF308E64A324;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem
struct BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_tD5B8D10E1A4A41D245C466650DA01B93AD35964D;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData
struct BoundaryEventData_t660BF4390C006D691A3775E6D8B806A33DB22796;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings
struct GenericXRSDKCameraSettings_t61DCB4BAAD99865B67AA28D6D351348895808626;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t0CD7B5373C707B35D5B7715287F251E88B89BAE2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t9E9FEB797F41C255D06A458C4F739A3E28C70CB5;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tAB52144CF1BE31970F39D1B37C6EFB450EE0F10B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t81B35976BCAABB86634D8CAB6C5EBECE36D65D3A;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_tADED7F1DFCECAC652E75076723C14C8DC844FD63;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t68657610B7F294BEF4251D5F142B1501C6BE05F0;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle
struct InscribedRectangle_t0FE23E2B7723AA5525078D9499CEB958E0C11587;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A;
// System.String
struct String_t;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter
struct PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityControllerVisualizer_t9E9FEB797F41C255D06A458C4F739A3E28C70CB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t59BA56437ACBA05EE6659A87546D5AF5C7E3720E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedControllerType_t877DA6C54014EDDC1606A4D54E1872E52E50F02C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0276532DECCD3BA8EDE330FC5A19B19F4F081FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral100EAC20AECA8B5CD321250A1FF6AA934A803107;
IL2CPP_EXTERN_C String_t* _stringLiteral1E3510DB4821655396E1F2E952BD12C2B3B405E7;
IL2CPP_EXTERN_C String_t* _stringLiteral25AE702FFEA928066DA09FC11B4BC7B967DE10D4;
IL2CPP_EXTERN_C String_t* _stringLiteral27A9EEA0DF12B45E99809B913FBA30DBFDB54081;
IL2CPP_EXTERN_C String_t* _stringLiteral2CFD4278E7555C6A660A18C41A2048C3B4A704E1;
IL2CPP_EXTERN_C String_t* _stringLiteral2DF7A5156925F5C5400D60BBBA1DBB1D4708F9C8;
IL2CPP_EXTERN_C String_t* _stringLiteral2F391D50F63A6FC48ECA55EDAD80B5FEBB55F14B;
IL2CPP_EXTERN_C String_t* _stringLiteral34F5EB88C9344AD2EF11835AB706991FCF81186E;
IL2CPP_EXTERN_C String_t* _stringLiteral3B761D1FF7C4CFC282EFF97CD7CDD2E0DB19205F;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF5BB21220D8CB3070E7A40BBB1BEF947166C4D;
IL2CPP_EXTERN_C String_t* _stringLiteral5809513B2145A306FE3DBF1BAED5C85FC20543EA;
IL2CPP_EXTERN_C String_t* _stringLiteral6ADEB1C97F1408CD72A1A98F3D1A8119B9D34A54;
IL2CPP_EXTERN_C String_t* _stringLiteral6E059C585DE480303757054B787EF7E38A3041ED;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB285741C33824C27024778C8BEE281153B4786;
IL2CPP_EXTERN_C String_t* _stringLiteral83A5D26D7F7B772C9B2B7433282DB838A0458B02;
IL2CPP_EXTERN_C String_t* _stringLiteral8A0748277A228E387025D0FBFFFA94EF2E6E219B;
IL2CPP_EXTERN_C String_t* _stringLiteral8DAF7C48D3FFAE986E4132CE79E47540CD8B7E78;
IL2CPP_EXTERN_C String_t* _stringLiteral911918F6AB4724DF725E5A151DF0C90CE52B9A5A;
IL2CPP_EXTERN_C String_t* _stringLiteral9F2C450604BC0A4EDB95D10405537D65414A600B;
IL2CPP_EXTERN_C String_t* _stringLiteralA019DC385C2052423E84D7B14DC0877F4B4E649B;
IL2CPP_EXTERN_C String_t* _stringLiteralA1ACF166974130A969D52A31275F6D3B68533987;
IL2CPP_EXTERN_C String_t* _stringLiteralA5935C2A28B34B7440328EC778E265A054EC3184;
IL2CPP_EXTERN_C String_t* _stringLiteralAB67961043E6A691CE0B1DF2893B07BEFCAD9C60;
IL2CPP_EXTERN_C String_t* _stringLiteralAC8432B096E67A1E3A1A1AE9FE6858ABA57598C5;
IL2CPP_EXTERN_C String_t* _stringLiteralB27FB187D8E7A9DA09A09AEC832C76EB7B2F40F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB6C949D0BF57E67FE7F3F183A6C925361255BB02;
IL2CPP_EXTERN_C String_t* _stringLiteralBBABDBD5000A085E82E4D1F28B12069391E261AA;
IL2CPP_EXTERN_C String_t* _stringLiteralBC1690A7A8FDDC8138AAF739B6C7DC4B11F17E2F;
IL2CPP_EXTERN_C String_t* _stringLiteralBD4486AC00CC32467350EF386FF7169FB88B9A64;
IL2CPP_EXTERN_C String_t* _stringLiteralC2C604A03D20BDF641FF4B72AEF3DC61C4CD432F;
IL2CPP_EXTERN_C String_t* _stringLiteralC4CF5A1C3A27F671A0337087D7FC648DFC11B434;
IL2CPP_EXTERN_C String_t* _stringLiteralD92CAA6D4FB249FBAAD0197B1EE8796D6F7A25D4;
IL2CPP_EXTERN_C String_t* _stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C;
IL2CPP_EXTERN_C String_t* _stringLiteralF0342F3AF15796E4940E986CD89B6D66E0775DBC;
IL2CPP_EXTERN_C String_t* _stringLiteralF53DDA41C3100B18B00DB7F11B7FA7767D6E19C0;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mAB3ACB98485A6087A135A8F93F59AAF2065B5E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m7D01F24B54743E3D59A0CEE3C59DB545CF28600C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m95CACFE4262B025E4F88EF33BC951C3F8EDB1ADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC3392A0E9E9EB05973D3080F10A7393E03AF070E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4FB06A555535EB6F3EEC9A9D8EE8646D84079ABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9F5BA5B79A182AFDC2DF26CF50D5C1ABF31D5734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mFBB055B93D6622F63A34ACD5574F9C9650861B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE4DA733EF97D1C762A770F2239133375CF1B1762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5D2C1333BB05BA5B7ECF45A53D23A2495961087D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFCBA2C94F58EDF0DAA644DD4E97FFA24765B23DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m18DE7271392E08FF54166D2CA18882E81F5F4CC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m31D29771A1518E44E9584A35C92E450C395754B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m501246F7F719871584E20FA4930077EFE4071A06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF278140E0745E7507DFFAFF46648CC9662A79872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m415B9F6A307485B1492DF0ECAC5FFE5783D35F56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m550FE8F77A8FB74BDCA13AF7C11A20C754629E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_m79197859131BED0951DEEED78E555EE752799BE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m4B550C069E10499EA978DDB069D5651D3530CDE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__22_0_m6677AD90FE01C3AE9DCB4DBC93E5D6017DC399F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t88B06F8E4114392E2477915E207C028BB1ED51D7_mB2D76EFC01C33BD219D3A17C0A8FAAAECDFA09AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mC7756AF0E030C6D34E8D5FE9B1A80E09279B46CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDB5E0EAE33B10086A86CB16555FF7D4B3ECCADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m66B80D7A7119716088392F93816526FE69AF33CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4219F79D72CAA78B0CB2E67500AAEDA8DB24592F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDCD78B8AED12134A801BBE0A8889EE8991D3BC6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mEA748B085AE9CEF4A39037F765CC22CAD8ECFD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m08AF29488AC8CCC57798CEB5B091AECF8B4F89F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB739A47A8D7D511C0D72A7849B95652FD7D26423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEAA34D1BD6D20970F5C012D7E89B1674158B4C78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEECBB954FF7CA19FA62EAF805AA3CFCA5F19FE74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD8F79992D678539BE77FB1F1877890ECE84F6F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1_Initialize_m6D70AA31A59E85860438139C3F7A14F0BCC010B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m420DA263FA5B0019CBDF4A49B638CD0BBDE08229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m980D7CD3F4D0DFC6E880E7AB5CF089A2A08E8A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mC7457D8F1F8D4AD7F1D7E04CA4E2EB5320CFFC53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m67EB6488008B186B308F228C005912C2C913F902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mDB5E1EAFB2E35EE243E957D19153A131160AD91D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t428853FE3628F349D46DFD6841B50058F09F5FCC_m6B23F67B8589F77554911084E4BA1F30D3AEA63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F;
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t66F03189217D880564953CA5E8909758C1B4E937 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct  Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1F0BEE301CCBA128695805C44A54D060A6A40F15* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5FED2B14AA5D400A2EE8F9829DEA1D8EC9308CA9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___entries_1)); }
	inline EntryU5BU5D_t1F0BEE301CCBA128695805C44A54D060A6A40F15* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1F0BEE301CCBA128695805C44A54D060A6A40F15** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1F0BEE301CCBA128695805C44A54D060A6A40F15* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___keys_7)); }
	inline KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t566C065B2521EABF9CF07D2F81BA75B295ABDDD7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ___values_8)); }
	inline ValueCollection_t5FED2B14AA5D400A2EE8F9829DEA1D8EC9308CA9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5FED2B14AA5D400A2EE8F9829DEA1D8EC9308CA9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5FED2B14AA5D400A2EE8F9829DEA1D8EC9308CA9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct  Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEF85CA7FD3A40382C42D2FEE41209ADD9663F6F1* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4EF3551FD26E4D36973B76C63A8D6E522B387B7C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2FFFBC48ECBBB8C501C336A9BE11FC40A68C4D2E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC, ___entries_1)); }
	inline EntryU5BU5D_tEF85CA7FD3A40382C42D2FEE41209ADD9663F6F1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEF85CA7FD3A40382C42D2FEE41209ADD9663F6F1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEF85CA7FD3A40382C42D2FEE41209ADD9663F6F1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC, ___keys_7)); }
	inline KeyCollection_t4EF3551FD26E4D36973B76C63A8D6E522B387B7C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4EF3551FD26E4D36973B76C63A8D6E522B387B7C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4EF3551FD26E4D36973B76C63A8D6E522B387B7C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC, ___values_8)); }
	inline ValueCollection_t2FFFBC48ECBBB8C501C336A9BE11FC40A68C4D2E * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2FFFBC48ECBBB8C501C336A9BE11FC40A68C4D2E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2FFFBC48ECBBB8C501C336A9BE11FC40A68C4D2E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct  List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____items_1)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct  List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceCharacteristicsU5BU5D_t4FBB6B14A11B0DCDA4B5A50A2A1BEE4A67C91DFE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C, ____items_1)); }
	inline InputDeviceCharacteristicsU5BU5D_t4FBB6B14A11B0DCDA4B5A50A2A1BEE4A67C91DFE* get__items_1() const { return ____items_1; }
	inline InputDeviceCharacteristicsU5BU5D_t4FBB6B14A11B0DCDA4B5A50A2A1BEE4A67C91DFE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceCharacteristicsU5BU5D_t4FBB6B14A11B0DCDA4B5A50A2A1BEE4A67C91DFE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceCharacteristicsU5BU5D_t4FBB6B14A11B0DCDA4B5A50A2A1BEE4A67C91DFE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C_StaticFields, ____emptyArray_5)); }
	inline InputDeviceCharacteristicsU5BU5D_t4FBB6B14A11B0DCDA4B5A50A2A1BEE4A67C91DFE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceCharacteristicsU5BU5D_t4FBB6B14A11B0DCDA4B5A50A2A1BEE4A67C91DFE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceCharacteristicsU5BU5D_t4FBB6B14A11B0DCDA4B5A50A2A1BEE4A67C91DFE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct  List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D, ____items_1)); }
	inline MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40* get__items_1() const { return ____items_1; }
	inline MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D_StaticFields, ____emptyArray_5)); }
	inline MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshInfoU5BU5D_t3724FDAD33EFBB657082C34C82147656E7840A40* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct  List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____items_1)); }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct  List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRMeshSubsystemDescriptorU5BU5D_tB9A67E1878198B84ED875AF0EE3FDF308E64A324* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94, ____items_1)); }
	inline XRMeshSubsystemDescriptorU5BU5D_tB9A67E1878198B84ED875AF0EE3FDF308E64A324* get__items_1() const { return ____items_1; }
	inline XRMeshSubsystemDescriptorU5BU5D_tB9A67E1878198B84ED875AF0EE3FDF308E64A324** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRMeshSubsystemDescriptorU5BU5D_tB9A67E1878198B84ED875AF0EE3FDF308E64A324* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRMeshSubsystemDescriptorU5BU5D_tB9A67E1878198B84ED875AF0EE3FDF308E64A324* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94_StaticFields, ____emptyArray_5)); }
	inline XRMeshSubsystemDescriptorU5BU5D_tB9A67E1878198B84ED875AF0EE3FDF308E64A324* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRMeshSubsystemDescriptorU5BU5D_tB9A67E1878198B84ED875AF0EE3FDF308E64A324** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRMeshSubsystemDescriptorU5BU5D_tB9A67E1878198B84ED875AF0EE3FDF308E64A324* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct  Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B, ____array_0)); }
	inline MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E* get__array_0() const { return ____array_0; }
	inline MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(MeshIdU5BU5D_t9A8A06511B090DBCC6F2B3856BEBBA240B0A291E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct  BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<GameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectU3Ek__BackingField_1;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Renderer>k__BackingField
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___U3CRendererU3Ek__BackingField_2;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Filter>k__BackingField
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883, ___U3CGameObjectU3Ek__BackingField_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectU3Ek__BackingField_1() const { return ___U3CGameObjectU3Ek__BackingField_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectU3Ek__BackingField_1() { return &___U3CGameObjectU3Ek__BackingField_1; }
	inline void set_U3CGameObjectU3Ek__BackingField_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRendererU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883, ___U3CRendererU3Ek__BackingField_2)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_U3CRendererU3Ek__BackingField_2() const { return ___U3CRendererU3Ek__BackingField_2; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_U3CRendererU3Ek__BackingField_2() { return &___U3CRendererU3Ek__BackingField_2; }
	inline void set_U3CRendererU3Ek__BackingField_2(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___U3CRendererU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRendererU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883, ___U3CFilterU3Ek__BackingField_3)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFilterU3Ek__BackingField_3), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers
struct  XRSDKSubsystemHelpers_tD8D0891BE3BF77A09E0097C348B0D79DAE4DC641  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct  BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct  BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct  BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct  BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject * ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject * get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject ** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject * value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>
struct  Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4, ___list_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_list_0() const { return ___list_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4, ___current_3)); }
	inline XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * get_current_3() const { return ___current_3; }
	inline XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct  InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct  InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct  InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct  InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct  InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct  InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct  InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct  InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct  Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.XR.InputDevice
struct  InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_1)); }
	inline bool get_m_Initialized_1() const { return ___m_Initialized_1; }
	inline bool* get_address_of_m_Initialized_1() { return &___m_Initialized_1; }
	inline void set_m_Initialized_1(bool value)
	{
		___m_Initialized_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.XR.MeshId
struct  MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 
{
public:
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_StaticFields
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_StaticFields, ___s_InvalidId_0)); }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  value)
	{
		___s_InvalidId_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct  SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A  : public BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883
{
public:
	// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::<Collider>k__BackingField
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___U3CColliderU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CColliderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A, ___U3CColliderU3Ek__BackingField_5)); }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * get_U3CColliderU3Ek__BackingField_5() const { return ___U3CColliderU3Ek__BackingField_5; }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 ** get_address_of_U3CColliderU3Ek__BackingField_5() { return &___U3CColliderU3Ek__BackingField_5; }
	inline void set_U3CColliderU3Ek__BackingField_5(MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * value)
	{
		___U3CColliderU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CColliderU3Ek__BackingField_5), (void*)value);
	}
};

struct SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A_StaticFields
{
public:
	// System.Type[] Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::requiredMeshComponents
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___requiredMeshComponents_4;

public:
	inline static int32_t get_offset_of_requiredMeshComponents_4() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A_StaticFields, ___requiredMeshComponents_4)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_requiredMeshComponents_4() const { return ___requiredMeshComponents_4; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_requiredMeshComponents_4() { return &___requiredMeshComponents_4; }
	inline void set_requiredMeshComponents_4(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___requiredMeshComponents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requiredMeshComponents_4), (void*)value);
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>
struct  Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___list_0)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_list_0() const { return ___list_0; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___current_3)); }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  get_current_3() const { return ___current_3; }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		___current_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct  AutoStartBehavior_t774E2DA11DF89EA6BE956910CA76ADFE18AC11C6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t774E2DA11DF89EA6BE956910CA76ADFE18AC11C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct  BaseCameraSettingsProvider_tD5B8D10E1A4A41D245C466650DA01B93AD35964D  : public BaseDataProvider_1_t37F9CE251ACA469688A85820EEF7F212F9EDA4D2
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_tD5B8D10E1A4A41D245C466650DA01B93AD35964D, ___U3CIsOpaqueU3Ek__BackingField_7)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_7() const { return ___U3CIsOpaqueU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_7() { return &___U3CIsOpaqueU3Ek__BackingField_7; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_7(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_7 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.CommonUsages
struct  CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages
struct  CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA  : public RuntimeObject
{
public:

public:
};

struct CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___PointerPosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___PointerRotation_1;

public:
	inline static int32_t get_offset_of_PointerPosition_0() { return static_cast<int32_t>(offsetof(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields, ___PointerPosition_0)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_PointerPosition_0() const { return ___PointerPosition_0; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_PointerPosition_0() { return &___PointerPosition_0; }
	inline void set_PointerPosition_0(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___PointerPosition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerPosition_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_PointerRotation_1() { return static_cast<int32_t>(offsetof(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields, ___PointerRotation_1)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_PointerRotation_1() const { return ___PointerRotation_1; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_PointerRotation_1() { return &___PointerRotation_1; }
	inline void set_PointerRotation_1(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___PointerRotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerRotation_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct  DeviceInputType_t67840BFEC29D6B484D0950C77E075C4C8C31A74D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t67840BFEC29D6B484D0950C77E075C4C8C31A74D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale
struct  ExperienceScale_t31EB6E6FF639D5FBD13035528A7AA82198E8A1D1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_t31EB6E6FF639D5FBD13035528A7AA82198E8A1D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct  GenericBaseEventData_t063174F622A9296406C3FF3A6FB98B86BF269AB3  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEventTimeU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.GenericBaseEventData::<selectedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CselectedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t063174F622A9296406C3FF3A6FB98B86BF269AB3, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventSourceU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t063174F622A9296406C3FF3A6FB98B86BF269AB3, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CselectedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t063174F622A9296406C3FF3A6FB98B86BF269AB3, ___U3CselectedObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CselectedObjectU3Ek__BackingField_4() const { return ___U3CselectedObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CselectedObjectU3Ek__BackingField_4() { return &___U3CselectedObjectU3Ek__BackingField_4; }
	inline void set_U3CselectedObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CselectedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CselectedObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct  InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct  InputSourceType_t00BDB537631E33C705627B9B1BBDA0899B7AABA4 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t00BDB537631E33C705627B9B1BBDA0899B7AABA4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct  MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshChangeState
struct  MeshChangeState_t577B449627A869D7B8E062F9D9C218418790E046 
{
public:
	// System.Int32 UnityEngine.XR.MeshChangeState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshChangeState_t577B449627A869D7B8E062F9D9C218418790E046, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshGenerationStatus
struct  MeshGenerationStatus_t25EB712EAD94A279AD7D5A00E0CB6EDC8AB1FE79 
{
public:
	// System.Int32 UnityEngine.XR.MeshGenerationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshGenerationStatus_t25EB712EAD94A279AD7D5A00E0CB6EDC8AB1FE79, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshVertexAttributes
struct  MeshVertexAttributes_t7CCF6BE6BB4E908E1ECF9F9AF76968FA38A672CE 
{
public:
	// System.Int32 UnityEngine.XR.MeshVertexAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshVertexAttributes_t7CCF6BE6BB4E908E1ECF9F9AF76968FA38A672CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct  MixedRealityCapability_t392A7711E9575DCD842EC55AE52637797BDAD1F7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_t392A7711E9575DCD842EC55AE52637797BDAD1F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct  SpatialAwarenessMeshDisplayOptions_t8586EBE13BB457C0F2F5E47E650AFCC6CCB41294 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_t8586EBE13BB457C0F2F5E47E650AFCC6CCB41294, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct  SpatialAwarenessMeshLevelOfDetail_tB84BB38244E0A0CF3415AE27E7895159A3331C3B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_tB84BB38244E0A0CF3415AE27E7895159A3331C3B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType
struct  SupportedControllerType_t877DA6C54014EDDC1606A4D54E1872E52E50F02C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SupportedControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedControllerType_t877DA6C54014EDDC1606A4D54E1872E52E50F02C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.TrackingOriginModeFlags
struct  TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0 
{
public:
	// System.Int32 UnityEngine.XR.TrackingOriginModeFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UInt32Enum
struct  UInt32Enum_t205AC9FF1DBA9F24788030B596D7BE3A2E808EF1 
{
public:
	// System.UInt32 System.UInt32Enum::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UInt32Enum_t205AC9FF1DBA9F24788030B596D7BE3A2E808EF1, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct  VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct  AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType
struct  DeviceType_tAE2B3246436F9B924A6284C9C0603322DD6D09E8 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_tAE2B3246436F9B924A6284C9C0603322DD6D09E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose
struct  TrackedPose_t1326EFD84D48C3339F652B2A072743C3189B581B 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedPose_t1326EFD84D48C3339F652B2A072743C3189B581B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType
struct  TrackingType_t6524BC8345E54C620E3557D2BD223CEAF7CA5EA9 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingType_t6524BC8345E54C620E3557D2BD223CEAF7CA5EA9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType
struct  UpdateType_t4CA0C1D1034EEB2D3CB9C008009B2F4967CD658E 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t4CA0C1D1034EEB2D3CB9C008009B2F4967CD658E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>
struct  Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	uint32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3, ___list_0)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_list_0() const { return ___list_0; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3, ___current_3)); }
	inline uint32_t get_current_3() const { return ___current_3; }
	inline uint32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(uint32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>
struct  Enumerator_t0E15AD20D28CCDED0B22BBE846D735D4C0BD6061 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tCCF8CE5C93EFA4F00ED38F32746CA8F01F14B439 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	uint32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t0E15AD20D28CCDED0B22BBE846D735D4C0BD6061, ___list_0)); }
	inline List_1_tCCF8CE5C93EFA4F00ED38F32746CA8F01F14B439 * get_list_0() const { return ___list_0; }
	inline List_1_tCCF8CE5C93EFA4F00ED38F32746CA8F01F14B439 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCCF8CE5C93EFA4F00ED38F32746CA8F01F14B439 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0E15AD20D28CCDED0B22BBE846D735D4C0BD6061, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0E15AD20D28CCDED0B22BBE846D735D4C0BD6061, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0E15AD20D28CCDED0B22BBE846D735D4C0BD6061, ___current_3)); }
	inline uint32_t get_current_3() const { return ___current_3; }
	inline uint32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(uint32_t value)
	{
		___current_3 = value;
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct  IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct  IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct  IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct  BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___U3CDefaultInteractionsU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultLeftHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultRightHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___U3CInteractionsU3Ek__BackingField_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CAngularVelocityU3Ek__BackingField_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CVelocityU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CDefaultInteractionsU3Ek__BackingField_0)); }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* get_U3CDefaultInteractionsU3Ek__BackingField_0() const { return ___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return &___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_0(MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultInteractionsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1)); }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* get_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() const { return ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7** get_address_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return &___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline void set_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* value)
	{
		___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2)); }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* get_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() const { return ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7** get_address_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return &___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline void set_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* value)
	{
		___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CEnabledU3Ek__BackingField_3)); }
	inline bool get_U3CEnabledU3Ek__BackingField_3() const { return ___U3CEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_3() { return &___U3CEnabledU3Ek__BackingField_3; }
	inline void set_U3CEnabledU3Ek__BackingField_3(bool value)
	{
		___U3CEnabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CTrackingStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_4() const { return ___U3CTrackingStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_4() { return &___U3CTrackingStateU3Ek__BackingField_4; }
	inline void set_U3CTrackingStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CControllerHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_5() const { return ___U3CControllerHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_5() { return &___U3CControllerHandednessU3Ek__BackingField_5; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CInputSourceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_6() const { return ___U3CInputSourceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_6() { return &___U3CInputSourceU3Ek__BackingField_6; }
	inline void set_U3CInputSourceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CVisualizerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_7() const { return ___U3CVisualizerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_7() { return &___U3CVisualizerU3Ek__BackingField_7; }
	inline void set_U3CVisualizerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CIsPositionAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_8() const { return ___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return &___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CIsPositionApproximateU3Ek__BackingField_9)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_9() const { return ___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return &___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_9(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CIsRotationAvailableU3Ek__BackingField_10)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_10() const { return ___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return &___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_10(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CInteractionsU3Ek__BackingField_11)); }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* get_U3CInteractionsU3Ek__BackingField_11() const { return ___U3CInteractionsU3Ek__BackingField_11; }
	inline MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7** get_address_of_U3CInteractionsU3Ek__BackingField_11() { return &___U3CInteractionsU3Ek__BackingField_11; }
	inline void set_U3CInteractionsU3Ek__BackingField_11(MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* value)
	{
		___U3CInteractionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CAngularVelocityU3Ek__BackingField_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CAngularVelocityU3Ek__BackingField_12() const { return ___U3CAngularVelocityU3Ek__BackingField_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CAngularVelocityU3Ek__BackingField_12() { return &___U3CAngularVelocityU3Ek__BackingField_12; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F, ___U3CVelocityU3Ek__BackingField_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CVelocityU3Ek__BackingField_13() const { return ___U3CVelocityU3Ek__BackingField_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CVelocityU3Ek__BackingField_13() { return &___U3CVelocityU3Ek__BackingField_13; }
	inline void set_U3CVelocityU3Ek__BackingField_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CVelocityU3Ek__BackingField_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct  BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_6;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_7;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 * ___postponedActions_8;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD * ___postponedObjectActions_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B * ___U3CEventHandlersByTypeU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___eventExecutionDepth_6)); }
	inline int32_t get_eventExecutionDepth_6() const { return ___eventExecutionDepth_6; }
	inline int32_t* get_address_of_eventExecutionDepth_6() { return &___eventExecutionDepth_6; }
	inline void set_eventExecutionDepth_6(int32_t value)
	{
		___eventExecutionDepth_6 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_7() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___eventSystemHandlerType_7)); }
	inline Type_t * get_eventSystemHandlerType_7() const { return ___eventSystemHandlerType_7; }
	inline Type_t ** get_address_of_eventSystemHandlerType_7() { return &___eventSystemHandlerType_7; }
	inline void set_eventSystemHandlerType_7(Type_t * value)
	{
		___eventSystemHandlerType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_7), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___postponedActions_8)); }
	inline List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 * get_postponedActions_8() const { return ___postponedActions_8; }
	inline List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 ** get_address_of_postponedActions_8() { return &___postponedActions_8; }
	inline void set_postponedActions_8(List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 * value)
	{
		___postponedActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_8), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___postponedObjectActions_9)); }
	inline List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD * get_postponedObjectActions_9() const { return ___postponedObjectActions_9; }
	inline List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD ** get_address_of_postponedObjectActions_9() { return &___postponedObjectActions_9; }
	inline void set_postponedObjectActions_9(List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD * value)
	{
		___postponedObjectActions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___U3CEventHandlersByTypeU3Ek__BackingField_10)); }
	inline Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B * get_U3CEventHandlersByTypeU3Ek__BackingField_10() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return &___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_10(Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___U3CEventListenersU3Ek__BackingField_11)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_11() const { return ___U3CEventListenersU3Ek__BackingField_11; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_11() { return &___U3CEventListenersU3Ek__BackingField_11; }
	inline void set_U3CEventListenersU3Ek__BackingField_11(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_11), (void*)value);
	}
};

struct BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_12;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC_StaticFields, ___enableDanglingHandlerDiagnostics_5)); }
	inline bool get_enableDanglingHandlerDiagnostics_5() const { return ___enableDanglingHandlerDiagnostics_5; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_5() { return &___enableDanglingHandlerDiagnostics_5; }
	inline void set_enableDanglingHandlerDiagnostics_5(bool value)
	{
		___enableDanglingHandlerDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_12)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_12() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_12(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct  BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB  : public BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_7;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* ___pointerConfigurations_8;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * ___activePointersToConfig_10;

public:
	inline static int32_t get_offset_of_enablePointerCache_7() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___enablePointerCache_7)); }
	inline bool get_enablePointerCache_7() const { return ___enablePointerCache_7; }
	inline bool* get_address_of_enablePointerCache_7() { return &___enablePointerCache_7; }
	inline void set_enablePointerCache_7(bool value)
	{
		___enablePointerCache_7 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_8() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___pointerConfigurations_8)); }
	inline PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* get_pointerConfigurations_8() const { return ___pointerConfigurations_8; }
	inline PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E** get_address_of_pointerConfigurations_8() { return &___pointerConfigurations_8; }
	inline void set_pointerConfigurations_8(PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E* value)
	{
		___pointerConfigurations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_8), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_10() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB, ___activePointersToConfig_10)); }
	inline Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * get_activePointersToConfig_10() const { return ___activePointersToConfig_10; }
	inline Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B ** get_address_of_activePointersToConfig_10() { return &___activePointersToConfig_10; }
	inline void set_activePointersToConfig_10(Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B * value)
	{
		___activePointersToConfig_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_10), (void*)value);
	}
};

struct BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_9;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_11;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_13;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_9() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___RequestPointersPerfMarker_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_9() const { return ___RequestPointersPerfMarker_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_9() { return &___RequestPointersPerfMarker_9; }
	inline void set_RequestPointersPerfMarker_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_9 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_11() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___RecyclePointersPerfMarker_11)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_11() const { return ___RecyclePointersPerfMarker_11; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_11() { return &___RecyclePointersPerfMarker_11; }
	inline void set_RecyclePointersPerfMarker_11(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_11 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___CreatePointerPerfMarker_12)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_12() const { return ___CreatePointerPerfMarker_12; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_12() { return &___CreatePointerPerfMarker_12; }
	inline void set_CreatePointerPerfMarker_12(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_12 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_13() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_StaticFields, ___CleanActivePointersPerfMarker_13)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_13() const { return ___CleanActivePointersPerfMarker_13; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_13() { return &___CleanActivePointersPerfMarker_13; }
	inline void set_CleanActivePointersPerfMarker_13(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct  BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0  : public BaseDataProvider_1_tDF955AC925B5832287EAAE19CF88A3C9FA9BFFA4
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SpatialAwarenessSystem>k__BackingField
	RuntimeObject* ___U3CSpatialAwarenessSystemU3Ek__BackingField_8;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_9;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CObserverRotationU3Ek__BackingField_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObserverOriginU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObservationExtentsU3Ek__BackingField_18;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CSpatialAwarenessSystemU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CSpatialAwarenessSystemU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CSpatialAwarenessSystemU3Ek__BackingField_8() const { return ___U3CSpatialAwarenessSystemU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CSpatialAwarenessSystemU3Ek__BackingField_8() { return &___U3CSpatialAwarenessSystemU3Ek__BackingField_8; }
	inline void set_U3CSpatialAwarenessSystemU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CSpatialAwarenessSystemU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialAwarenessSystemU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CSourceIdU3Ek__BackingField_9)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_9() const { return ___U3CSourceIdU3Ek__BackingField_9; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_9() { return &___U3CSourceIdU3Ek__BackingField_9; }
	inline void set_U3CSourceIdU3Ek__BackingField_9(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CSourceNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_10() const { return ___U3CSourceNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_10() { return &___U3CSourceNameU3Ek__BackingField_10; }
	inline void set_U3CSourceNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CStartupBehaviorU3Ek__BackingField_11)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_11() const { return ___U3CStartupBehaviorU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_11() { return &___U3CStartupBehaviorU3Ek__BackingField_11; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_11(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CDefaultPhysicsLayerU3Ek__BackingField_12)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_12() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_12() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_12; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_12(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CIsRunningU3Ek__BackingField_13)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_13() const { return ___U3CIsRunningU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_13() { return &___U3CIsRunningU3Ek__BackingField_13; }
	inline void set_U3CIsRunningU3Ek__BackingField_13(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CIsStationaryObserverU3Ek__BackingField_14)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_14() const { return ___U3CIsStationaryObserverU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_14() { return &___U3CIsStationaryObserverU3Ek__BackingField_14; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_14(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObserverRotationU3Ek__BackingField_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CObserverRotationU3Ek__BackingField_15() const { return ___U3CObserverRotationU3Ek__BackingField_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CObserverRotationU3Ek__BackingField_15() { return &___U3CObserverRotationU3Ek__BackingField_15; }
	inline void set_U3CObserverRotationU3Ek__BackingField_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CObserverRotationU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObserverOriginU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObserverOriginU3Ek__BackingField_16() const { return ___U3CObserverOriginU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObserverOriginU3Ek__BackingField_16() { return &___U3CObserverOriginU3Ek__BackingField_16; }
	inline void set_U3CObserverOriginU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObserverOriginU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObserverVolumeTypeU3Ek__BackingField_17)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_17() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_17() { return &___U3CObserverVolumeTypeU3Ek__BackingField_17; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_17(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CObservationExtentsU3Ek__BackingField_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObservationExtentsU3Ek__BackingField_18() const { return ___U3CObservationExtentsU3Ek__BackingField_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObservationExtentsU3Ek__BackingField_18() { return &___U3CObservationExtentsU3Ek__BackingField_18; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0, ___U3CUpdateIntervalU3Ek__BackingField_19)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_19() const { return ___U3CUpdateIntervalU3Ek__BackingField_19; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_19() { return &___U3CUpdateIntervalU3Ek__BackingField_19; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_19(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_19 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings
struct  GenericXRSDKCameraSettings_t61DCB4BAAD99865B67AA28D6D351348895808626  : public BaseCameraSettingsProvider_tD5B8D10E1A4A41D245C466650DA01B93AD35964D
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::trackedPoseDriver
	TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * ___trackedPoseDriver_8;

public:
	inline static int32_t get_offset_of_trackedPoseDriver_8() { return static_cast<int32_t>(offsetof(GenericXRSDKCameraSettings_t61DCB4BAAD99865B67AA28D6D351348895808626, ___trackedPoseDriver_8)); }
	inline TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * get_trackedPoseDriver_8() const { return ___trackedPoseDriver_8; }
	inline TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 ** get_address_of_trackedPoseDriver_8() { return &___trackedPoseDriver_8; }
	inline void set_trackedPoseDriver_8(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * value)
	{
		___trackedPoseDriver_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedPoseDriver_8), (void*)value);
	}
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.MeshGenerationResult
struct  MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::<MeshId>k__BackingField
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::<Mesh>k__BackingField
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3CMeshU3Ek__BackingField_1;
	// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::<MeshCollider>k__BackingField
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___U3CMeshColliderU3Ek__BackingField_2;
	// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMeshU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF, ___U3CMeshU3Ek__BackingField_1)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3CMeshU3Ek__BackingField_1() const { return ___U3CMeshU3Ek__BackingField_1; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3CMeshU3Ek__BackingField_1() { return &___U3CMeshU3Ek__BackingField_1; }
	inline void set_U3CMeshU3Ek__BackingField_1(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3CMeshU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMeshColliderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF, ___U3CMeshColliderU3Ek__BackingField_2)); }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * get_U3CMeshColliderU3Ek__BackingField_2() const { return ___U3CMeshColliderU3Ek__BackingField_2; }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 ** get_address_of_U3CMeshColliderU3Ek__BackingField_2() { return &___U3CMeshColliderU3Ek__BackingField_2; }
	inline void set_U3CMeshColliderU3Ek__BackingField_2(MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * value)
	{
		___U3CMeshColliderU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshColliderU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF, ___U3CStatusU3Ek__BackingField_3)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_3() const { return ___U3CStatusU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_3() { return &___U3CStatusU3Ek__BackingField_3; }
	inline void set_U3CStatusU3Ek__BackingField_3(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF, ___U3CAttributesU3Ek__BackingField_4)); }
	inline int32_t get_U3CAttributesU3Ek__BackingField_4() const { return ___U3CAttributesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CAttributesU3Ek__BackingField_4() { return &___U3CAttributesU3Ek__BackingField_4; }
	inline void set_U3CAttributesU3Ek__BackingField_4(int32_t value)
	{
		___U3CAttributesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshaled_pinvoke
{
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshaled_com
{
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
};

// UnityEngine.XR.MeshInfo
struct  MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CChangeStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611, ___U3CChangeStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CChangeStateU3Ek__BackingField_1() const { return ___U3CChangeStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChangeStateU3Ek__BackingField_1() { return &___U3CChangeStateU3Ek__BackingField_1; }
	inline void set_U3CChangeStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CChangeStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPriorityHintU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611, ___U3CPriorityHintU3Ek__BackingField_2)); }
	inline int32_t get_U3CPriorityHintU3Ek__BackingField_2() const { return ___U3CPriorityHintU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPriorityHintU3Ek__BackingField_2() { return &___U3CPriorityHintU3Ek__BackingField_2; }
	inline void set_U3CPriorityHintU3Ek__BackingField_2(int32_t value)
	{
		___U3CPriorityHintU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct  MixedRealitySpatialAwarenessEventData_tE26D9B8FEA59F0C8721A1935940C9AD3AC4B011E  : public GenericBaseEventData_t063174F622A9296406C3FF3A6FB98B86BF269AB3
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_tE26D9B8FEA59F0C8721A1935940C9AD3AC4B011E, ___U3CIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CIdU3Ek__BackingField_5() const { return ___U3CIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_5() { return &___U3CIdU3Ek__BackingField_5; }
	inline void set_U3CIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CIdU3Ek__BackingField_5 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct  Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C  : public MulticastDelegate_t
{
public:

public:
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>
struct  Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9, ___list_0)); }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * get_list_0() const { return ___list_0; }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9, ___current_3)); }
	inline MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  get_current_3() const { return ___current_3; }
	inline MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  value)
	{
		___current_3 = value;
	}
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct  EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct  MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F  : public MixedRealitySpatialAwarenessEventData_tE26D9B8FEA59F0C8721A1935940C9AD3AC4B011E
{
public:
	// T Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___U3CSpatialObjectU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSpatialObjectU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F, ___U3CSpatialObjectU3Ek__BackingField_6)); }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * get_U3CSpatialObjectU3Ek__BackingField_6() const { return ___U3CSpatialObjectU3Ek__BackingField_6; }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A ** get_address_of_U3CSpatialObjectU3Ek__BackingField_6() { return &___U3CSpatialObjectU3Ek__BackingField_6; }
	inline void set_U3CSpatialObjectU3Ek__BackingField_6(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * value)
	{
		___U3CSpatialObjectU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialObjectU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct  BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1  : public BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1, ___U3CRegistrarU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_13() const { return ___U3CRegistrarU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_13() { return &___U3CRegistrarU3Ek__BackingField_13; }
	inline void set_U3CRegistrarU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct  BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34  : public BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * ___meshEventData_20;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___observedObjectParent_21;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_31;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_32;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * ___meshes_33;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_35;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_36;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMaterial_37;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___physicsMaterial_38;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___visibleMaterial_39;

public:
	inline static int32_t get_offset_of_meshEventData_20() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___meshEventData_20)); }
	inline MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * get_meshEventData_20() const { return ___meshEventData_20; }
	inline MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F ** get_address_of_meshEventData_20() { return &___meshEventData_20; }
	inline void set_meshEventData_20(MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * value)
	{
		___meshEventData_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_20), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_21() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___observedObjectParent_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_observedObjectParent_21() const { return ___observedObjectParent_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_observedObjectParent_21() { return &___observedObjectParent_21; }
	inline void set_observedObjectParent_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___observedObjectParent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_21), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___displayOption_31)); }
	inline int32_t get_displayOption_31() const { return ___displayOption_31; }
	inline int32_t* get_address_of_displayOption_31() { return &___displayOption_31; }
	inline void set_displayOption_31(int32_t value)
	{
		___displayOption_31 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___levelOfDetail_32)); }
	inline int32_t get_levelOfDetail_32() const { return ___levelOfDetail_32; }
	inline int32_t* get_address_of_levelOfDetail_32() { return &___levelOfDetail_32; }
	inline void set_levelOfDetail_32(int32_t value)
	{
		___levelOfDetail_32 = value;
	}

	inline static int32_t get_offset_of_meshes_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___meshes_33)); }
	inline Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * get_meshes_33() const { return ___meshes_33; }
	inline Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC ** get_address_of_meshes_33() { return &___meshes_33; }
	inline void set_meshes_33(Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * value)
	{
		___meshes_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_33), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___meshPhysicsLayer_34)); }
	inline int32_t get_meshPhysicsLayer_34() const { return ___meshPhysicsLayer_34; }
	inline int32_t* get_address_of_meshPhysicsLayer_34() { return &___meshPhysicsLayer_34; }
	inline void set_meshPhysicsLayer_34(int32_t value)
	{
		___meshPhysicsLayer_34 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___U3CRecalculateNormalsU3Ek__BackingField_35)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_35() const { return ___U3CRecalculateNormalsU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_35() { return &___U3CRecalculateNormalsU3Ek__BackingField_35; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_35(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_36)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_36() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_36; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_36() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_36; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_36(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___occlusionMaterial_37)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMaterial_37() const { return ___occlusionMaterial_37; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMaterial_37() { return &___occlusionMaterial_37; }
	inline void set_occlusionMaterial_37(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMaterial_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_37), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___physicsMaterial_38)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_physicsMaterial_38() const { return ___physicsMaterial_38; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_physicsMaterial_38() { return &___physicsMaterial_38; }
	inline void set_physicsMaterial_38(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___physicsMaterial_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_38), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34, ___visibleMaterial_39)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_visibleMaterial_39() const { return ___visibleMaterial_39; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_visibleMaterial_39() { return &___visibleMaterial_39; }
	inline void set_visibleMaterial_39(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___visibleMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_39), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshPhysicsPerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedPhysicsLayerPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshAddedPerfMarker_25;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * ___OnMeshAdded_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshUpdatedPerfMarker_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * ___OnMeshUpdated_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshRemovedPerfMarker_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * ___OnMeshRemoved_30;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_22() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_22() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_22() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_22; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_23() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshPhysicsPerfMarker_23() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_23() { return &___ApplyUpdatedMeshPhysicsPerfMarker_23; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_24() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedPhysicsLayerPerfMarker_24() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_24() { return &___ApplyUpdatedPhysicsLayerPerfMarker_24; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_25() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshAddedPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshAddedPerfMarker_25() const { return ___OnMeshAddedPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshAddedPerfMarker_25() { return &___OnMeshAddedPerfMarker_25; }
	inline void set_OnMeshAddedPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshAddedPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshAdded_26)); }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * get_OnMeshAdded_26() const { return ___OnMeshAdded_26; }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 ** get_address_of_OnMeshAdded_26() { return &___OnMeshAdded_26; }
	inline void set_OnMeshAdded_26(EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * value)
	{
		___OnMeshAdded_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_26), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshUpdatedPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshUpdatedPerfMarker_27() const { return ___OnMeshUpdatedPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshUpdatedPerfMarker_27() { return &___OnMeshUpdatedPerfMarker_27; }
	inline void set_OnMeshUpdatedPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshUpdatedPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshUpdated_28)); }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * get_OnMeshUpdated_28() const { return ___OnMeshUpdated_28; }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 ** get_address_of_OnMeshUpdated_28() { return &___OnMeshUpdated_28; }
	inline void set_OnMeshUpdated_28(EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * value)
	{
		___OnMeshUpdated_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshRemovedPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshRemovedPerfMarker_29() const { return ___OnMeshRemovedPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshRemovedPerfMarker_29() { return &___OnMeshRemovedPerfMarker_29; }
	inline void set_OnMeshRemovedPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshRemovedPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields, ___OnMeshRemoved_30)); }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * get_OnMeshRemoved_30() const { return ___OnMeshRemoved_30; }
	inline EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 ** get_address_of_OnMeshRemoved_30() { return &___OnMeshRemoved_30; }
	inline void set_OnMeshRemoved_30(EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * value)
	{
		___OnMeshRemoved_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_30), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct  GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8  : public BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPose
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___CurrentControllerPose_14;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::LastControllerPose
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___LastControllerPose_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CurrentControllerPosition_16;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___CurrentControllerRotation_17;

public:
	inline static int32_t get_offset_of_CurrentControllerPose_14() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8, ___CurrentControllerPose_14)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_CurrentControllerPose_14() const { return ___CurrentControllerPose_14; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_CurrentControllerPose_14() { return &___CurrentControllerPose_14; }
	inline void set_CurrentControllerPose_14(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___CurrentControllerPose_14 = value;
	}

	inline static int32_t get_offset_of_LastControllerPose_15() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8, ___LastControllerPose_15)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_LastControllerPose_15() const { return ___LastControllerPose_15; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_LastControllerPose_15() { return &___LastControllerPose_15; }
	inline void set_LastControllerPose_15(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___LastControllerPose_15 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPosition_16() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8, ___CurrentControllerPosition_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CurrentControllerPosition_16() const { return ___CurrentControllerPosition_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CurrentControllerPosition_16() { return &___CurrentControllerPosition_16; }
	inline void set_CurrentControllerPosition_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CurrentControllerPosition_16 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerRotation_17() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8, ___CurrentControllerRotation_17)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_CurrentControllerRotation_17() const { return ___CurrentControllerRotation_17; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_CurrentControllerRotation_17() { return &___CurrentControllerRotation_17; }
	inline void set_CurrentControllerRotation_17(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___CurrentControllerRotation_17 = value;
	}
};

struct GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateButtonDataPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateSingleAxisDataPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateDualAxisDataPerfMarker_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_22;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_18() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields, ___UpdateControllerPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_18() const { return ___UpdateControllerPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_18() { return &___UpdateControllerPerfMarker_18; }
	inline void set_UpdateControllerPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_19() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields, ___UpdateButtonDataPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateButtonDataPerfMarker_19() const { return ___UpdateButtonDataPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateButtonDataPerfMarker_19() { return &___UpdateButtonDataPerfMarker_19; }
	inline void set_UpdateButtonDataPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateButtonDataPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_UpdateSingleAxisDataPerfMarker_20() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields, ___UpdateSingleAxisDataPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateSingleAxisDataPerfMarker_20() const { return ___UpdateSingleAxisDataPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateSingleAxisDataPerfMarker_20() { return &___UpdateSingleAxisDataPerfMarker_20; }
	inline void set_UpdateSingleAxisDataPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateSingleAxisDataPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_21() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields, ___UpdateDualAxisDataPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateDualAxisDataPerfMarker_21() const { return ___UpdateDualAxisDataPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateDualAxisDataPerfMarker_21() { return &___UpdateDualAxisDataPerfMarker_21; }
	inline void set_UpdateDualAxisDataPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateDualAxisDataPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_22() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields, ___UpdatePoseDataPerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_22() const { return ___UpdatePoseDataPerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_22() { return &___UpdatePoseDataPerfMarker_22; }
	inline void set_UpdatePoseDataPerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_22 = value;
	}
};


// UnityEngine.MeshFilter
struct  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct  MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___inputAction_4)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___vector2Data_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___positionData_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___rotationData_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B, ___poseData_17)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___poseData_17 = value;
	}
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct  XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRInputSubsystem
struct  XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct  XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63  : public IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct  XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices_15;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevicesSubset_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___lastInputDevices_17;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GenericDesiredInputCharacteristics
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___GenericDesiredInputCharacteristics_18;

public:
	inline static int32_t get_offset_of_inputDevices_15() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___inputDevices_15)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevices_15() const { return ___inputDevices_15; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevices_15() { return &___inputDevices_15; }
	inline void set_inputDevices_15(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_15), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_16() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___inputDevicesSubset_16)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevicesSubset_16() const { return ___inputDevicesSubset_16; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevicesSubset_16() { return &___inputDevicesSubset_16; }
	inline void set_inputDevicesSubset_16(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevicesSubset_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_16), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_17() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___lastInputDevices_17)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_lastInputDevices_17() const { return ___lastInputDevices_17; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_lastInputDevices_17() { return &___lastInputDevices_17; }
	inline void set_lastInputDevices_17(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___lastInputDevices_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_17), (void*)value);
	}

	inline static int32_t get_offset_of_GenericDesiredInputCharacteristics_18() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719, ___GenericDesiredInputCharacteristics_18)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_GenericDesiredInputCharacteristics_18() const { return ___GenericDesiredInputCharacteristics_18; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_GenericDesiredInputCharacteristics_18() { return &___GenericDesiredInputCharacteristics_18; }
	inline void set_GenericDesiredInputCharacteristics_18(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___GenericDesiredInputCharacteristics_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenericDesiredInputCharacteristics_18), (void*)value);
	}
};

struct XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * ___ActiveControllers_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_21;

public:
	inline static int32_t get_offset_of_ActiveControllers_14() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields, ___ActiveControllers_14)); }
	inline Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * get_ActiveControllers_14() const { return ___ActiveControllers_14; }
	inline Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E ** get_address_of_ActiveControllers_14() { return &___ActiveControllers_14; }
	inline void set_ActiveControllers_14(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * value)
	{
		___ActiveControllers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_14), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_19() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields, ___UpdatePerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_19() const { return ___UpdatePerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_19() { return &___UpdatePerfMarker_19; }
	inline void set_UpdatePerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_20() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields, ___GetOrAddControllerPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_20() const { return ___GetOrAddControllerPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_20() { return &___GetOrAddControllerPerfMarker_20; }
	inline void set_GetOrAddControllerPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields, ___RemoveControllerPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_21() const { return ___RemoveControllerPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_21() { return &___RemoveControllerPerfMarker_21; }
	inline void set_RemoveControllerPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_21 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem
struct  BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13  : public BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<IsXRDevicePresent>k__BackingField
	bool ___U3CIsXRDevicePresentU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryProfile>k__BackingField
	MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * ___U3CBoundaryProfileU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryEventData
	BoundaryEventData_t660BF4390C006D691A3775E6D8B806A33DB22796 * ___boundaryEventData_16;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::isInitialized
	bool ___isInitialized_18;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_20;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_21;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boundaryVisualizationParent_24;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ignoreRaycastLayerValue
	int32_t ___ignoreRaycastLayerValue_25;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * ___boundaryVisualizationProfile_26;
	// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Scale>k__BackingField
	int32_t ___U3CScaleU3Ek__BackingField_27;
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryHeight>k__BackingField
	float ___U3CBoundaryHeightU3Ek__BackingField_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showFloor
	bool ___showFloor_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showPlayArea
	bool ___showPlayArea_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showTrackedArea
	bool ___showTrackedArea_32;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showBoundaryWalls
	bool ___showBoundaryWalls_34;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showCeiling
	bool ___showCeiling_36;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_37;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_38;
	// Microsoft.MixedReality.Toolkit.Boundary.Edge[] Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Bounds>k__BackingField
	EdgeU5BU5D_tD4BF12E7A0F069DC376803E456C7D7443E331004* ___U3CBoundsU3Ek__BackingField_39;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<FloorHeight>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CFloorHeightU3Ek__BackingField_40;
	// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::RectangularBounds
	InscribedRectangle_t0FE23E2B7723AA5525078D9499CEB958E0C11587 * ___RectangularBounds_41;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentFloorObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentFloorObject_42;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentPlayAreaObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentPlayAreaObject_43;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentTrackedAreaObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentTrackedAreaObject_44;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentBoundaryWallObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentBoundaryWallObject_45;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentCeilingObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentCeilingObject_46;

public:
	inline static int32_t get_offset_of_U3CIsXRDevicePresentU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CIsXRDevicePresentU3Ek__BackingField_14)); }
	inline bool get_U3CIsXRDevicePresentU3Ek__BackingField_14() const { return ___U3CIsXRDevicePresentU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsXRDevicePresentU3Ek__BackingField_14() { return &___U3CIsXRDevicePresentU3Ek__BackingField_14; }
	inline void set_U3CIsXRDevicePresentU3Ek__BackingField_14(bool value)
	{
		___U3CIsXRDevicePresentU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryProfileU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CBoundaryProfileU3Ek__BackingField_15)); }
	inline MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * get_U3CBoundaryProfileU3Ek__BackingField_15() const { return ___U3CBoundaryProfileU3Ek__BackingField_15; }
	inline MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF ** get_address_of_U3CBoundaryProfileU3Ek__BackingField_15() { return &___U3CBoundaryProfileU3Ek__BackingField_15; }
	inline void set_U3CBoundaryProfileU3Ek__BackingField_15(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * value)
	{
		___U3CBoundaryProfileU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundaryProfileU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryEventData_16() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___boundaryEventData_16)); }
	inline BoundaryEventData_t660BF4390C006D691A3775E6D8B806A33DB22796 * get_boundaryEventData_16() const { return ___boundaryEventData_16; }
	inline BoundaryEventData_t660BF4390C006D691A3775E6D8B806A33DB22796 ** get_address_of_boundaryEventData_16() { return &___boundaryEventData_16; }
	inline void set_boundaryEventData_16(BoundaryEventData_t660BF4390C006D691A3775E6D8B806A33DB22796 * value)
	{
		___boundaryEventData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryEventData_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CNameU3Ek__BackingField_17() const { return ___U3CNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_17() { return &___U3CNameU3Ek__BackingField_17; }
	inline void set_U3CNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_18() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___isInitialized_18)); }
	inline bool get_isInitialized_18() const { return ___isInitialized_18; }
	inline bool* get_address_of_isInitialized_18() { return &___isInitialized_18; }
	inline void set_isInitialized_18(bool value)
	{
		___isInitialized_18 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CSourceIdU3Ek__BackingField_20)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_20() const { return ___U3CSourceIdU3Ek__BackingField_20; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_20() { return &___U3CSourceIdU3Ek__BackingField_20; }
	inline void set_U3CSourceIdU3Ek__BackingField_20(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CSourceNameU3Ek__BackingField_21)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_21() const { return ___U3CSourceNameU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_21() { return &___U3CSourceNameU3Ek__BackingField_21; }
	inline void set_U3CSourceNameU3Ek__BackingField_21(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationParent_24() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___boundaryVisualizationParent_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boundaryVisualizationParent_24() const { return ___boundaryVisualizationParent_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boundaryVisualizationParent_24() { return &___boundaryVisualizationParent_24; }
	inline void set_boundaryVisualizationParent_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boundaryVisualizationParent_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationParent_24), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreRaycastLayerValue_25() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___ignoreRaycastLayerValue_25)); }
	inline int32_t get_ignoreRaycastLayerValue_25() const { return ___ignoreRaycastLayerValue_25; }
	inline int32_t* get_address_of_ignoreRaycastLayerValue_25() { return &___ignoreRaycastLayerValue_25; }
	inline void set_ignoreRaycastLayerValue_25(int32_t value)
	{
		___ignoreRaycastLayerValue_25 = value;
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_26() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___boundaryVisualizationProfile_26)); }
	inline MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * get_boundaryVisualizationProfile_26() const { return ___boundaryVisualizationProfile_26; }
	inline MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF ** get_address_of_boundaryVisualizationProfile_26() { return &___boundaryVisualizationProfile_26; }
	inline void set_boundaryVisualizationProfile_26(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * value)
	{
		___boundaryVisualizationProfile_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationProfile_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CScaleU3Ek__BackingField_27)); }
	inline int32_t get_U3CScaleU3Ek__BackingField_27() const { return ___U3CScaleU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CScaleU3Ek__BackingField_27() { return &___U3CScaleU3Ek__BackingField_27; }
	inline void set_U3CScaleU3Ek__BackingField_27(int32_t value)
	{
		___U3CScaleU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryHeightU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CBoundaryHeightU3Ek__BackingField_28)); }
	inline float get_U3CBoundaryHeightU3Ek__BackingField_28() const { return ___U3CBoundaryHeightU3Ek__BackingField_28; }
	inline float* get_address_of_U3CBoundaryHeightU3Ek__BackingField_28() { return &___U3CBoundaryHeightU3Ek__BackingField_28; }
	inline void set_U3CBoundaryHeightU3Ek__BackingField_28(float value)
	{
		___U3CBoundaryHeightU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_showFloor_29() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___showFloor_29)); }
	inline bool get_showFloor_29() const { return ___showFloor_29; }
	inline bool* get_address_of_showFloor_29() { return &___showFloor_29; }
	inline void set_showFloor_29(bool value)
	{
		___showFloor_29 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_30() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___showPlayArea_30)); }
	inline bool get_showPlayArea_30() const { return ___showPlayArea_30; }
	inline bool* get_address_of_showPlayArea_30() { return &___showPlayArea_30; }
	inline void set_showPlayArea_30(bool value)
	{
		___showPlayArea_30 = value;
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_31() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___floorPhysicsLayer_31)); }
	inline int32_t get_floorPhysicsLayer_31() const { return ___floorPhysicsLayer_31; }
	inline int32_t* get_address_of_floorPhysicsLayer_31() { return &___floorPhysicsLayer_31; }
	inline void set_floorPhysicsLayer_31(int32_t value)
	{
		___floorPhysicsLayer_31 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_32() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___showTrackedArea_32)); }
	inline bool get_showTrackedArea_32() const { return ___showTrackedArea_32; }
	inline bool* get_address_of_showTrackedArea_32() { return &___showTrackedArea_32; }
	inline void set_showTrackedArea_32(bool value)
	{
		___showTrackedArea_32 = value;
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_33() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___playAreaPhysicsLayer_33)); }
	inline int32_t get_playAreaPhysicsLayer_33() const { return ___playAreaPhysicsLayer_33; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_33() { return &___playAreaPhysicsLayer_33; }
	inline void set_playAreaPhysicsLayer_33(int32_t value)
	{
		___playAreaPhysicsLayer_33 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_34() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___showBoundaryWalls_34)); }
	inline bool get_showBoundaryWalls_34() const { return ___showBoundaryWalls_34; }
	inline bool* get_address_of_showBoundaryWalls_34() { return &___showBoundaryWalls_34; }
	inline void set_showBoundaryWalls_34(bool value)
	{
		___showBoundaryWalls_34 = value;
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_35() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___trackedAreaPhysicsLayer_35)); }
	inline int32_t get_trackedAreaPhysicsLayer_35() const { return ___trackedAreaPhysicsLayer_35; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_35() { return &___trackedAreaPhysicsLayer_35; }
	inline void set_trackedAreaPhysicsLayer_35(int32_t value)
	{
		___trackedAreaPhysicsLayer_35 = value;
	}

	inline static int32_t get_offset_of_showCeiling_36() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___showCeiling_36)); }
	inline bool get_showCeiling_36() const { return ___showCeiling_36; }
	inline bool* get_address_of_showCeiling_36() { return &___showCeiling_36; }
	inline void set_showCeiling_36(bool value)
	{
		___showCeiling_36 = value;
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_37() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___boundaryWallsPhysicsLayer_37)); }
	inline int32_t get_boundaryWallsPhysicsLayer_37() const { return ___boundaryWallsPhysicsLayer_37; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_37() { return &___boundaryWallsPhysicsLayer_37; }
	inline void set_boundaryWallsPhysicsLayer_37(int32_t value)
	{
		___boundaryWallsPhysicsLayer_37 = value;
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_38() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___ceilingPhysicsLayer_38)); }
	inline int32_t get_ceilingPhysicsLayer_38() const { return ___ceilingPhysicsLayer_38; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_38() { return &___ceilingPhysicsLayer_38; }
	inline void set_ceilingPhysicsLayer_38(int32_t value)
	{
		___ceilingPhysicsLayer_38 = value;
	}

	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CBoundsU3Ek__BackingField_39)); }
	inline EdgeU5BU5D_tD4BF12E7A0F069DC376803E456C7D7443E331004* get_U3CBoundsU3Ek__BackingField_39() const { return ___U3CBoundsU3Ek__BackingField_39; }
	inline EdgeU5BU5D_tD4BF12E7A0F069DC376803E456C7D7443E331004** get_address_of_U3CBoundsU3Ek__BackingField_39() { return &___U3CBoundsU3Ek__BackingField_39; }
	inline void set_U3CBoundsU3Ek__BackingField_39(EdgeU5BU5D_tD4BF12E7A0F069DC376803E456C7D7443E331004* value)
	{
		___U3CBoundsU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundsU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFloorHeightU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___U3CFloorHeightU3Ek__BackingField_40)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CFloorHeightU3Ek__BackingField_40() const { return ___U3CFloorHeightU3Ek__BackingField_40; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CFloorHeightU3Ek__BackingField_40() { return &___U3CFloorHeightU3Ek__BackingField_40; }
	inline void set_U3CFloorHeightU3Ek__BackingField_40(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CFloorHeightU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_RectangularBounds_41() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___RectangularBounds_41)); }
	inline InscribedRectangle_t0FE23E2B7723AA5525078D9499CEB958E0C11587 * get_RectangularBounds_41() const { return ___RectangularBounds_41; }
	inline InscribedRectangle_t0FE23E2B7723AA5525078D9499CEB958E0C11587 ** get_address_of_RectangularBounds_41() { return &___RectangularBounds_41; }
	inline void set_RectangularBounds_41(InscribedRectangle_t0FE23E2B7723AA5525078D9499CEB958E0C11587 * value)
	{
		___RectangularBounds_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RectangularBounds_41), (void*)value);
	}

	inline static int32_t get_offset_of_currentFloorObject_42() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___currentFloorObject_42)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentFloorObject_42() const { return ___currentFloorObject_42; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentFloorObject_42() { return &___currentFloorObject_42; }
	inline void set_currentFloorObject_42(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentFloorObject_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFloorObject_42), (void*)value);
	}

	inline static int32_t get_offset_of_currentPlayAreaObject_43() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___currentPlayAreaObject_43)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentPlayAreaObject_43() const { return ___currentPlayAreaObject_43; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentPlayAreaObject_43() { return &___currentPlayAreaObject_43; }
	inline void set_currentPlayAreaObject_43(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentPlayAreaObject_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPlayAreaObject_43), (void*)value);
	}

	inline static int32_t get_offset_of_currentTrackedAreaObject_44() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___currentTrackedAreaObject_44)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentTrackedAreaObject_44() const { return ___currentTrackedAreaObject_44; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentTrackedAreaObject_44() { return &___currentTrackedAreaObject_44; }
	inline void set_currentTrackedAreaObject_44(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentTrackedAreaObject_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTrackedAreaObject_44), (void*)value);
	}

	inline static int32_t get_offset_of_currentBoundaryWallObject_45() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___currentBoundaryWallObject_45)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentBoundaryWallObject_45() const { return ___currentBoundaryWallObject_45; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentBoundaryWallObject_45() { return &___currentBoundaryWallObject_45; }
	inline void set_currentBoundaryWallObject_45(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentBoundaryWallObject_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentBoundaryWallObject_45), (void*)value);
	}

	inline static int32_t get_offset_of_currentCeilingObject_46() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13, ___currentCeilingObject_46)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentCeilingObject_46() const { return ___currentCeilingObject_46; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentCeilingObject_46() { return &___currentCeilingObject_46; }
	inline void set_currentCeilingObject_46(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentCeilingObject_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCeilingObject_46), (void*)value);
	}
};

struct BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::OnVisualizationChanged
	EventFunction_1_tC6DFE979E146D64E95545E28D53699AB3941762A * ___OnVisualizationChanged_19;

public:
	inline static int32_t get_offset_of_OnVisualizationChanged_19() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13_StaticFields, ___OnVisualizationChanged_19)); }
	inline EventFunction_1_tC6DFE979E146D64E95545E28D53699AB3941762A * get_OnVisualizationChanged_19() const { return ___OnVisualizationChanged_19; }
	inline EventFunction_1_tC6DFE979E146D64E95545E28D53699AB3941762A ** get_address_of_OnVisualizationChanged_19() { return &___OnVisualizationChanged_19; }
	inline void set_OnVisualizationChanged_19(EventFunction_1_tC6DFE979E146D64E95545E28D53699AB3941762A * value)
	{
		___OnVisualizationChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVisualizationChanged_19), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct  BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D  : public BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct  GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC  : public BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * ___meshWorkQueue_41;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos_42;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___outstandingMeshObject_43;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___spareMeshObject_44;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_45;

public:
	inline static int32_t get_offset_of_meshWorkQueue_41() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___meshWorkQueue_41)); }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * get_meshWorkQueue_41() const { return ___meshWorkQueue_41; }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B ** get_address_of_meshWorkQueue_41() { return &___meshWorkQueue_41; }
	inline void set_meshWorkQueue_41(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * value)
	{
		___meshWorkQueue_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_41), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_42() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___meshInfos_42)); }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * get_meshInfos_42() const { return ___meshInfos_42; }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D ** get_address_of_meshInfos_42() { return &___meshInfos_42; }
	inline void set_meshInfos_42(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * value)
	{
		___meshInfos_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_42), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_43() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___outstandingMeshObject_43)); }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * get_outstandingMeshObject_43() const { return ___outstandingMeshObject_43; }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A ** get_address_of_outstandingMeshObject_43() { return &___outstandingMeshObject_43; }
	inline void set_outstandingMeshObject_43(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * value)
	{
		___outstandingMeshObject_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_43), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_44() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___spareMeshObject_44)); }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * get_spareMeshObject_44() const { return ___spareMeshObject_44; }
	inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A ** get_address_of_spareMeshObject_44() { return &___spareMeshObject_44; }
	inline void set_spareMeshObject_44(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * value)
	{
		___spareMeshObject_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_44), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_45() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC, ___lastUpdated_45)); }
	inline float get_lastUpdated_45() const { return ___lastUpdated_45; }
	inline float* get_address_of_lastUpdated_45() { return &___lastUpdated_45; }
	inline void set_lastUpdated_45(float value)
	{
		___lastUpdated_45 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumePerfMarker_46;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateObserverPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestMeshPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveMeshObjectPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReclaimMeshObjectPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMeshesPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MeshGenerationActionPerfMarker_55;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_40() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___UpdatePerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_40() const { return ___UpdatePerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_40() { return &___UpdatePerfMarker_40; }
	inline void set_UpdatePerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_46() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ResumePerfMarker_46)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumePerfMarker_46() const { return ___ResumePerfMarker_46; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumePerfMarker_46() { return &___ResumePerfMarker_46; }
	inline void set_ResumePerfMarker_46(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumePerfMarker_46 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___SuspendPerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendPerfMarker_47() const { return ___SuspendPerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendPerfMarker_47() { return &___SuspendPerfMarker_47; }
	inline void set_SuspendPerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ClearObservationsPerfMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_48() const { return ___ClearObservationsPerfMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_48() { return &___ClearObservationsPerfMarker_48; }
	inline void set_ClearObservationsPerfMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___UpdateObserverPerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateObserverPerfMarker_49() const { return ___UpdateObserverPerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateObserverPerfMarker_49() { return &___UpdateObserverPerfMarker_49; }
	inline void set_UpdateObserverPerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateObserverPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___RequestMeshPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestMeshPerfMarker_50() const { return ___RequestMeshPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestMeshPerfMarker_50() { return &___RequestMeshPerfMarker_50; }
	inline void set_RequestMeshPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestMeshPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___RemoveMeshObjectPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveMeshObjectPerfMarker_51() const { return ___RemoveMeshObjectPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveMeshObjectPerfMarker_51() { return &___RemoveMeshObjectPerfMarker_51; }
	inline void set_RemoveMeshObjectPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveMeshObjectPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ReclaimMeshObjectPerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReclaimMeshObjectPerfMarker_52() const { return ___ReclaimMeshObjectPerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReclaimMeshObjectPerfMarker_52() { return &___ReclaimMeshObjectPerfMarker_52; }
	inline void set_ReclaimMeshObjectPerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReclaimMeshObjectPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___ConfigureObserverVolumePerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_53() const { return ___ConfigureObserverVolumePerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_53() { return &___ConfigureObserverVolumePerfMarker_53; }
	inline void set_ConfigureObserverVolumePerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___UpdateMeshesPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMeshesPerfMarker_54() const { return ___UpdateMeshesPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMeshesPerfMarker_54() { return &___UpdateMeshesPerfMarker_54; }
	inline void set_UpdateMeshesPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMeshesPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields, ___MeshGenerationActionPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MeshGenerationActionPerfMarker_55() const { return ___MeshGenerationActionPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MeshGenerationActionPerfMarker_55() { return &___MeshGenerationActionPerfMarker_55; }
	inline void set_MeshGenerationActionPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MeshGenerationActionPerfMarker_55 = value;
	}
};


// UnityEngine.MeshCollider
struct  MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct  MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF  : public BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryHeight
	float ___boundaryHeight_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showFloor
	bool ___showFloor_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___floorMaterial_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_8;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorScale
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___floorScale_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showPlayArea
	bool ___showPlayArea_10;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::playAreaMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___playAreaMaterial_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showTrackedArea
	bool ___showTrackedArea_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::trackedAreaMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___trackedAreaMaterial_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showBoundaryWalls
	bool ___showBoundaryWalls_16;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryWallMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___boundaryWallMaterial_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showBoundaryCeiling
	bool ___showBoundaryCeiling_19;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryCeilingMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___boundaryCeilingMaterial_20;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_21;

public:
	inline static int32_t get_offset_of_boundaryHeight_5() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___boundaryHeight_5)); }
	inline float get_boundaryHeight_5() const { return ___boundaryHeight_5; }
	inline float* get_address_of_boundaryHeight_5() { return &___boundaryHeight_5; }
	inline void set_boundaryHeight_5(float value)
	{
		___boundaryHeight_5 = value;
	}

	inline static int32_t get_offset_of_showFloor_6() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___showFloor_6)); }
	inline bool get_showFloor_6() const { return ___showFloor_6; }
	inline bool* get_address_of_showFloor_6() { return &___showFloor_6; }
	inline void set_showFloor_6(bool value)
	{
		___showFloor_6 = value;
	}

	inline static int32_t get_offset_of_floorMaterial_7() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___floorMaterial_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_floorMaterial_7() const { return ___floorMaterial_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_floorMaterial_7() { return &___floorMaterial_7; }
	inline void set_floorMaterial_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___floorMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorMaterial_7), (void*)value);
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_8() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___floorPhysicsLayer_8)); }
	inline int32_t get_floorPhysicsLayer_8() const { return ___floorPhysicsLayer_8; }
	inline int32_t* get_address_of_floorPhysicsLayer_8() { return &___floorPhysicsLayer_8; }
	inline void set_floorPhysicsLayer_8(int32_t value)
	{
		___floorPhysicsLayer_8 = value;
	}

	inline static int32_t get_offset_of_floorScale_9() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___floorScale_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_floorScale_9() const { return ___floorScale_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_floorScale_9() { return &___floorScale_9; }
	inline void set_floorScale_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___floorScale_9 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_10() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___showPlayArea_10)); }
	inline bool get_showPlayArea_10() const { return ___showPlayArea_10; }
	inline bool* get_address_of_showPlayArea_10() { return &___showPlayArea_10; }
	inline void set_showPlayArea_10(bool value)
	{
		___showPlayArea_10 = value;
	}

	inline static int32_t get_offset_of_playAreaMaterial_11() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___playAreaMaterial_11)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_playAreaMaterial_11() const { return ___playAreaMaterial_11; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_playAreaMaterial_11() { return &___playAreaMaterial_11; }
	inline void set_playAreaMaterial_11(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___playAreaMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playAreaMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_12() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___playAreaPhysicsLayer_12)); }
	inline int32_t get_playAreaPhysicsLayer_12() const { return ___playAreaPhysicsLayer_12; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_12() { return &___playAreaPhysicsLayer_12; }
	inline void set_playAreaPhysicsLayer_12(int32_t value)
	{
		___playAreaPhysicsLayer_12 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_13() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___showTrackedArea_13)); }
	inline bool get_showTrackedArea_13() const { return ___showTrackedArea_13; }
	inline bool* get_address_of_showTrackedArea_13() { return &___showTrackedArea_13; }
	inline void set_showTrackedArea_13(bool value)
	{
		___showTrackedArea_13 = value;
	}

	inline static int32_t get_offset_of_trackedAreaMaterial_14() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___trackedAreaMaterial_14)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_trackedAreaMaterial_14() const { return ___trackedAreaMaterial_14; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_trackedAreaMaterial_14() { return &___trackedAreaMaterial_14; }
	inline void set_trackedAreaMaterial_14(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___trackedAreaMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedAreaMaterial_14), (void*)value);
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_15() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___trackedAreaPhysicsLayer_15)); }
	inline int32_t get_trackedAreaPhysicsLayer_15() const { return ___trackedAreaPhysicsLayer_15; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_15() { return &___trackedAreaPhysicsLayer_15; }
	inline void set_trackedAreaPhysicsLayer_15(int32_t value)
	{
		___trackedAreaPhysicsLayer_15 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_16() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___showBoundaryWalls_16)); }
	inline bool get_showBoundaryWalls_16() const { return ___showBoundaryWalls_16; }
	inline bool* get_address_of_showBoundaryWalls_16() { return &___showBoundaryWalls_16; }
	inline void set_showBoundaryWalls_16(bool value)
	{
		___showBoundaryWalls_16 = value;
	}

	inline static int32_t get_offset_of_boundaryWallMaterial_17() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___boundaryWallMaterial_17)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_boundaryWallMaterial_17() const { return ___boundaryWallMaterial_17; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_boundaryWallMaterial_17() { return &___boundaryWallMaterial_17; }
	inline void set_boundaryWallMaterial_17(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___boundaryWallMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryWallMaterial_17), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_18() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___boundaryWallsPhysicsLayer_18)); }
	inline int32_t get_boundaryWallsPhysicsLayer_18() const { return ___boundaryWallsPhysicsLayer_18; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_18() { return &___boundaryWallsPhysicsLayer_18; }
	inline void set_boundaryWallsPhysicsLayer_18(int32_t value)
	{
		___boundaryWallsPhysicsLayer_18 = value;
	}

	inline static int32_t get_offset_of_showBoundaryCeiling_19() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___showBoundaryCeiling_19)); }
	inline bool get_showBoundaryCeiling_19() const { return ___showBoundaryCeiling_19; }
	inline bool* get_address_of_showBoundaryCeiling_19() { return &___showBoundaryCeiling_19; }
	inline void set_showBoundaryCeiling_19(bool value)
	{
		___showBoundaryCeiling_19 = value;
	}

	inline static int32_t get_offset_of_boundaryCeilingMaterial_20() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___boundaryCeilingMaterial_20)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_boundaryCeilingMaterial_20() const { return ___boundaryCeilingMaterial_20; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_boundaryCeilingMaterial_20() { return &___boundaryCeilingMaterial_20; }
	inline void set_boundaryCeilingMaterial_20(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___boundaryCeilingMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryCeilingMaterial_20), (void*)value);
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_21() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF, ___ceilingPhysicsLayer_21)); }
	inline int32_t get_ceilingPhysicsLayer_21() const { return ___ceilingPhysicsLayer_21; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_21() { return &___ceilingPhysicsLayer_21; }
	inline void set_ceilingPhysicsLayer_21(int32_t value)
	{
		___ceilingPhysicsLayer_21 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpatialTracking.TrackedPoseDriver
struct  TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_OriginPose_10;

public:
	inline static int32_t get_offset_of_m_Device_4() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_Device_4)); }
	inline int32_t get_m_Device_4() const { return ___m_Device_4; }
	inline int32_t* get_address_of_m_Device_4() { return &___m_Device_4; }
	inline void set_m_Device_4(int32_t value)
	{
		___m_Device_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}

	inline static int32_t get_offset_of_m_PoseProviderComponent_6() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_PoseProviderComponent_6)); }
	inline BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * get_m_PoseProviderComponent_6() const { return ___m_PoseProviderComponent_6; }
	inline BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E ** get_address_of_m_PoseProviderComponent_6() { return &___m_PoseProviderComponent_6; }
	inline void set_m_PoseProviderComponent_6(BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * value)
	{
		___m_PoseProviderComponent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PoseProviderComponent_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackingType_7() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_TrackingType_7)); }
	inline int32_t get_m_TrackingType_7() const { return ___m_TrackingType_7; }
	inline int32_t* get_address_of_m_TrackingType_7() { return &___m_TrackingType_7; }
	inline void set_m_TrackingType_7(int32_t value)
	{
		___m_TrackingType_7 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_8() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_UpdateType_8)); }
	inline int32_t get_m_UpdateType_8() const { return ___m_UpdateType_8; }
	inline int32_t* get_address_of_m_UpdateType_8() { return &___m_UpdateType_8; }
	inline void set_m_UpdateType_8(int32_t value)
	{
		___m_UpdateType_8 = value;
	}

	inline static int32_t get_offset_of_m_UseRelativeTransform_9() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_UseRelativeTransform_9)); }
	inline bool get_m_UseRelativeTransform_9() const { return ___m_UseRelativeTransform_9; }
	inline bool* get_address_of_m_UseRelativeTransform_9() { return &___m_UseRelativeTransform_9; }
	inline void set_m_UseRelativeTransform_9(bool value)
	{
		___m_UseRelativeTransform_9 = value;
	}

	inline static int32_t get_offset_of_m_OriginPose_10() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_OriginPose_10)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_OriginPose_10() const { return ___m_OriginPose_10; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_OriginPose_10() { return &___m_OriginPose_10; }
	inline void set_m_OriginPose_10(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_OriginPose_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct  XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD  : public BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13
{
public:
	// System.String Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_48;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD, ___U3CNameU3Ek__BackingField_48)); }
	inline String_t* get_U3CNameU3Ek__BackingField_48() const { return ___U3CNameU3Ek__BackingField_48; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_48() { return &___U3CNameU3Ek__BackingField_48; }
	inline void set_U3CNameU3Ek__BackingField_48(String_t* value)
	{
		___U3CNameU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_48), (void*)value);
	}
};

struct XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::XRInputSubsystems
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___XRInputSubsystems_47;

public:
	inline static int32_t get_offset_of_XRInputSubsystems_47() { return static_cast<int32_t>(offsetof(XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_StaticFields, ___XRInputSubsystems_47)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_XRInputSubsystems_47() const { return ___XRInputSubsystems_47; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_XRInputSubsystems_47() { return &___XRInputSubsystems_47; }
	inline void set_XRInputSubsystems_47(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___XRInputSubsystems_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XRInputSubsystems_47), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter
struct  PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_4;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_4() { return static_cast<int32_t>(offsetof(PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_StaticFields, ___UpdatePerfMarker_4)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_4() const { return ___UpdatePerfMarker_4; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_4() { return &___UpdatePerfMarker_4; }
	inline void set_UpdatePerfMarker_4(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * m_Items[1];

public:
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_gshared (InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_gshared (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m67EB6488008B186B308F228C005912C2C913F902_gshared (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEECBB954FF7CA19FA62EAF805AA3CFCA5F19FE74_gshared (List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_m1C971E03781D2FF28AC5BC61B2C2491D27A73060_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m420DA263FA5B0019CBDF4A49B638CD0BBDE08229_gshared (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB739A47A8D7D511C0D72A7849B95652FD7D26423_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mDB5E1EAFB2E35EE243E957D19153A131160AD91D_gshared_inline (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  Queue_1_Dequeue_m980D7CD3F4D0DFC6E880E7AB5CF089A2A08E8A3F_gshared (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAB3ACB98485A6087A135A8F93F59AAF2065B5E80_gshared (Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>::Initialize(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1_Initialize_m73267CAF31EC722AA267573DB7B7605E3B6B708F_gshared (MixedRealitySpatialAwarenessEventData_1_t52A10DBB2D2873C60098A71908D246E056B0CC7C * __this, RuntimeObject* ___observer0, int32_t ___id1, RuntimeObject * ___spatialObject2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9  List_1_GetEnumerator_m4219F79D72CAA78B0CB2E67500AAEDA8DB24592F_gshared (List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  Enumerator_get_Current_m550FE8F77A8FB74BDCA13AF7C11A20C754629E6E_gshared_inline (Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mC7457D8F1F8D4AD7F1D7E04CA4E2EB5320CFFC53_gshared (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * __this, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m501246F7F719871584E20FA4930077EFE4071A06_gshared (Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m31D29771A1518E44E9584A35C92E450C395754B9_gshared (Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC88EED44D994ECCA71BB8B2AC72057F8518A05C5_gshared (List_1_tCCF8CE5C93EFA4F00ED38F32746CA8F01F14B439 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m959523346F0DFDC2D11E5084760B7A1D4F20F279_gshared (List_1_tCCF8CE5C93EFA4F00ED38F32746CA8F01F14B439 * __this, uint32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.UInt32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0E15AD20D28CCDED0B22BBE846D735D4C0BD6061  List_1_GetEnumerator_m8A6E062064AB32E93410BA33B9D5F9D05FE4E88D_gshared (List_1_tCCF8CE5C93EFA4F00ED38F32746CA8F01F14B439 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Enumerator_get_Current_mE0D6371469FF6FAE6B7CB8A44B128535DB150B5F_gshared_inline (Enumerator_t0E15AD20D28CCDED0B22BBE846D735D4C0BD6061 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m66B80D7A7119716088392F93816526FE69AF33CD_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_gshared (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_gshared (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1EE3592D853E6A2E18F7ECF3A9943D2CBCD46577_gshared (Enumerator_t0E15AD20D28CCDED0B22BBE846D735D4C0BD6061 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1FB2A7171029C0C04C25AAA14C865AD889E19AD7_gshared (Enumerator_t0E15AD20D28CCDED0B22BBE846D735D4C0BD6061 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mEA748B085AE9CEF4A39037F765CC22CAD8ECFD3A_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mC7756AF0E030C6D34E8D5FE9B1A80E09279B46CD_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m78A3936F86E71AA975058C9A3A497E01B52528BB_gshared (Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m92879B727AF55DE471833AA4C69EF4E2F2182A52_gshared (Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m985BA1C94F0384130AB1AFBCBB9A7866A9BD75B7_gshared_inline (BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1306C86C5809CB81EF4B1C56DC8EB0E468FB2FD4_gshared (Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC4ADE4DEED04A700D5AB254DF933BBFF5247542B_gshared (Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m17FEC16ED36930E5344364E4A8D8B8122D38A4AA_gshared (Dictionary_2_t35F6DA04C7EFC816B6AD81C46497F41CA75EFB0F * __this, const RuntimeMethod* method);

// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B (InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465 (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_gshared)(__this, ___usageName0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider__ctor_m997248234F0607AFB520B44723F22A32E4F2B5C0 (BaseCameraSettingsProvider_tD5B8D10E1A4A41D245C466650DA01B93AD35964D * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * XRSubsystemHelpers_get_DisplaySubsystem_mFF0DC34869AFB5EC6EE6342EE6A45CD397D0BDF8 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m0009FE0AE05820A130A513ADFC9CA5E119A00258 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * Component_GetComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m7D01F24B54743E3D59A0CEE3C59DB545CF28600C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * GameObject_AddComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m4B550C069E10499EA978DDB069D5651D3530CDE8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m35061F42654DE06AE5575CE47C32AE43CF9AC0B2 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController__ctor_m641F53B5744C01845B43E7EF2266299A972950EB (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m745CDDA851D0C022D2705E1E225AD97095F9200E_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_Enabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_Enabled_m7215364614CFBF1B603CDC712914188512C7EC86_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, bool ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::get_TrackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseController_get_TrackingState_mCE7F3AC3854AEF591203E0F504F088C4C63279C6_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___usage0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionAvailable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m796D2F38A55FB8C0182B698B5DBC9C9AD5619B82_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionApproximate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsPositionApproximate_m1BC5891CAFC746F6087C49CBD0884C8EFE59DF8C_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___usage0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsRotationAvailable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_m3E503E5FBD3241A589790FD9E2FB8001C00F8FC6_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsPositionAvailable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_mC1D412162AC07602B523096F3BBCEE369661EA28_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsRotationAvailable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_m8763D3ADEA8ACFDD6826F5696CC8DB51790D8F25_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_TrackingState(Microsoft.MixedReality.Toolkit.TrackingState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_TrackingState_m514C872F76E3F87CE14250E5E0DD127B87152EE2_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformPoint_m19E4EA2C7A16830A9C76F73E557E44D6817211F3 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPlayspace_get_Rotation_m4C3F294754D54E4604AFEEB0E8399BFF5933DF05 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m773EB94276F208A7BA4555B67A819F3E47BB72B6_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::op_Inequality(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityPose_op_Inequality_m9C54365A4C4CA13CB1372107EDB084A9911AC0B6 (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___left0, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___right1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_AxisType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mDA08F6F89AC029C3E7A9E9735E461A7C4569F308_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m531D0670B4FBDA6CD5B8E899627B70F3DB840E69 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___usage0, float* ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_m03B2CF34CC007394B4B0B3FD0240F117234ADA6C (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8 (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_FloatData(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_FloatData_m4DBD19CF71FA040D98F54152C2507FC4E9B67C35 (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_FloatData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_m902DEBEC774E88B3157757DA8EDC4D19AFBD89B6_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___usage0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_Vector2Data(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_Vector2Data_m8CA7FB7512D98FF6DAE149E436533E060A4FA5C2 (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_mF9CAEAE7685F531EF44CC7011606F7C21EA0B6D6_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_m8E3311E7A47A01E6C295AECCF128E00E8BFBE5FB (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  MixedRealityInteractionMapping_get_PoseData_m1FE5A5F111B5E311D5532B2754B6232EED0344E2_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::.ctor()
inline void Queue_1__ctor_m67EB6488008B186B308F228C005912C2C913F902 (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B *, const RuntimeMethod*))Queue_1__ctor_m67EB6488008B186B308F228C005912C2C913F902_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
inline void List_1__ctor_mEECBB954FF7CA19FA62EAF805AA3CFCA5F19FE74 (List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D *, const RuntimeMethod*))List_1__ctor_mEECBB954FF7CA19FA62EAF805AA3CFCA5F19FE74_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialMeshObserver__ctor_m35C3032A31C0B900B8F75E75DDF55EFF98251CA0 (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_SpatialAwarenessSystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_m460D3ECB01EA4EF7B7CC108260058EC4CE2A6E78_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_StartupBehavior()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_StartupBehavior_mADD3220D7F1FFEA59DCE2CC0085503B6CE274FF1_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_IsRunning()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsRunning_m675DD55744D8486BA43EEBC901FA272450317FA3_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRMeshSubsystem::set_meshDensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_set_meshDensity_mECB96CA69A1673DC1E1F373020D576FD9B4ADDC2 (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m08AF29488AC8CCC57798CEB5B091AECF8B4F89F9 (List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.XRMeshSubsystemDescriptor>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t428853FE3628F349D46DFD6841B50058F09F5FCC_m6B23F67B8589F77554911084E4BA1F30D3AEA63F (List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94 * ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94 *, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_m1C971E03781D2FF28AC5BC61B2C2491D27A73060_gshared)(___descriptors0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_mD8F79992D678539BE77FB1F1877890ECE84F6F54_inline (List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateObserver_mF849E3EC4A3481EC49806537C884D4619EF5878D (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_IsRunning(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_IsRunning_mEB6185A04E579F04DA5FCCA9229A1C6F86E4235C_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Clear()
inline void Queue_1_Clear_m420DA263FA5B0019CBDF4A49B638CD0BBDE08229 (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B *, const RuntimeMethod*))Queue_1_Clear_m420DA263FA5B0019CBDF4A49B638CD0BBDE08229_gshared)(__this, method);
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_Meshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialMeshObserver_get_Meshes_m79DD886324A14426CB56B975E7BF64E79EAAC87C (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mB739A47A8D7D511C0D72A7849B95652FD7D26423 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mB739A47A8D7D511C0D72A7849B95652FD7D26423_gshared)(__this, ___collection0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RemoveMeshObject_mCA28443FCDBC1F249D1E38DB93359CFB60D7D563 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::get_Count()
inline int32_t Queue_1_get_Count_mDB5E1EAFB2E35EE243E957D19153A131160AD91D_inline (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B *, const RuntimeMethod*))Queue_1_get_Count_mDB5E1EAFB2E35EE243E957D19153A131160AD91D_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Dequeue()
inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  Queue_1_Dequeue_m980D7CD3F4D0DFC6E880E7AB5CF089A2A08E8A3F (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * __this, const RuntimeMethod* method)
{
	return ((  MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  (*) (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B *, const RuntimeMethod*))Queue_1_Dequeue_m980D7CD3F4D0DFC6E880E7AB5CF089A2A08E8A3F_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMesh(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RequestMesh_m26C7CC215C760B01240AEEF8F9C8445456F22C0E (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___meshId0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_UpdateInterval()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseSpatialObserver_get_UpdateInterval_m59B785C3FE2773B2F04C901F7A781DA157377B36_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverVolumeType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_m62911E2D01AEFF3B937001C1427CC9E888953565_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_ObserverRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverRotation_m48D56B40D014EA777C9C2696D3650765F52A7534_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_IsStationaryObserver()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsStationaryObserver_m8BF81F60CEE7E7AC40BE50FEF5FB51BA1705F528_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_ObserverOrigin(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverOrigin_m5A92CEFFC641C8E70AFACF3358BCB481351BC985_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_TryGetMeshInfos_mA8187329477D804C411B6D944E528747BDD7419F (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * __this, List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfosOut0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshes(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateMeshes_m62DF4E70DFC8B3218EC9ACA4A66003ECD454E969 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos0, const RuntimeMethod* method);
// System.String UnityEngine.XR.MeshId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshId_ToString_mA9CDBA01DD0C110252F6C4AA7437C507B2025705 (MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_MeshPhysicsLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_MeshPhysicsLayer_mE82DBCD0B9DF1CBF0572D2F55D92D46EE327068A_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.MeshId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshId_GetHashCode_mCD3E4355DB5EE90C389CE1D742E4CCA6471E2AA6 (MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::Create(UnityEngine.Mesh,System.Int32,System.String,System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * SpatialAwarenessMeshObject_Create_m6D989E80860ACF72BB31E8E05F09A4765CE2B530 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, int32_t ___layer1, String_t* ___name2, int32_t ___meshId3, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___meshParent4, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter>()
inline PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C * GameObject_AddComponent_TisPlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_m79197859131BED0951DEEED78E555EE752799BE8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_GameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * BaseSpatialAwarenessObject_get_GameObject_mFAE4AA6806C89B2CFD3913773960FA4C51857CD2_inline (BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::set_Id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialAwarenessObject_set_Id_m1C226ECE49906A109B47E70A0E530A4D8E8763A5_inline (BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Filter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * BaseSpatialAwarenessObject_get_Filter_m294B9502A47F673081233E20EC3E74209A79871E_inline (BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417 (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::get_Collider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * SpatialAwarenessMeshObject_get_Collider_mCE08BFF09CEA034E043230096D9D0D7E2D44ED31_inline (SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAB3ACB98485A6087A135A8F93F59AAF2065B5E80 (Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAB3ACB98485A6087A135A8F93F59AAF2065B5E80_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.XRMeshSubsystem::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_GenerateMeshAsync_m76DBD89C84372FBE9CBDBFF6A7A66977D4C7CDBF (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * __this, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___meshId0, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh1, MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___meshCollider2, int32_t ___attributes3, Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C * ___onMeshGenerationComplete4, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mE4DA733EF97D1C762A770F2239133375CF1B1762 (Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * __this, int32_t ___key0, SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC *, int32_t, SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Remove(!0)
inline bool Dictionary_2_Remove_mFBB055B93D6622F63A34ACD5574F9C9650861B66 (Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObject(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m12C854FC766BF7E8697B3A9EC8155618F5F8581D (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___availableMeshObject0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Initialize(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,!0)
inline void MixedRealitySpatialAwarenessEventData_1_Initialize_m6D70AA31A59E85860438139C3F7A14F0BCC010B0 (MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * __this, RuntimeObject* ___observer0, int32_t ___id1, SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___spatialObject2, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F *, RuntimeObject*, int32_t, SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A *, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1_Initialize_m73267CAF31EC722AA267573DB7B7605E3B6B708F_gshared)(__this, ___observer0, ___id1, ___spatialObject2, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::Cleanup(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAwarenessMeshObject_Cleanup_m6C5C07830AC647FB9611ACB07971ABF79DFEECB3 (SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___meshObject0, bool ___destroyGameObject1, bool ___destroyMeshes2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObserverOrigin_m9282BED93FC4AF70C2863489DEFED55C2B83FDED_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObservationExtents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObservationExtents_m67BC5BCC6087055769FBC61DB6B799FF9E3C5FFF_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_SetBoundingVolume_mEEEFB719CE72346BF549DC5245C218F7A5699D92 (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___extents1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
inline Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9  List_1_GetEnumerator_m4219F79D72CAA78B0CB2E67500AAEDA8DB24592F (List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9  (*) (List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D *, const RuntimeMethod*))List_1_GetEnumerator_m4219F79D72CAA78B0CB2E67500AAEDA8DB24592F_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
inline MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  Enumerator_get_Current_m550FE8F77A8FB74BDCA13AF7C11A20C754629E6E_inline (Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 * __this, const RuntimeMethod* method)
{
	return ((  MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  (*) (Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 *, const RuntimeMethod*))Enumerator_get_Current_m550FE8F77A8FB74BDCA13AF7C11A20C754629E6E_gshared_inline)(__this, method);
}
// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::get_ChangeState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_mCBBE9D6299C718E353C3EEC6B5E3779DC28B9925_inline (MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::get_MeshId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  MeshInfo_get_MeshId_m92D332ED6BF2822D33CC04BA3E086E9C37FF3AC6_inline (MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Enqueue(!0)
inline void Queue_1_Enqueue_mC7457D8F1F8D4AD7F1D7E04CA4E2EB5320CFFC53 (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * __this, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B *, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 , const RuntimeMethod*))Queue_1_Enqueue_mC7457D8F1F8D4AD7F1D7E04CA4E2EB5320CFFC53_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
inline bool Enumerator_MoveNext_m501246F7F719871584E20FA4930077EFE4071A06 (Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 *, const RuntimeMethod*))Enumerator_MoveNext_m501246F7F719871584E20FA4930077EFE4071A06_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
inline void Enumerator_Dispose_m31D29771A1518E44E9584A35C92E450C395754B9 (Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 *, const RuntimeMethod*))Enumerator_Dispose_m31D29771A1518E44E9584A35C92E450C395754B9_gshared)(__this, method);
}
// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::get_MeshId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method);
// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m5AF51D2745EC947BB722550DC95665D430CDB178_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialAwarenessObject_get_Id_m11E5D448E5D93D9002E887BEA9F37B0B04730CBF_inline (BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m4FB06A555535EB6F3EEC9A9D8EE8646D84079ABA (Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared)(__this, ___key0, method);
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_DisplayOption()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_DisplayOption_mBC99D6AFD65420B1F90E34F1AF92B07F32D9AD7E_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_VisibleMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * BaseSpatialMeshObserver_get_VisibleMaterial_mD9C22A1C9CED55ABBBFC494DEF333A292126B811_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_OcclusionMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * BaseSpatialMeshObserver_get_OcclusionMaterial_mA789E70BE37266983CC4B696CFD5628674345863_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Item(!0)
inline SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * Dictionary_2_get_Item_mFCBA2C94F58EDF0DAA644DD4E97FFA24765B23DF (Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * (*) (Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Renderer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * BaseSpatialAwarenessObject_get_Renderer_m748A536B75BA14E1BE1122C938EF39EB3FA16721_inline (BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883 * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_RecalculateNormals()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialMeshObserver_get_RecalculateNormals_m834207D95E0B9919CA20889919A03A9553BF4451_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_PhysicsMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * BaseSpatialMeshObserver_get_PhysicsMaterial_m35573042269F05F6913C7CCCB6B1B21234D85C01_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_material_m3B07EBDE2756F6F250C6202EA1F67C95072B9D72 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Add(!0,!1)
inline void Dictionary_2_Add_m95CACFE4262B025E4F88EF33BC951C3F8EDB1ADE (Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * __this, int32_t ___key0, SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC *, int32_t, SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationAction(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_MeshGenerationAction_mC43C0A5CD1C83A0C6A879B0E09DDC375D7B40283 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF  ___meshGenerationResult0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::.ctor(Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile,Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseBoundarySystem__ctor_m9E175AB60C64036D3BD22077205178E41B016865 (BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13 * __this, MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * ___profile0, int32_t ___scale1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared)(__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC (uint32_t ___desiredCharacteristics0, List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline)(__this, method);
}
// UnityEngine.XR.XRInputSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_InputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * XRSubsystemHelpers_get_InputSubsystem_m0B16B29476C08EC99668D663CE3CC8D2A5E975E8 (const RuntimeMethod* method);
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
inline void List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_gshared)(__this, ___capacity0, method);
}
// System.Boolean UnityEngine.XR.XRInputSubsystem::TryGetBoundaryPoints(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TryGetBoundaryPoints_m14643859D1DD97631C2D75E74C7EE60C37FFC810 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___boundaryPoints0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6 (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared)(___subsystems0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::GetEnumerator()
inline Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14 (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::get_Current()
inline XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_inline (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 * __this, const RuntimeMethod* method)
{
	return ((  XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * (*) (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2 (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3 (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::Dispose()
inline void Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103 (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::get_Scale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseBoundarySystem_get_Scale_m81EA6E785E9C648A6BAFD3C8FC05E5AE78C62656_inline (BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRInputSubsystem::TrySetTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TrySetTrackingOriginMode_m43E5453F805376A64B8337E71AED773D41C9006D (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, int32_t ___origin0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::.ctor()
inline void List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>::.ctor()
inline void List_1__ctor_mEAA34D1BD6D20970F5C012D7E89B1674158B4C78 (List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C *, const RuntimeMethod*))List_1__ctor_mC88EED44D994ECCA71BB8B2AC72057F8518A05C5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>::Add(!0)
inline void List_1_Add_mDB5E0EAE33B10086A86CB16555FF7D4B3ECCADC8 (List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C *, uint32_t, const RuntimeMethod*))List_1_Add_m959523346F0DFDC2D11E5084760B7A1D4F20F279_gshared)(__this, ___item0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_m97D08340B47B03586B4D1378C19B4DDEA831F443 (BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Update_m968330C6BC77927CC3FE558A1E64671E8AA1CB16 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Clear()
inline void List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>::GetEnumerator()
inline Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3  List_1_GetEnumerator_mDCD78B8AED12134A801BBE0A8889EE8991D3BC6A (List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3  (*) (List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C *, const RuntimeMethod*))List_1_GetEnumerator_m8A6E062064AB32E93410BA33B9D5F9D05FE4E88D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>::get_Current()
inline uint32_t Enumerator_get_Current_m415B9F6A307485B1492DF0ECAC5FFE5783D35F56_inline (Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3 *, const RuntimeMethod*))Enumerator_get_Current_mE0D6371469FF6FAE6B7CB8A44B128535DB150B5F_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
inline Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Contains(!0)
inline bool List_1_Contains_m66B80D7A7119716088392F93816526FE69AF33CD (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , const RuntimeMethod*))List_1_Contains_m66B80D7A7119716088392F93816526FE69AF33CD_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Add(!0)
inline void List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , const RuntimeMethod*))List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69 (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
inline void Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92 (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>::MoveNext()
inline bool Enumerator_MoveNext_mF278140E0745E7507DFFAFF46648CC9662A79872 (Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3 *, const RuntimeMethod*))Enumerator_MoveNext_m1EE3592D853E6A2E18F7ECF3A9943D2CBCD46577_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>::Dispose()
inline void Enumerator_Dispose_m18DE7271392E08FF54166D2CA18882E81F5F4CC1 (Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3 *, const RuntimeMethod*))Enumerator_Dispose_m1FB2A7171029C0C04C25AAA14C865AD889E19AD7_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mEC01F2DE9E9A9E1F612176B8B955F29864294DF6 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Remove(!0)
inline bool List_1_Remove_mEA748B085AE9CEF4A39037F765CC22CAD8ECFD3A (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , const RuntimeMethod*))List_1_Remove_mEA748B085AE9CEF4A39037F765CC22CAD8ECFD3A_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mC7756AF0E030C6D34E8D5FE9B1A80E09279B46CD (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mC7756AF0E030C6D34E8D5FE9B1A80E09279B46CD_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866 (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , const RuntimeMethod*))Dictionary_2_ContainsKey_m78A3936F86E71AA975058C9A3A497E01B52528BB_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Item(!0)
inline GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02 (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method)
{
	return ((  GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * (*) (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , const RuntimeMethod*))Dictionary_2_get_Item_m92879B727AF55DE471833AA4C69EF4E2F2182A52_gshared)(__this, ___key0, method);
}
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::HasFlag(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E (RuntimeObject * __this, Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___flag0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_inline (BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t3589CFF3526B1A6A8BD790F9940DB1CA28C43A02 *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m985BA1C94F0384130AB1AFBCBB9A7866A9BD75B7_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1 (Type_t * ___type0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Add(!0,!1)
inline void Dictionary_2_Add_mC3392A0E9E9EB05973D3080F10A7393E03AF070E (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 *, const RuntimeMethod*))Dictionary_2_Add_m1306C86C5809CB81EF4B1C56DC8EB0E468FB2FD4_gshared)(__this, ___key0, ___value1, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::get_Visualizer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_Visualizer_m759A7A702B8B5BE0C913AB9C1C6516DA2F32CF77_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Remove(!0)
inline bool Dictionary_2_Remove_m9F5BA5B79A182AFDC2DF26CF50D5C1ABF31D5734 (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , const RuntimeMethod*))Dictionary_2_Remove_mC4ADE4DEED04A700D5AB254DF933BBFF5247542B_gshared)(__this, ___key0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_name_m5FA211BC67629D36A37753E4D2E524586B66CA89 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::.ctor()
inline void Dictionary_2__ctor_m5D2C1333BB05BA5B7ECF45A53D23A2495961087D (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E *, const RuntimeMethod*))Dictionary_2__ctor_m17FEC16ED36930E5344364E4A8D8B8122D38A4AA_gshared)(__this, method);
}
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_GetTransformedBy_m36335BACDABCCD298E90AB97995E3D10F2565E64 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___lhs0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_get_Position_mFA2AD73CFCD44DCEE1D433FF286FF7CDDE8394D0 (const RuntimeMethod* method);
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Pose Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter::Concatenate(UnityEngine.Pose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  PlayspaceAdapter_Concatenate_m24A4BEE6CCFF96D97C161A9D8EB96DBA03A6FDB4 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___lhs0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUsages__cctor_m4FCDFD73974B9CB1226F2B3B7116E671D6A13FE2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB285741C33824C27024778C8BEE281153B4786);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly InputFeatureUsage<Vector3> PointerPosition = new InputFeatureUsage<Vector3>("PointerPosition");
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_0;
		memset((&L_0), 0, sizeof(L_0));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_0), _stringLiteral6EB285741C33824C27024778C8BEE281153B4786, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var))->set_PointerPosition_0(L_0);
		// public static readonly InputFeatureUsage<Quaternion> PointerRotation = new InputFeatureUsage<Quaternion>("PointerRotation");
		InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465((&L_1), _stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A, /*hidden argument*/InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var);
		((CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tEF22A53203B24687AC8A806B8587AB35F6FEFDDA_il2cpp_TypeInfo_var))->set_PointerRotation_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings__ctor_mD8A56F7840D85F466C8D44653C0884AF6BBE77A8 (GenericXRSDKCameraSettings_t61DCB4BAAD99865B67AA28D6D351348895808626 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t96F629C1EDACEBBB6376D6C904A05C9BB28FD45D * L_3 = ___profile3;
		BaseCameraSettingsProvider__ctor_m997248234F0607AFB520B44723F22A32E4F2B5C0(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKCameraSettings_get_IsOpaque_m810B603E11CD58A9D5F1312B3C8AC05816138802 (GenericXRSDKCameraSettings_t61DCB4BAAD99865B67AA28D6D351348895808626 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * G_B2_0 = NULL;
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * G_B1_0 = NULL;
	{
		// public override bool IsOpaque => XRSubsystemHelpers.DisplaySubsystem?.displayOpaque ?? true;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0;
		L_0 = XRSubsystemHelpers_get_DisplaySubsystem_mFF0DC34869AFB5EC6EE6342EE6A45CD397D0BDF8(/*hidden argument*/NULL);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F(G_B2_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings_Enable_m2F7477997774C7DDA72543A462D767B178CE1694 (GenericXRSDKCameraSettings_t61DCB4BAAD99865B67AA28D6D351348895808626 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m7D01F24B54743E3D59A0CEE3C59DB545CF28600C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m4B550C069E10499EA978DDB069D5651D3530CDE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Enable();
		BaseService_Enable_m0009FE0AE05820A130A513ADFC9CA5E119A00258(__this, /*hidden argument*/NULL);
		// if (!CameraCache.Main.GetComponent<TrackedPoseDriver>())
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
		NullCheck(L_0);
		TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * L_1;
		L_1 = Component_GetComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m7D01F24B54743E3D59A0CEE3C59DB545CF28600C(L_0, /*hidden argument*/Component_GetComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m7D01F24B54743E3D59A0CEE3C59DB545CF28600C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// trackedPoseDriver = CameraCache.Main.gameObject.AddComponent<TrackedPoseDriver>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * L_5;
		L_5 = GameObject_AddComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m4B550C069E10499EA978DDB069D5651D3530CDE8(L_4, /*hidden argument*/GameObject_AddComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m4B550C069E10499EA978DDB069D5651D3530CDE8_RuntimeMethod_var);
		__this->set_trackedPoseDriver_8(L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings_Disable_m8F198AB05F67A028628195461694F6BE1EBFA147 (GenericXRSDKCameraSettings_t61DCB4BAAD99865B67AA28D6D351348895808626 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackedPoseDriver != null)
		TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * L_0 = __this->get_trackedPoseDriver_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Object.Destroy(trackedPoseDriver);
		TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * L_2 = __this->get_trackedPoseDriver_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// trackedPoseDriver = null;
		__this->set_trackedPoseDriver_8((TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 *)NULL);
	}

IL_0020:
	{
		// base.Disable();
		BaseService_Disable_m35061F42654DE06AE5575CE47C32AE43CF9AC0B2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_m421F96203BE1E907CFF01D5E7DBD81D5A19151CF (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected MixedRealityPose CurrentControllerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_0;
		L_0 = MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline(/*hidden argument*/NULL);
		__this->set_CurrentControllerPose_14(L_0);
		// protected MixedRealityPose LastControllerPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_1;
		L_1 = MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline(/*hidden argument*/NULL);
		__this->set_LastControllerPose_15(L_1);
		// protected Vector3 CurrentControllerPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_CurrentControllerPosition_16(L_2);
		// protected Quaternion CurrentControllerRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_CurrentControllerRotation_17(L_3);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_4 = ___trackingState0;
		uint8_t L_5 = ___controllerHandedness1;
		RuntimeObject* L_6 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_7 = ___interactions3;
		BaseController__ctor_m641F53B5744C01845B43E7EF2266299A972950EB(__this, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::get_DefaultLeftHandedInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* GenericXRSDKController_get_DefaultLeftHandedInteractions_m49BB2C8750259DA9F3FB7268B1CA218C9089D378 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, const RuntimeMethod* method)
{
	{
		// public override MixedRealityInteractionMapping[] DefaultLeftHandedInteractions => DefaultInteractions;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_0;
		L_0 = VirtFuncInvoker0< MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_DefaultInteractions() */, __this);
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::get_DefaultRightHandedInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* GenericXRSDKController_get_DefaultRightHandedInteractions_m267B45ABD4E0DE6194B08B91F077000A9CBAA664 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, const RuntimeMethod* method)
{
	{
		// public override MixedRealityInteractionMapping[] DefaultRightHandedInteractions => DefaultInteractions;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_0;
		L_0 = VirtFuncInvoker0< MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_DefaultInteractions() */, __this);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_m4863A07EA619069FE1989D8576497DAB99D9F51F (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBABDBD5000A085E82E4D1F28B12069391E261AA);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	int32_t G_B9_0 = 0;
	GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * G_B9_1 = NULL;
	int32_t G_B9_2 = 0;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B24_0 = NULL;
	RuntimeObject* G_B23_0 = NULL;
	RuntimeObject* G_B29_0 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* G_B40_0 = NULL;
	int32_t G_B40_1 = 0;
	MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* G_B39_0 = NULL;
	int32_t G_B39_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B41_0;
	memset((&G_B41_0), 0, sizeof(G_B41_0));
	int32_t G_B41_1 = 0;
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_18();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!Enabled) { return; }
			bool L_2;
			L_2 = BaseController_get_Enabled_m745CDDA851D0C022D2705E1E225AD97095F9200E_inline(__this, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_001b;
			}
		}

IL_0016:
		{
			// if (!Enabled) { return; }
			IL2CPP_LEAVE(0x288, FINALLY_027a);
		}

IL_001b:
		{
			// if (Interactions == null)
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_3;
			L_3 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0044;
			}
		}

IL_0023:
		{
			// Debug.LogError($"No interaction configuration for {GetType().Name}");
			Type_t * L_4;
			L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
			NullCheck(L_4);
			String_t* L_5;
			L_5 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
			String_t* L_6;
			L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBBABDBD5000A085E82E4D1F28B12069391E261AA, L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_6, /*hidden argument*/NULL);
			// Enabled = false;
			BaseController_set_Enabled_m7215364614CFBF1B603CDC712914188512C7EC86_inline(__this, (bool)0, /*hidden argument*/NULL);
		}

IL_0044:
		{
			// var lastState = TrackingState;
			int32_t L_7;
			L_7 = BaseController_get_TrackingState_mCE7F3AC3854AEF591203E0F504F088C4C63279C6_inline(__this, /*hidden argument*/NULL);
			// LastControllerPose = CurrentControllerPose;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_8 = __this->get_CurrentControllerPose_14();
			__this->set_LastControllerPose_15(L_8);
			// IsPositionAvailable = inputDevice.TryGetFeatureValue(CommonUsages.devicePosition, out CurrentControllerPosition);
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_9 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_devicePosition_19();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_CurrentControllerPosition_16();
			bool L_11;
			L_11 = InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), L_9, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_10, /*hidden argument*/NULL);
			BaseController_set_IsPositionAvailable_m796D2F38A55FB8C0182B698B5DBC9C9AD5619B82_inline(__this, L_11, /*hidden argument*/NULL);
			// IsPositionApproximate = false;
			BaseController_set_IsPositionApproximate_m1BC5891CAFC746F6087C49CBD0884C8EFE59DF8C_inline(__this, (bool)0, /*hidden argument*/NULL);
			// IsRotationAvailable = inputDevice.TryGetFeatureValue(CommonUsages.deviceRotation, out CurrentControllerRotation);
			InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_12 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_deviceRotation_44();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_13 = __this->get_address_of_CurrentControllerRotation_17();
			bool L_14;
			L_14 = InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), L_12, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_13, /*hidden argument*/NULL);
			BaseController_set_IsRotationAvailable_m3E503E5FBD3241A589790FD9E2FB8001C00F8FC6_inline(__this, L_14, /*hidden argument*/NULL);
			// TrackingState = (IsPositionAvailable || IsRotationAvailable) ? TrackingState.Tracked : TrackingState.NotTracked;
			bool L_15;
			L_15 = BaseController_get_IsPositionAvailable_mC1D412162AC07602B523096F3BBCEE369661EA28_inline(__this, /*hidden argument*/NULL);
			G_B6_0 = __this;
			G_B6_1 = L_7;
			if (L_15)
			{
				G_B8_0 = __this;
				G_B8_1 = L_7;
				goto IL_00a1;
			}
		}

IL_0096:
		{
			bool L_16;
			L_16 = BaseController_get_IsRotationAvailable_m8763D3ADEA8ACFDD6826F5696CC8DB51790D8F25_inline(__this, /*hidden argument*/NULL);
			G_B7_0 = G_B6_0;
			G_B7_1 = G_B6_1;
			if (L_16)
			{
				G_B8_0 = G_B6_0;
				G_B8_1 = G_B6_1;
				goto IL_00a1;
			}
		}

IL_009e:
		{
			G_B9_0 = 1;
			G_B9_1 = G_B7_0;
			G_B9_2 = G_B7_1;
			goto IL_00a2;
		}

IL_00a1:
		{
			G_B9_0 = 2;
			G_B9_1 = G_B8_0;
			G_B9_2 = G_B8_1;
		}

IL_00a2:
		{
			NullCheck(G_B9_1);
			BaseController_set_TrackingState_m514C872F76E3F87CE14250E5E0DD127B87152EE2_inline(G_B9_1, G_B9_0, /*hidden argument*/NULL);
			// CurrentControllerPosition = MixedRealityPlayspace.TransformPoint(CurrentControllerPosition);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_CurrentControllerPosition_16();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = MixedRealityPlayspace_TransformPoint_m19E4EA2C7A16830A9C76F73E557E44D6817211F3(L_17, /*hidden argument*/NULL);
			__this->set_CurrentControllerPosition_16(L_18);
			// CurrentControllerRotation = MixedRealityPlayspace.Rotation * CurrentControllerRotation;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
			L_19 = MixedRealityPlayspace_get_Rotation_m4C3F294754D54E4604AFEEB0E8399BFF5933DF05(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20 = __this->get_CurrentControllerRotation_17();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
			L_21 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_19, L_20, /*hidden argument*/NULL);
			__this->set_CurrentControllerRotation_17(L_21);
			// CurrentControllerPose.Position = CurrentControllerPosition;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * L_22 = __this->get_address_of_CurrentControllerPose_14();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = __this->get_CurrentControllerPosition_16();
			MixedRealityPose_set_Position_m773EB94276F208A7BA4555B67A819F3E47BB72B6_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)L_22, L_23, /*hidden argument*/NULL);
			// CurrentControllerPose.Rotation = CurrentControllerRotation;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * L_24 = __this->get_address_of_CurrentControllerPose_14();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25 = __this->get_CurrentControllerRotation_17();
			MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 *)L_24, L_25, /*hidden argument*/NULL);
			// if (lastState != TrackingState)
			int32_t L_26;
			L_26 = BaseController_get_TrackingState_mCE7F3AC3854AEF591203E0F504F088C4C63279C6_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)G_B9_2) == ((int32_t)L_26)))
			{
				goto IL_0115;
			}
		}

IL_00f8:
		{
			// CoreServices.InputSystem?.RaiseSourceTrackingStateChanged(InputSource, this, TrackingState);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_27;
			L_27 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_28 = L_27;
			G_B11_0 = L_28;
			if (L_28)
			{
				G_B12_0 = L_28;
				goto IL_0103;
			}
		}

IL_0100:
		{
			goto IL_0115;
		}

IL_0103:
		{
			RuntimeObject* L_29;
			L_29 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			int32_t L_30;
			L_30 = BaseController_get_TrackingState_mCE7F3AC3854AEF591203E0F504F088C4C63279C6_inline(__this, /*hidden argument*/NULL);
			NullCheck(G_B12_0);
			InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(25 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceTrackingStateChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.TrackingState) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B12_0, L_29, __this, L_30);
		}

IL_0115:
		{
			// if (TrackingState == TrackingState.Tracked && LastControllerPose != CurrentControllerPose)
			int32_t L_31;
			L_31 = BaseController_get_TrackingState_mCE7F3AC3854AEF591203E0F504F088C4C63279C6_inline(__this, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_31) == ((uint32_t)2))))
			{
				goto IL_01c2;
			}
		}

IL_0121:
		{
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_32 = __this->get_LastControllerPose_15();
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_33 = __this->get_CurrentControllerPose_14();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
			bool L_34;
			L_34 = MixedRealityPose_op_Inequality_m9C54365A4C4CA13CB1372107EDB084A9911AC0B6(L_32, L_33, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_01c2;
			}
		}

IL_0137:
		{
			// if (IsPositionAvailable && IsRotationAvailable)
			bool L_35;
			L_35 = BaseController_get_IsPositionAvailable_mC1D412162AC07602B523096F3BBCEE369661EA28_inline(__this, /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_0166;
			}
		}

IL_013f:
		{
			bool L_36;
			L_36 = BaseController_get_IsRotationAvailable_m8763D3ADEA8ACFDD6826F5696CC8DB51790D8F25_inline(__this, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_0166;
			}
		}

IL_0147:
		{
			// CoreServices.InputSystem?.RaiseSourcePoseChanged(InputSource, this, CurrentControllerPose);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_37;
			L_37 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_38 = L_37;
			G_B18_0 = L_38;
			if (L_38)
			{
				G_B19_0 = L_38;
				goto IL_0152;
			}
		}

IL_014f:
		{
			goto IL_01c2;
		}

IL_0152:
		{
			RuntimeObject* L_39;
			L_39 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_40 = __this->get_CurrentControllerPose_14();
			NullCheck(G_B19_0);
			InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  >::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B19_0, L_39, __this, L_40);
			// }
			goto IL_01c2;
		}

IL_0166:
		{
			// else if (IsPositionAvailable && !IsRotationAvailable)
			bool L_41;
			L_41 = BaseController_get_IsPositionAvailable_mC1D412162AC07602B523096F3BBCEE369661EA28_inline(__this, /*hidden argument*/NULL);
			if (!L_41)
			{
				goto IL_0195;
			}
		}

IL_016e:
		{
			bool L_42;
			L_42 = BaseController_get_IsRotationAvailable_m8763D3ADEA8ACFDD6826F5696CC8DB51790D8F25_inline(__this, /*hidden argument*/NULL);
			if (L_42)
			{
				goto IL_0195;
			}
		}

IL_0176:
		{
			// CoreServices.InputSystem?.RaiseSourcePositionChanged(InputSource, this, CurrentControllerPosition);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_43;
			L_43 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_44 = L_43;
			G_B23_0 = L_44;
			if (L_44)
			{
				G_B24_0 = L_44;
				goto IL_0181;
			}
		}

IL_017e:
		{
			goto IL_01c2;
		}

IL_0181:
		{
			RuntimeObject* L_45;
			L_45 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = __this->get_CurrentControllerPosition_16();
			NullCheck(G_B24_0);
			InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B24_0, L_45, __this, L_46);
			// }
			goto IL_01c2;
		}

IL_0195:
		{
			// else if (!IsPositionAvailable && IsRotationAvailable)
			bool L_47;
			L_47 = BaseController_get_IsPositionAvailable_mC1D412162AC07602B523096F3BBCEE369661EA28_inline(__this, /*hidden argument*/NULL);
			if (L_47)
			{
				goto IL_01c2;
			}
		}

IL_019d:
		{
			bool L_48;
			L_48 = BaseController_get_IsRotationAvailable_m8763D3ADEA8ACFDD6826F5696CC8DB51790D8F25_inline(__this, /*hidden argument*/NULL);
			if (!L_48)
			{
				goto IL_01c2;
			}
		}

IL_01a5:
		{
			// CoreServices.InputSystem?.RaiseSourceRotationChanged(InputSource, this, CurrentControllerRotation);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_49;
			L_49 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_50 = L_49;
			G_B28_0 = L_50;
			if (L_50)
			{
				G_B29_0 = L_50;
				goto IL_01b0;
			}
		}

IL_01ad:
		{
			goto IL_01c2;
		}

IL_01b0:
		{
			RuntimeObject* L_51;
			L_51 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_52 = __this->get_CurrentControllerRotation_17();
			NullCheck(G_B29_0);
			InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(28 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceRotationChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Quaternion) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B29_0, L_51, __this, L_52);
		}

IL_01c2:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			V_2 = 0;
			goto IL_0242;
		}

IL_01c6:
		{
			// switch (Interactions[i].AxisType)
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_53;
			L_53 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			int32_t L_54 = V_2;
			NullCheck(L_53);
			int32_t L_55 = L_54;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			NullCheck(L_56);
			int32_t L_57;
			L_57 = MixedRealityInteractionMapping_get_AxisType_mDA08F6F89AC029C3E7A9E9735E461A7C4569F308_inline(L_56, /*hidden argument*/NULL);
			V_3 = L_57;
			int32_t L_58 = V_3;
			switch (L_58)
			{
				case 0:
				{
					goto IL_023e;
				}
				case 1:
				{
					goto IL_023e;
				}
				case 2:
				{
					goto IL_01fc;
				}
				case 3:
				{
					goto IL_020d;
				}
				case 4:
				{
					goto IL_021e;
				}
				case 5:
				{
					goto IL_023e;
				}
				case 6:
				{
					goto IL_023e;
				}
				case 7:
				{
					goto IL_022f;
				}
			}
		}

IL_01fa:
		{
			goto IL_023e;
		}

IL_01fc:
		{
			// UpdateButtonData(Interactions[i], inputDevice);
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_59;
			L_59 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			int32_t L_60 = V_2;
			NullCheck(L_59);
			int32_t L_61 = L_60;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_63 = ___inputDevice0;
			VirtActionInvoker2< MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  >::Invoke(25 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_62, L_63);
			// break;
			goto IL_023e;
		}

IL_020d:
		{
			// UpdateSingleAxisData(Interactions[i], inputDevice);
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_64;
			L_64 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			int32_t L_65 = V_2;
			NullCheck(L_64);
			int32_t L_66 = L_65;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_68 = ___inputDevice0;
			VirtActionInvoker2< MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  >::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_67, L_68);
			// break;
			goto IL_023e;
		}

IL_021e:
		{
			// UpdateDualAxisData(Interactions[i], inputDevice);
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_69;
			L_69 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			int32_t L_70 = V_2;
			NullCheck(L_69);
			int32_t L_71 = L_70;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_73 = ___inputDevice0;
			VirtActionInvoker2< MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_72, L_73);
			// break;
			goto IL_023e;
		}

IL_022f:
		{
			// UpdatePoseData(Interactions[i], inputDevice);
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_74;
			L_74 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			int32_t L_75 = V_2;
			NullCheck(L_74);
			int32_t L_76 = L_75;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_78 = ___inputDevice0;
			VirtActionInvoker2< MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  >::Invoke(28 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_77, L_78);
		}

IL_023e:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_79 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
		}

IL_0242:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_80 = V_2;
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_81;
			L_81 = BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_82 = L_81;
			G_B39_0 = L_82;
			G_B39_1 = L_80;
			if (L_82)
			{
				G_B40_0 = L_82;
				G_B40_1 = L_80;
				goto IL_0259;
			}
		}

IL_024c:
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_83 = V_5;
			G_B41_0 = L_83;
			G_B41_1 = G_B39_1;
			goto IL_0260;
		}

IL_0259:
		{
			NullCheck(G_B40_0);
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_84;
			memset((&L_84), 0, sizeof(L_84));
			Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_84), ((int32_t)((int32_t)(((RuntimeArray*)G_B40_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
			G_B41_0 = L_84;
			G_B41_1 = G_B40_1;
		}

IL_0260:
		{
			V_4 = G_B41_0;
			int32_t L_85;
			L_85 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
			bool L_86;
			L_86 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((int32_t)G_B41_1) < ((int32_t)L_85))? 1 : 0)&(int32_t)L_86)))
			{
				goto IL_01c6;
			}
		}

IL_0278:
		{
			// }
			IL2CPP_LEAVE(0x288, FINALLY_027a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_027a;
	}

FINALLY_027a:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(634)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(634)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x288, IL_0288)
	}

IL_0288:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_m718BAC7ADD76632A1AE25DAC2CF4B4A60B4DB994 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B32_0 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	RuntimeObject* G_B35_0 = NULL;
	RuntimeObject* G_B34_0 = NULL;
	{
		// using (UpdateButtonDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var))->get_UpdateButtonDataPerfMarker_19();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (interactionMapping.InputType == DeviceInputType.TriggerTouch
			//     && inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerData))
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_2, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_0041;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_4 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_trigger_15();
			bool L_5;
			L_5 = InputDevice_TryGetFeatureValue_m531D0670B4FBDA6CD5B8E899627B70F3DB840E69((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_4, (float*)(&V_2), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0041;
			}
		}

IL_0028:
		{
			// interactionMapping.BoolData = !Mathf.Approximately(triggerData, 0.0f);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_6 = ___interactionMapping0;
			float L_7 = V_2;
			bool L_8;
			L_8 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_7, (0.0f), /*hidden argument*/NULL);
			NullCheck(L_6);
			MixedRealityInteractionMapping_set_BoolData_m03B2CF34CC007394B4B0B3FD0240F117234ADA6C(L_6, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
			// }
			goto IL_0141;
		}

IL_0041:
		{
			// else if (interactionMapping.InputType == DeviceInputType.GripTouch
			//     && inputDevice.TryGetFeatureValue(CommonUsages.grip, out float gripData))
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_9 = ___interactionMapping0;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_9, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)58)))))
			{
				goto IL_0074;
			}
		}

IL_004b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_11 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_grip_16();
			bool L_12;
			L_12 = InputDevice_TryGetFeatureValue_m531D0670B4FBDA6CD5B8E899627B70F3DB840E69((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_11, (float*)(&V_3), /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0074;
			}
		}

IL_005b:
		{
			// interactionMapping.BoolData = !Mathf.Approximately(gripData, 0.0f);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_13 = ___interactionMapping0;
			float L_14 = V_3;
			bool L_15;
			L_15 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_14, (0.0f), /*hidden argument*/NULL);
			NullCheck(L_13);
			MixedRealityInteractionMapping_set_BoolData_m03B2CF34CC007394B4B0B3FD0240F117234ADA6C(L_13, (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
			// }
			goto IL_0141;
		}

IL_0074:
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_16 = ___interactionMapping0;
			NullCheck(L_16);
			int32_t L_17;
			L_17 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_16, /*hidden argument*/NULL);
			V_6 = L_17;
			int32_t L_18 = V_6;
			if ((((int32_t)L_18) > ((int32_t)((int32_t)27))))
			{
				goto IL_00c3;
			}
		}

IL_0082:
		{
			int32_t L_19 = V_6;
			if ((((int32_t)L_19) == ((int32_t)7)))
			{
				goto IL_00eb;
			}
		}

IL_0087:
		{
			int32_t L_20 = V_6;
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)12)))) > ((uint32_t)1))))
			{
				goto IL_00d9;
			}
		}

IL_008f:
		{
			int32_t L_21 = V_6;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)18))))
			{
				case 0:
				{
					goto IL_0121;
				}
				case 1:
				{
					goto IL_0118;
				}
				case 2:
				{
					goto IL_012a;
				}
				case 3:
				{
					goto IL_012a;
				}
				case 4:
				{
					goto IL_00fd;
				}
				case 5:
				{
					goto IL_012a;
				}
				case 6:
				{
					goto IL_0106;
				}
				case 7:
				{
					goto IL_00d9;
				}
				case 8:
				{
					goto IL_012a;
				}
				case 9:
				{
					goto IL_010f;
				}
			}
		}

IL_00c1:
		{
			goto IL_012a;
		}

IL_00c3:
		{
			int32_t L_22 = V_6;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)51))))
			{
				goto IL_00eb;
			}
		}

IL_00c9:
		{
			int32_t L_23 = V_6;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)54))))
			{
				goto IL_00f4;
			}
		}

IL_00cf:
		{
			int32_t L_24 = V_6;
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)59)))) > ((uint32_t)1))))
			{
				goto IL_00e2;
			}
		}

IL_00d7:
		{
			goto IL_012a;
		}

IL_00d9:
		{
			// buttonUsage = CommonUsages.triggerButton;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_25 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_triggerButton_6();
			V_4 = L_25;
			// break;
			goto IL_012c;
		}

IL_00e2:
		{
			// buttonUsage = CommonUsages.gripButton;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_26 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_gripButton_5();
			V_4 = L_26;
			// break;
			goto IL_012c;
		}

IL_00eb:
		{
			// buttonUsage = CommonUsages.primaryButton;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_27 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primaryButton_1();
			V_4 = L_27;
			// break;
			goto IL_012c;
		}

IL_00f4:
		{
			// buttonUsage = CommonUsages.secondaryButton;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_28 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondaryButton_3();
			V_4 = L_28;
			// break;
			goto IL_012c;
		}

IL_00fd:
		{
			// buttonUsage = CommonUsages.secondary2DAxisTouch;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_29 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondary2DAxisTouch_11();
			V_4 = L_29;
			// break;
			goto IL_012c;
		}

IL_0106:
		{
			// buttonUsage = CommonUsages.secondary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_30 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondary2DAxisClick_10();
			V_4 = L_30;
			// break;
			goto IL_012c;
		}

IL_010f:
		{
			// buttonUsage = CommonUsages.menuButton;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_31 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_menuButton_7();
			V_4 = L_31;
			// break;
			goto IL_012c;
		}

IL_0118:
		{
			// buttonUsage = CommonUsages.primary2DAxisTouch;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_32 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxisTouch_9();
			V_4 = L_32;
			// break;
			goto IL_012c;
		}

IL_0121:
		{
			// buttonUsage = CommonUsages.primary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_33 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxisClick_8();
			V_4 = L_33;
			// break;
			goto IL_012c;
		}

IL_012a:
		{
			// return;
			IL2CPP_LEAVE(0x1A7, FINALLY_0199);
		}

IL_012c:
		{
			// if (inputDevice.TryGetFeatureValue(buttonUsage, out bool buttonPressed))
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_34 = V_4;
			bool L_35;
			L_35 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_34, (bool*)(&V_5), /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_0141;
			}
		}

IL_0139:
		{
			// interactionMapping.BoolData = buttonPressed;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_36 = ___interactionMapping0;
			bool L_37 = V_5;
			NullCheck(L_36);
			MixedRealityInteractionMapping_set_BoolData_m03B2CF34CC007394B4B0B3FD0240F117234ADA6C(L_36, L_37, /*hidden argument*/NULL);
		}

IL_0141:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_38 = ___interactionMapping0;
			NullCheck(L_38);
			bool L_39;
			L_39 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_38, /*hidden argument*/NULL);
			if (!L_39)
			{
				goto IL_0197;
			}
		}

IL_0149:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_40 = ___interactionMapping0;
			NullCheck(L_40);
			bool L_41;
			L_41 = MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline(L_40, /*hidden argument*/NULL);
			if (!L_41)
			{
				goto IL_0175;
			}
		}

IL_0151:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_42;
			L_42 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_43 = L_42;
			G_B31_0 = L_43;
			if (L_43)
			{
				G_B32_0 = L_43;
				goto IL_015c;
			}
		}

IL_0159:
		{
			IL2CPP_LEAVE(0x1A7, FINALLY_0199);
		}

IL_015c:
		{
			RuntimeObject* L_44;
			L_44 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_45;
			L_45 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_46 = ___interactionMapping0;
			NullCheck(L_46);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_47;
			L_47 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_46, /*hidden argument*/NULL);
			NullCheck(G_B32_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B32_0, L_44, L_45, L_47);
			// }
			IL2CPP_LEAVE(0x1A7, FINALLY_0199);
		}

IL_0175:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_48;
			L_48 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_49 = L_48;
			G_B34_0 = L_49;
			if (L_49)
			{
				G_B35_0 = L_49;
				goto IL_0180;
			}
		}

IL_017d:
		{
			IL2CPP_LEAVE(0x1A7, FINALLY_0199);
		}

IL_0180:
		{
			RuntimeObject* L_50;
			L_50 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_51;
			L_51 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_52 = ___interactionMapping0;
			NullCheck(L_52);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_53;
			L_53 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_52, /*hidden argument*/NULL);
			NullCheck(G_B35_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B35_0, L_50, L_51, L_53);
		}

IL_0197:
		{
			// }
			IL2CPP_LEAVE(0x1A7, FINALLY_0199);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0199;
	}

FINALLY_0199:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(409)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(409)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A7, IL_01a7)
	}

IL_01a7:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSingleAxisData_m6760DE3E99BB65723586EFBA1D591E10A5E91597 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	{
		// using (UpdateSingleAxisDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var))->get_UpdateSingleAxisDataPerfMarker_20();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_2, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)60))))
			{
				goto IL_003d;
			}
		}

IL_0022:
		{
			goto IL_0054;
		}

IL_0024:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool triggerPressed))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_6 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_triggerButton_6();
			bool L_7;
			L_7 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_6, (bool*)(&V_2), /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0054;
			}
		}

IL_0034:
		{
			// interactionMapping.BoolData = triggerPressed;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_8 = ___interactionMapping0;
			bool L_9 = V_2;
			NullCheck(L_8);
			MixedRealityInteractionMapping_set_BoolData_m03B2CF34CC007394B4B0B3FD0240F117234ADA6C(L_8, L_9, /*hidden argument*/NULL);
			// break;
			goto IL_0054;
		}

IL_003d:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.gripButton, out bool gripPressed))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_10 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_gripButton_5();
			bool L_11;
			L_11 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_10, (bool*)(&V_3), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0054;
			}
		}

IL_004d:
		{
			// interactionMapping.BoolData = gripPressed;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_12 = ___interactionMapping0;
			bool L_13 = V_3;
			NullCheck(L_12);
			MixedRealityInteractionMapping_set_BoolData_m03B2CF34CC007394B4B0B3FD0240F117234ADA6C(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0054:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_14 = ___interactionMapping0;
			NullCheck(L_14);
			bool L_15;
			L_15 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00aa;
			}
		}

IL_005c:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_16 = ___interactionMapping0;
			NullCheck(L_16);
			bool L_17;
			L_17 = MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline(L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0064:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_18;
			L_18 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_19 = L_18;
			G_B11_0 = L_19;
			if (L_19)
			{
				G_B12_0 = L_19;
				goto IL_006f;
			}
		}

IL_006c:
		{
			goto IL_00aa;
		}

IL_006f:
		{
			RuntimeObject* L_20;
			L_20 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_21;
			L_21 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_22 = ___interactionMapping0;
			NullCheck(L_22);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_23;
			L_23 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_22, /*hidden argument*/NULL);
			NullCheck(G_B12_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B12_0, L_20, L_21, L_23);
			// }
			goto IL_00aa;
		}

IL_0088:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_24;
			L_24 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_25 = L_24;
			G_B14_0 = L_25;
			if (L_25)
			{
				G_B15_0 = L_25;
				goto IL_0093;
			}
		}

IL_0090:
		{
			goto IL_00aa;
		}

IL_0093:
		{
			RuntimeObject* L_26;
			L_26 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_27;
			L_27 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_28 = ___interactionMapping0;
			NullCheck(L_28);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_29;
			L_29 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_28, /*hidden argument*/NULL);
			NullCheck(G_B15_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B15_0, L_26, L_27, L_29);
		}

IL_00aa:
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_30 = ___interactionMapping0;
			NullCheck(L_30);
			int32_t L_31;
			L_31 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_30, /*hidden argument*/NULL);
			V_4 = L_31;
			int32_t L_32 = V_4;
			if ((((int32_t)L_32) == ((int32_t)((int32_t)10))))
			{
				goto IL_00c0;
			}
		}

IL_00b8:
		{
			int32_t L_33 = V_4;
			if ((((int32_t)L_33) == ((int32_t)((int32_t)57))))
			{
				goto IL_00da;
			}
		}

IL_00be:
		{
			IL2CPP_LEAVE(0x132, FINALLY_0124);
		}

IL_00c0:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerData))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_34 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_trigger_15();
			bool L_35;
			L_35 = InputDevice_TryGetFeatureValue_m531D0670B4FBDA6CD5B8E899627B70F3DB840E69((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_34, (float*)(&V_5), /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_00f2;
			}
		}

IL_00d0:
		{
			// interactionMapping.FloatData = triggerData;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_36 = ___interactionMapping0;
			float L_37 = V_5;
			NullCheck(L_36);
			MixedRealityInteractionMapping_set_FloatData_m4DBD19CF71FA040D98F54152C2507FC4E9B67C35(L_36, L_37, /*hidden argument*/NULL);
			// break;
			goto IL_00f2;
		}

IL_00da:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.grip, out float gripData))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_38 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_grip_16();
			bool L_39;
			L_39 = InputDevice_TryGetFeatureValue_m531D0670B4FBDA6CD5B8E899627B70F3DB840E69((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_38, (float*)(&V_6), /*hidden argument*/NULL);
			if (!L_39)
			{
				goto IL_00f2;
			}
		}

IL_00ea:
		{
			// interactionMapping.FloatData = gripData;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_40 = ___interactionMapping0;
			float L_41 = V_6;
			NullCheck(L_40);
			MixedRealityInteractionMapping_set_FloatData_m4DBD19CF71FA040D98F54152C2507FC4E9B67C35(L_40, L_41, /*hidden argument*/NULL);
		}

IL_00f2:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_42 = ___interactionMapping0;
			NullCheck(L_42);
			bool L_43;
			L_43 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_42, /*hidden argument*/NULL);
			if (!L_43)
			{
				goto IL_0122;
			}
		}

IL_00fa:
		{
			// CoreServices.InputSystem?.RaiseFloatInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.FloatData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_44;
			L_44 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_45 = L_44;
			G_B25_0 = L_45;
			if (L_45)
			{
				G_B26_0 = L_45;
				goto IL_0105;
			}
		}

IL_0102:
		{
			IL2CPP_LEAVE(0x132, FINALLY_0124);
		}

IL_0105:
		{
			RuntimeObject* L_46;
			L_46 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_47;
			L_47 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_48 = ___interactionMapping0;
			NullCheck(L_48);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_49;
			L_49 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_48, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_50 = ___interactionMapping0;
			NullCheck(L_50);
			float L_51;
			L_51 = MixedRealityInteractionMapping_get_FloatData_m902DEBEC774E88B3157757DA8EDC4D19AFBD89B6_inline(L_50, /*hidden argument*/NULL);
			NullCheck(G_B26_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 , float >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseFloatInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,System.Single) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B26_0, L_46, L_47, L_49, L_51);
		}

IL_0122:
		{
			// }
			IL2CPP_LEAVE(0x132, FINALLY_0124);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0124;
	}

FINALLY_0124:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(292)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(292)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x132, IL_0132)
	}

IL_0132:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateDualAxisData_m1111D3819BAC4A38A19DEE9B7152CE5F380D1877 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	{
		// using (UpdateDualAxisDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var))->get_UpdateDualAxisDataPerfMarker_21();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_2, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)21))))
			{
				goto IL_002c;
			}
		}

IL_0022:
		{
			IL2CPP_LEAVE(0x85, FINALLY_0077);
		}

IL_0024:
		{
			// axisUsage = CommonUsages.primary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_6 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
			V_2 = L_6;
			// break;
			goto IL_0032;
		}

IL_002c:
		{
			// axisUsage = CommonUsages.secondary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_7 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondary2DAxis_18();
			V_2 = L_7;
		}

IL_0032:
		{
			// if (inputDevice.TryGetFeatureValue(axisUsage, out Vector2 axisData))
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_8 = V_2;
			bool L_9;
			L_9 = InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_8, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0045;
			}
		}

IL_003e:
		{
			// interactionMapping.Vector2Data = axisData;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_10 = ___interactionMapping0;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_3;
			NullCheck(L_10);
			MixedRealityInteractionMapping_set_Vector2Data_m8CA7FB7512D98FF6DAE149E436533E060A4FA5C2(L_10, L_11, /*hidden argument*/NULL);
		}

IL_0045:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_12 = ___interactionMapping0;
			NullCheck(L_12);
			bool L_13;
			L_13 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0075;
			}
		}

IL_004d:
		{
			// CoreServices.InputSystem?.RaisePositionInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.Vector2Data);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_14;
			L_14 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_15 = L_14;
			G_B10_0 = L_15;
			if (L_15)
			{
				G_B11_0 = L_15;
				goto IL_0058;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x85, FINALLY_0077);
		}

IL_0058:
		{
			RuntimeObject* L_16;
			L_16 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_17;
			L_17 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_18 = ___interactionMapping0;
			NullCheck(L_18);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_19;
			L_19 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_18, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_20 = ___interactionMapping0;
			NullCheck(L_20);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
			L_21 = MixedRealityInteractionMapping_get_Vector2Data_mF9CAEAE7685F531EF44CC7011606F7C21EA0B6D6_inline(L_20, /*hidden argument*/NULL);
			NullCheck(G_B11_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePositionInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B11_0, L_16, L_17, L_19, L_21);
		}

IL_0075:
		{
			// }
			IL2CPP_LEAVE(0x85, FINALLY_0077);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0077;
	}

FINALLY_0077:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(119)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(119)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x85, IL_0085)
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdatePoseData_m93FCF8BE2D1D842B80FFAE13D50A5F437E2F3F40 (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * __this, MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var))->get_UpdatePoseDataPerfMarker_22();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			int32_t L_4 = V_2;
			if ((((int32_t)L_4) == ((int32_t)3)))
			{
				goto IL_0020;
			}
		}

IL_0019:
		{
			int32_t L_5 = V_2;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)14))))
			{
				goto IL_0020;
			}
		}

IL_001e:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}

IL_0020:
		{
			// interactionMapping.PoseData = CurrentControllerPose;
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_6 = ___interactionMapping0;
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_7 = __this->get_CurrentControllerPose_14();
			NullCheck(L_6);
			MixedRealityInteractionMapping_set_PoseData_m8E3311E7A47A01E6C295AECCF128E00E8BFBE5FB(L_6, L_7, /*hidden argument*/NULL);
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_8 = ___interactionMapping0;
			NullCheck(L_8);
			bool L_9;
			L_9 = MixedRealityInteractionMapping_get_Changed_m22D457FF63C2D11B9EE602F6C777206085B9B2C8(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_005c;
			}
		}

IL_0034:
		{
			// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_10;
			L_10 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_11 = L_10;
			G_B6_0 = L_11;
			if (L_11)
			{
				G_B7_0 = L_11;
				goto IL_003f;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}

IL_003f:
		{
			RuntimeObject* L_12;
			L_12 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(__this, /*hidden argument*/NULL);
			uint8_t L_13;
			L_13 = BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_14 = ___interactionMapping0;
			NullCheck(L_14);
			MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_15;
			L_15 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline(L_14, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * L_16 = ___interactionMapping0;
			NullCheck(L_16);
			MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_17;
			L_17 = MixedRealityInteractionMapping_get_PoseData_m1FE5A5F111B5E311D5532B2754B6232EED0344E2_inline(L_16, /*hidden argument*/NULL);
			NullCheck(G_B7_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 , MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B7_0, L_12, L_13, L_15, L_17);
		}

IL_005c:
		{
			// }
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__cctor_m78DA33E1EA9F2BE0C3BDABB2BBC2AB3BEFB26D60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral100EAC20AECA8B5CD321250A1FF6AA934A803107);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3510DB4821655396E1F2E952BD12C2B3B405E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CFD4278E7555C6A660A18C41A2048C3B4A704E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5809513B2145A306FE3DBF1BAED5C85FC20543EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD92CAA6D4FB249FBAAD0197B1EE8796D6F7A25D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral100EAC20AECA8B5CD321250A1FF6AA934A803107, /*hidden argument*/NULL);
		((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_18(L_0);
		// private static readonly ProfilerMarker UpdateButtonDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateButtonData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteralD92CAA6D4FB249FBAAD0197B1EE8796D6F7A25D4, /*hidden argument*/NULL);
		((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var))->set_UpdateButtonDataPerfMarker_19(L_1);
		// private static readonly ProfilerMarker UpdateSingleAxisDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateSingleAxisData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral2CFD4278E7555C6A660A18C41A2048C3B4A704E1, /*hidden argument*/NULL);
		((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var))->set_UpdateSingleAxisDataPerfMarker_20(L_2);
		// private static readonly ProfilerMarker UpdateDualAxisDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateDualAxisData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral5809513B2145A306FE3DBF1BAED5C85FC20543EA, /*hidden argument*/NULL);
		((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var))->set_UpdateDualAxisDataPerfMarker_21(L_3);
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdatePoseData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_4), _stringLiteral1E3510DB4821655396E1F2E952BD12C2B3B405E7, /*hidden argument*/NULL);
		((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var))->set_UpdatePoseDataPerfMarker_22(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_m7E45C6FFDD70F257A6E0CEAE211FFFAF43707838 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEECBB954FF7CA19FA62EAF805AA3CFCA5F19FE74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m67EB6488008B186B308F228C005912C2C913F902_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Queue<MeshId> meshWorkQueue = new Queue<MeshId>();
		Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * L_0 = (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B *)il2cpp_codegen_object_new(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B_il2cpp_TypeInfo_var);
		Queue_1__ctor_m67EB6488008B186B308F228C005912C2C913F902(L_0, /*hidden argument*/Queue_1__ctor_m67EB6488008B186B308F228C005912C2C913F902_RuntimeMethod_var);
		__this->set_meshWorkQueue_41(L_0);
		// private readonly List<MeshInfo> meshInfos = new List<MeshInfo>();
		List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * L_1 = (List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D *)il2cpp_codegen_object_new(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D_il2cpp_TypeInfo_var);
		List_1__ctor_mEECBB954FF7CA19FA62EAF805AA3CFCA5F19FE74(L_1, /*hidden argument*/List_1__ctor_mEECBB954FF7CA19FA62EAF805AA3CFCA5F19FE74_RuntimeMethod_var);
		__this->set_meshInfos_42(L_1);
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_2 = ___spatialAwarenessSystem0;
		String_t* L_3 = ___name1;
		uint32_t L_4 = ___priority2;
		BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * L_5 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_il2cpp_TypeInfo_var);
		BaseSpatialMeshObserver__ctor_m35C3032A31C0B900B8F75E75DDF55EFF98251CA0(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::CreateObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_CreateObserver_m8C2CE63D17BEEAD28B6D3844D89658634DBB159B (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SpatialAwarenessSystem == null) { return; }
		RuntimeObject* L_0;
		L_0 = BaseSpatialObserver_get_SpatialAwarenessSystem_m460D3ECB01EA4EF7B7CC108260058EC4CE2A6E78_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (SpatialAwarenessSystem == null) { return; }
		return;
	}

IL_0009:
	{
		// if (XRSubsystemHelpers.MeshSubsystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_1;
		L_1 = XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// ConfigureObserverVolume();
		VirtActionInvoker0::Invoke(82 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume() */, __this);
		// if (StartupBehavior == AutoStartBehavior.AutoStart)
		int32_t L_2;
		L_2 = BaseSpatialObserver_get_StartupBehavior_mADD3220D7F1FFEA59DCE2CC0085503B6CE274FF1_inline(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Resume();
		VirtActionInvoker0::Invoke(54 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Resume() */, __this);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::CleanupObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_CleanupObserver_m944E913D2E52E89695FCF728400003C5D7684E45 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, const RuntimeMethod* method)
{
	{
		// if (IsRunning)
		bool L_0;
		L_0 = BaseSpatialObserver_get_IsRunning_m675DD55744D8486BA43EEBC901FA272450317FA3_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Suspend();
		VirtActionInvoker0::Invoke(55 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Suspend() */, __this);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::LookupTriangleDensity(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericXRSDKSpatialMeshObserver_LookupTriangleDensity_mC7EB3527F7D42A1BB8418DC530F659E94D35A734 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, int32_t ___levelOfDetail0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int level = (int)levelOfDetail;
		int32_t L_0 = ___levelOfDetail0;
		V_0 = L_0;
		// if (XRSubsystemHelpers.MeshSubsystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_1;
		L_1 = XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// XRSubsystemHelpers.MeshSubsystem.meshDensity = level / (float)SpatialAwarenessMeshLevelOfDetail.Fine; 
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_2;
		L_2 = XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1(/*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		XRMeshSubsystem_set_meshDensity_mECB96CA69A1673DC1E1F373020D576FD9B4ADDC2(L_2, ((float)((float)((float)((float)L_3))/(float)(2.0f))), /*hidden argument*/NULL);
	}

IL_001b:
	{
		// return level;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKSpatialMeshObserver_CheckCapability_mB24F462BAAED27281C93DC4271C1AAF040347DE3 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m08AF29488AC8CCC57798CEB5B091AECF8B4F89F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD8F79992D678539BE77FB1F1877890ECE84F6F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t428853FE3628F349D46DFD6841B50058F09F5FCC_m6B23F67B8589F77554911084E4BA1F30D3AEA63F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (capability != MixedRealityCapability.SpatialAwarenessMesh)
		int32_t L_0 = ___capability0;
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0006;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0006:
	{
		// var descriptors = new List<XRMeshSubsystemDescriptor>();
		List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94 * L_1 = (List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94 *)il2cpp_codegen_object_new(List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94_il2cpp_TypeInfo_var);
		List_1__ctor_m08AF29488AC8CCC57798CEB5B091AECF8B4F89F9(L_1, /*hidden argument*/List_1__ctor_m08AF29488AC8CCC57798CEB5B091AECF8B4F89F9_RuntimeMethod_var);
		// SubsystemManager.GetSubsystemDescriptors(descriptors);
		List_1_tA4CB3CC063D44B52D336C5DDA258EF7CE9B98A94 * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t428853FE3628F349D46DFD6841B50058F09F5FCC_m6B23F67B8589F77554911084E4BA1F30D3AEA63F(L_2, /*hidden argument*/SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t428853FE3628F349D46DFD6841B50058F09F5FCC_m6B23F67B8589F77554911084E4BA1F30D3AEA63F_RuntimeMethod_var);
		// return descriptors.Count > 0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mD8F79992D678539BE77FB1F1877890ECE84F6F54_inline(L_2, /*hidden argument*/List_1_get_Count_mD8F79992D678539BE77FB1F1877890ECE84F6F54_RuntimeMethod_var);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Update_m18B67A1EBE822E82C3C03D4E5B8F71ACDACB7CAE (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_40();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// UpdateObserver();
		GenericXRSDKSpatialMeshObserver_UpdateObserver_mF849E3EC4A3481EC49806537C884D4619EF5878D(__this, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x24, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Resume_m860BB3A63DC9798162276993CB9434B6CFF62F3B (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB27FB187D8E7A9DA09A09AEC832C76EB7B2F40F8);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (IsRunning)
		bool L_0;
		L_0 = BaseSpatialObserver_get_IsRunning_m675DD55744D8486BA43EEBC901FA272450317FA3_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("The XR SDK spatial observer is currently running.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralB27FB187D8E7A9DA09A09AEC832C76EB7B2F40F8, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// using (ResumePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1 = ((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->get_ResumePerfMarker_46();
		V_1 = L_1;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2;
		L_2 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// lastUpdated = 0;
		__this->set_lastUpdated_45((0.0f));
		// IsRunning = true;
		BaseSpatialObserver_set_IsRunning_mEB6185A04E579F04DA5FCCA9229A1C6F86E4235C_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x43, FINALLY_0035);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Suspend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Suspend_m4A62FD917700A4CF62A6E7F97C951D2BE3E00E47 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m420DA263FA5B0019CBDF4A49B638CD0BBDE08229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1ACF166974130A969D52A31275F6D3B68533987);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!IsRunning)
		bool L_0;
		L_0 = BaseSpatialObserver_get_IsRunning_m675DD55744D8486BA43EEBC901FA272450317FA3_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("The XR SDK spatial observer is currently stopped.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralA1ACF166974130A969D52A31275F6D3B68533987, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// using (SuspendPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1 = ((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->get_SuspendPerfMarker_47();
		V_1 = L_1;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2;
		L_2 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// IsRunning = false;
		BaseSpatialObserver_set_IsRunning_mEB6185A04E579F04DA5FCCA9229A1C6F86E4235C_inline(__this, (bool)0, /*hidden argument*/NULL);
		// meshWorkQueue.Clear();
		Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * L_3 = __this->get_meshWorkQueue_41();
		NullCheck(L_3);
		Queue_1_Clear_m420DA263FA5B0019CBDF4A49B638CD0BBDE08229(L_3, /*hidden argument*/Queue_1_Clear_m420DA263FA5B0019CBDF4A49B638CD0BBDE08229_RuntimeMethod_var);
		// }
		IL2CPP_LEAVE(0x43, FINALLY_0035);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ClearObservations_m1BD9C1E39E9D908CD1099A191F9348A6F92B2B30 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t59BA56437ACBA05EE6659A87546D5AF5C7E3720E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB739A47A8D7D511C0D72A7849B95652FD7D26423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ClearObservationsPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->get_ClearObservationsPerfMarker_48();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// bool wasRunning = false;
			V_2 = (bool)0;
			// if (IsRunning)
			bool L_2;
			L_2 = BaseSpatialObserver_get_IsRunning_m675DD55744D8486BA43EEBC901FA272450317FA3_inline(__this, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0020;
			}
		}

IL_0018:
		{
			// wasRunning = true;
			V_2 = (bool)1;
			// Suspend();
			VirtActionInvoker0::Invoke(55 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Suspend() */, __this);
		}

IL_0020:
		{
			// IReadOnlyList<int> observations = new List<int>(Meshes.Keys);
			RuntimeObject* L_3;
			L_3 = BaseSpatialMeshObserver_get_Meshes_m79DD886324A14426CB56B975E7BF64E79EAAC87C(__this, /*hidden argument*/NULL);
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!0> System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Keys() */, IReadOnlyDictionary_2_t59BA56437ACBA05EE6659A87546D5AF5C7E3720E_il2cpp_TypeInfo_var, L_3);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_5 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
			List_1__ctor_mB739A47A8D7D511C0D72A7849B95652FD7D26423(L_5, L_4, /*hidden argument*/List_1__ctor_mB739A47A8D7D511C0D72A7849B95652FD7D26423_RuntimeMethod_var);
			// foreach (int meshId in observations)
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, L_5);
			V_3 = L_6;
		}

IL_0036:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0048;
			}

IL_0038:
			{
				// foreach (int meshId in observations)
				RuntimeObject* L_7 = V_3;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, L_7);
				V_4 = L_8;
				// RemoveMeshObject(meshId);
				int32_t L_9 = V_4;
				GenericXRSDKSpatialMeshObserver_RemoveMeshObject_mCA28443FCDBC1F249D1E38DB93359CFB60D7D563(__this, L_9, /*hidden argument*/NULL);
			}

IL_0048:
			{
				// foreach (int meshId in observations)
				RuntimeObject* L_10 = V_3;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0038;
				}
			}

IL_0050:
			{
				IL2CPP_LEAVE(0x5C, FINALLY_0052);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0052;
		}

FINALLY_0052:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_12 = V_3;
				if (!L_12)
				{
					goto IL_005b;
				}
			}

IL_0055:
			{
				RuntimeObject* L_13 = V_3;
				NullCheck(L_13);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
			}

IL_005b:
			{
				IL2CPP_END_FINALLY(82)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(82)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5C, IL_005c)
		}

IL_005c:
		{
			// if (wasRunning)
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_0065;
			}
		}

IL_005f:
		{
			// Resume();
			VirtActionInvoker0::Invoke(54 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Resume() */, __this);
		}

IL_0065:
		{
			// }
			IL2CPP_LEAVE(0x75, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(103)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x75, IL_0075)
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateObserver_mF849E3EC4A3481EC49806537C884D4619EF5878D (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m980D7CD3F4D0DFC6E880E7AB5CF089A2A08E8A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mDB5E1EAFB2E35EE243E957D19153A131160AD91D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (SpatialAwarenessSystem == null || XRSubsystemHelpers.MeshSubsystem == null) { return; }
		RuntimeObject* L_0;
		L_0 = BaseSpatialObserver_get_SpatialAwarenessSystem_m460D3ECB01EA4EF7B7CC108260058EC4CE2A6E78_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_1;
		L_1 = XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// if (SpatialAwarenessSystem == null || XRSubsystemHelpers.MeshSubsystem == null) { return; }
		return;
	}

IL_0010:
	{
		// using (UpdateObserverPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->get_UpdateObserverPerfMarker_49();
		V_1 = L_2;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
		L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			// if (IsRunning && (outstandingMeshObject == null))
			bool L_4;
			L_4 = BaseSpatialObserver_get_IsRunning_m675DD55744D8486BA43EEBC901FA272450317FA3_inline(__this, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_00d6;
			}
		}

IL_0029:
		{
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_5 = __this->get_outstandingMeshObject_43();
			if (L_5)
			{
				goto IL_00d6;
			}
		}

IL_0034:
		{
			// if (meshWorkQueue.Count > 0)
			Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * L_6 = __this->get_meshWorkQueue_41();
			NullCheck(L_6);
			int32_t L_7;
			L_7 = Queue_1_get_Count_mDB5E1EAFB2E35EE243E957D19153A131160AD91D_inline(L_6, /*hidden argument*/Queue_1_get_Count_mDB5E1EAFB2E35EE243E957D19153A131160AD91D_RuntimeMethod_var);
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_0058;
			}
		}

IL_0042:
		{
			// RequestMesh(meshWorkQueue.Dequeue());
			Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * L_8 = __this->get_meshWorkQueue_41();
			NullCheck(L_8);
			MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_9;
			L_9 = Queue_1_Dequeue_m980D7CD3F4D0DFC6E880E7AB5CF089A2A08E8A3F(L_8, /*hidden argument*/Queue_1_Dequeue_m980D7CD3F4D0DFC6E880E7AB5CF089A2A08E8A3F_RuntimeMethod_var);
			GenericXRSDKSpatialMeshObserver_RequestMesh_m26C7CC215C760B01240AEEF8F9C8445456F22C0E(__this, L_9, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xE6, FINALLY_00d8);
		}

IL_0058:
		{
			// else if (Time.time - lastUpdated >= UpdateInterval)
			float L_10;
			L_10 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
			float L_11 = __this->get_lastUpdated_45();
			float L_12;
			L_12 = BaseSpatialObserver_get_UpdateInterval_m59B785C3FE2773B2F04C901F7A781DA157377B36_inline(__this, /*hidden argument*/NULL);
			if ((!(((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_11))) >= ((float)L_12))))
			{
				goto IL_00d6;
			}
		}

IL_006c:
		{
			// if (ObserverVolumeType == VolumeType.UserAlignedCube)
			int32_t L_13;
			L_13 = BaseSpatialObserver_get_ObserverVolumeType_m62911E2D01AEFF3B937001C1427CC9E888953565_inline(__this, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_13) == ((uint32_t)2))))
			{
				goto IL_008a;
			}
		}

IL_0075:
		{
			// ObserverRotation = CameraCache.Main.transform.rotation;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14;
			L_14 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
			NullCheck(L_14);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
			L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
			L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
			BaseSpatialObserver_set_ObserverRotation_m48D56B40D014EA777C9C2696D3650765F52A7534_inline(__this, L_16, /*hidden argument*/NULL);
		}

IL_008a:
		{
			// if (!IsStationaryObserver)
			bool L_17;
			L_17 = BaseSpatialObserver_get_IsStationaryObserver_m8BF81F60CEE7E7AC40BE50FEF5FB51BA1705F528_inline(__this, /*hidden argument*/NULL);
			if (L_17)
			{
				goto IL_00a7;
			}
		}

IL_0092:
		{
			// ObserverOrigin = CameraCache.Main.transform.position;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18;
			L_18 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
			NullCheck(L_18);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
			L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
			L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
			BaseSpatialObserver_set_ObserverOrigin_m5A92CEFFC641C8E70AFACF3358BCB481351BC985_inline(__this, L_20, /*hidden argument*/NULL);
		}

IL_00a7:
		{
			// ConfigureObserverVolume();
			VirtActionInvoker0::Invoke(82 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume() */, __this);
			// if (XRSubsystemHelpers.MeshSubsystem.TryGetMeshInfos(meshInfos))
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_21;
			L_21 = XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1(/*hidden argument*/NULL);
			List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * L_22 = __this->get_meshInfos_42();
			NullCheck(L_21);
			bool L_23;
			L_23 = XRMeshSubsystem_TryGetMeshInfos_mA8187329477D804C411B6D944E528747BDD7419F(L_21, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00cb;
			}
		}

IL_00bf:
		{
			// UpdateMeshes(meshInfos);
			List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * L_24 = __this->get_meshInfos_42();
			GenericXRSDKSpatialMeshObserver_UpdateMeshes_m62DF4E70DFC8B3218EC9ACA4A66003ECD454E969(__this, L_24, /*hidden argument*/NULL);
		}

IL_00cb:
		{
			// lastUpdated = Time.time;
			float L_25;
			L_25 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
			__this->set_lastUpdated_45(L_25);
		}

IL_00d6:
		{
			// }
			IL2CPP_LEAVE(0xE6, FINALLY_00d8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d8;
	}

FINALLY_00d8:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(216)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(216)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE6, IL_00e6)
	}

IL_00e6:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMesh(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RequestMesh_m26C7CC215C760B01240AEEF8F9C8445456F22C0E (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___meshId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mAB3ACB98485A6087A135A8F93F59AAF2065B5E80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_m79197859131BED0951DEEED78E555EE752799BE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__22_0_m6677AD90FE01C3AE9DCB4DBC93E5D6017DC399F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0276532DECCD3BA8EDE330FC5A19B19F4F081FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral911918F6AB4724DF725E5A151DF0C90CE52B9A5A);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * V_3 = NULL;
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (RequestMeshPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->get_RequestMeshPerfMarker_50();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// string meshName = ("SpatialMesh - " + meshId);
			MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_2 = ___meshId0;
			V_4 = L_2;
			String_t* L_3;
			L_3 = MeshId_ToString_mA9CDBA01DD0C110252F6C4AA7437C507B2025705((MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *)(&V_4), /*hidden argument*/NULL);
			String_t* L_4;
			L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral911918F6AB4724DF725E5A151DF0C90CE52B9A5A, L_3, /*hidden argument*/NULL);
			V_2 = L_4;
			// if (spareMeshObject == null)
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_5 = __this->get_spareMeshObject_44();
			if (L_5)
			{
				goto IL_007c;
			}
		}

IL_0031:
		{
			// newMesh = SpatialAwarenessMeshObject.Create(
			//     null,
			//     MeshPhysicsLayer,
			//     meshName,
			//     meshId.GetHashCode());
			int32_t L_6;
			L_6 = BaseSpatialMeshObserver_get_MeshPhysicsLayer_mE82DBCD0B9DF1CBF0572D2F55D92D46EE327068A_inline(__this, /*hidden argument*/NULL);
			String_t* L_7 = V_2;
			int32_t L_8;
			L_8 = MeshId_GetHashCode_mCD3E4355DB5EE90C389CE1D742E4CCA6471E2AA6((MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *)(&___meshId0), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A_il2cpp_TypeInfo_var);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_9;
			L_9 = SpatialAwarenessMeshObject_Create_m6D989E80860ACF72BB31E8E05F09A4765CE2B530((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL, L_6, L_7, L_8, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
			V_3 = L_9;
			// GameObject anchorHolder = new GameObject(meshName + "_anchor");
			String_t* L_10 = V_2;
			String_t* L_11;
			L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_10, _stringLiteral0276532DECCD3BA8EDE330FC5A19B19F4F081FB9, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_12, L_11, /*hidden argument*/NULL);
			// anchorHolder.AddComponent<PlayspaceAdapter>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12;
			NullCheck(L_13);
			PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C * L_14;
			L_14 = GameObject_AddComponent_TisPlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_m79197859131BED0951DEEED78E555EE752799BE8(L_13, /*hidden argument*/GameObject_AddComponent_TisPlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_m79197859131BED0951DEEED78E555EE752799BE8_RuntimeMethod_var);
			// anchorHolder.transform.SetParent(newMesh.GameObject.transform, false);
			NullCheck(L_13);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
			L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_16 = V_3;
			NullCheck(L_16);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
			L_17 = BaseSpatialAwarenessObject_get_GameObject_mFAE4AA6806C89B2CFD3913773960FA4C51857CD2_inline(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
			L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
			NullCheck(L_15);
			Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_15, L_18, (bool)0, /*hidden argument*/NULL);
			// }
			goto IL_00b5;
		}

IL_007c:
		{
			// newMesh = spareMeshObject;
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_19 = __this->get_spareMeshObject_44();
			V_3 = L_19;
			// spareMeshObject = null;
			__this->set_spareMeshObject_44((SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A *)NULL);
			// newMesh.GameObject.name = meshName;
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_20 = V_3;
			NullCheck(L_20);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
			L_21 = BaseSpatialAwarenessObject_get_GameObject_mFAE4AA6806C89B2CFD3913773960FA4C51857CD2_inline(L_20, /*hidden argument*/NULL);
			String_t* L_22 = V_2;
			NullCheck(L_21);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_21, L_22, /*hidden argument*/NULL);
			// newMesh.Id = meshId.GetHashCode();
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_23 = V_3;
			int32_t L_24;
			L_24 = MeshId_GetHashCode_mCD3E4355DB5EE90C389CE1D742E4CCA6471E2AA6((MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *)(&___meshId0), /*hidden argument*/NULL);
			NullCheck(L_23);
			BaseSpatialAwarenessObject_set_Id_m1C226ECE49906A109B47E70A0E530A4D8E8763A5_inline(L_23, L_24, /*hidden argument*/NULL);
			// newMesh.GameObject.SetActive(true);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_25 = V_3;
			NullCheck(L_25);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
			L_26 = BaseSpatialAwarenessObject_get_GameObject_mFAE4AA6806C89B2CFD3913773960FA4C51857CD2_inline(L_25, /*hidden argument*/NULL);
			NullCheck(L_26);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)1, /*hidden argument*/NULL);
		}

IL_00b5:
		{
			// XRSubsystemHelpers.MeshSubsystem.GenerateMeshAsync(meshId, newMesh.Filter.mesh, newMesh.Collider, MeshVertexAttributes.Normals, (MeshGenerationResult meshGenerationResult) => MeshGenerationAction(meshGenerationResult));
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_27;
			L_27 = XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1(/*hidden argument*/NULL);
			MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_28 = ___meshId0;
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_29 = V_3;
			NullCheck(L_29);
			MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_30;
			L_30 = BaseSpatialAwarenessObject_get_Filter_m294B9502A47F673081233E20EC3E74209A79871E_inline(L_29, /*hidden argument*/NULL);
			NullCheck(L_30);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_31;
			L_31 = MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417(L_30, /*hidden argument*/NULL);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_32 = V_3;
			NullCheck(L_32);
			MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_33;
			L_33 = SpatialAwarenessMeshObject_get_Collider_mCE08BFF09CEA034E043230096D9D0D7E2D44ED31_inline(L_32, /*hidden argument*/NULL);
			Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C * L_34 = (Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C *)il2cpp_codegen_object_new(Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C_il2cpp_TypeInfo_var);
			Action_1__ctor_mAB3ACB98485A6087A135A8F93F59AAF2065B5E80(L_34, __this, (intptr_t)((intptr_t)GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__22_0_m6677AD90FE01C3AE9DCB4DBC93E5D6017DC399F1_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAB3ACB98485A6087A135A8F93F59AAF2065B5E80_RuntimeMethod_var);
			NullCheck(L_27);
			XRMeshSubsystem_GenerateMeshAsync_m76DBD89C84372FBE9CBDBFF6A7A66977D4C7CDBF(L_27, L_28, L_31, L_33, 1, L_34, /*hidden argument*/NULL);
			// outstandingMeshObject = newMesh;
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_35 = V_3;
			__this->set_outstandingMeshObject_43(L_35);
			// }
			IL2CPP_LEAVE(0xF5, FINALLY_00e7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e7;
	}

FINALLY_00e7:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(231)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(231)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF5, IL_00f5)
	}

IL_00f5:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RemoveMeshObject_mCA28443FCDBC1F249D1E38DB93359CFB60D7D563 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mFBB055B93D6622F63A34ACD5574F9C9650861B66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE4DA733EF97D1C762A770F2239133375CF1B1762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t88B06F8E4114392E2477915E207C028BB1ED51D7_mB2D76EFC01C33BD219D3A17C0A8FAAAECDFA09AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessEventData_1_Initialize_m6D70AA31A59E85860438139C3F7A14F0BCC010B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// using (RemoveMeshObjectPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->get_RemoveMeshObjectPerfMarker_51();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (meshes.TryGetValue(id, out mesh))
			Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * L_2 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshes_33();
			int32_t L_3 = ___id0;
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_TryGetValue_mE4DA733EF97D1C762A770F2239133375CF1B1762(L_2, L_3, (SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_mE4DA733EF97D1C762A770F2239133375CF1B1762_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_005c;
			}
		}

IL_001e:
		{
			// meshes.Remove(id);
			Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * L_5 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshes_33();
			int32_t L_6 = ___id0;
			NullCheck(L_5);
			bool L_7;
			L_7 = Dictionary_2_Remove_mFBB055B93D6622F63A34ACD5574F9C9650861B66(L_5, L_6, /*hidden argument*/Dictionary_2_Remove_mFBB055B93D6622F63A34ACD5574F9C9650861B66_RuntimeMethod_var);
			// ReclaimMeshObject(mesh);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_8 = V_2;
			GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m12C854FC766BF7E8697B3A9EC8155618F5F8581D(__this, L_8, /*hidden argument*/NULL);
			// meshEventData.Initialize(this, id, null);
			MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * L_9 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshEventData_20();
			int32_t L_10 = ___id0;
			NullCheck(L_9);
			MixedRealitySpatialAwarenessEventData_1_Initialize_m6D70AA31A59E85860438139C3F7A14F0BCC010B0(L_9, __this, L_10, (SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A *)NULL, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_m6D70AA31A59E85860438139C3F7A14F0BCC010B0_RuntimeMethod_var);
			// SpatialAwarenessSystem?.HandleEvent(meshEventData, OnMeshRemoved);
			RuntimeObject* L_11;
			L_11 = BaseSpatialObserver_get_SpatialAwarenessSystem_m460D3ECB01EA4EF7B7CC108260058EC4CE2A6E78_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_12 = L_11;
			G_B3_0 = L_12;
			if (L_12)
			{
				G_B4_0 = L_12;
				goto IL_004c;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}

IL_004c:
		{
			MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * L_13 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshEventData_20();
			IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_il2cpp_TypeInfo_var);
			EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * L_14 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_il2cpp_TypeInfo_var))->get_OnMeshRemoved_30();
			NullCheck(G_B4_0);
			GenericInterfaceActionInvoker2< BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t88B06F8E4114392E2477915E207C028BB1ED51D7_mB2D76EFC01C33BD219D3A17C0A8FAAAECDFA09AF_RuntimeMethod_var, G_B4_0, L_13, L_14);
		}

IL_005c:
		{
			// }
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObject(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m12C854FC766BF7E8697B3A9EC8155618F5F8581D (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * ___availableMeshObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC8432B096E67A1E3A1A1AE9FE6858ABA57598C5);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ReclaimMeshObjectPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->get_ReclaimMeshObjectPerfMarker_52();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (spareMeshObject == null)
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_2 = __this->get_spareMeshObject_44();
			if (L_2)
			{
				goto IL_0043;
			}
		}

IL_0016:
		{
			// SpatialAwarenessMeshObject.Cleanup(availableMeshObject, false);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_3 = ___availableMeshObject0;
			IL2CPP_RUNTIME_CLASS_INIT(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A_il2cpp_TypeInfo_var);
			SpatialAwarenessMeshObject_Cleanup_m6C5C07830AC647FB9611ACB07971ABF79DFEECB3(L_3, (bool)0, (bool)1, /*hidden argument*/NULL);
			// availableMeshObject.GameObject.name = "Unused Spatial Mesh";
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_4 = ___availableMeshObject0;
			NullCheck(L_4);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
			L_5 = BaseSpatialAwarenessObject_get_GameObject_mFAE4AA6806C89B2CFD3913773960FA4C51857CD2_inline(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_5, _stringLiteralAC8432B096E67A1E3A1A1AE9FE6858ABA57598C5, /*hidden argument*/NULL);
			// availableMeshObject.GameObject.SetActive(false);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_6 = ___availableMeshObject0;
			NullCheck(L_6);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = BaseSpatialAwarenessObject_get_GameObject_mFAE4AA6806C89B2CFD3913773960FA4C51857CD2_inline(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
			// spareMeshObject = availableMeshObject;
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_8 = ___availableMeshObject0;
			__this->set_spareMeshObject_44(L_8);
			// }
			IL2CPP_LEAVE(0x5B, FINALLY_004d);
		}

IL_0043:
		{
			// SpatialAwarenessMeshObject.Cleanup(availableMeshObject);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_9 = ___availableMeshObject0;
			IL2CPP_RUNTIME_CLASS_INIT(SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A_il2cpp_TypeInfo_var);
			SpatialAwarenessMeshObject_Cleanup_m6C5C07830AC647FB9611ACB07971ABF79DFEECB3(L_9, (bool)1, (bool)1, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x5B, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ConfigureObserverVolume_mE4BA9B4B7297B21610109B33C6B0F481C9778DBF (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (SpatialAwarenessSystem == null || XRSubsystemHelpers.MeshSubsystem == null)
		RuntimeObject* L_0;
		L_0 = BaseSpatialObserver_get_SpatialAwarenessSystem_m460D3ECB01EA4EF7B7CC108260058EC4CE2A6E78_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_1;
		L_1 = XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// using (ConfigureObserverVolumePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->get_ConfigureObserverVolumePerfMarker_53();
		V_1 = L_2;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
		L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			// switch (ObserverVolumeType)
			int32_t L_4;
			L_4 = BaseSpatialObserver_get_ObserverVolumeType_m62911E2D01AEFF3B937001C1427CC9E888953565_inline(__this, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_4) == ((uint32_t)1))))
			{
				goto IL_0040;
			}
		}

IL_0027:
		{
			// XRSubsystemHelpers.MeshSubsystem.SetBoundingVolume(ObserverOrigin, ObservationExtents);
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_5;
			L_5 = XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = BaseSpatialObserver_get_ObserverOrigin_m9282BED93FC4AF70C2863489DEFED55C2B83FDED_inline(__this, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
			L_7 = BaseSpatialObserver_get_ObservationExtents_m67BC5BCC6087055769FBC61DB6B799FF9E3C5FFF_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_5);
			bool L_8;
			L_8 = XRMeshSubsystem_SetBoundingVolume_mEEEFB719CE72346BF549DC5245C218F7A5699D92(L_5, L_6, L_7, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x6A, FINALLY_005c);
		}

IL_0040:
		{
			// Debug.LogError($"Unsupported ObserverVolumeType value {ObserverVolumeType}");
			int32_t L_9;
			L_9 = BaseSpatialObserver_get_ObserverVolumeType_m62911E2D01AEFF3B937001C1427CC9E888953565_inline(__this, /*hidden argument*/NULL);
			int32_t L_10 = L_9;
			RuntimeObject * L_11 = Box(VolumeType_t11AC6FAC40E92E70FF009521E8269903592AAD31_il2cpp_TypeInfo_var, &L_10);
			String_t* L_12;
			L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C, L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_12, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x6A, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshes(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateMeshes_m62DF4E70DFC8B3218EC9ACA4A66003ECD454E969 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m31D29771A1518E44E9584A35C92E450C395754B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m501246F7F719871584E20FA4930077EFE4071A06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m550FE8F77A8FB74BDCA13AF7C11A20C754629E6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4219F79D72CAA78B0CB2E67500AAEDA8DB24592F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mC7457D8F1F8D4AD7F1D7E04CA4E2EB5320CFFC53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!IsRunning) { return; }
		bool L_0;
		L_0 = BaseSpatialObserver_get_IsRunning_m675DD55744D8486BA43EEBC901FA272450317FA3_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsRunning) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdateMeshesPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1 = ((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->get_UpdateMeshesPerfMarker_54();
		V_1 = L_1;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2;
		L_2 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// foreach (MeshInfo meshInfo in meshInfos)
			List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * L_3 = ___meshInfos0;
			NullCheck(L_3);
			Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9  L_4;
			L_4 = List_1_GetEnumerator_m4219F79D72CAA78B0CB2E67500AAEDA8DB24592F(L_3, /*hidden argument*/List_1_GetEnumerator_m4219F79D72CAA78B0CB2E67500AAEDA8DB24592F_RuntimeMethod_var);
			V_2 = L_4;
		}

IL_001e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_006d;
			}

IL_0020:
			{
				// foreach (MeshInfo meshInfo in meshInfos)
				MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  L_5;
				L_5 = Enumerator_get_Current_m550FE8F77A8FB74BDCA13AF7C11A20C754629E6E_inline((Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m550FE8F77A8FB74BDCA13AF7C11A20C754629E6E_RuntimeMethod_var);
				V_3 = L_5;
				// switch (meshInfo.ChangeState)
				int32_t L_6;
				L_6 = MeshInfo_get_ChangeState_mCBBE9D6299C718E353C3EEC6B5E3779DC28B9925_inline((MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 *)(&V_3), /*hidden argument*/NULL);
				V_4 = L_6;
				int32_t L_7 = V_4;
				if ((!(((uint32_t)L_7) > ((uint32_t)1))))
				{
					goto IL_003d;
				}
			}

IL_0036:
			{
				int32_t L_8 = V_4;
				if ((((int32_t)L_8) == ((int32_t)2)))
				{
					goto IL_0051;
				}
			}

IL_003b:
			{
				goto IL_006d;
			}

IL_003d:
			{
				// meshWorkQueue.Enqueue(meshInfo.MeshId);
				Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * L_9 = __this->get_meshWorkQueue_41();
				MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_10;
				L_10 = MeshInfo_get_MeshId_m92D332ED6BF2822D33CC04BA3E086E9C37FF3AC6_inline((MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 *)(&V_3), /*hidden argument*/NULL);
				NullCheck(L_9);
				Queue_1_Enqueue_mC7457D8F1F8D4AD7F1D7E04CA4E2EB5320CFFC53(L_9, L_10, /*hidden argument*/Queue_1_Enqueue_mC7457D8F1F8D4AD7F1D7E04CA4E2EB5320CFFC53_RuntimeMethod_var);
				// break;
				goto IL_006d;
			}

IL_0051:
			{
				// RemoveMeshObject(meshInfo.MeshId.GetHashCode());
				MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_11;
				L_11 = MeshInfo_get_MeshId_m92D332ED6BF2822D33CC04BA3E086E9C37FF3AC6_inline((MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 *)(&V_3), /*hidden argument*/NULL);
				V_5 = L_11;
				int32_t L_12;
				L_12 = MeshId_GetHashCode_mCD3E4355DB5EE90C389CE1D742E4CCA6471E2AA6((MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *)(&V_5), /*hidden argument*/NULL);
				GenericXRSDKSpatialMeshObserver_RemoveMeshObject_mCA28443FCDBC1F249D1E38DB93359CFB60D7D563(__this, L_12, /*hidden argument*/NULL);
			}

IL_006d:
			{
				// foreach (MeshInfo meshInfo in meshInfos)
				bool L_13;
				L_13 = Enumerator_MoveNext_m501246F7F719871584E20FA4930077EFE4071A06((Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m501246F7F719871584E20FA4930077EFE4071A06_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0020;
				}
			}

IL_0076:
			{
				IL2CPP_LEAVE(0x94, FINALLY_0078);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0078;
		}

FINALLY_0078:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m31D29771A1518E44E9584A35C92E450C395754B9((Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m31D29771A1518E44E9584A35C92E450C395754B9_RuntimeMethod_var);
			IL2CPP_END_FINALLY(120)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(120)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x94, FINALLY_0086);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0086;
	}

FINALLY_0086:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(134)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(134)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x94, IL_0094)
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationAction(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_MeshGenerationAction_mC43C0A5CD1C83A0C6A879B0E09DDC375D7B40283 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF  ___meshGenerationResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m95CACFE4262B025E4F88EF33BC951C3F8EDB1ADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4FB06A555535EB6F3EEC9A9D8EE8646D84079ABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mFBB055B93D6622F63A34ACD5574F9C9650861B66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFCBA2C94F58EDF0DAA644DD4E97FFA24765B23DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t88B06F8E4114392E2477915E207C028BB1ED51D7_mB2D76EFC01C33BD219D3A17C0A8FAAAECDFA09AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessEventData_1_Initialize_m6D70AA31A59E85860438139C3F7A14F0BCC010B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF5BB21220D8CB3070E7A40BBB1BEF947166C4D);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * V_2 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_3 = NULL;
	int32_t V_4 = 0;
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	bool G_B10_0 = false;
	bool G_B9_0 = false;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B11_0 = NULL;
	bool G_B11_1 = false;
	bool G_B13_0 = false;
	bool G_B12_0 = false;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B14_0 = NULL;
	bool G_B14_1 = false;
	bool G_B16_0 = false;
	bool G_B15_0 = false;
	bool G_B18_0 = false;
	bool G_B17_0 = false;
	bool G_B20_0 = false;
	bool G_B19_0 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B22_0 = NULL;
	bool G_B22_1 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B21_0 = NULL;
	bool G_B21_1 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B23_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B23_1 = NULL;
	bool G_B23_2 = false;
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	RuntimeObject* G_B29_0 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	{
		// if (!IsRunning) { return; }
		bool L_0;
		L_0 = BaseSpatialObserver_get_IsRunning_m675DD55744D8486BA43EEBC901FA272450317FA3_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsRunning) { return; }
		return;
	}

IL_0009:
	{
		// using (MeshGenerationActionPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1 = ((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->get_MeshGenerationActionPerfMarker_55();
		V_1 = L_1;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2;
		L_2 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// if (outstandingMeshObject == null)
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_3 = __this->get_outstandingMeshObject_43();
			if (L_3)
			{
				goto IL_003f;
			}
		}

IL_001f:
		{
			// Debug.LogWarning($"MeshGenerationAction called for mesh id {meshGenerationResult.MeshId} while no request was outstanding.");
			MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_4;
			L_4 = MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)(&___meshGenerationResult0), /*hidden argument*/NULL);
			MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_5 = L_4;
			RuntimeObject * L_6 = Box(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_il2cpp_TypeInfo_var, &L_5);
			String_t* L_7;
			L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3BF5BB21220D8CB3070E7A40BBB1BEF947166C4D, L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_7, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x20D, FINALLY_01ff);
		}

IL_003f:
		{
			// switch (meshGenerationResult.Status)
			int32_t L_8;
			L_8 = MeshGenerationResult_get_Status_m5AF51D2745EC947BB722550DC95665D430CDB178_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)(&___meshGenerationResult0), /*hidden argument*/NULL);
			V_4 = L_8;
			int32_t L_9 = V_4;
			switch (L_9)
			{
				case 0:
				{
					goto IL_0074;
				}
				case 1:
				{
					goto IL_0068;
				}
				case 2:
				{
					goto IL_01fd;
				}
				case 3:
				{
					goto IL_0068;
				}
				case 4:
				{
					goto IL_0068;
				}
			}
		}

IL_0063:
		{
			goto IL_01fd;
		}

IL_0068:
		{
			// outstandingMeshObject = null;
			__this->set_outstandingMeshObject_43((SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A *)NULL);
			// break;
			goto IL_01fd;
		}

IL_0074:
		{
			// SpatialAwarenessMeshObject meshObject = outstandingMeshObject;
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_10 = __this->get_outstandingMeshObject_43();
			V_2 = L_10;
			// meshObject.Id = meshGenerationResult.MeshId.GetHashCode();
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_11 = V_2;
			MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_12;
			L_12 = MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)(&___meshGenerationResult0), /*hidden argument*/NULL);
			V_5 = L_12;
			int32_t L_13;
			L_13 = MeshId_GetHashCode_mCD3E4355DB5EE90C389CE1D742E4CCA6471E2AA6((MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *)(&V_5), /*hidden argument*/NULL);
			NullCheck(L_11);
			BaseSpatialAwarenessObject_set_Id_m1C226ECE49906A109B47E70A0E530A4D8E8763A5_inline(L_11, L_13, /*hidden argument*/NULL);
			// outstandingMeshObject = null;
			__this->set_outstandingMeshObject_43((SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A *)NULL);
			// bool isMeshUpdate = meshes.ContainsKey(meshObject.Id);
			Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * L_14 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshes_33();
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_15 = V_2;
			NullCheck(L_15);
			int32_t L_16;
			L_16 = BaseSpatialAwarenessObject_get_Id_m11E5D448E5D93D9002E887BEA9F37B0B04730CBF_inline(L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			bool L_17;
			L_17 = Dictionary_2_ContainsKey_m4FB06A555535EB6F3EEC9A9D8EE8646D84079ABA(L_14, L_16, /*hidden argument*/Dictionary_2_ContainsKey_m4FB06A555535EB6F3EEC9A9D8EE8646D84079ABA_RuntimeMethod_var);
			// Material material = (DisplayOption == SpatialAwarenessMeshDisplayOptions.Occlusion) ?
			//     OcclusionMaterial : VisibleMaterial;
			int32_t L_18;
			L_18 = BaseSpatialMeshObserver_get_DisplayOption_mBC99D6AFD65420B1F90E34F1AF92B07F32D9AD7E_inline(__this, /*hidden argument*/NULL);
			G_B9_0 = L_17;
			if ((((int32_t)L_18) == ((int32_t)2)))
			{
				G_B10_0 = L_17;
				goto IL_00c0;
			}
		}

IL_00b8:
		{
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19;
			L_19 = BaseSpatialMeshObserver_get_VisibleMaterial_mD9C22A1C9CED55ABBBFC494DEF333A292126B811_inline(__this, /*hidden argument*/NULL);
			G_B11_0 = L_19;
			G_B11_1 = G_B9_0;
			goto IL_00c6;
		}

IL_00c0:
		{
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20;
			L_20 = BaseSpatialMeshObserver_get_OcclusionMaterial_mA789E70BE37266983CC4B696CFD5628674345863_inline(__this, /*hidden argument*/NULL);
			G_B11_0 = L_20;
			G_B11_1 = G_B10_0;
		}

IL_00c6:
		{
			V_3 = G_B11_0;
			// material = isMeshUpdate ? meshes[meshObject.Id].Renderer.sharedMaterial : material;
			bool L_21 = G_B11_1;
			G_B12_0 = L_21;
			if (L_21)
			{
				G_B13_0 = L_21;
				goto IL_00cd;
			}
		}

IL_00ca:
		{
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = V_3;
			G_B14_0 = L_22;
			G_B14_1 = G_B12_0;
			goto IL_00e8;
		}

IL_00cd:
		{
			Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * L_23 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshes_33();
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_24 = V_2;
			NullCheck(L_24);
			int32_t L_25;
			L_25 = BaseSpatialAwarenessObject_get_Id_m11E5D448E5D93D9002E887BEA9F37B0B04730CBF_inline(L_24, /*hidden argument*/NULL);
			NullCheck(L_23);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_26;
			L_26 = Dictionary_2_get_Item_mFCBA2C94F58EDF0DAA644DD4E97FFA24765B23DF(L_23, L_25, /*hidden argument*/Dictionary_2_get_Item_mFCBA2C94F58EDF0DAA644DD4E97FFA24765B23DF_RuntimeMethod_var);
			NullCheck(L_26);
			MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_27;
			L_27 = BaseSpatialAwarenessObject_get_Renderer_m748A536B75BA14E1BE1122C938EF39EB3FA16721_inline(L_26, /*hidden argument*/NULL);
			NullCheck(L_27);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
			L_28 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_27, /*hidden argument*/NULL);
			G_B14_0 = L_28;
			G_B14_1 = G_B13_0;
		}

IL_00e8:
		{
			V_3 = G_B14_0;
			// meshObject.Renderer.sharedMaterial = material;
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_29 = V_2;
			NullCheck(L_29);
			MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_30;
			L_30 = BaseSpatialAwarenessObject_get_Renderer_m748A536B75BA14E1BE1122C938EF39EB3FA16721_inline(L_29, /*hidden argument*/NULL);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_31 = V_3;
			NullCheck(L_30);
			Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_30, L_31, /*hidden argument*/NULL);
			// if (RecalculateNormals)
			bool L_32;
			L_32 = BaseSpatialMeshObserver_get_RecalculateNormals_m834207D95E0B9919CA20889919A03A9553BF4451_inline(__this, /*hidden argument*/NULL);
			G_B15_0 = G_B14_1;
			if (!L_32)
			{
				G_B16_0 = G_B14_1;
				goto IL_010d;
			}
		}

IL_00fd:
		{
			// meshObject.Filter.sharedMesh.RecalculateNormals();
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_33 = V_2;
			NullCheck(L_33);
			MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_34;
			L_34 = BaseSpatialAwarenessObject_get_Filter_m294B9502A47F673081233E20EC3E74209A79871E_inline(L_33, /*hidden argument*/NULL);
			NullCheck(L_34);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_35;
			L_35 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_34, /*hidden argument*/NULL);
			NullCheck(L_35);
			Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A(L_35, /*hidden argument*/NULL);
			G_B16_0 = G_B15_0;
		}

IL_010d:
		{
			// meshObject.Renderer.enabled = (DisplayOption != SpatialAwarenessMeshDisplayOptions.None);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_36 = V_2;
			NullCheck(L_36);
			MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_37;
			L_37 = BaseSpatialAwarenessObject_get_Renderer_m748A536B75BA14E1BE1122C938EF39EB3FA16721_inline(L_36, /*hidden argument*/NULL);
			int32_t L_38;
			L_38 = BaseSpatialMeshObserver_get_DisplayOption_mBC99D6AFD65420B1F90E34F1AF92B07F32D9AD7E_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_37);
			Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_37, (bool)((!(((uint32_t)L_38) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
			// if (meshObject.Renderer.enabled)
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_39 = V_2;
			NullCheck(L_39);
			MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_40;
			L_40 = BaseSpatialAwarenessObject_get_Renderer_m748A536B75BA14E1BE1122C938EF39EB3FA16721_inline(L_39, /*hidden argument*/NULL);
			NullCheck(L_40);
			bool L_41;
			L_41 = Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE(L_40, /*hidden argument*/NULL);
			G_B17_0 = G_B16_0;
			if (!L_41)
			{
				G_B18_0 = G_B16_0;
				goto IL_013f;
			}
		}

IL_012e:
		{
			// meshObject.Collider.material = PhysicsMaterial;
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_42 = V_2;
			NullCheck(L_42);
			MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_43;
			L_43 = SpatialAwarenessMeshObject_get_Collider_mCE08BFF09CEA034E043230096D9D0D7E2D44ED31_inline(L_42, /*hidden argument*/NULL);
			PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_44;
			L_44 = BaseSpatialMeshObserver_get_PhysicsMaterial_m35573042269F05F6913C7CCCB6B1B21234D85C01_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_43);
			Collider_set_material_m3B07EBDE2756F6F250C6202EA1F67C95072B9D72(L_43, L_44, /*hidden argument*/NULL);
			G_B18_0 = G_B17_0;
		}

IL_013f:
		{
			// if (isMeshUpdate)
			bool L_45 = G_B18_0;
			G_B19_0 = L_45;
			if (!L_45)
			{
				G_B20_0 = L_45;
				goto IL_016b;
			}
		}

IL_0142:
		{
			// ReclaimMeshObject(meshes[meshObject.Id]);
			Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * L_46 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshes_33();
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_47 = V_2;
			NullCheck(L_47);
			int32_t L_48;
			L_48 = BaseSpatialAwarenessObject_get_Id_m11E5D448E5D93D9002E887BEA9F37B0B04730CBF_inline(L_47, /*hidden argument*/NULL);
			NullCheck(L_46);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_49;
			L_49 = Dictionary_2_get_Item_mFCBA2C94F58EDF0DAA644DD4E97FFA24765B23DF(L_46, L_48, /*hidden argument*/Dictionary_2_get_Item_mFCBA2C94F58EDF0DAA644DD4E97FFA24765B23DF_RuntimeMethod_var);
			GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m12C854FC766BF7E8697B3A9EC8155618F5F8581D(__this, L_49, /*hidden argument*/NULL);
			// meshes.Remove(meshObject.Id);
			Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * L_50 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshes_33();
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_51 = V_2;
			NullCheck(L_51);
			int32_t L_52;
			L_52 = BaseSpatialAwarenessObject_get_Id_m11E5D448E5D93D9002E887BEA9F37B0B04730CBF_inline(L_51, /*hidden argument*/NULL);
			NullCheck(L_50);
			bool L_53;
			L_53 = Dictionary_2_Remove_mFBB055B93D6622F63A34ACD5574F9C9650861B66(L_50, L_52, /*hidden argument*/Dictionary_2_Remove_mFBB055B93D6622F63A34ACD5574F9C9650861B66_RuntimeMethod_var);
			G_B20_0 = G_B19_0;
		}

IL_016b:
		{
			// meshes.Add(meshObject.Id, meshObject);
			Dictionary_2_t80F7BDB2A022368F818AE566739AE78D92D2C0DC * L_54 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshes_33();
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_55 = V_2;
			NullCheck(L_55);
			int32_t L_56;
			L_56 = BaseSpatialAwarenessObject_get_Id_m11E5D448E5D93D9002E887BEA9F37B0B04730CBF_inline(L_55, /*hidden argument*/NULL);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_57 = V_2;
			NullCheck(L_54);
			Dictionary_2_Add_m95CACFE4262B025E4F88EF33BC951C3F8EDB1ADE(L_54, L_56, L_57, /*hidden argument*/Dictionary_2_Add_m95CACFE4262B025E4F88EF33BC951C3F8EDB1ADE_RuntimeMethod_var);
			// meshObject.GameObject.transform.parent = (ObservedObjectParent.transform != null) ?
			//     ObservedObjectParent.transform : null;
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_58 = V_2;
			NullCheck(L_58);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
			L_59 = BaseSpatialAwarenessObject_get_GameObject_mFAE4AA6806C89B2CFD3913773960FA4C51857CD2_inline(L_58, /*hidden argument*/NULL);
			NullCheck(L_59);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
			L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61;
			L_61 = VirtFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(75 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_ObservedObjectParent() */, __this);
			NullCheck(L_61);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
			L_62 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_61, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_63;
			L_63 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_62, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			G_B21_0 = L_60;
			G_B21_1 = G_B20_0;
			if (L_63)
			{
				G_B22_0 = L_60;
				G_B22_1 = G_B20_0;
				goto IL_019e;
			}
		}

IL_019b:
		{
			G_B23_0 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)(NULL));
			G_B23_1 = G_B21_0;
			G_B23_2 = G_B21_1;
			goto IL_01a9;
		}

IL_019e:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64;
			L_64 = VirtFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(75 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_ObservedObjectParent() */, __this);
			NullCheck(L_64);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
			L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
			G_B23_0 = L_65;
			G_B23_1 = G_B22_0;
			G_B23_2 = G_B22_1;
		}

IL_01a9:
		{
			NullCheck(G_B23_1);
			Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(G_B23_1, G_B23_0, /*hidden argument*/NULL);
			// meshEventData.Initialize(this, meshObject.Id, meshObject);
			MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * L_66 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshEventData_20();
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_67 = V_2;
			NullCheck(L_67);
			int32_t L_68;
			L_68 = BaseSpatialAwarenessObject_get_Id_m11E5D448E5D93D9002E887BEA9F37B0B04730CBF_inline(L_67, /*hidden argument*/NULL);
			SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * L_69 = V_2;
			NullCheck(L_66);
			MixedRealitySpatialAwarenessEventData_1_Initialize_m6D70AA31A59E85860438139C3F7A14F0BCC010B0(L_66, __this, L_68, L_69, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_m6D70AA31A59E85860438139C3F7A14F0BCC010B0_RuntimeMethod_var);
			// if (isMeshUpdate)
			if (!G_B23_2)
			{
				goto IL_01e1;
			}
		}

IL_01c3:
		{
			// SpatialAwarenessSystem?.HandleEvent(meshEventData, OnMeshUpdated);
			RuntimeObject* L_70;
			L_70 = BaseSpatialObserver_get_SpatialAwarenessSystem_m460D3ECB01EA4EF7B7CC108260058EC4CE2A6E78_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_71 = L_70;
			G_B25_0 = L_71;
			if (L_71)
			{
				G_B26_0 = L_71;
				goto IL_01cf;
			}
		}

IL_01cc:
		{
			IL2CPP_LEAVE(0x20D, FINALLY_01ff);
		}

IL_01cf:
		{
			MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * L_72 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshEventData_20();
			IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_il2cpp_TypeInfo_var);
			EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * L_73 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_il2cpp_TypeInfo_var))->get_OnMeshUpdated_28();
			NullCheck(G_B26_0);
			GenericInterfaceActionInvoker2< BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t88B06F8E4114392E2477915E207C028BB1ED51D7_mB2D76EFC01C33BD219D3A17C0A8FAAAECDFA09AF_RuntimeMethod_var, G_B26_0, L_72, L_73);
			// }
			IL2CPP_LEAVE(0x20D, FINALLY_01ff);
		}

IL_01e1:
		{
			// SpatialAwarenessSystem?.HandleEvent(meshEventData, OnMeshAdded);
			RuntimeObject* L_74;
			L_74 = BaseSpatialObserver_get_SpatialAwarenessSystem_m460D3ECB01EA4EF7B7CC108260058EC4CE2A6E78_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_75 = L_74;
			G_B28_0 = L_75;
			if (L_75)
			{
				G_B29_0 = L_75;
				goto IL_01ed;
			}
		}

IL_01ea:
		{
			IL2CPP_LEAVE(0x20D, FINALLY_01ff);
		}

IL_01ed:
		{
			MixedRealitySpatialAwarenessEventData_1_t7ED8A8C4F13DE7DA0CDB49A53184152431B8337F * L_76 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 *)__this)->get_meshEventData_20();
			IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_il2cpp_TypeInfo_var);
			EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * L_77 = ((BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34_il2cpp_TypeInfo_var))->get_OnMeshAdded_26();
			NullCheck(G_B29_0);
			GenericInterfaceActionInvoker2< BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t143DA7002ABAFBCD2FE1BE50F41D1107246070D6 * >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t88B06F8E4114392E2477915E207C028BB1ED51D7_mB2D76EFC01C33BD219D3A17C0A8FAAAECDFA09AF_RuntimeMethod_var, G_B29_0, L_76, L_77);
		}

IL_01fd:
		{
			// }
			IL2CPP_LEAVE(0x20D, FINALLY_01ff);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ff;
	}

FINALLY_01ff:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(511)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(511)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x20D, IL_020d)
	}

IL_020d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__cctor_m522D31FAB032A37FDBDF3D9C41FA1E20A18CFFDC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27A9EEA0DF12B45E99809B913FBA30DBFDB54081);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DF7A5156925F5C5400D60BBBA1DBB1D4708F9C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F391D50F63A6FC48ECA55EDAD80B5FEBB55F14B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B761D1FF7C4CFC282EFF97CD7CDD2E0DB19205F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E059C585DE480303757054B787EF7E38A3041ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83A5D26D7F7B772C9B2B7433282DB838A0458B02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5935C2A28B34B7440328EC778E265A054EC3184);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6C949D0BF57E67FE7F3F183A6C925361255BB02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1690A7A8FDDC8138AAF739B6C7DC4B11F17E2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0342F3AF15796E4940E986CD89B6D66E0775DBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF53DDA41C3100B18B00DB7F11B7FA7767D6E19C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral2DF7A5156925F5C5400D60BBBA1DBB1D4708F9C8, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_40(L_0);
		// private static readonly ProfilerMarker ResumePerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.Resume");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral83A5D26D7F7B772C9B2B7433282DB838A0458B02, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->set_ResumePerfMarker_46(L_1);
		// private static readonly ProfilerMarker SuspendPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.Suspend");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteralBC1690A7A8FDDC8138AAF739B6C7DC4B11F17E2F, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->set_SuspendPerfMarker_47(L_2);
		// private static readonly ProfilerMarker ClearObservationsPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.ClearObservations");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteralA5935C2A28B34B7440328EC778E265A054EC3184, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->set_ClearObservationsPerfMarker_48(L_3);
		// private static readonly ProfilerMarker UpdateObserverPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.UpdateObserver");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_4), _stringLiteral2F391D50F63A6FC48ECA55EDAD80B5FEBB55F14B, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->set_UpdateObserverPerfMarker_49(L_4);
		// private static readonly ProfilerMarker RequestMeshPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver+PlayspaceAdapter.RequestMesh");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_5), _stringLiteralF0342F3AF15796E4940E986CD89B6D66E0775DBC, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->set_RequestMeshPerfMarker_50(L_5);
		// private static readonly ProfilerMarker RemoveMeshObjectPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver+PlayspaceAdapter.RemoveMeshObject");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_6), _stringLiteralB6C949D0BF57E67FE7F3F183A6C925361255BB02, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->set_RemoveMeshObjectPerfMarker_51(L_6);
		// private static readonly ProfilerMarker ReclaimMeshObjectPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver+PlayspaceAdapter.ReclaimMeshObject");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_7;
		memset((&L_7), 0, sizeof(L_7));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_7), _stringLiteral6E059C585DE480303757054B787EF7E38A3041ED, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->set_ReclaimMeshObjectPerfMarker_52(L_7);
		// private static readonly ProfilerMarker ConfigureObserverVolumePerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver+PlayspaceAdapter.ConfigureObserverVolume");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_8), _stringLiteral27A9EEA0DF12B45E99809B913FBA30DBFDB54081, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->set_ConfigureObserverVolumePerfMarker_53(L_8);
		// private static readonly ProfilerMarker UpdateMeshesPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver+PlayspaceAdapter.UpdateMeshes");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_9), _stringLiteral3B761D1FF7C4CFC282EFF97CD7CDD2E0DB19205F, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->set_UpdateMeshesPerfMarker_54(L_9);
		// private static readonly ProfilerMarker MeshGenerationActionPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver+PlayspaceAdapter.MeshGenerationAction");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_10), _stringLiteralF53DDA41C3100B18B00DB7F11B7FA7767D6E19C0, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC_il2cpp_TypeInfo_var))->set_MeshGenerationActionPerfMarker_55(L_10);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::<RequestMesh>b__22_0(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__22_0_m6677AD90FE01C3AE9DCB4DBC93E5D6017DC399F1 (GenericXRSDKSpatialMeshObserver_tE9DDC854D1111F9A87530AA2E29E7DDECE93A2BC * __this, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF  ___meshGenerationResult0, const RuntimeMethod* method)
{
	{
		// XRSubsystemHelpers.MeshSubsystem.GenerateMeshAsync(meshId, newMesh.Filter.mesh, newMesh.Collider, MeshVertexAttributes.Normals, (MeshGenerationResult meshGenerationResult) => MeshGenerationAction(meshGenerationResult));
		MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF  L_0 = ___meshGenerationResult0;
		GenericXRSDKSpatialMeshObserver_MeshGenerationAction_mC43C0A5CD1C83A0C6A879B0E09DDC375D7B40283(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::.ctor(Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile,Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem__ctor_m7D707C6A8D41E2803D028E8430360092496558AC (XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD * __this, MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * ___profile0, int32_t ___scale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB67961043E6A691CE0B1DF2893B07BEFCAD9C60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		__this->set_U3CNameU3Ek__BackingField_48(_stringLiteralAB67961043E6A691CE0B1DF2893B07BEFCAD9C60);
		// ExperienceScale scale) : base(profile, scale)
		MixedRealityBoundaryVisualizationProfile_tAACFA261997793E3318DF0D245C70D6886B088EF * L_0 = ___profile0;
		int32_t L_1 = ___scale1;
		IL2CPP_RUNTIME_CLASS_INIT(BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13_il2cpp_TypeInfo_var);
		BaseBoundarySystem__ctor_m9E175AB60C64036D3BD22077205178E41B016865(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::get_IsXRDevicePresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKBoundarySystem_get_IsXRDevicePresent_mF0B008DCE7E27511917F8F2C31E61DA8BD8DDA3D (XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * V_0 = NULL;
	{
		// List<InputDevice> devices = new List<InputDevice>();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_0 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1(L_0, /*hidden argument*/List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		V_0 = L_0;
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HeadMounted, devices);
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_1 = V_0;
		InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC(1, L_1, /*hidden argument*/NULL);
		// return devices.Count > 0;
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_inline(L_2, /*hidden argument*/List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.String Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSDKBoundarySystem_get_Name_mF4A3887D30C5C66ECE9D14A0AAB4D629F209057F (XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem_set_Name_m934EB2BE253D515526EDD2BAE4FB544381F9864B (XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_48(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::GetBoundaryGeometry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * XRSDKBoundarySystem_GetBoundaryGeometry_mDA57D8F15BD4A2D05C296052747B81CCABC7706A (XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_0 = NULL;
	Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * V_2 = NULL;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * G_B2_0 = NULL;
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (XRSubsystemHelpers.InputSubsystem?.GetTrackingOriginMode() != TrackingOriginModeFlags.Floor)
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0;
		L_0 = XRSubsystemHelpers_get_InputSubsystem_m0B16B29476C08EC99668D663CE3CC8D2A5E975E8(/*hidden argument*/NULL);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0017;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0017:
	{
		if (!G_B3_0)
		{
			goto IL_001b;
		}
	}
	{
		// return null;
		return (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)NULL;
	}

IL_001b:
	{
		// var boundaryGeometry = new List<Vector3>(0);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82(L_3, 0, /*hidden argument*/List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_RuntimeMethod_var);
		V_0 = L_3;
		// if (!XRSubsystemHelpers.InputSubsystem.TryGetBoundaryPoints(boundaryGeometry) || boundaryGeometry.Count == 0)
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_4;
		L_4 = XRSubsystemHelpers_get_InputSubsystem_m0B16B29476C08EC99668D663CE3CC8D2A5E975E8(/*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = XRInputSubsystem_TryGetBoundaryPoints_m14643859D1DD97631C2D75E74C7EE60C37FFC810(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_7, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_008f;
		}
	}

IL_0037:
	{
		// SubsystemManager.GetInstances(XRInputSubsystems);
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_9 = ((XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_il2cpp_TypeInfo_var))->get_XRInputSubsystems_47();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6(L_9, /*hidden argument*/SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_10 = ((XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_il2cpp_TypeInfo_var))->get_XRInputSubsystems_47();
		NullCheck(L_10);
		Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  L_11;
		L_11 = List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14(L_10, /*hidden argument*/List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14_RuntimeMethod_var);
		V_1 = L_11;
	}

IL_004c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_004e:
		{
			// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_12;
			L_12 = Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_inline((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_RuntimeMethod_var);
			V_2 = L_12;
			// if (xrInputSubsystem.running &&
			//     xrInputSubsystem.TryGetBoundaryPoints(boundaryGeometry) &&
			//     boundaryGeometry.Count > 0)
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_13 = V_2;
			NullCheck(L_13);
			bool L_14;
			L_14 = IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2(L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_0074;
			}
		}

IL_005e:
		{
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_15 = V_2;
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_16 = V_0;
			NullCheck(L_15);
			bool L_17;
			L_17 = XRInputSubsystem_TryGetBoundaryPoints_m14643859D1DD97631C2D75E74C7EE60C37FFC810(L_15, L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_0074;
			}
		}

IL_0067:
		{
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_18 = V_0;
			NullCheck(L_18);
			int32_t L_19;
			L_19 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_18, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
			if ((((int32_t)L_19) <= ((int32_t)0)))
			{
				goto IL_0074;
			}
		}

IL_0070:
		{
			// return boundaryGeometry;
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_20 = V_0;
			V_3 = L_20;
			IL2CPP_LEAVE(0x91, FINALLY_007f);
		}

IL_0074:
		{
			// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
			bool L_21;
			L_21 = Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_004e;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_007f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007f;
	}

FINALLY_007f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103_RuntimeMethod_var);
		IL2CPP_END_FINALLY(127)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(127)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
	}

IL_008d:
	{
		// return null;
		return (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)NULL;
	}

IL_008f:
	{
		// return boundaryGeometry;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_22 = V_0;
		return L_22;
	}

IL_0091:
	{
		// }
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_23 = V_3;
		return L_23;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::SetTrackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem_SetTrackingSpace_mEA5FBF57E3039D5F34FEE2CFE3C8DCEEB8E76112 (XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ADEB1C97F1408CD72A1A98F3D1A8119B9D34A54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F2C450604BC0A4EDB95D10405537D65414A600B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (Scale)
		int32_t L_0;
		L_0 = BaseBoundarySystem_get_Scale_m81EA6E785E9C648A6BAFD3C8FC05E5AE78C62656_inline(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0023;
			}
			case 3:
			{
				goto IL_0023;
			}
			case 4:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_002b;
	}

IL_0023:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Floor;
		V_0 = 2;
		// break;
		goto IL_0037;
	}

IL_0027:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Device;
		V_0 = 1;
		// break;
		goto IL_0037;
	}

IL_002b:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Device;
		V_0 = 1;
		// Debug.LogWarning("Unknown / unsupported ExperienceScale. Defaulting to Device tracking space.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral6ADEB1C97F1408CD72A1A98F3D1A8119B9D34A54, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// if (!XRSubsystemHelpers.InputSubsystem.TrySetTrackingOriginMode(trackingOriginMode))
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_2;
		L_2 = XRSubsystemHelpers_get_InputSubsystem_m0B16B29476C08EC99668D663CE3CC8D2A5E975E8(/*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = XRInputSubsystem_TrySetTrackingOriginMode_m43E5453F805376A64B8337E71AED773D41C9006D(L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.LogWarning("Tracking origin unable to be set.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral9F2C450604BC0A4EDB95D10405537D65414A600B, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem__cctor_m447F7FAE47E801BA1544A3AB0683F3D8088E2DA7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<XRInputSubsystem> XRInputSubsystems = new List<XRInputSubsystem>();
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *)il2cpp_codegen_object_new(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C(L_0, /*hidden argument*/List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		((XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t926FE8F325815B86042451F9AB87674B6C63E9FD_il2cpp_TypeInfo_var))->set_XRInputSubsystems_47(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_m2D76961360C555DC9C9A647977055630DE5D1AA1 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDB5E0EAE33B10086A86CB16555FF7D4B3ECCADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEAA34D1BD6D20970F5C012D7E89B1674158B4C78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<InputDevice> inputDevices = new List<InputDevice>();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_0 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1(L_0, /*hidden argument*/List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		__this->set_inputDevices_15(L_0);
		// private readonly List<InputDevice> inputDevicesSubset = new List<InputDevice>();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_1 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1(L_1, /*hidden argument*/List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		__this->set_inputDevicesSubset_16(L_1);
		// private readonly List<InputDevice> lastInputDevices = new List<InputDevice>();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_2 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1(L_2, /*hidden argument*/List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		__this->set_lastInputDevices_17(L_2);
		// private List<InputDeviceCharacteristics> GenericDesiredInputCharacteristics = new List<InputDeviceCharacteristics>()
		// {
		//     InputDeviceCharacteristics.Controller,
		//     InputDeviceCharacteristics.HandTracking
		// };
		List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * L_3 = (List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C *)il2cpp_codegen_object_new(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C_il2cpp_TypeInfo_var);
		List_1__ctor_mEAA34D1BD6D20970F5C012D7E89B1674158B4C78(L_3, /*hidden argument*/List_1__ctor_mEAA34D1BD6D20970F5C012D7E89B1674158B4C78_RuntimeMethod_var);
		List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_mDB5E0EAE33B10086A86CB16555FF7D4B3ECCADC8(L_4, ((int32_t)64), /*hidden argument*/List_1_Add_mDB5E0EAE33B10086A86CB16555FF7D4B3ECCADC8_RuntimeMethod_var);
		List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_mDB5E0EAE33B10086A86CB16555FF7D4B3ECCADC8(L_5, 8, /*hidden argument*/List_1_Add_mDB5E0EAE33B10086A86CB16555FF7D4B3ECCADC8_RuntimeMethod_var);
		__this->set_GenericDesiredInputCharacteristics_18(L_5);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_6 = ___inputSystem0;
		String_t* L_7 = ___name1;
		uint32_t L_8 = ___priority2;
		BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * L_9 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m97D08340B47B03586B4D1378C19B4DDEA831F443(__this, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKDeviceManager_CheckCapability_m31FE40F1C3AC5AAED1A75D1FB58644154E771EE5 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	{
		// return (capability == MixedRealityCapability.MotionController);
		int32_t L_0 = ___capability0;
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::get_DesiredInputCharacteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * XRSDKDeviceManager_get_DesiredInputCharacteristics_m99986225BCB267B5B76E5AE8CC6084882F2D0AFE (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, const RuntimeMethod* method)
{
	{
		// get { return GenericDesiredInputCharacteristics; }
		List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * L_0 = __this->get_GenericDesiredInputCharacteristics_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::set_DesiredInputCharacteristics(System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_set_DesiredInputCharacteristics_mF886FFDF3B12C0666DDAF95A61F40E2890001D4E (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___value0, const RuntimeMethod* method)
{
	{
		// set { GenericDesiredInputCharacteristics = value; }
		List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * L_0 = ___value0;
		__this->set_GenericDesiredInputCharacteristics_18(L_0);
		// set { GenericDesiredInputCharacteristics = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Update_m01102B71C2A04A1FAA31C76F4F23276DB20A930A (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m18DE7271392E08FF54166D2CA18882E81F5F4CC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF278140E0745E7507DFFAFF46648CC9662A79872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m415B9F6A307485B1492DF0ECAC5FFE5783D35F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mC7756AF0E030C6D34E8D5FE9B1A80E09279B46CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m66B80D7A7119716088392F93816526FE69AF33CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDCD78B8AED12134A801BBE0A8889EE8991D3BC6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mEA748B085AE9CEF4A39037F765CC22CAD8ECFD3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * V_6 = NULL;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 6);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_19();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// base.Update();
			BaseService_Update_m968330C6BC77927CC3FE558A1E64671E8AA1CB16(__this, /*hidden argument*/NULL);
			// if (XRSubsystemHelpers.InputSubsystem == null || !XRSubsystemHelpers.InputSubsystem.running)
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_2;
			L_2 = XRSubsystemHelpers_get_InputSubsystem_m0B16B29476C08EC99668D663CE3CC8D2A5E975E8(/*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0027;
			}
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_3;
			L_3 = XRSubsystemHelpers_get_InputSubsystem_m0B16B29476C08EC99668D663CE3CC8D2A5E975E8(/*hidden argument*/NULL);
			NullCheck(L_3);
			bool L_4;
			L_4 = IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_002c;
			}
		}

IL_0027:
		{
			// return;
			IL2CPP_LEAVE(0x18D, FINALLY_017f);
		}

IL_002c:
		{
			// inputDevices.Clear();
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_5 = __this->get_inputDevices_15();
			NullCheck(L_5);
			List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557(L_5, /*hidden argument*/List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557_RuntimeMethod_var);
			// foreach (InputDeviceCharacteristics inputDeviceCharacteristics in DesiredInputCharacteristics)
			List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * L_6;
			L_6 = VirtFuncInvoker0< List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * >::Invoke(35 /* System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::get_DesiredInputCharacteristics() */, __this);
			NullCheck(L_6);
			Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3  L_7;
			L_7 = List_1_GetEnumerator_mDCD78B8AED12134A801BBE0A8889EE8991D3BC6A(L_6, /*hidden argument*/List_1_GetEnumerator_mDCD78B8AED12134A801BBE0A8889EE8991D3BC6A_RuntimeMethod_var);
			V_2 = L_7;
		}

IL_0043:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00a3;
			}

IL_0045:
			{
				// foreach (InputDeviceCharacteristics inputDeviceCharacteristics in DesiredInputCharacteristics)
				uint32_t L_8;
				L_8 = Enumerator_get_Current_m415B9F6A307485B1492DF0ECAC5FFE5783D35F56_inline((Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m415B9F6A307485B1492DF0ECAC5FFE5783D35F56_RuntimeMethod_var);
				// InputDevices.GetDevicesWithCharacteristics(inputDeviceCharacteristics, inputDevicesSubset);
				List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_9 = __this->get_inputDevicesSubset_16();
				InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC(L_8, L_9, /*hidden argument*/NULL);
				// foreach (InputDevice device in inputDevicesSubset)
				List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_10 = __this->get_inputDevicesSubset_16();
				NullCheck(L_10);
				Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  L_11;
				L_11 = List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B(L_10, /*hidden argument*/List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var);
				V_3 = L_11;
			}

IL_0063:
			try
			{ // begin try (depth: 3)
				{
					goto IL_008a;
				}

IL_0065:
				{
					// foreach (InputDevice device in inputDevicesSubset)
					InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_12;
					L_12 = Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_inline((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var);
					V_4 = L_12;
					// if (!inputDevices.Contains(device))
					List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_13 = __this->get_inputDevices_15();
					InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_14 = V_4;
					NullCheck(L_13);
					bool L_15;
					L_15 = List_1_Contains_m66B80D7A7119716088392F93816526FE69AF33CD(L_13, L_14, /*hidden argument*/List_1_Contains_m66B80D7A7119716088392F93816526FE69AF33CD_RuntimeMethod_var);
					if (L_15)
					{
						goto IL_008a;
					}
				}

IL_007d:
				{
					// inputDevices.Add(device);
					List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_16 = __this->get_inputDevices_15();
					InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_17 = V_4;
					NullCheck(L_16);
					List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882(L_16, L_17, /*hidden argument*/List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882_RuntimeMethod_var);
				}

IL_008a:
				{
					// foreach (InputDevice device in inputDevicesSubset)
					bool L_18;
					L_18 = Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var);
					if (L_18)
					{
						goto IL_0065;
					}
				}

IL_0093:
				{
					IL2CPP_LEAVE(0xA3, FINALLY_0095);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0095;
			}

FINALLY_0095:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var);
				IL2CPP_END_FINALLY(149)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(149)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0xA3, IL_00a3)
			}

IL_00a3:
			{
				// foreach (InputDeviceCharacteristics inputDeviceCharacteristics in DesiredInputCharacteristics)
				bool L_19;
				L_19 = Enumerator_MoveNext_mF278140E0745E7507DFFAFF46648CC9662A79872((Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mF278140E0745E7507DFFAFF46648CC9662A79872_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0045;
				}
			}

IL_00ac:
			{
				IL2CPP_LEAVE(0xBC, FINALLY_00ae);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ae;
		}

FINALLY_00ae:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m18DE7271392E08FF54166D2CA18882E81F5F4CC1((Enumerator_t4996A0E3765B8F1C4841F2EFC54CB78B37AFACB3 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m18DE7271392E08FF54166D2CA18882E81F5F4CC1_RuntimeMethod_var);
			IL2CPP_END_FINALLY(174)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(174)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xBC, IL_00bc)
		}

IL_00bc:
		{
			// foreach (InputDevice device in inputDevices)
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_20 = __this->get_inputDevices_15();
			NullCheck(L_20);
			Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  L_21;
			L_21 = List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B(L_20, /*hidden argument*/List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var);
			V_3 = L_21;
		}

IL_00c8:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0110;
			}

IL_00ca:
			{
				// foreach (InputDevice device in inputDevices)
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_22;
				L_22 = Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_inline((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var);
				V_5 = L_22;
				// if (device.isValid)
				bool L_23;
				L_23 = InputDevice_get_isValid_mEC01F2DE9E9A9E1F612176B8B955F29864294DF6((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_5), /*hidden argument*/NULL);
				if (!L_23)
				{
					goto IL_0110;
				}
			}

IL_00dc:
			{
				// GenericXRSDKController controller = GetOrAddController(device);
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_24 = V_5;
				GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_25;
				L_25 = VirtFuncInvoker1< GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  >::Invoke(37 /* Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice) */, __this, L_24);
				V_6 = L_25;
				// if (controller != null && lastInputDevices.Contains(device))
				GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_26 = V_6;
				if (!L_26)
				{
					goto IL_0110;
				}
			}

IL_00ea:
			{
				List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_27 = __this->get_lastInputDevices_17();
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_28 = V_5;
				NullCheck(L_27);
				bool L_29;
				L_29 = List_1_Contains_m66B80D7A7119716088392F93816526FE69AF33CD(L_27, L_28, /*hidden argument*/List_1_Contains_m66B80D7A7119716088392F93816526FE69AF33CD_RuntimeMethod_var);
				if (!L_29)
				{
					goto IL_0110;
				}
			}

IL_00f9:
			{
				// lastInputDevices.Remove(device);
				List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_30 = __this->get_lastInputDevices_17();
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_31 = V_5;
				NullCheck(L_30);
				bool L_32;
				L_32 = List_1_Remove_mEA748B085AE9CEF4A39037F765CC22CAD8ECFD3A(L_30, L_31, /*hidden argument*/List_1_Remove_mEA748B085AE9CEF4A39037F765CC22CAD8ECFD3A_RuntimeMethod_var);
				// controller.UpdateController(device);
				GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_33 = V_6;
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_34 = V_5;
				NullCheck(L_33);
				VirtActionInvoker1< InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice) */, L_33, L_34);
			}

IL_0110:
			{
				// foreach (InputDevice device in inputDevices)
				bool L_35;
				L_35 = Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_00ca;
				}
			}

IL_0119:
			{
				IL2CPP_LEAVE(0x129, FINALLY_011b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_011b;
		}

FINALLY_011b:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var);
			IL2CPP_END_FINALLY(283)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(283)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x129, IL_0129)
		}

IL_0129:
		{
			// foreach (InputDevice device in lastInputDevices)
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_36 = __this->get_lastInputDevices_17();
			NullCheck(L_36);
			Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  L_37;
			L_37 = List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B(L_36, /*hidden argument*/List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var);
			V_3 = L_37;
		}

IL_0135:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0148;
			}

IL_0137:
			{
				// foreach (InputDevice device in lastInputDevices)
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_38;
				L_38 = Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_inline((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var);
				V_7 = L_38;
				// RemoveController(device);
				InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_39 = V_7;
				VirtActionInvoker1< InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice) */, __this, L_39);
			}

IL_0148:
			{
				// foreach (InputDevice device in lastInputDevices)
				bool L_40;
				L_40 = Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_0137;
				}
			}

IL_0151:
			{
				IL2CPP_LEAVE(0x161, FINALLY_0153);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0153;
		}

FINALLY_0153:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_3), /*hidden argument*/Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var);
			IL2CPP_END_FINALLY(339)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(339)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x161, IL_0161)
		}

IL_0161:
		{
			// lastInputDevices.Clear();
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_41 = __this->get_lastInputDevices_17();
			NullCheck(L_41);
			List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557(L_41, /*hidden argument*/List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557_RuntimeMethod_var);
			// lastInputDevices.AddRange(inputDevices);
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_42 = __this->get_lastInputDevices_17();
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_43 = __this->get_inputDevices_15();
			NullCheck(L_42);
			List_1_AddRange_mC7756AF0E030C6D34E8D5FE9B1A80E09279B46CD(L_42, L_43, /*hidden argument*/List_1_AddRange_mC7756AF0E030C6D34E8D5FE9B1A80E09279B46CD_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x18D, FINALLY_017f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_017f;
	}

FINALLY_017f:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(383)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(383)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x18D, IL_018d)
	}

IL_018d:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * XRSDKDeviceManager_GetOrAddController_m7FA759CEEFA4932DBAAADBE321F7A449C7815761 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC3392A0E9E9EB05973D3080F10A7393E03AF070E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedControllerType_t877DA6C54014EDDC1606A4D54E1872E52E50F02C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25AE702FFEA928066DA09FC11B4BC7B967DE10D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A0748277A228E387025D0FBFFFA94EF2E6E219B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2C604A03D20BDF641FF4B72AEF3DC61C4CD432F);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	Type_t * V_4 = NULL;
	int32_t V_5 = 0;
	IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * V_8 = NULL;
	GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * V_9 = NULL;
	int32_t V_10 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	RuntimeObject* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B21_0;
	memset((&G_B21_0), 0, sizeof(G_B21_0));
	int32_t G_B21_1 = 0;
	IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	RuntimeObject* G_B24_0 = NULL;
	RuntimeObject* G_B23_0 = NULL;
	{
		// using (GetOrAddControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_GetOrAddControllerPerfMarker_20();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (ActiveControllers.ContainsKey(inputDevice))
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
			Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_2 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_14();
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_3 = ___inputDevice0;
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_001b:
		{
			// var controller = ActiveControllers[inputDevice];
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
			Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_5 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_14();
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_6 = ___inputDevice0;
			NullCheck(L_5);
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_7;
			L_7 = Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02_RuntimeMethod_var);
			// return controller;
			V_9 = L_7;
			IL2CPP_LEAVE(0x1C3, FINALLY_01b5);
		}

IL_002d:
		{
			// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Left))
			uint32_t L_8;
			L_8 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
			uint32_t L_9 = L_8;
			RuntimeObject * L_10 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_9);
			uint32_t L_11 = ((uint32_t)((int32_t)256));
			RuntimeObject * L_12 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_11);
			NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_10);
			bool L_13;
			L_13 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_10, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_004e;
			}
		}

IL_004a:
		{
			// controllingHand = Handedness.Left;
			V_2 = 1;
			// }
			goto IL_0071;
		}

IL_004e:
		{
			// else if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Right))
			uint32_t L_14;
			L_14 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
			uint32_t L_15 = L_14;
			RuntimeObject * L_16 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_15);
			uint32_t L_17 = ((uint32_t)((int32_t)512));
			RuntimeObject * L_18 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_17);
			NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_16);
			bool L_19;
			L_19 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_16, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_006f;
			}
		}

IL_006b:
		{
			// controllingHand = Handedness.Right;
			V_2 = 2;
			// }
			goto IL_0071;
		}

IL_006f:
		{
			// controllingHand = Handedness.None;
			V_2 = 0;
		}

IL_0071:
		{
			// SupportedControllerType currentControllerType = GetCurrentControllerType(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_20 = ___inputDevice0;
			int32_t L_21;
			L_21 = VirtFuncInvoker1< int32_t, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  >::Invoke(41 /* Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice) */, __this, L_20);
			V_3 = L_21;
			// Type controllerType = GetControllerType(currentControllerType);
			int32_t L_22 = V_3;
			Type_t * L_23;
			L_23 = VirtFuncInvoker1< Type_t *, int32_t >::Invoke(39 /* System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType) */, __this, L_22);
			V_4 = L_23;
			// InputSourceType inputSourceType = GetInputSourceType(currentControllerType);
			int32_t L_24 = V_3;
			int32_t L_25;
			L_25 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(40 /* Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType) */, __this, L_24);
			V_5 = L_25;
			// IMixedRealityPointer[] pointers = RequestPointers(currentControllerType, controllingHand);
			int32_t L_26 = V_3;
			uint8_t L_27 = V_2;
			IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* L_28;
			L_28 = VirtFuncInvoker2< IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F*, int32_t, uint8_t >::Invoke(31 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointers(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, __this, L_26, L_27);
			V_6 = L_28;
			// IMixedRealityInputSource inputSource = Service?.RequestNewGenericInputSource($"{currentControllerType} Controller {controllingHand}", pointers, inputSourceType);
			RuntimeObject* L_29;
			L_29 = BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mCCA756CEEBC6B1C7036D280168F775B63A170BD6_RuntimeMethod_var);
			RuntimeObject* L_30 = L_29;
			G_B9_0 = L_30;
			if (L_30)
			{
				G_B10_0 = L_30;
				goto IL_00a2;
			}
		}

IL_009e:
		{
			G_B11_0 = ((RuntimeObject*)(NULL));
			goto IL_00c1;
		}

IL_00a2:
		{
			int32_t L_31 = V_3;
			int32_t L_32 = L_31;
			RuntimeObject * L_33 = Box(SupportedControllerType_t877DA6C54014EDDC1606A4D54E1872E52E50F02C_il2cpp_TypeInfo_var, &L_32);
			uint8_t L_34 = V_2;
			uint8_t L_35 = L_34;
			RuntimeObject * L_36 = Box(Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21_il2cpp_TypeInfo_var, &L_35);
			String_t* L_37;
			L_37 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral8A0748277A228E387025D0FBFFFA94EF2E6E219B, L_33, L_36, /*hidden argument*/NULL);
			IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* L_38 = V_6;
			int32_t L_39 = V_5;
			NullCheck(G_B10_0);
			RuntimeObject* L_40;
			L_40 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F*, int32_t >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B10_0, L_37, L_38, L_39);
			G_B11_0 = L_40;
		}

IL_00c1:
		{
			V_7 = G_B11_0;
			// GenericXRSDKController detectedController = Activator.CreateInstance(controllerType, TrackingState.NotTracked, controllingHand, inputSource, null) as GenericXRSDKController;
			Type_t * L_41 = V_4;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = L_42;
			int32_t L_44 = ((int32_t)1);
			RuntimeObject * L_45 = Box(TrackingState_tF1797874F4C862EF716DCF9E952F427C7CEA9632_il2cpp_TypeInfo_var, &L_44);
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, L_45);
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_45);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46 = L_43;
			uint8_t L_47 = V_2;
			uint8_t L_48 = L_47;
			RuntimeObject * L_49 = Box(Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21_il2cpp_TypeInfo_var, &L_48);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_49);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_49);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_50 = L_46;
			RuntimeObject* L_51 = V_7;
			NullCheck(L_50);
			ArrayElementTypeCheck (L_50, L_51);
			(L_50)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_51);
			RuntimeObject * L_52;
			L_52 = Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1(L_41, L_50, /*hidden argument*/NULL);
			V_8 = ((GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 *)IsInstClass((RuntimeObject*)L_52, GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_il2cpp_TypeInfo_var));
			// if (detectedController == null || !detectedController.Enabled)
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_53 = V_8;
			if (!L_53)
			{
				goto IL_00fb;
			}
		}

IL_00f2:
		{
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_54 = V_8;
			NullCheck(L_54);
			bool L_55;
			L_55 = BaseController_get_Enabled_m745CDDA851D0C022D2705E1E225AD97095F9200E_inline(L_54, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_011e;
			}
		}

IL_00fb:
		{
			// Debug.LogError($"Failed to create {controllerType.Name} controller");
			Type_t * L_56 = V_4;
			NullCheck(L_56);
			String_t* L_57;
			L_57 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_56);
			String_t* L_58;
			L_58 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralC2C604A03D20BDF641FF4B72AEF3DC61C4CD432F, L_57, _stringLiteral25AE702FFEA928066DA09FC11B4BC7B967DE10D4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_58, /*hidden argument*/NULL);
			// return null;
			V_9 = (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 *)NULL;
			IL2CPP_LEAVE(0x1C3, FINALLY_01b5);
		}

IL_011e:
		{
			// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
			V_10 = 0;
			goto IL_013f;
		}

IL_0123:
		{
			// detectedController.InputSource.Pointers[i].Controller = detectedController;
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_59 = V_8;
			NullCheck(L_59);
			RuntimeObject* L_60;
			L_60 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(L_59, /*hidden argument*/NULL);
			NullCheck(L_60);
			IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* L_61;
			L_61 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2_il2cpp_TypeInfo_var, L_60);
			int32_t L_62 = V_10;
			NullCheck(L_61);
			int32_t L_63 = L_62;
			RuntimeObject* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_65 = V_8;
			NullCheck(L_64);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_64, L_65);
			// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
			int32_t L_66 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		}

IL_013f:
		{
			// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
			int32_t L_67 = V_10;
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_68 = V_8;
			NullCheck(L_68);
			RuntimeObject* L_69;
			L_69 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(L_68, /*hidden argument*/NULL);
			RuntimeObject* L_70 = L_69;
			G_B17_0 = L_70;
			G_B17_1 = L_67;
			if (L_70)
			{
				G_B18_0 = L_70;
				G_B18_1 = L_67;
				goto IL_0158;
			}
		}

IL_014b:
		{
			il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_71 = V_12;
			G_B21_0 = L_71;
			G_B21_1 = G_B17_1;
			goto IL_0174;
		}

IL_0158:
		{
			NullCheck(G_B18_0);
			IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* L_72;
			L_72 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2_il2cpp_TypeInfo_var, G_B18_0);
			IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* L_73 = L_72;
			G_B19_0 = L_73;
			G_B19_1 = G_B18_1;
			if (L_73)
			{
				G_B20_0 = L_73;
				G_B20_1 = G_B18_1;
				goto IL_016d;
			}
		}

IL_0160:
		{
			il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_74 = V_12;
			G_B21_0 = L_74;
			G_B21_1 = G_B19_1;
			goto IL_0174;
		}

IL_016d:
		{
			NullCheck(G_B20_0);
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_75;
			memset((&L_75), 0, sizeof(L_75));
			Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_75), ((int32_t)((int32_t)(((RuntimeArray*)G_B20_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
			G_B21_0 = L_75;
			G_B21_1 = G_B20_1;
		}

IL_0174:
		{
			V_11 = G_B21_0;
			int32_t L_76;
			L_76 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_11), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
			bool L_77;
			L_77 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_11), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((int32_t)G_B21_1) < ((int32_t)L_76))? 1 : 0)&(int32_t)L_77)))
			{
				goto IL_0123;
			}
		}

IL_0189:
		{
			// ActiveControllers.Add(inputDevice, detectedController);
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
			Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_78 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_14();
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_79 = ___inputDevice0;
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_80 = V_8;
			NullCheck(L_78);
			Dictionary_2_Add_mC3392A0E9E9EB05973D3080F10A7393E03AF070E(L_78, L_79, L_80, /*hidden argument*/Dictionary_2_Add_mC3392A0E9E9EB05973D3080F10A7393E03AF070E_RuntimeMethod_var);
			// CoreServices.InputSystem?.RaiseSourceDetected(detectedController.InputSource, detectedController);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_81;
			L_81 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_82 = L_81;
			G_B23_0 = L_82;
			if (L_82)
			{
				G_B24_0 = L_82;
				goto IL_01a1;
			}
		}

IL_019e:
		{
			goto IL_01af;
		}

IL_01a1:
		{
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_83 = V_8;
			NullCheck(L_83);
			RuntimeObject* L_84;
			L_84 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(L_83, /*hidden argument*/NULL);
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_85 = V_8;
			NullCheck(G_B24_0);
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceDetected(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B24_0, L_84, L_85);
		}

IL_01af:
		{
			// return detectedController;
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_86 = V_8;
			V_9 = L_86;
			IL2CPP_LEAVE(0x1C3, FINALLY_01b5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b5;
	}

FINALLY_01b5:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(437)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(437)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C3, IL_01c3)
	}

IL_01c3:
	{
		// }
		GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_87 = V_9;
		return L_87;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_RemoveController_mA1DE819FE32890F666B9666069C6DBC2E4DB1B33 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9F5BA5B79A182AFDC2DF26CF50D5C1ABF31D5734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityControllerVisualizer_t9E9FEB797F41C255D06A458C4F739A3E28C70CB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// using (RemoveControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_RemoveControllerPerfMarker_21();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (ActiveControllers.ContainsKey(inputDevice))
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
			Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_2 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_14();
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_3 = ___inputDevice0;
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_mC2DACDF139CA610FD19BB15681E7E796D27DE866_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0085;
			}
		}

IL_001b:
		{
			// GenericXRSDKController controller = ActiveControllers[inputDevice];
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
			Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_5 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_14();
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_6 = ___inputDevice0;
			NullCheck(L_5);
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_7;
			L_7 = Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m7DC25952CD75AF4D9E51FA6736618F8ED7285C02_RuntimeMethod_var);
			V_2 = L_7;
			// if (controller != null)
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_0079;
			}
		}

IL_002a:
		{
			// CoreServices.InputSystem?.RaiseSourceLost(controller.InputSource, controller);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
			RuntimeObject* L_9;
			L_9 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
			RuntimeObject* L_10 = L_9;
			G_B4_0 = L_10;
			if (L_10)
			{
				G_B5_0 = L_10;
				goto IL_0035;
			}
		}

IL_0032:
		{
			goto IL_0041;
		}

IL_0035:
		{
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_11 = V_2;
			NullCheck(L_11);
			RuntimeObject* L_12;
			L_12 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(L_11, /*hidden argument*/NULL);
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_13 = V_2;
			NullCheck(G_B5_0);
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceLost(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, G_B5_0, L_12, L_13);
		}

IL_0041:
		{
			// RecyclePointers(controller.InputSource);
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_14 = V_2;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline(L_14, /*hidden argument*/NULL);
			VirtActionInvoker1< RuntimeObject* >::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointers(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, __this, L_15);
			// if (controller.Visualizer != null &&
			//     controller.Visualizer.GameObjectProxy != null)
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_16 = V_2;
			NullCheck(L_16);
			RuntimeObject* L_17;
			L_17 = BaseController_get_Visualizer_m759A7A702B8B5BE0C913AB9C1C6516DA2F32CF77_inline(L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_0079;
			}
		}

IL_0055:
		{
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_18 = V_2;
			NullCheck(L_18);
			RuntimeObject* L_19;
			L_19 = BaseController_get_Visualizer_m759A7A702B8B5BE0C913AB9C1C6516DA2F32CF77_inline(L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = InterfaceFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t9E9FEB797F41C255D06A458C4F739A3E28C70CB5_il2cpp_TypeInfo_var, L_19);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_21;
			L_21 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_20, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_0079;
			}
		}

IL_0068:
		{
			// controller.Visualizer.GameObjectProxy.SetActive(false);
			GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8 * L_22 = V_2;
			NullCheck(L_22);
			RuntimeObject* L_23;
			L_23 = BaseController_get_Visualizer_m759A7A702B8B5BE0C913AB9C1C6516DA2F32CF77_inline(L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
			L_24 = InterfaceFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t9E9FEB797F41C255D06A458C4F739A3E28C70CB5_il2cpp_TypeInfo_var, L_23);
			NullCheck(L_24);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)0, /*hidden argument*/NULL);
		}

IL_0079:
		{
			// ActiveControllers.Remove(inputDevice);
			IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
			Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_25 = ((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->get_ActiveControllers_14();
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_26 = ___inputDevice0;
			NullCheck(L_25);
			bool L_27;
			L_27 = Dictionary_2_Remove_m9F5BA5B79A182AFDC2DF26CF50D5C1ABF31D5734(L_25, L_26, /*hidden argument*/Dictionary_2_Remove_m9F5BA5B79A182AFDC2DF26CF50D5C1ABF31D5734_RuntimeMethod_var);
		}

IL_0085:
		{
			// }
			IL2CPP_LEAVE(0x95, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(135)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRSDKDeviceManager_GetControllerType_m309CA4C4AE2810E368AF337AA4184DD4A059413F (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(GenericXRSDKController);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (GenericXRSDKController_t9124BBC8420207A4EFF20C81B3E852737FBD9FA8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_mECB86645E61238DABA9F19486FA60F9CD876A1E3 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	{
		// return InputSourceType.Controller;
		return (int32_t)(2);
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_m1C93AC6F31F7A5DBC5B40BC6CD102131D13C9843 (XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DAF7C48D3FFAE986E4132CE79E47540CD8B7E78);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"{inputDevice.name} does not have a defined controller type, falling back to generic controller type");
		String_t* L_0;
		L_0 = InputDevice_get_name_m5FA211BC67629D36A37753E4D2E524586B66CA89((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral8DAF7C48D3FFAE986E4132CE79E47540CD8B7E78, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// return SupportedControllerType.GenericUnity;
		return (int32_t)(((int32_t)64));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__cctor_m07EB66A0DAA4A46AEE82F8CB5FAFB6F99E069E85 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5D2C1333BB05BA5B7ECF45A53D23A2495961087D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34F5EB88C9344AD2EF11835AB706991FCF81186E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019DC385C2052423E84D7B14DC0877F4B4E649B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4486AC00CC32467350EF386FF7169FB88B9A64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly Dictionary<InputDevice, GenericXRSDKController> ActiveControllers = new Dictionary<InputDevice, GenericXRSDKController>();
		Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E * L_0 = (Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E *)il2cpp_codegen_object_new(Dictionary_2_t2FB6B87AE845471F5ACC7900099F9B8BFE071E0E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5D2C1333BB05BA5B7ECF45A53D23A2495961087D(L_0, /*hidden argument*/Dictionary_2__ctor_m5D2C1333BB05BA5B7ECF45A53D23A2495961087D_RuntimeMethod_var);
		((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->set_ActiveControllers_14(L_0);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] XRSDKDeviceManager.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteralBD4486AC00CC32467350EF386FF7169FB88B9A64, /*hidden argument*/NULL);
		((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_19(L_1);
		// private static readonly ProfilerMarker GetOrAddControllerPerfMarker = new ProfilerMarker("[MRTK] XRSDKDeviceManager.GetOrAddController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteralA019DC385C2052423E84D7B14DC0877F4B4E649B, /*hidden argument*/NULL);
		((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->set_GetOrAddControllerPerfMarker_20(L_2);
		// private static readonly ProfilerMarker RemoveControllerPerfMarker = new ProfilerMarker("[MRTK] XRSDKDeviceManager.RemoveController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral34F5EB88C9344AD2EF11835AB706991FCF81186E, /*hidden argument*/NULL);
		((XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t2A4831339BEF1FB396AA5D6BECED2EFAD7620719_il2cpp_TypeInfo_var))->set_RemoveControllerPerfMarker_21(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.XRInputSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_InputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * XRSDKSubsystemHelpers_get_InputSubsystem_m94F0351A7FBB2B93477A5A3A7A6D2FF6CE6531EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRInputSubsystem InputSubsystem => XRSubsystemHelpers.InputSubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0;
		L_0 = XRSubsystemHelpers_get_InputSubsystem_m0B16B29476C08EC99668D663CE3CC8D2A5E975E8(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * XRSDKSubsystemHelpers_get_MeshSubsystem_mD91B4F2EABAF30026A7F3EB47288D10A8BCB512A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRMeshSubsystem MeshSubsystem => XRSubsystemHelpers.MeshSubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_0;
		L_0 = XRSubsystemHelpers_get_MeshSubsystem_mB3774523D71311D7EF6A872ED278BF340CADDBD1(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * XRSDKSubsystemHelpers_get_DisplaySubsystem_m6F85FE7A2725BD8895EB7152EDDBF2A92D6F55C1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRDisplaySubsystem DisplaySubsystem => XRSubsystemHelpers.DisplaySubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t960857E0D5EC71F93F69821DA88DDA0113794EC9_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0;
		L_0 = XRSubsystemHelpers_get_DisplaySubsystem_mFF0DC34869AFB5EC6EE6342EE6A45CD397D0BDF8(/*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Pose Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter::Concatenate(UnityEngine.Pose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  PlayspaceAdapter_Concatenate_m24A4BEE6CCFF96D97C161A9D8EB96DBA03A6FDB4 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___lhs0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___rhs1, const RuntimeMethod* method)
{
	{
		// return rhs.GetTransformedBy(lhs);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___lhs0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1;
		L_1 = Pose_GetTransformedBy_m36335BACDABCCD298E90AB97995E3D10F2565E64((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&___rhs1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayspaceAdapter_Update_m9037BE2889DD87BA2D4F187B4BE4B403B0AE80DB (PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_StaticFields*)il2cpp_codegen_static_fields_for(PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_4();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// Pose worldFromPlayspace = new Pose(MixedRealityPlayspace.Position, MixedRealityPlayspace.Rotation);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = MixedRealityPlayspace_get_Position_mFA2AD73CFCD44DCEE1D433FF286FF7CDDE8394D0(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = MixedRealityPlayspace_get_Rotation_m4C3F294754D54E4604AFEEB0E8399BFF5933DF05(/*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9((&L_4), L_2, L_3, /*hidden argument*/NULL);
		// Pose anchorPose = new Pose(transform.position, transform.rotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_2), L_6, L_8, /*hidden argument*/NULL);
		// Pose parentPose = Concatenate(worldFromPlayspace, anchorPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10;
		L_10 = PlayspaceAdapter_Concatenate_m24A4BEE6CCFF96D97C161A9D8EB96DBA03A6FDB4(L_4, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// transform.parent.position = parentPose.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_11, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_13 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = L_13.get_position_0();
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_14, /*hidden argument*/NULL);
		// transform.parent.rotation = parentPose.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_15, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_17 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = L_17.get_rotation_1();
		NullCheck(L_16);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_16, L_18, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x7D, FINALLY_006f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(111)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayspaceAdapter__ctor_m73087B822972BE99BD648FA1FF7390A951B70881 (PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayspaceAdapter__cctor_m1989CEF88FCF9760774931C763C7C63815E68C4C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4CF5A1C3A27F671A0337087D7FC648DFC11B434);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver+PlayspaceAdapter.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralC4CF5A1C3A27F671A0337087D7FC648DFC11B434, /*hidden argument*/NULL);
		((PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_StaticFields*)il2cpp_codegen_static_fields_for(PlayspaceAdapter_t9FD3E47EA1E0236D00FD2C2DC253C3DCB894946C_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_4(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  MixedRealityPose_get_ZeroIdentity_m95D9F3844DD9A90DAEC2046FE9152D721CCF19D2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var);
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_0 = ((MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m745CDDA851D0C022D2705E1E225AD97095F9200E_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* BaseController_get_Interactions_m75EF395F48E71C90260E0458112D130F2859EE5B_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_tCD44540A965834E27292C207E9BB647B895CB2E7* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_Enabled_m7215364614CFBF1B603CDC712914188512C7EC86_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CEnabledU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseController_get_TrackingState_mCE7F3AC3854AEF591203E0F504F088C4C63279C6_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState TrackingState { get; protected set; }
		int32_t L_0 = __this->get_U3CTrackingStateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m796D2F38A55FB8C0182B698B5DBC9C9AD5619B82_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPositionAvailableU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsPositionApproximate_m1BC5891CAFC746F6087C49CBD0884C8EFE59DF8C_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPositionApproximate { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPositionApproximateU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_m3E503E5FBD3241A589790FD9E2FB8001C00F8FC6_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRotationAvailableU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_mC1D412162AC07602B523096F3BBCEE369661EA28_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = __this->get_U3CIsPositionAvailableU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_m8763D3ADEA8ACFDD6826F5696CC8DB51790D8F25_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = __this->get_U3CIsRotationAvailableU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_TrackingState_m514C872F76E3F87CE14250E5E0DD127B87152EE2_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackingState TrackingState { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTrackingStateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m773EB94276F208A7BA4555B67A819F3E47BB72B6_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_position_1(L_0);
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m880A6F5D3947A513E13FEDE089FE7C677A58B27D_inline (MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___value0;
		__this->set_rotation_2(L_0);
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m9DD310DE130215C83E03FBC552F271B80FC48B86_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mDA08F6F89AC029C3E7A9E9735E461A7C4569F308_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// public AxisType AxisType => axisType;
		int32_t L_0 = __this->get_axisType_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mD4B8174B4A84E3A88D0056FA4550C7B8E9F37462_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m5D39EBEE43023C9782742ECC3700D75CD8AF9875_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m1DE2DCDFFCB4EC776273F13FF07583575C7CA7D3_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  MixedRealityInteractionMapping_get_MixedRealityInputAction_m7CF52229CFD831A7E8C15826297D16DE39B79F06_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_m902DEBEC774E88B3157757DA8EDC4D19AFBD89B6_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// return floatData;
		float L_0 = __this->get_floatData_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_mF9CAEAE7685F531EF44CC7011606F7C21EA0B6D6_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// return vector2Data;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_vector2Data_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  MixedRealityInteractionMapping_get_PoseData_m1FE5A5F111B5E311D5532B2754B6232EED0344E2_inline (MixedRealityInteractionMapping_t35BE0798DA4A66AC2E4DBC05CFA246391FABB16B * __this, const RuntimeMethod* method)
{
	{
		// return poseData;
		MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  L_0 = __this->get_poseData_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_m460D3ECB01EA4EF7B7CC108260058EC4CE2A6E78_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method)
{
	{
		// protected IMixedRealitySpatialAwarenessSystem SpatialAwarenessSystem { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CSpatialAwarenessSystemU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_StartupBehavior_mADD3220D7F1FFEA59DCE2CC0085503B6CE274FF1_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method)
{
	{
		// public AutoStartBehavior StartupBehavior { get; set; } = AutoStartBehavior.AutoStart;
		int32_t L_0 = __this->get_U3CStartupBehaviorU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsRunning_m675DD55744D8486BA43EEBC901FA272450317FA3_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRunning { get; protected set; } = false;
		bool L_0 = __this->get_U3CIsRunningU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_IsRunning_mEB6185A04E579F04DA5FCCA9229A1C6F86E4235C_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRunning { get; protected set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsRunningU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseSpatialObserver_get_UpdateInterval_m59B785C3FE2773B2F04C901F7A781DA157377B36_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method)
{
	{
		// public float UpdateInterval { get; set; } = 3.5f; 
		float L_0 = __this->get_U3CUpdateIntervalU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_m62911E2D01AEFF3B937001C1427CC9E888953565_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method)
{
	{
		// public VolumeType ObserverVolumeType { get; set; } = VolumeType.AxisAlignedCube;
		int32_t L_0 = __this->get_U3CObserverVolumeTypeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverRotation_m48D56B40D014EA777C9C2696D3650765F52A7534_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion ObserverRotation { get; set; } = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___value0;
		__this->set_U3CObserverRotationU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsStationaryObserver_m8BF81F60CEE7E7AC40BE50FEF5FB51BA1705F528_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsStationaryObserver { get; set; } = false;
		bool L_0 = __this->get_U3CIsStationaryObserverU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverOrigin_m5A92CEFFC641C8E70AFACF3358BCB481351BC985_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CObserverOriginU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_MeshPhysicsLayer_mE82DBCD0B9DF1CBF0572D2F55D92D46EE327068A_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method)
{
	{
		// get { return meshPhysicsLayer; }
		int32_t L_0 = __this->get_meshPhysicsLayer_34();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * BaseSpatialAwarenessObject_get_GameObject_mFAE4AA6806C89B2CFD3913773960FA4C51857CD2_inline (BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CGameObjectU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialAwarenessObject_set_Id_m1C226ECE49906A109B47E70A0E530A4D8E8763A5_inline (BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * BaseSpatialAwarenessObject_get_Filter_m294B9502A47F673081233E20EC3E74209A79871E_inline (BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883 * __this, const RuntimeMethod* method)
{
	{
		// public MeshFilter Filter { get; set; }
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0 = __this->get_U3CFilterU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * SpatialAwarenessMeshObject_get_Collider_mCE08BFF09CEA034E043230096D9D0D7E2D44ED31_inline (SpatialAwarenessMeshObject_t6599CE0971A63B6D01F0F352431B66848093BE5A * __this, const RuntimeMethod* method)
{
	{
		// public MeshCollider Collider { get; set; }
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_0 = __this->get_U3CColliderU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObserverOrigin_m9282BED93FC4AF70C2863489DEFED55C2B83FDED_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CObserverOriginU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObservationExtents_m67BC5BCC6087055769FBC61DB6B799FF9E3C5FFF_inline (BaseSpatialObserver_tBF33844BFEB02E9C406D6DEC705A696C855B3BF0 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; 
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CObservationExtentsU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_mCBBE9D6299C718E353C3EEC6B5E3779DC28B9925_inline (MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CChangeStateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  MeshInfo_get_MeshId_m92D332ED6BF2822D33CC04BA3E086E9C37FF3AC6_inline (MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 * __this, const RuntimeMethod* method)
{
	{
		MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_0 = __this->get_U3CMeshIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_0 = __this->get_U3CMeshIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m5AF51D2745EC947BB722550DC95665D430CDB178_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialAwarenessObject_get_Id_m11E5D448E5D93D9002E887BEA9F37B0B04730CBF_inline (BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883 * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_DisplayOption_mBC99D6AFD65420B1F90E34F1AF92B07F32D9AD7E_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method)
{
	{
		// get { return displayOption; }
		int32_t L_0 = __this->get_displayOption_31();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * BaseSpatialMeshObserver_get_VisibleMaterial_mD9C22A1C9CED55ABBBFC494DEF333A292126B811_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method)
{
	{
		// get { return visibleMaterial; }
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_visibleMaterial_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * BaseSpatialMeshObserver_get_OcclusionMaterial_mA789E70BE37266983CC4B696CFD5628674345863_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method)
{
	{
		// get { return occlusionMaterial; }
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_occlusionMaterial_37();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * BaseSpatialAwarenessObject_get_Renderer_m748A536B75BA14E1BE1122C938EF39EB3FA16721_inline (BaseSpatialAwarenessObject_tDEC7FF3F1B319E20ED34F26109C51E5D4BB48883 * __this, const RuntimeMethod* method)
{
	{
		// public MeshRenderer Renderer { get; set; }
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_0 = __this->get_U3CRendererU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialMeshObserver_get_RecalculateNormals_m834207D95E0B9919CA20889919A03A9553BF4451_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method)
{
	{
		// public bool RecalculateNormals { get; set; } = true;
		bool L_0 = __this->get_U3CRecalculateNormalsU3Ek__BackingField_35();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * BaseSpatialMeshObserver_get_PhysicsMaterial_m35573042269F05F6913C7CCCB6B1B21234D85C01_inline (BaseSpatialMeshObserver_tE12F05A3B44C7A82001009C3EC8475175F30DF34 * __this, const RuntimeMethod* method)
{
	{
		// get { return physicsMaterial; }
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_0 = __this->get_physicsMaterial_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseBoundarySystem_get_Scale_m81EA6E785E9C648A6BAFD3C8FC05E5AE78C62656_inline (BaseBoundarySystem_tE79A0F8C8717905A8003F653E4797C694ADB9B13 * __this, const RuntimeMethod* method)
{
	{
		// public ExperienceScale Scale { get; set; }
		int32_t L_0 = __this->get_U3CScaleU3Ek__BackingField_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_Visualizer_m759A7A702B8B5BE0C913AB9C1C6516DA2F32CF77_inline (BaseController_t3FD00FAAD1BD1C1D7B1F337097229FA454FC214F * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityControllerVisualizer Visualizer { get; protected set; }
		RuntimeObject* L_0 = __this->get_U3CVisualizerU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mDB5E1EAFB2E35EE243E957D19153A131160AD91D_gshared_inline (Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  Enumerator_get_Current_m550FE8F77A8FB74BDCA13AF7C11A20C754629E6E_gshared_inline (Enumerator_t45E0DE7084A5ADA467E093A52AD8EACE7BB281B9 * __this, const RuntimeMethod* method)
{
	{
		MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  L_0 = (MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 )__this->get_current_3();
		return (MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Enumerator_get_Current_mE0D6371469FF6FAE6B7CB8A44B128535DB150B5F_gshared_inline (Enumerator_t0E15AD20D28CCDED0B22BBE846D735D4C0BD6061 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = (uint32_t)__this->get_current_3();
		return (uint32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	{
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_0 = (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )__this->get_current_3();
		return (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m985BA1C94F0384130AB1AFBCBB9A7866A9BD75B7_gshared_inline (BaseDataProvider_1_t5472B645E25171C2E317D45F750D5FF28CC299CF * __this, const RuntimeMethod* method)
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CServiceU3Ek__BackingField_6();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
