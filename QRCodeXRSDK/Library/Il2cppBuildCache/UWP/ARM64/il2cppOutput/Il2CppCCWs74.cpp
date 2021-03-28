#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>
struct Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.BaseController>
struct Dictionary_2_t9054E991F47F7865DE780AFF580C391F6BD4CF0A;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tB877F46A6C20A56DEA8ED6DC3E004A3171647E3B;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>>
struct EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler>
struct EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler>
struct EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler>
struct EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler>
struct EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>
struct EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler>
struct EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler>
struct EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>
struct EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler>
struct EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler>
struct EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler>
struct EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>
struct EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler>
struct EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t087726847A7755115A9464A201CE76C01156D000;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController[]
struct IMixedRealityControllerU5BU5D_t7ABBDED4703DFE24F6608E3AE962026462E043A9;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t17182F245D18BDE8E16CCF14BC0FF2793EF9B08E;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_tF1E8AAA822A4BC884BC20CAB4B84F5826BBE282C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider
struct IMixedRealityGazeProvider_t8CD90C5B0C055251CD31B191A9C898C0717BC3E9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t81B35976BCAABB86634D8CAB6C5EBECE36D65D3A;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9;
// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899;
// Microsoft.MixedReality.Toolkit.Input.ManualCameraControl
struct ManualCameraControl_t92553E2C601843EB1F3B0E7DE3066D8455A6333A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile
struct MixedRealityInputSimulationProfile_t9B3E8F420F6DAE02A29C6E5179E40342F2D68101;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3;
// Microsoft.MixedReality.Toolkit.Input.MouseDelta
struct MouseDelta_t365B8E9712204D89715EDAB8560EBC0C93309EED;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.Toolkit.Input.SimulatedControllerDataProvider
struct SimulatedControllerDataProvider_tDB3509D32A9BBEC95C75EECC2509034F9A533DE8;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData
struct SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0;
// Microsoft.MixedReality.Toolkit.Input.SimulatedMotionControllerData
struct SimulatedMotionControllerData_t3FE22DCFF3D219001A7D0C3F106F1EF5B4DAC44E;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Collections.ListDictionaryInternal/DictionaryNode
struct DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker
struct SceneContentTracker_t63E7FA6D49DD34641F8A8975B6808FFC39383B65;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor
struct SceneLightingExecutor_t284A3495A5AF7E28B3778E8605ACF1806F2A1556;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IReference`1<System.Int16>
struct NOVTABLE IReference_1_tC6255B8D76C30FB703AE5D37D44F122311813002 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4109F1547651E29762681FE5A1F621A2747BE3BB(int16_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int32>
struct NOVTABLE IReference_1_tD34C6D96E80163C85D8630F18188527F391BD4EB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m281EE509DDB82977889529E36B88E3E25B5E0B67(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int64>
struct NOVTABLE IReference_1_tF7CACD76E73FCC8B8DB84C6DD6DF3DDBEB5C3544 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mFD4D785FA835F0F1E35392FD38594DB388DAD686(int64_t* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVectorView
struct NOVTABLE IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


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


// System.Collections.ListDictionaryInternal
struct  ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A  : public RuntimeObject
{
public:
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal::head
	DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * ___head_0;
	// System.Int32 System.Collections.ListDictionaryInternal::version
	int32_t ___version_1;
	// System.Int32 System.Collections.ListDictionaryInternal::count
	int32_t ___count_2;
	// System.Object System.Collections.ListDictionaryInternal::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___head_0)); }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * get_head_0() const { return ___head_0; }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct  ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899  : public RuntimeObject
{
public:
	// System.Collections.IList System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::_list
	RuntimeObject* ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899, ____list_0)); }
	inline RuntimeObject* get__list_0() const { return ____list_0; }
	inline RuntimeObject** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(RuntimeObject* value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Runtime.Remoting.Messaging.MessageDictionary
struct  MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____methodKeys_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodKeys_2), (void*)value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
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


// Windows.Foundation.DateTime
struct  DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Runtime.Remoting.Messaging.MCMDictionary
struct  MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MCMDictionary::InternalKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalKeys_4;

public:
	inline static int32_t get_offset_of_InternalKeys_4() { return static_cast<int32_t>(offsetof(MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_StaticFields, ___InternalKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalKeys_4() const { return ___InternalKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalKeys_4() { return &___InternalKeys_4; }
	inline void set_InternalKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalKeys_4), (void*)value);
	}
};


// System.Numerics.Matrix4x4
struct  Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields, ____identity_16)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		____identity_16 = value;
	}
};


// Windows.Foundation.Numerics.Matrix4x4
struct  Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 
{
public:
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};


// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct  MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalReturnKeys_4;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalExceptionKeys_5;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_4() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalReturnKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalReturnKeys_4() const { return ___InternalReturnKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalReturnKeys_4() { return &___InternalReturnKeys_4; }
	inline void set_InternalReturnKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalReturnKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalReturnKeys_4), (void*)value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_5() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalExceptionKeys_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalExceptionKeys_5() const { return ___InternalExceptionKeys_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalExceptionKeys_5() { return &___InternalExceptionKeys_5; }
	inline void set_InternalExceptionKeys_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalExceptionKeys_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalExceptionKeys_5), (void*)value);
	}
};


// Windows.Foundation.Point
struct  Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct  Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct  Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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

// Windows.Foundation.IReference`1<System.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.Input.ControllerSimulationMode
struct  ControllerSimulationMode_tC67984AC16141D26213EC870FFD1670292F209DA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.ControllerSimulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControllerSimulationMode_tC67984AC16141D26213EC870FFD1670292F209DA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType
struct  DisplayType_t169730BD5E949BB96C5CD3F37D6F5956A72635DA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_t169730BD5E949BB96C5CD3F37D6F5956A72635DA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.EyeGazeSimulationMode
struct  EyeGazeSimulationMode_tCEF5F24A4D785E072995CD207DBE537A39CB7A5B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.EyeGazeSimulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EyeGazeSimulationMode_tCEF5F24A4D785E072995CD207DBE537A39CB7A5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Graphics.Holographic.HolographicViewConfigurationKind
struct  HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F 
{
public:
	// System.Int32 Windows.Graphics.Holographic.HolographicViewConfigurationKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.ManualResetEventSlim
struct  ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E  : public RuntimeObject
{
public:
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_lock
	RuntimeObject * ___m_lock_2;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_eventObj
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_eventObj_3;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_combinedState
	int32_t ___m_combinedState_4;

public:
	inline static int32_t get_offset_of_m_lock_2() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_lock_2)); }
	inline RuntimeObject * get_m_lock_2() const { return ___m_lock_2; }
	inline RuntimeObject ** get_address_of_m_lock_2() { return &___m_lock_2; }
	inline void set_m_lock_2(RuntimeObject * value)
	{
		___m_lock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lock_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventObj_3() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_eventObj_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_eventObj_3() const { return ___m_eventObj_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_eventObj_3() { return &___m_eventObj_3; }
	inline void set_m_eventObj_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_eventObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventObj_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_combinedState_4() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_combinedState_4)); }
	inline int32_t get_m_combinedState_4() const { return ___m_combinedState_4; }
	inline int32_t* get_address_of_m_combinedState_4() { return &___m_combinedState_4; }
	inline void set_m_combinedState_4(int32_t value)
	{
		___m_combinedState_4 = value;
	}
};

struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.ManualResetEventSlim::s_cancellationTokenCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_cancellationTokenCallback_14;

public:
	inline static int32_t get_offset_of_s_cancellationTokenCallback_14() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields, ___s_cancellationTokenCallback_14)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_cancellationTokenCallback_14() const { return ___s_cancellationTokenCallback_14; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_cancellationTokenCallback_14() { return &___s_cancellationTokenCallback_14; }
	inline void set_s_cancellationTokenCallback_14(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_cancellationTokenCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cancellationTokenCallback_14), (void*)value);
	}
};


// Windows.Foundation.Metadata.MarshalingType
struct  MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// UnityEngine.Windows.Speech.PhraseRecognizer
struct  PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPhraseRecognized_1), (void*)value);
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


// Windows.Foundation.PropertyType
struct  PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct  TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Windows.Foundation.IReference`1<Windows.Graphics.Holographic.HolographicViewConfigurationKind>
struct NOVTABLE IReference_1_tCDFD1E097542F9F7957CC61D2EF0CB6ED4D47245 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m62C19D1B7765C61ECB51B5783983EF2B4587D423(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) = 0;
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


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// UnityEngine.Windows.Speech.KeywordRecognizer
struct  KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F  : public PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_2), (void*)value);
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


// Microsoft.MixedReality.Toolkit.Input.BaseInputSimulationService
struct  BaseInputSimulationService_tA7C420B95F905DF5E4EA8D5B6F900E9D12067518  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.BaseController> Microsoft.MixedReality.Toolkit.Input.BaseInputSimulationService::trackedControllers
	Dictionary_2_t9054E991F47F7865DE780AFF580C391F6BD4CF0A * ___trackedControllers_14;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController[] Microsoft.MixedReality.Toolkit.Input.BaseInputSimulationService::activeControllers
	IMixedRealityControllerU5BU5D_t7ABBDED4703DFE24F6608E3AE962026462E043A9* ___activeControllers_15;

public:
	inline static int32_t get_offset_of_trackedControllers_14() { return static_cast<int32_t>(offsetof(BaseInputSimulationService_tA7C420B95F905DF5E4EA8D5B6F900E9D12067518, ___trackedControllers_14)); }
	inline Dictionary_2_t9054E991F47F7865DE780AFF580C391F6BD4CF0A * get_trackedControllers_14() const { return ___trackedControllers_14; }
	inline Dictionary_2_t9054E991F47F7865DE780AFF580C391F6BD4CF0A ** get_address_of_trackedControllers_14() { return &___trackedControllers_14; }
	inline void set_trackedControllers_14(Dictionary_2_t9054E991F47F7865DE780AFF580C391F6BD4CF0A * value)
	{
		___trackedControllers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedControllers_14), (void*)value);
	}

	inline static int32_t get_offset_of_activeControllers_15() { return static_cast<int32_t>(offsetof(BaseInputSimulationService_tA7C420B95F905DF5E4EA8D5B6F900E9D12067518, ___activeControllers_15)); }
	inline IMixedRealityControllerU5BU5D_t7ABBDED4703DFE24F6608E3AE962026462E043A9* get_activeControllers_15() const { return ___activeControllers_15; }
	inline IMixedRealityControllerU5BU5D_t7ABBDED4703DFE24F6608E3AE962026462E043A9** get_address_of_activeControllers_15() { return &___activeControllers_15; }
	inline void set_activeControllers_15(IMixedRealityControllerU5BU5D_t7ABBDED4703DFE24F6608E3AE962026462E043A9* value)
	{
		___activeControllers_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeControllers_15), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputRecordingService
struct  InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B  : public BaseInputDeviceManager_t6A4D499FDBD693F4F9D789864B32292DB36568FB
{
public:
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputRecordingService::OnRecordingStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnRecordingStarted_15;
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputRecordingService::OnRecordingStopped
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnRecordingStopped_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::<IsEnabled>k__BackingField
	bool ___U3CIsEnabledU3Ek__BackingField_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::useBufferTimeLimit
	bool ___useBufferTimeLimit_19;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::recordingBufferTimeLimit
	float ___recordingBufferTimeLimit_20;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputRecordingService::recordingBuffer
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * ___recordingBuffer_21;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Input.InputRecordingService::unlimitedRecordingStartTime
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___unlimitedRecordingStartTime_22;

public:
	inline static int32_t get_offset_of_OnRecordingStarted_15() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___OnRecordingStarted_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnRecordingStarted_15() const { return ___OnRecordingStarted_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnRecordingStarted_15() { return &___OnRecordingStarted_15; }
	inline void set_OnRecordingStarted_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnRecordingStarted_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRecordingStarted_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnRecordingStopped_16() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___OnRecordingStopped_16)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnRecordingStopped_16() const { return ___OnRecordingStopped_16; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnRecordingStopped_16() { return &___OnRecordingStopped_16; }
	inline void set_OnRecordingStopped_16(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnRecordingStopped_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRecordingStopped_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsEnabledU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___U3CIsEnabledU3Ek__BackingField_17)); }
	inline bool get_U3CIsEnabledU3Ek__BackingField_17() const { return ___U3CIsEnabledU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CIsEnabledU3Ek__BackingField_17() { return &___U3CIsEnabledU3Ek__BackingField_17; }
	inline void set_U3CIsEnabledU3Ek__BackingField_17(bool value)
	{
		___U3CIsEnabledU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CIsRecordingU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___U3CIsRecordingU3Ek__BackingField_18)); }
	inline bool get_U3CIsRecordingU3Ek__BackingField_18() const { return ___U3CIsRecordingU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CIsRecordingU3Ek__BackingField_18() { return &___U3CIsRecordingU3Ek__BackingField_18; }
	inline void set_U3CIsRecordingU3Ek__BackingField_18(bool value)
	{
		___U3CIsRecordingU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_useBufferTimeLimit_19() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___useBufferTimeLimit_19)); }
	inline bool get_useBufferTimeLimit_19() const { return ___useBufferTimeLimit_19; }
	inline bool* get_address_of_useBufferTimeLimit_19() { return &___useBufferTimeLimit_19; }
	inline void set_useBufferTimeLimit_19(bool value)
	{
		___useBufferTimeLimit_19 = value;
	}

	inline static int32_t get_offset_of_recordingBufferTimeLimit_20() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___recordingBufferTimeLimit_20)); }
	inline float get_recordingBufferTimeLimit_20() const { return ___recordingBufferTimeLimit_20; }
	inline float* get_address_of_recordingBufferTimeLimit_20() { return &___recordingBufferTimeLimit_20; }
	inline void set_recordingBufferTimeLimit_20(float value)
	{
		___recordingBufferTimeLimit_20 = value;
	}

	inline static int32_t get_offset_of_recordingBuffer_21() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___recordingBuffer_21)); }
	inline InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * get_recordingBuffer_21() const { return ___recordingBuffer_21; }
	inline InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 ** get_address_of_recordingBuffer_21() { return &___recordingBuffer_21; }
	inline void set_recordingBuffer_21(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * value)
	{
		___recordingBuffer_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recordingBuffer_21), (void*)value);
	}

	inline static int32_t get_offset_of_unlimitedRecordingStartTime_22() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B, ___unlimitedRecordingStartTime_22)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_unlimitedRecordingStartTime_22() const { return ___unlimitedRecordingStartTime_22; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_unlimitedRecordingStartTime_22() { return &___unlimitedRecordingStartTime_22; }
	inline void set_unlimitedRecordingStartTime_22(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___unlimitedRecordingStartTime_22 = value;
	}
};

struct InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputRecordingService::jointCount
	int32_t ___jointCount_14;

public:
	inline static int32_t get_offset_of_jointCount_14() { return static_cast<int32_t>(offsetof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_StaticFields, ___jointCount_14)); }
	inline int32_t get_jointCount_14() const { return ___jointCount_14; }
	inline int32_t* get_address_of_jointCount_14() { return &___jointCount_14; }
	inline void set_jointCount_14(int32_t value)
	{
		___jointCount_14 = value;
	}
};


// System.Threading.ManualResetEvent
struct  ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct  BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47  : public BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 * ___dataProviders_14;

public:
	inline static int32_t get_offset_of_dataProviders_14() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47, ___dataProviders_14)); }
	inline List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 * get_dataProviders_14() const { return ___dataProviders_14; }
	inline List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 ** get_address_of_dataProviders_14() { return &___dataProviders_14; }
	inline void set_dataProviders_14(List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 * value)
	{
		___dataProviders_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_14), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_16;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_15() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47_StaticFields, ___UpdatePerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_15() const { return ___UpdatePerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_15() { return &___UpdatePerfMarker_15; }
	inline void set_UpdatePerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_16() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47_StaticFields, ___LateUpdatePerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_16() const { return ___LateUpdatePerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_16() { return &___LateUpdatePerfMarker_16; }
	inline void set_LateUpdatePerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputPlaybackService
struct  InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279  : public BaseInputSimulationService_tA7C420B95F905DF5E4EA8D5B6F900E9D12067518
{
public:
	// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData Microsoft.MixedReality.Toolkit.Input.InputPlaybackService::<HandDataLeft>k__BackingField
	SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * ___U3CHandDataLeftU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData Microsoft.MixedReality.Toolkit.Input.InputPlaybackService::<HandDataRight>k__BackingField
	SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * ___U3CHandDataRightU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputPlaybackService::animation
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * ___animation_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputPlaybackService::isPlaying
	bool ___isPlaying_20;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputPlaybackService::localTime
	float ___localTime_21;

public:
	inline static int32_t get_offset_of_U3CHandDataLeftU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279, ___U3CHandDataLeftU3Ek__BackingField_17)); }
	inline SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * get_U3CHandDataLeftU3Ek__BackingField_17() const { return ___U3CHandDataLeftU3Ek__BackingField_17; }
	inline SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 ** get_address_of_U3CHandDataLeftU3Ek__BackingField_17() { return &___U3CHandDataLeftU3Ek__BackingField_17; }
	inline void set_U3CHandDataLeftU3Ek__BackingField_17(SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * value)
	{
		___U3CHandDataLeftU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandDataLeftU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandDataRightU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279, ___U3CHandDataRightU3Ek__BackingField_18)); }
	inline SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * get_U3CHandDataRightU3Ek__BackingField_18() const { return ___U3CHandDataRightU3Ek__BackingField_18; }
	inline SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 ** get_address_of_U3CHandDataRightU3Ek__BackingField_18() { return &___U3CHandDataRightU3Ek__BackingField_18; }
	inline void set_U3CHandDataRightU3Ek__BackingField_18(SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * value)
	{
		___U3CHandDataRightU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandDataRightU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_animation_19() { return static_cast<int32_t>(offsetof(InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279, ___animation_19)); }
	inline InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * get_animation_19() const { return ___animation_19; }
	inline InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 ** get_address_of_animation_19() { return &___animation_19; }
	inline void set_animation_19(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * value)
	{
		___animation_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animation_19), (void*)value);
	}

	inline static int32_t get_offset_of_isPlaying_20() { return static_cast<int32_t>(offsetof(InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279, ___isPlaying_20)); }
	inline bool get_isPlaying_20() const { return ___isPlaying_20; }
	inline bool* get_address_of_isPlaying_20() { return &___isPlaying_20; }
	inline void set_isPlaying_20(bool value)
	{
		___isPlaying_20 = value;
	}

	inline static int32_t get_offset_of_localTime_21() { return static_cast<int32_t>(offsetof(InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279, ___localTime_21)); }
	inline float get_localTime_21() const { return ___localTime_21; }
	inline float* get_address_of_localTime_21() { return &___localTime_21; }
	inline void set_localTime_21(float value)
	{
		___localTime_21 = value;
	}
};

struct InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputPlaybackService::jointCount
	int32_t ___jointCount_16;

public:
	inline static int32_t get_offset_of_jointCount_16() { return static_cast<int32_t>(offsetof(InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279_StaticFields, ___jointCount_16)); }
	inline int32_t get_jointCount_16() const { return ___jointCount_16; }
	inline int32_t* get_address_of_jointCount_16() { return &___jointCount_16; }
	inline void set_jointCount_16(int32_t value)
	{
		___jointCount_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSimulationService
struct  InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E  : public BaseInputSimulationService_tA7C420B95F905DF5E4EA8D5B6F900E9D12067518
{
public:
	// Microsoft.MixedReality.Toolkit.Input.ManualCameraControl Microsoft.MixedReality.Toolkit.Input.InputSimulationService::cameraControl
	ManualCameraControl_t92553E2C601843EB1F3B0E7DE3066D8455A6333A * ___cameraControl_16;
	// Microsoft.MixedReality.Toolkit.Input.SimulatedControllerDataProvider Microsoft.MixedReality.Toolkit.Input.InputSimulationService::dataProvider
	SimulatedControllerDataProvider_tDB3509D32A9BBEC95C75EECC2509034F9A533DE8 * ___dataProvider_17;
	// Microsoft.MixedReality.Toolkit.Input.ControllerSimulationMode Microsoft.MixedReality.Toolkit.Input.InputSimulationService::<ControllerSimulationMode>k__BackingField
	int32_t ___U3CControllerSimulationModeU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData Microsoft.MixedReality.Toolkit.Input.InputSimulationService::<HandDataLeft>k__BackingField
	SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * ___U3CHandDataLeftU3Ek__BackingField_19;
	// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData Microsoft.MixedReality.Toolkit.Input.InputSimulationService::<HandDataRight>k__BackingField
	SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * ___U3CHandDataRightU3Ek__BackingField_20;
	// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData Microsoft.MixedReality.Toolkit.Input.InputSimulationService::<HandDataGaze>k__BackingField
	SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * ___U3CHandDataGazeU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Input.SimulatedMotionControllerData Microsoft.MixedReality.Toolkit.Input.InputSimulationService::<MotionControllerDataLeft>k__BackingField
	SimulatedMotionControllerData_t3FE22DCFF3D219001A7D0C3F106F1EF5B4DAC44E * ___U3CMotionControllerDataLeftU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Input.SimulatedMotionControllerData Microsoft.MixedReality.Toolkit.Input.InputSimulationService::<MotionControllerDataRight>k__BackingField
	SimulatedMotionControllerData_t3FE22DCFF3D219001A7D0C3F106F1EF5B4DAC44E * ___U3CMotionControllerDataRightU3Ek__BackingField_23;
	// Microsoft.MixedReality.Toolkit.Input.EyeGazeSimulationMode Microsoft.MixedReality.Toolkit.Input.InputSimulationService::<EyeGazeSimulationMode>k__BackingField
	int32_t ___U3CEyeGazeSimulationModeU3Ek__BackingField_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSimulationService::<UserInputEnabled>k__BackingField
	bool ___U3CUserInputEnabledU3Ek__BackingField_25;
	// System.Int64 Microsoft.MixedReality.Toolkit.Input.InputSimulationService::lastControllerUpdateTimestamp
	int64_t ___lastControllerUpdateTimestamp_26;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.InputSimulationService::indicators
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___indicators_27;
	// Microsoft.MixedReality.Toolkit.Input.MouseDelta Microsoft.MixedReality.Toolkit.Input.InputSimulationService::mouseDelta
	MouseDelta_t365B8E9712204D89715EDAB8560EBC0C93309EED * ___mouseDelta_28;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.InputSimulationService::lastMousePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastMousePosition_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSimulationService::wasFocused
	bool ___wasFocused_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSimulationService::wasCursorLocked
	bool ___wasCursorLocked_31;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile Microsoft.MixedReality.Toolkit.Input.InputSimulationService::inputSimulationProfile
	MixedRealityInputSimulationProfile_t9B3E8F420F6DAE02A29C6E5179E40342F2D68101 * ___inputSimulationProfile_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSimulationService::<Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeDataProvider.SmoothEyeTracking>k__BackingField
	bool ___U3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityEyeGazeDataProvider_SmoothEyeTrackingU3Ek__BackingField_33;

public:
	inline static int32_t get_offset_of_cameraControl_16() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___cameraControl_16)); }
	inline ManualCameraControl_t92553E2C601843EB1F3B0E7DE3066D8455A6333A * get_cameraControl_16() const { return ___cameraControl_16; }
	inline ManualCameraControl_t92553E2C601843EB1F3B0E7DE3066D8455A6333A ** get_address_of_cameraControl_16() { return &___cameraControl_16; }
	inline void set_cameraControl_16(ManualCameraControl_t92553E2C601843EB1F3B0E7DE3066D8455A6333A * value)
	{
		___cameraControl_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraControl_16), (void*)value);
	}

	inline static int32_t get_offset_of_dataProvider_17() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___dataProvider_17)); }
	inline SimulatedControllerDataProvider_tDB3509D32A9BBEC95C75EECC2509034F9A533DE8 * get_dataProvider_17() const { return ___dataProvider_17; }
	inline SimulatedControllerDataProvider_tDB3509D32A9BBEC95C75EECC2509034F9A533DE8 ** get_address_of_dataProvider_17() { return &___dataProvider_17; }
	inline void set_dataProvider_17(SimulatedControllerDataProvider_tDB3509D32A9BBEC95C75EECC2509034F9A533DE8 * value)
	{
		___dataProvider_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProvider_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CControllerSimulationModeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___U3CControllerSimulationModeU3Ek__BackingField_18)); }
	inline int32_t get_U3CControllerSimulationModeU3Ek__BackingField_18() const { return ___U3CControllerSimulationModeU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CControllerSimulationModeU3Ek__BackingField_18() { return &___U3CControllerSimulationModeU3Ek__BackingField_18; }
	inline void set_U3CControllerSimulationModeU3Ek__BackingField_18(int32_t value)
	{
		___U3CControllerSimulationModeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CHandDataLeftU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___U3CHandDataLeftU3Ek__BackingField_19)); }
	inline SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * get_U3CHandDataLeftU3Ek__BackingField_19() const { return ___U3CHandDataLeftU3Ek__BackingField_19; }
	inline SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 ** get_address_of_U3CHandDataLeftU3Ek__BackingField_19() { return &___U3CHandDataLeftU3Ek__BackingField_19; }
	inline void set_U3CHandDataLeftU3Ek__BackingField_19(SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * value)
	{
		___U3CHandDataLeftU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandDataLeftU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandDataRightU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___U3CHandDataRightU3Ek__BackingField_20)); }
	inline SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * get_U3CHandDataRightU3Ek__BackingField_20() const { return ___U3CHandDataRightU3Ek__BackingField_20; }
	inline SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 ** get_address_of_U3CHandDataRightU3Ek__BackingField_20() { return &___U3CHandDataRightU3Ek__BackingField_20; }
	inline void set_U3CHandDataRightU3Ek__BackingField_20(SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * value)
	{
		___U3CHandDataRightU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandDataRightU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandDataGazeU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___U3CHandDataGazeU3Ek__BackingField_21)); }
	inline SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * get_U3CHandDataGazeU3Ek__BackingField_21() const { return ___U3CHandDataGazeU3Ek__BackingField_21; }
	inline SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 ** get_address_of_U3CHandDataGazeU3Ek__BackingField_21() { return &___U3CHandDataGazeU3Ek__BackingField_21; }
	inline void set_U3CHandDataGazeU3Ek__BackingField_21(SimulatedHandData_tCD13CCE640C056230565EDC86F0CB05056F8C2D0 * value)
	{
		___U3CHandDataGazeU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandDataGazeU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMotionControllerDataLeftU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___U3CMotionControllerDataLeftU3Ek__BackingField_22)); }
	inline SimulatedMotionControllerData_t3FE22DCFF3D219001A7D0C3F106F1EF5B4DAC44E * get_U3CMotionControllerDataLeftU3Ek__BackingField_22() const { return ___U3CMotionControllerDataLeftU3Ek__BackingField_22; }
	inline SimulatedMotionControllerData_t3FE22DCFF3D219001A7D0C3F106F1EF5B4DAC44E ** get_address_of_U3CMotionControllerDataLeftU3Ek__BackingField_22() { return &___U3CMotionControllerDataLeftU3Ek__BackingField_22; }
	inline void set_U3CMotionControllerDataLeftU3Ek__BackingField_22(SimulatedMotionControllerData_t3FE22DCFF3D219001A7D0C3F106F1EF5B4DAC44E * value)
	{
		___U3CMotionControllerDataLeftU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMotionControllerDataLeftU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMotionControllerDataRightU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___U3CMotionControllerDataRightU3Ek__BackingField_23)); }
	inline SimulatedMotionControllerData_t3FE22DCFF3D219001A7D0C3F106F1EF5B4DAC44E * get_U3CMotionControllerDataRightU3Ek__BackingField_23() const { return ___U3CMotionControllerDataRightU3Ek__BackingField_23; }
	inline SimulatedMotionControllerData_t3FE22DCFF3D219001A7D0C3F106F1EF5B4DAC44E ** get_address_of_U3CMotionControllerDataRightU3Ek__BackingField_23() { return &___U3CMotionControllerDataRightU3Ek__BackingField_23; }
	inline void set_U3CMotionControllerDataRightU3Ek__BackingField_23(SimulatedMotionControllerData_t3FE22DCFF3D219001A7D0C3F106F1EF5B4DAC44E * value)
	{
		___U3CMotionControllerDataRightU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMotionControllerDataRightU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEyeGazeSimulationModeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___U3CEyeGazeSimulationModeU3Ek__BackingField_24)); }
	inline int32_t get_U3CEyeGazeSimulationModeU3Ek__BackingField_24() const { return ___U3CEyeGazeSimulationModeU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CEyeGazeSimulationModeU3Ek__BackingField_24() { return &___U3CEyeGazeSimulationModeU3Ek__BackingField_24; }
	inline void set_U3CEyeGazeSimulationModeU3Ek__BackingField_24(int32_t value)
	{
		___U3CEyeGazeSimulationModeU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CUserInputEnabledU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___U3CUserInputEnabledU3Ek__BackingField_25)); }
	inline bool get_U3CUserInputEnabledU3Ek__BackingField_25() const { return ___U3CUserInputEnabledU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CUserInputEnabledU3Ek__BackingField_25() { return &___U3CUserInputEnabledU3Ek__BackingField_25; }
	inline void set_U3CUserInputEnabledU3Ek__BackingField_25(bool value)
	{
		___U3CUserInputEnabledU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_lastControllerUpdateTimestamp_26() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___lastControllerUpdateTimestamp_26)); }
	inline int64_t get_lastControllerUpdateTimestamp_26() const { return ___lastControllerUpdateTimestamp_26; }
	inline int64_t* get_address_of_lastControllerUpdateTimestamp_26() { return &___lastControllerUpdateTimestamp_26; }
	inline void set_lastControllerUpdateTimestamp_26(int64_t value)
	{
		___lastControllerUpdateTimestamp_26 = value;
	}

	inline static int32_t get_offset_of_indicators_27() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___indicators_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_indicators_27() const { return ___indicators_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_indicators_27() { return &___indicators_27; }
	inline void set_indicators_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___indicators_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indicators_27), (void*)value);
	}

	inline static int32_t get_offset_of_mouseDelta_28() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___mouseDelta_28)); }
	inline MouseDelta_t365B8E9712204D89715EDAB8560EBC0C93309EED * get_mouseDelta_28() const { return ___mouseDelta_28; }
	inline MouseDelta_t365B8E9712204D89715EDAB8560EBC0C93309EED ** get_address_of_mouseDelta_28() { return &___mouseDelta_28; }
	inline void set_mouseDelta_28(MouseDelta_t365B8E9712204D89715EDAB8560EBC0C93309EED * value)
	{
		___mouseDelta_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseDelta_28), (void*)value);
	}

	inline static int32_t get_offset_of_lastMousePosition_29() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___lastMousePosition_29)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastMousePosition_29() const { return ___lastMousePosition_29; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastMousePosition_29() { return &___lastMousePosition_29; }
	inline void set_lastMousePosition_29(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastMousePosition_29 = value;
	}

	inline static int32_t get_offset_of_wasFocused_30() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___wasFocused_30)); }
	inline bool get_wasFocused_30() const { return ___wasFocused_30; }
	inline bool* get_address_of_wasFocused_30() { return &___wasFocused_30; }
	inline void set_wasFocused_30(bool value)
	{
		___wasFocused_30 = value;
	}

	inline static int32_t get_offset_of_wasCursorLocked_31() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___wasCursorLocked_31)); }
	inline bool get_wasCursorLocked_31() const { return ___wasCursorLocked_31; }
	inline bool* get_address_of_wasCursorLocked_31() { return &___wasCursorLocked_31; }
	inline void set_wasCursorLocked_31(bool value)
	{
		___wasCursorLocked_31 = value;
	}

	inline static int32_t get_offset_of_inputSimulationProfile_32() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___inputSimulationProfile_32)); }
	inline MixedRealityInputSimulationProfile_t9B3E8F420F6DAE02A29C6E5179E40342F2D68101 * get_inputSimulationProfile_32() const { return ___inputSimulationProfile_32; }
	inline MixedRealityInputSimulationProfile_t9B3E8F420F6DAE02A29C6E5179E40342F2D68101 ** get_address_of_inputSimulationProfile_32() { return &___inputSimulationProfile_32; }
	inline void set_inputSimulationProfile_32(MixedRealityInputSimulationProfile_t9B3E8F420F6DAE02A29C6E5179E40342F2D68101 * value)
	{
		___inputSimulationProfile_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSimulationProfile_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityEyeGazeDataProvider_SmoothEyeTrackingU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E, ___U3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityEyeGazeDataProvider_SmoothEyeTrackingU3Ek__BackingField_33)); }
	inline bool get_U3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityEyeGazeDataProvider_SmoothEyeTrackingU3Ek__BackingField_33() const { return ___U3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityEyeGazeDataProvider_SmoothEyeTrackingU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityEyeGazeDataProvider_SmoothEyeTrackingU3Ek__BackingField_33() { return &___U3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityEyeGazeDataProvider_SmoothEyeTrackingU3Ek__BackingField_33; }
	inline void set_U3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityEyeGazeDataProvider_SmoothEyeTrackingU3Ek__BackingField_33(bool value)
	{
		___U3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityEyeGazeDataProvider_SmoothEyeTrackingU3Ek__BackingField_33 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct  MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9  : public BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_14;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___diagnosticVisualizationParent_15;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 * ___visualProfiler_16;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 * ___diagnosticsSystemProfile_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showFrameInfo
	bool ___showFrameInfo_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showMemoryStats
	bool ___showMemoryStats_21;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_22;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 * ___eventData_23;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_26;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowOffset_27;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_28;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_30;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___U3CNameU3Ek__BackingField_14)); }
	inline String_t* get_U3CNameU3Ek__BackingField_14() const { return ___U3CNameU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_14() { return &___U3CNameU3Ek__BackingField_14; }
	inline void set_U3CNameU3Ek__BackingField_14(String_t* value)
	{
		___U3CNameU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticVisualizationParent_15() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___diagnosticVisualizationParent_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_diagnosticVisualizationParent_15() const { return ___diagnosticVisualizationParent_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_diagnosticVisualizationParent_15() { return &___diagnosticVisualizationParent_15; }
	inline void set_diagnosticVisualizationParent_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___diagnosticVisualizationParent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticVisualizationParent_15), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfiler_16() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___visualProfiler_16)); }
	inline MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 * get_visualProfiler_16() const { return ___visualProfiler_16; }
	inline MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 ** get_address_of_visualProfiler_16() { return &___visualProfiler_16; }
	inline void set_visualProfiler_16(MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 * value)
	{
		___visualProfiler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfiler_16), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___diagnosticsSystemProfile_17)); }
	inline MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 * get_diagnosticsSystemProfile_17() const { return ___diagnosticsSystemProfile_17; }
	inline MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 ** get_address_of_diagnosticsSystemProfile_17() { return &___diagnosticsSystemProfile_17; }
	inline void set_diagnosticsSystemProfile_17(MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 * value)
	{
		___diagnosticsSystemProfile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_17), (void*)value);
	}

	inline static int32_t get_offset_of_showDiagnostics_18() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showDiagnostics_18)); }
	inline bool get_showDiagnostics_18() const { return ___showDiagnostics_18; }
	inline bool* get_address_of_showDiagnostics_18() { return &___showDiagnostics_18; }
	inline void set_showDiagnostics_18(bool value)
	{
		___showDiagnostics_18 = value;
	}

	inline static int32_t get_offset_of_showProfiler_19() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showProfiler_19)); }
	inline bool get_showProfiler_19() const { return ___showProfiler_19; }
	inline bool* get_address_of_showProfiler_19() { return &___showProfiler_19; }
	inline void set_showProfiler_19(bool value)
	{
		___showProfiler_19 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_20() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showFrameInfo_20)); }
	inline bool get_showFrameInfo_20() const { return ___showFrameInfo_20; }
	inline bool* get_address_of_showFrameInfo_20() { return &___showFrameInfo_20; }
	inline void set_showFrameInfo_20(bool value)
	{
		___showFrameInfo_20 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_21() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showMemoryStats_21)); }
	inline bool get_showMemoryStats_21() const { return ___showMemoryStats_21; }
	inline bool* get_address_of_showMemoryStats_21() { return &___showMemoryStats_21; }
	inline void set_showMemoryStats_21(bool value)
	{
		___showMemoryStats_21 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_22() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___frameSampleRate_22)); }
	inline float get_frameSampleRate_22() const { return ___frameSampleRate_22; }
	inline float* get_address_of_frameSampleRate_22() { return &___frameSampleRate_22; }
	inline void set_frameSampleRate_22(float value)
	{
		___frameSampleRate_22 = value;
	}

	inline static int32_t get_offset_of_eventData_23() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___eventData_23)); }
	inline DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 * get_eventData_23() const { return ___eventData_23; }
	inline DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 ** get_address_of_eventData_23() { return &___eventData_23; }
	inline void set_eventData_23(DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 * value)
	{
		___eventData_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_23), (void*)value);
	}

	inline static int32_t get_offset_of_windowAnchor_26() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowAnchor_26)); }
	inline int32_t get_windowAnchor_26() const { return ___windowAnchor_26; }
	inline int32_t* get_address_of_windowAnchor_26() { return &___windowAnchor_26; }
	inline void set_windowAnchor_26(int32_t value)
	{
		___windowAnchor_26 = value;
	}

	inline static int32_t get_offset_of_windowOffset_27() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowOffset_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_windowOffset_27() const { return ___windowOffset_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_windowOffset_27() { return &___windowOffset_27; }
	inline void set_windowOffset_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___windowOffset_27 = value;
	}

	inline static int32_t get_offset_of_windowScale_28() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowScale_28)); }
	inline float get_windowScale_28() const { return ___windowScale_28; }
	inline float* get_address_of_windowScale_28() { return &___windowScale_28; }
	inline void set_windowScale_28(float value)
	{
		___windowScale_28 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_29() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowFollowSpeed_29)); }
	inline float get_windowFollowSpeed_29() const { return ___windowFollowSpeed_29; }
	inline float* get_address_of_windowFollowSpeed_29() { return &___windowFollowSpeed_29; }
	inline void set_windowFollowSpeed_29(float value)
	{
		___windowFollowSpeed_29 = value;
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_30() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showProfilerDuringMRC_30)); }
	inline bool get_showProfilerDuringMRC_30() const { return ___showProfilerDuringMRC_30; }
	inline bool* get_address_of_showProfilerDuringMRC_30() { return &___showProfilerDuringMRC_30; }
	inline void set_showProfilerDuringMRC_30(bool value)
	{
		___showProfilerDuringMRC_30 = value;
	}
};

struct MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnDiagnosticsChangedPerfMarker_24;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A * ___OnDiagnosticsChanged_25;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChangedPerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_StaticFields, ___OnDiagnosticsChangedPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnDiagnosticsChangedPerfMarker_24() const { return ___OnDiagnosticsChangedPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnDiagnosticsChangedPerfMarker_24() { return &___OnDiagnosticsChangedPerfMarker_24; }
	inline void set_OnDiagnosticsChangedPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnDiagnosticsChangedPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnDiagnosticsChanged_25() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_StaticFields, ___OnDiagnosticsChanged_25)); }
	inline EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A * get_OnDiagnosticsChanged_25() const { return ___OnDiagnosticsChanged_25; }
	inline EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A ** get_address_of_OnDiagnosticsChanged_25() { return &___OnDiagnosticsChanged_25; }
	inline void set_OnDiagnosticsChanged_25(EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A * value)
	{
		___OnDiagnosticsChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDiagnosticsChanged_25), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct  MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00  : public BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpInProgress
	bool ___managerSceneOpInProgress_15;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpProgress
	float ___managerSceneOpProgress_16;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::contentTracker
	SceneContentTracker_t63E7FA6D49DD34641F8A8975B6808FFC39383B65 * ___contentTracker_17;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::lightingExecutor
	SceneLightingExecutor_t284A3495A5AF7E28B3778E8605ACF1806F2A1556 * ___lightingExecutor_18;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_19;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillLoadContentU3Ek__BackingField_20;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentLoaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentLoadedU3Ek__BackingField_21;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillUnloadContentU3Ek__BackingField_22;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentUnloaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentUnloadedU3Ek__BackingField_23;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadLightingU3Ek__BackingField_24;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingLoadedU3Ek__BackingField_25;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadLightingU3Ek__BackingField_26;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingUnloadedU3Ek__BackingField_27;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadSceneU3Ek__BackingField_28;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneLoadedU3Ek__BackingField_29;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadSceneU3Ek__BackingField_30;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneUnloadedU3Ek__BackingField_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationInProgress>k__BackingField
	bool ___U3CSceneOperationInProgressU3Ek__BackingField_32;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationProgress>k__BackingField
	float ___U3CSceneOperationProgressU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationInProgress>k__BackingField
	bool ___U3CLightingOperationInProgressU3Ek__BackingField_34;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationProgress>k__BackingField
	float ___U3CLightingOperationProgressU3Ek__BackingField_35;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<ActiveLightingScene>k__BackingField
	String_t* ___U3CActiveLightingSceneU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<WaitingToProceed>k__BackingField
	bool ___U3CWaitingToProceedU3Ek__BackingField_37;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_38;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_39;

public:
	inline static int32_t get_offset_of_managerSceneOpInProgress_15() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___managerSceneOpInProgress_15)); }
	inline bool get_managerSceneOpInProgress_15() const { return ___managerSceneOpInProgress_15; }
	inline bool* get_address_of_managerSceneOpInProgress_15() { return &___managerSceneOpInProgress_15; }
	inline void set_managerSceneOpInProgress_15(bool value)
	{
		___managerSceneOpInProgress_15 = value;
	}

	inline static int32_t get_offset_of_managerSceneOpProgress_16() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___managerSceneOpProgress_16)); }
	inline float get_managerSceneOpProgress_16() const { return ___managerSceneOpProgress_16; }
	inline float* get_address_of_managerSceneOpProgress_16() { return &___managerSceneOpProgress_16; }
	inline void set_managerSceneOpProgress_16(float value)
	{
		___managerSceneOpProgress_16 = value;
	}

	inline static int32_t get_offset_of_contentTracker_17() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___contentTracker_17)); }
	inline SceneContentTracker_t63E7FA6D49DD34641F8A8975B6808FFC39383B65 * get_contentTracker_17() const { return ___contentTracker_17; }
	inline SceneContentTracker_t63E7FA6D49DD34641F8A8975B6808FFC39383B65 ** get_address_of_contentTracker_17() { return &___contentTracker_17; }
	inline void set_contentTracker_17(SceneContentTracker_t63E7FA6D49DD34641F8A8975B6808FFC39383B65 * value)
	{
		___contentTracker_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentTracker_17), (void*)value);
	}

	inline static int32_t get_offset_of_lightingExecutor_18() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___lightingExecutor_18)); }
	inline SceneLightingExecutor_t284A3495A5AF7E28B3778E8605ACF1806F2A1556 * get_lightingExecutor_18() const { return ___lightingExecutor_18; }
	inline SceneLightingExecutor_t284A3495A5AF7E28B3778E8605ACF1806F2A1556 ** get_address_of_lightingExecutor_18() { return &___lightingExecutor_18; }
	inline void set_lightingExecutor_18(SceneLightingExecutor_t284A3495A5AF7E28B3778E8605ACF1806F2A1556 * value)
	{
		___lightingExecutor_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightingExecutor_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3CNameU3Ek__BackingField_19)); }
	inline String_t* get_U3CNameU3Ek__BackingField_19() const { return ___U3CNameU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_19() { return &___U3CNameU3Ek__BackingField_19; }
	inline void set_U3CNameU3Ek__BackingField_19(String_t* value)
	{
		___U3CNameU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadContentU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnWillLoadContentU3Ek__BackingField_20)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillLoadContentU3Ek__BackingField_20() const { return ___U3COnWillLoadContentU3Ek__BackingField_20; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillLoadContentU3Ek__BackingField_20() { return &___U3COnWillLoadContentU3Ek__BackingField_20; }
	inline void set_U3COnWillLoadContentU3Ek__BackingField_20(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillLoadContentU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadContentU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentLoadedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnContentLoadedU3Ek__BackingField_21)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentLoadedU3Ek__BackingField_21() const { return ___U3COnContentLoadedU3Ek__BackingField_21; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentLoadedU3Ek__BackingField_21() { return &___U3COnContentLoadedU3Ek__BackingField_21; }
	inline void set_U3COnContentLoadedU3Ek__BackingField_21(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentLoadedU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentLoadedU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadContentU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnWillUnloadContentU3Ek__BackingField_22)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillUnloadContentU3Ek__BackingField_22() const { return ___U3COnWillUnloadContentU3Ek__BackingField_22; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillUnloadContentU3Ek__BackingField_22() { return &___U3COnWillUnloadContentU3Ek__BackingField_22; }
	inline void set_U3COnWillUnloadContentU3Ek__BackingField_22(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillUnloadContentU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadContentU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentUnloadedU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnContentUnloadedU3Ek__BackingField_23)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentUnloadedU3Ek__BackingField_23() const { return ___U3COnContentUnloadedU3Ek__BackingField_23; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentUnloadedU3Ek__BackingField_23() { return &___U3COnContentUnloadedU3Ek__BackingField_23; }
	inline void set_U3COnContentUnloadedU3Ek__BackingField_23(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentUnloadedU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentUnloadedU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadLightingU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnWillLoadLightingU3Ek__BackingField_24)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadLightingU3Ek__BackingField_24() const { return ___U3COnWillLoadLightingU3Ek__BackingField_24; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadLightingU3Ek__BackingField_24() { return &___U3COnWillLoadLightingU3Ek__BackingField_24; }
	inline void set_U3COnWillLoadLightingU3Ek__BackingField_24(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadLightingU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadLightingU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingLoadedU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnLightingLoadedU3Ek__BackingField_25)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingLoadedU3Ek__BackingField_25() const { return ___U3COnLightingLoadedU3Ek__BackingField_25; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingLoadedU3Ek__BackingField_25() { return &___U3COnLightingLoadedU3Ek__BackingField_25; }
	inline void set_U3COnLightingLoadedU3Ek__BackingField_25(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingLoadedU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingLoadedU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadLightingU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnWillUnloadLightingU3Ek__BackingField_26)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadLightingU3Ek__BackingField_26() const { return ___U3COnWillUnloadLightingU3Ek__BackingField_26; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadLightingU3Ek__BackingField_26() { return &___U3COnWillUnloadLightingU3Ek__BackingField_26; }
	inline void set_U3COnWillUnloadLightingU3Ek__BackingField_26(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadLightingU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadLightingU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingUnloadedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnLightingUnloadedU3Ek__BackingField_27)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingUnloadedU3Ek__BackingField_27() const { return ___U3COnLightingUnloadedU3Ek__BackingField_27; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingUnloadedU3Ek__BackingField_27() { return &___U3COnLightingUnloadedU3Ek__BackingField_27; }
	inline void set_U3COnLightingUnloadedU3Ek__BackingField_27(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingUnloadedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingUnloadedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadSceneU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnWillLoadSceneU3Ek__BackingField_28)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadSceneU3Ek__BackingField_28() const { return ___U3COnWillLoadSceneU3Ek__BackingField_28; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadSceneU3Ek__BackingField_28() { return &___U3COnWillLoadSceneU3Ek__BackingField_28; }
	inline void set_U3COnWillLoadSceneU3Ek__BackingField_28(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadSceneU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadSceneU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneLoadedU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnSceneLoadedU3Ek__BackingField_29)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneLoadedU3Ek__BackingField_29() const { return ___U3COnSceneLoadedU3Ek__BackingField_29; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneLoadedU3Ek__BackingField_29() { return &___U3COnSceneLoadedU3Ek__BackingField_29; }
	inline void set_U3COnSceneLoadedU3Ek__BackingField_29(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneLoadedU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneLoadedU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadSceneU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnWillUnloadSceneU3Ek__BackingField_30)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadSceneU3Ek__BackingField_30() const { return ___U3COnWillUnloadSceneU3Ek__BackingField_30; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadSceneU3Ek__BackingField_30() { return &___U3COnWillUnloadSceneU3Ek__BackingField_30; }
	inline void set_U3COnWillUnloadSceneU3Ek__BackingField_30(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadSceneU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadSceneU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneUnloadedU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3COnSceneUnloadedU3Ek__BackingField_31)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneUnloadedU3Ek__BackingField_31() const { return ___U3COnSceneUnloadedU3Ek__BackingField_31; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneUnloadedU3Ek__BackingField_31() { return &___U3COnSceneUnloadedU3Ek__BackingField_31; }
	inline void set_U3COnSceneUnloadedU3Ek__BackingField_31(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneUnloadedU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneUnloadedU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneOperationInProgressU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3CSceneOperationInProgressU3Ek__BackingField_32)); }
	inline bool get_U3CSceneOperationInProgressU3Ek__BackingField_32() const { return ___U3CSceneOperationInProgressU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CSceneOperationInProgressU3Ek__BackingField_32() { return &___U3CSceneOperationInProgressU3Ek__BackingField_32; }
	inline void set_U3CSceneOperationInProgressU3Ek__BackingField_32(bool value)
	{
		___U3CSceneOperationInProgressU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CSceneOperationProgressU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3CSceneOperationProgressU3Ek__BackingField_33)); }
	inline float get_U3CSceneOperationProgressU3Ek__BackingField_33() const { return ___U3CSceneOperationProgressU3Ek__BackingField_33; }
	inline float* get_address_of_U3CSceneOperationProgressU3Ek__BackingField_33() { return &___U3CSceneOperationProgressU3Ek__BackingField_33; }
	inline void set_U3CSceneOperationProgressU3Ek__BackingField_33(float value)
	{
		___U3CSceneOperationProgressU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationInProgressU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3CLightingOperationInProgressU3Ek__BackingField_34)); }
	inline bool get_U3CLightingOperationInProgressU3Ek__BackingField_34() const { return ___U3CLightingOperationInProgressU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CLightingOperationInProgressU3Ek__BackingField_34() { return &___U3CLightingOperationInProgressU3Ek__BackingField_34; }
	inline void set_U3CLightingOperationInProgressU3Ek__BackingField_34(bool value)
	{
		___U3CLightingOperationInProgressU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationProgressU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3CLightingOperationProgressU3Ek__BackingField_35)); }
	inline float get_U3CLightingOperationProgressU3Ek__BackingField_35() const { return ___U3CLightingOperationProgressU3Ek__BackingField_35; }
	inline float* get_address_of_U3CLightingOperationProgressU3Ek__BackingField_35() { return &___U3CLightingOperationProgressU3Ek__BackingField_35; }
	inline void set_U3CLightingOperationProgressU3Ek__BackingField_35(float value)
	{
		___U3CLightingOperationProgressU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CActiveLightingSceneU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3CActiveLightingSceneU3Ek__BackingField_36)); }
	inline String_t* get_U3CActiveLightingSceneU3Ek__BackingField_36() const { return ___U3CActiveLightingSceneU3Ek__BackingField_36; }
	inline String_t** get_address_of_U3CActiveLightingSceneU3Ek__BackingField_36() { return &___U3CActiveLightingSceneU3Ek__BackingField_36; }
	inline void set_U3CActiveLightingSceneU3Ek__BackingField_36(String_t* value)
	{
		___U3CActiveLightingSceneU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveLightingSceneU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWaitingToProceedU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3CWaitingToProceedU3Ek__BackingField_37)); }
	inline bool get_U3CWaitingToProceedU3Ek__BackingField_37() const { return ___U3CWaitingToProceedU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CWaitingToProceedU3Ek__BackingField_37() { return &___U3CWaitingToProceedU3Ek__BackingField_37; }
	inline void set_U3CWaitingToProceedU3Ek__BackingField_37(bool value)
	{
		___U3CWaitingToProceedU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3CSourceIdU3Ek__BackingField_38)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_38() const { return ___U3CSourceIdU3Ek__BackingField_38; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_38() { return &___U3CSourceIdU3Ek__BackingField_38; }
	inline void set_U3CSourceIdU3Ek__BackingField_38(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00, ___U3CSourceNameU3Ek__BackingField_39)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_39() const { return ___U3CSourceNameU3Ek__BackingField_39; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_39() { return &___U3CSourceNameU3Ek__BackingField_39; }
	inline void set_U3CSourceNameU3Ek__BackingField_39(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_39), (void*)value);
	}
};

struct MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadNextContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadNextContentPerfMarker_41;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadPrevContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadPrevContentPerfMarker_42;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentByTagPerfMarker_43;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentByTagPerfMarker_44;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentPerfMarker_45;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentPerfMarker_46;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::IsContentLoadedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsContentLoadedPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetLightingScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetLightingScenePerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetManagerScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetManagerScenePerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadScenesInternalPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadScenesInternalPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeLoadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeLoadedActionsPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillLoadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillLoadActionsPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillUnloadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillUnloadActionsPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeUnloadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeUnloadedActionsPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetScenePerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetLoadedContentScenesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetLoadedContentScenesPerfMarker_57;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_40() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___UpdatePerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_40() const { return ___UpdatePerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_40() { return &___UpdatePerfMarker_40; }
	inline void set_UpdatePerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_LoadNextContentPerfMarker_41() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___LoadNextContentPerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadNextContentPerfMarker_41() const { return ___LoadNextContentPerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadNextContentPerfMarker_41() { return &___LoadNextContentPerfMarker_41; }
	inline void set_LoadNextContentPerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadNextContentPerfMarker_41 = value;
	}

	inline static int32_t get_offset_of_LoadPrevContentPerfMarker_42() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___LoadPrevContentPerfMarker_42)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadPrevContentPerfMarker_42() const { return ___LoadPrevContentPerfMarker_42; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadPrevContentPerfMarker_42() { return &___LoadPrevContentPerfMarker_42; }
	inline void set_LoadPrevContentPerfMarker_42(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadPrevContentPerfMarker_42 = value;
	}

	inline static int32_t get_offset_of_LoadContentByTagPerfMarker_43() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___LoadContentByTagPerfMarker_43)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentByTagPerfMarker_43() const { return ___LoadContentByTagPerfMarker_43; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentByTagPerfMarker_43() { return &___LoadContentByTagPerfMarker_43; }
	inline void set_LoadContentByTagPerfMarker_43(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentByTagPerfMarker_43 = value;
	}

	inline static int32_t get_offset_of_UnloadContentByTagPerfMarker_44() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___UnloadContentByTagPerfMarker_44)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentByTagPerfMarker_44() const { return ___UnloadContentByTagPerfMarker_44; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentByTagPerfMarker_44() { return &___UnloadContentByTagPerfMarker_44; }
	inline void set_UnloadContentByTagPerfMarker_44(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentByTagPerfMarker_44 = value;
	}

	inline static int32_t get_offset_of_LoadContentPerfMarker_45() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___LoadContentPerfMarker_45)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentPerfMarker_45() const { return ___LoadContentPerfMarker_45; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentPerfMarker_45() { return &___LoadContentPerfMarker_45; }
	inline void set_LoadContentPerfMarker_45(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentPerfMarker_45 = value;
	}

	inline static int32_t get_offset_of_UnloadContentPerfMarker_46() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___UnloadContentPerfMarker_46)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentPerfMarker_46() const { return ___UnloadContentPerfMarker_46; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentPerfMarker_46() { return &___UnloadContentPerfMarker_46; }
	inline void set_UnloadContentPerfMarker_46(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentPerfMarker_46 = value;
	}

	inline static int32_t get_offset_of_IsContentLoadedPerfMarker_47() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___IsContentLoadedPerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsContentLoadedPerfMarker_47() const { return ___IsContentLoadedPerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsContentLoadedPerfMarker_47() { return &___IsContentLoadedPerfMarker_47; }
	inline void set_IsContentLoadedPerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsContentLoadedPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_SetLightingScenePerfMarker_48() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___SetLightingScenePerfMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetLightingScenePerfMarker_48() const { return ___SetLightingScenePerfMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetLightingScenePerfMarker_48() { return &___SetLightingScenePerfMarker_48; }
	inline void set_SetLightingScenePerfMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetLightingScenePerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_SetManagerScenePerfMarker_49() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___SetManagerScenePerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetManagerScenePerfMarker_49() const { return ___SetManagerScenePerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetManagerScenePerfMarker_49() { return &___SetManagerScenePerfMarker_49; }
	inline void set_SetManagerScenePerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetManagerScenePerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_LoadScenesInternalPerfMarker_50() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___LoadScenesInternalPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadScenesInternalPerfMarker_50() const { return ___LoadScenesInternalPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadScenesInternalPerfMarker_50() { return &___LoadScenesInternalPerfMarker_50; }
	inline void set_LoadScenesInternalPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadScenesInternalPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_UnloadScenesInternalPerfMarker_51() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___UnloadScenesInternalPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadScenesInternalPerfMarker_51() const { return ___UnloadScenesInternalPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadScenesInternalPerfMarker_51() { return &___UnloadScenesInternalPerfMarker_51; }
	inline void set_UnloadScenesInternalPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadScenesInternalPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_InvokeLoadedActionsPerfMarker_52() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___InvokeLoadedActionsPerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeLoadedActionsPerfMarker_52() const { return ___InvokeLoadedActionsPerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeLoadedActionsPerfMarker_52() { return &___InvokeLoadedActionsPerfMarker_52; }
	inline void set_InvokeLoadedActionsPerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeLoadedActionsPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_InvokeWillLoadActionsPerfMarker_53() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___InvokeWillLoadActionsPerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillLoadActionsPerfMarker_53() const { return ___InvokeWillLoadActionsPerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillLoadActionsPerfMarker_53() { return &___InvokeWillLoadActionsPerfMarker_53; }
	inline void set_InvokeWillLoadActionsPerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillLoadActionsPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_InvokeWillUnloadActionsPerfMarker_54() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___InvokeWillUnloadActionsPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillUnloadActionsPerfMarker_54() const { return ___InvokeWillUnloadActionsPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillUnloadActionsPerfMarker_54() { return &___InvokeWillUnloadActionsPerfMarker_54; }
	inline void set_InvokeWillUnloadActionsPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillUnloadActionsPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_InvokeUnloadedActionsPerfMarker_55() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___InvokeUnloadedActionsPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeUnloadedActionsPerfMarker_55() const { return ___InvokeUnloadedActionsPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeUnloadedActionsPerfMarker_55() { return &___InvokeUnloadedActionsPerfMarker_55; }
	inline void set_InvokeUnloadedActionsPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeUnloadedActionsPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_GetScenePerfMarker_56() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___GetScenePerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetScenePerfMarker_56() const { return ___GetScenePerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetScenePerfMarker_56() { return &___GetScenePerfMarker_56; }
	inline void set_GetScenePerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetScenePerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_GetLoadedContentScenesPerfMarker_57() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_StaticFields, ___GetLoadedContentScenesPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetLoadedContentScenesPerfMarker_57() const { return ___GetLoadedContentScenesPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetLoadedContentScenesPerfMarker_57() { return &___GetLoadedContentScenesPerfMarker_57; }
	inline void set_GetLoadedContentScenesPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetLoadedContentScenesPerfMarker_57 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct  MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2  : public BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_17;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_18;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_19;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_22;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___U3CNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CNameU3Ek__BackingField_17() const { return ___U3CNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_17() { return &___U3CNameU3Ek__BackingField_17; }
	inline void set_U3CNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___U3CSourceIdU3Ek__BackingField_18)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_18() const { return ___U3CSourceIdU3Ek__BackingField_18; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_18() { return &___U3CSourceIdU3Ek__BackingField_18; }
	inline void set_U3CSourceIdU3Ek__BackingField_18(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___U3CSourceNameU3Ek__BackingField_19)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_19() const { return ___U3CSourceNameU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_19() { return &___U3CSourceNameU3Ek__BackingField_19; }
	inline void set_U3CSourceNameU3Ek__BackingField_19(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_currentDisplayType_20() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___currentDisplayType_20)); }
	inline int32_t get_currentDisplayType_20() const { return ___currentDisplayType_20; }
	inline int32_t* get_address_of_currentDisplayType_20() { return &___currentDisplayType_20; }
	inline void set_currentDisplayType_20(int32_t value)
	{
		___currentDisplayType_20 = value;
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_21() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___cameraOpaqueLastFrame_21)); }
	inline bool get_cameraOpaqueLastFrame_21() const { return ___cameraOpaqueLastFrame_21; }
	inline bool* get_address_of_cameraOpaqueLastFrame_21() { return &___cameraOpaqueLastFrame_21; }
	inline void set_cameraOpaqueLastFrame_21(bool value)
	{
		___cameraOpaqueLastFrame_21 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_22() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___useFallbackBehavior_22)); }
	inline bool get_useFallbackBehavior_22() const { return ___useFallbackBehavior_22; }
	inline bool* get_address_of_useFallbackBehavior_22() { return &___useFallbackBehavior_22; }
	inline void set_useFallbackBehavior_22(bool value)
	{
		___useFallbackBehavior_22 = value;
	}
};

struct MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForOpaquePerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForTransparentPerfMarker_25;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_23() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields, ___UpdatePerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_23() const { return ___UpdatePerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_23() { return &___UpdatePerfMarker_23; }
	inline void set_UpdatePerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields, ___ApplySettingsForOpaquePerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForOpaquePerfMarker_24() const { return ___ApplySettingsForOpaquePerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForOpaquePerfMarker_24() { return &___ApplySettingsForOpaquePerfMarker_24; }
	inline void set_ApplySettingsForOpaquePerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForOpaquePerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields, ___ApplySettingsForTransparentPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForTransparentPerfMarker_25() const { return ___ApplySettingsForTransparentPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForTransparentPerfMarker_25() { return &___ApplySettingsForTransparentPerfMarker_25; }
	inline void set_ApplySettingsForTransparentPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForTransparentPerfMarker_25 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct  MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC  : public BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_18;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputEnabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputEnabled_19;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputDisabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputDisabled_20;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedInputSources>k__BackingField
	HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * ___U3CDetectedInputSourcesU3Ek__BackingField_21;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedControllers>k__BackingField
	HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 * ___U3CDetectedControllersU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputSystemProfile
	MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * ___inputSystemProfile_23;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<GazeProvider>k__BackingField
	RuntimeObject* ___U3CGazeProviderU3Ek__BackingField_24;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<EyeGazeProvider>k__BackingField
	RuntimeObject* ___U3CEyeGazeProviderU3Ek__BackingField_25;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::modalInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___modalInputStack_26;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::fallbackInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___fallbackInputStack_27;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::disabledRefCount
	int32_t ___disabledRefCount_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::isInputModuleAdded
	bool ___isInputModuleAdded_29;
	// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceStateEventData
	SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * ___sourceStateEventData_30;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceTrackingEventData
	SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * ___sourceTrackingEventData_31;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceVector2EventData
	SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * ___sourceVector2EventData_32;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePositionEventData
	SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * ___sourcePositionEventData_33;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceRotationEventData
	SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * ___sourceRotationEventData_34;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePoseEventData
	SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * ___sourcePoseEventData_35;
	// Microsoft.MixedReality.Toolkit.Input.FocusEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::focusEventData
	FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * ___focusEventData_36;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputEventData
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * ___inputEventData_37;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::pointerEventData
	MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ___pointerEventData_38;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::floatInputEventData
	InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * ___floatInputEventData_39;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::vector2InputEventData
	InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * ___vector2InputEventData_40;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::positionInputEventData
	InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * ___positionInputEventData_41;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::rotationInputEventData
	InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * ___rotationInputEventData_42;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::poseInputEventData
	InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * ___poseInputEventData_43;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::jointPoseInputEventData
	InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * ___jointPoseInputEventData_44;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handMeshInputEventData
	InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * ___handMeshInputEventData_45;
	// Microsoft.MixedReality.Toolkit.Input.SpeechEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::speechEventData
	SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * ___speechEventData_46;
	// Microsoft.MixedReality.Toolkit.Input.DictationEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::dictationEventData
	DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * ___dictationEventData_47;
	// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handTrackingInputEventData
	HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * ___handTrackingInputEventData_48;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<CurrentInputActionRulesProfile>k__BackingField
	MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_49;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CNameU3Ek__BackingField_18)); }
	inline String_t* get_U3CNameU3Ek__BackingField_18() const { return ___U3CNameU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_18() { return &___U3CNameU3Ek__BackingField_18; }
	inline void set_U3CNameU3Ek__BackingField_18(String_t* value)
	{
		___U3CNameU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_InputEnabled_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___InputEnabled_19)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputEnabled_19() const { return ___InputEnabled_19; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputEnabled_19() { return &___InputEnabled_19; }
	inline void set_InputEnabled_19(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputEnabled_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputEnabled_19), (void*)value);
	}

	inline static int32_t get_offset_of_InputDisabled_20() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___InputDisabled_20)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputDisabled_20() const { return ___InputDisabled_20; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputDisabled_20() { return &___InputDisabled_20; }
	inline void set_InputDisabled_20(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputDisabled_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputDisabled_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedInputSourcesU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CDetectedInputSourcesU3Ek__BackingField_21)); }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * get_U3CDetectedInputSourcesU3Ek__BackingField_21() const { return ___U3CDetectedInputSourcesU3Ek__BackingField_21; }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 ** get_address_of_U3CDetectedInputSourcesU3Ek__BackingField_21() { return &___U3CDetectedInputSourcesU3Ek__BackingField_21; }
	inline void set_U3CDetectedInputSourcesU3Ek__BackingField_21(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * value)
	{
		___U3CDetectedInputSourcesU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedInputSourcesU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedControllersU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CDetectedControllersU3Ek__BackingField_22)); }
	inline HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 * get_U3CDetectedControllersU3Ek__BackingField_22() const { return ___U3CDetectedControllersU3Ek__BackingField_22; }
	inline HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 ** get_address_of_U3CDetectedControllersU3Ek__BackingField_22() { return &___U3CDetectedControllersU3Ek__BackingField_22; }
	inline void set_U3CDetectedControllersU3Ek__BackingField_22(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 * value)
	{
		___U3CDetectedControllersU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedControllersU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystemProfile_23() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___inputSystemProfile_23)); }
	inline MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * get_inputSystemProfile_23() const { return ___inputSystemProfile_23; }
	inline MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 ** get_address_of_inputSystemProfile_23() { return &___inputSystemProfile_23; }
	inline void set_inputSystemProfile_23(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * value)
	{
		___inputSystemProfile_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemProfile_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeProviderU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CGazeProviderU3Ek__BackingField_24)); }
	inline RuntimeObject* get_U3CGazeProviderU3Ek__BackingField_24() const { return ___U3CGazeProviderU3Ek__BackingField_24; }
	inline RuntimeObject** get_address_of_U3CGazeProviderU3Ek__BackingField_24() { return &___U3CGazeProviderU3Ek__BackingField_24; }
	inline void set_U3CGazeProviderU3Ek__BackingField_24(RuntimeObject* value)
	{
		___U3CGazeProviderU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeProviderU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEyeGazeProviderU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CEyeGazeProviderU3Ek__BackingField_25)); }
	inline RuntimeObject* get_U3CEyeGazeProviderU3Ek__BackingField_25() const { return ___U3CEyeGazeProviderU3Ek__BackingField_25; }
	inline RuntimeObject** get_address_of_U3CEyeGazeProviderU3Ek__BackingField_25() { return &___U3CEyeGazeProviderU3Ek__BackingField_25; }
	inline void set_U3CEyeGazeProviderU3Ek__BackingField_25(RuntimeObject* value)
	{
		___U3CEyeGazeProviderU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEyeGazeProviderU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_modalInputStack_26() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___modalInputStack_26)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_modalInputStack_26() const { return ___modalInputStack_26; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_modalInputStack_26() { return &___modalInputStack_26; }
	inline void set_modalInputStack_26(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___modalInputStack_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modalInputStack_26), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackInputStack_27() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___fallbackInputStack_27)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_fallbackInputStack_27() const { return ___fallbackInputStack_27; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_fallbackInputStack_27() { return &___fallbackInputStack_27; }
	inline void set_fallbackInputStack_27(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___fallbackInputStack_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackInputStack_27), (void*)value);
	}

	inline static int32_t get_offset_of_disabledRefCount_28() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___disabledRefCount_28)); }
	inline int32_t get_disabledRefCount_28() const { return ___disabledRefCount_28; }
	inline int32_t* get_address_of_disabledRefCount_28() { return &___disabledRefCount_28; }
	inline void set_disabledRefCount_28(int32_t value)
	{
		___disabledRefCount_28 = value;
	}

	inline static int32_t get_offset_of_isInputModuleAdded_29() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___isInputModuleAdded_29)); }
	inline bool get_isInputModuleAdded_29() const { return ___isInputModuleAdded_29; }
	inline bool* get_address_of_isInputModuleAdded_29() { return &___isInputModuleAdded_29; }
	inline void set_isInputModuleAdded_29(bool value)
	{
		___isInputModuleAdded_29 = value;
	}

	inline static int32_t get_offset_of_sourceStateEventData_30() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceStateEventData_30)); }
	inline SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * get_sourceStateEventData_30() const { return ___sourceStateEventData_30; }
	inline SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 ** get_address_of_sourceStateEventData_30() { return &___sourceStateEventData_30; }
	inline void set_sourceStateEventData_30(SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * value)
	{
		___sourceStateEventData_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceStateEventData_30), (void*)value);
	}

	inline static int32_t get_offset_of_sourceTrackingEventData_31() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceTrackingEventData_31)); }
	inline SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * get_sourceTrackingEventData_31() const { return ___sourceTrackingEventData_31; }
	inline SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 ** get_address_of_sourceTrackingEventData_31() { return &___sourceTrackingEventData_31; }
	inline void set_sourceTrackingEventData_31(SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * value)
	{
		___sourceTrackingEventData_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceTrackingEventData_31), (void*)value);
	}

	inline static int32_t get_offset_of_sourceVector2EventData_32() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceVector2EventData_32)); }
	inline SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * get_sourceVector2EventData_32() const { return ___sourceVector2EventData_32; }
	inline SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 ** get_address_of_sourceVector2EventData_32() { return &___sourceVector2EventData_32; }
	inline void set_sourceVector2EventData_32(SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * value)
	{
		___sourceVector2EventData_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceVector2EventData_32), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePositionEventData_33() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourcePositionEventData_33)); }
	inline SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * get_sourcePositionEventData_33() const { return ___sourcePositionEventData_33; }
	inline SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A ** get_address_of_sourcePositionEventData_33() { return &___sourcePositionEventData_33; }
	inline void set_sourcePositionEventData_33(SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * value)
	{
		___sourcePositionEventData_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePositionEventData_33), (void*)value);
	}

	inline static int32_t get_offset_of_sourceRotationEventData_34() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceRotationEventData_34)); }
	inline SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * get_sourceRotationEventData_34() const { return ___sourceRotationEventData_34; }
	inline SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC ** get_address_of_sourceRotationEventData_34() { return &___sourceRotationEventData_34; }
	inline void set_sourceRotationEventData_34(SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * value)
	{
		___sourceRotationEventData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceRotationEventData_34), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePoseEventData_35() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourcePoseEventData_35)); }
	inline SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * get_sourcePoseEventData_35() const { return ___sourcePoseEventData_35; }
	inline SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 ** get_address_of_sourcePoseEventData_35() { return &___sourcePoseEventData_35; }
	inline void set_sourcePoseEventData_35(SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * value)
	{
		___sourcePoseEventData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePoseEventData_35), (void*)value);
	}

	inline static int32_t get_offset_of_focusEventData_36() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___focusEventData_36)); }
	inline FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * get_focusEventData_36() const { return ___focusEventData_36; }
	inline FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D ** get_address_of_focusEventData_36() { return &___focusEventData_36; }
	inline void set_focusEventData_36(FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * value)
	{
		___focusEventData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusEventData_36), (void*)value);
	}

	inline static int32_t get_offset_of_inputEventData_37() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___inputEventData_37)); }
	inline InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * get_inputEventData_37() const { return ___inputEventData_37; }
	inline InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 ** get_address_of_inputEventData_37() { return &___inputEventData_37; }
	inline void set_inputEventData_37(InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * value)
	{
		___inputEventData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEventData_37), (void*)value);
	}

	inline static int32_t get_offset_of_pointerEventData_38() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___pointerEventData_38)); }
	inline MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * get_pointerEventData_38() const { return ___pointerEventData_38; }
	inline MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B ** get_address_of_pointerEventData_38() { return &___pointerEventData_38; }
	inline void set_pointerEventData_38(MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * value)
	{
		___pointerEventData_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerEventData_38), (void*)value);
	}

	inline static int32_t get_offset_of_floatInputEventData_39() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___floatInputEventData_39)); }
	inline InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * get_floatInputEventData_39() const { return ___floatInputEventData_39; }
	inline InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC ** get_address_of_floatInputEventData_39() { return &___floatInputEventData_39; }
	inline void set_floatInputEventData_39(InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * value)
	{
		___floatInputEventData_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatInputEventData_39), (void*)value);
	}

	inline static int32_t get_offset_of_vector2InputEventData_40() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___vector2InputEventData_40)); }
	inline InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * get_vector2InputEventData_40() const { return ___vector2InputEventData_40; }
	inline InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 ** get_address_of_vector2InputEventData_40() { return &___vector2InputEventData_40; }
	inline void set_vector2InputEventData_40(InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * value)
	{
		___vector2InputEventData_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vector2InputEventData_40), (void*)value);
	}

	inline static int32_t get_offset_of_positionInputEventData_41() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___positionInputEventData_41)); }
	inline InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * get_positionInputEventData_41() const { return ___positionInputEventData_41; }
	inline InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E ** get_address_of_positionInputEventData_41() { return &___positionInputEventData_41; }
	inline void set_positionInputEventData_41(InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * value)
	{
		___positionInputEventData_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionInputEventData_41), (void*)value);
	}

	inline static int32_t get_offset_of_rotationInputEventData_42() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___rotationInputEventData_42)); }
	inline InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * get_rotationInputEventData_42() const { return ___rotationInputEventData_42; }
	inline InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 ** get_address_of_rotationInputEventData_42() { return &___rotationInputEventData_42; }
	inline void set_rotationInputEventData_42(InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * value)
	{
		___rotationInputEventData_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationInputEventData_42), (void*)value);
	}

	inline static int32_t get_offset_of_poseInputEventData_43() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___poseInputEventData_43)); }
	inline InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * get_poseInputEventData_43() const { return ___poseInputEventData_43; }
	inline InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 ** get_address_of_poseInputEventData_43() { return &___poseInputEventData_43; }
	inline void set_poseInputEventData_43(InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * value)
	{
		___poseInputEventData_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poseInputEventData_43), (void*)value);
	}

	inline static int32_t get_offset_of_jointPoseInputEventData_44() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___jointPoseInputEventData_44)); }
	inline InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * get_jointPoseInputEventData_44() const { return ___jointPoseInputEventData_44; }
	inline InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE ** get_address_of_jointPoseInputEventData_44() { return &___jointPoseInputEventData_44; }
	inline void set_jointPoseInputEventData_44(InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * value)
	{
		___jointPoseInputEventData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPoseInputEventData_44), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshInputEventData_45() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___handMeshInputEventData_45)); }
	inline InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * get_handMeshInputEventData_45() const { return ___handMeshInputEventData_45; }
	inline InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 ** get_address_of_handMeshInputEventData_45() { return &___handMeshInputEventData_45; }
	inline void set_handMeshInputEventData_45(InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * value)
	{
		___handMeshInputEventData_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshInputEventData_45), (void*)value);
	}

	inline static int32_t get_offset_of_speechEventData_46() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___speechEventData_46)); }
	inline SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * get_speechEventData_46() const { return ___speechEventData_46; }
	inline SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE ** get_address_of_speechEventData_46() { return &___speechEventData_46; }
	inline void set_speechEventData_46(SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * value)
	{
		___speechEventData_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechEventData_46), (void*)value);
	}

	inline static int32_t get_offset_of_dictationEventData_47() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___dictationEventData_47)); }
	inline DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * get_dictationEventData_47() const { return ___dictationEventData_47; }
	inline DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD ** get_address_of_dictationEventData_47() { return &___dictationEventData_47; }
	inline void set_dictationEventData_47(DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * value)
	{
		___dictationEventData_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationEventData_47), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingInputEventData_48() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___handTrackingInputEventData_48)); }
	inline HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * get_handTrackingInputEventData_48() const { return ___handTrackingInputEventData_48; }
	inline HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C ** get_address_of_handTrackingInputEventData_48() { return &___handTrackingInputEventData_48; }
	inline void set_handTrackingInputEventData_48(HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * value)
	{
		___handTrackingInputEventData_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingInputEventData_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_49)); }
	inline MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * get_U3CCurrentInputActionRulesProfileU3Ek__BackingField_49() const { return ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_49; }
	inline MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD ** get_address_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_49() { return &___U3CCurrentInputActionRulesProfileU3Ek__BackingField_49; }
	inline void set_U3CCurrentInputActionRulesProfileU3Ek__BackingField_49(MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * value)
	{
		___U3CCurrentInputActionRulesProfileU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentInputActionRulesProfileU3Ek__BackingField_49), (void*)value);
	}
};

struct MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ExecuteHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteHierarchyPerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleEventPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusChangedEventsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusChangedEventsPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusEventPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandlePointerEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandlePointerEventPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToGlobalListenersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToGlobalListenersPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToFallbackHandlersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToFallbackHandlersPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToObjectFocusedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToObjectFocusedPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchModalEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchModalEventPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_58;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceDetectedEventHandler
	EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * ___OnSourceDetectedEventHandler_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceLostPerfMarker_60;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceLostEventHandler
	EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * ___OnSourceLostEventHandler_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceTrackingStateChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceTrackingStateChangedPerfMarker_62;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceTrackingChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourceTrackingChangedEventHandler_63;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePositionChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePositionChangedPerfMarker_64;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseVector2ChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourcePoseVector2ChangedEventHandler_65;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePositionChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourcePositionChangedEventHandler_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceRotationChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceRotationChangedPerfMarker_67;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceRotationChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourceRotationChangedEventHandler_68;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePoseChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePoseChangedPerfMarker_69;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourcePoseChangedEventHandler_70;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePreFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePreFocusChangedPerfMarker_71;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPreFocusChangedHandler
	EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * ___OnPreFocusChangedHandler_72;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusChangedPerfMarker_73;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusChangedHandler
	EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * ___OnFocusChangedHandler_74;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusEnterPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusEnterPerfMarker_75;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusEnterEventHandler
	EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * ___OnFocusEnterEventHandler_76;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusExitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusExitPerfMarker_77;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusExitEventHandler
	EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * ___OnFocusExitEventHandler_78;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDownEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnPointerDownEventHandler_79;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDownPerfMarker_80;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDraggedEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnPointerDraggedEventHandler_81;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDraggedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDraggedPerfMarker_82;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputClickedEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnInputClickedEventHandler_83;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerClickedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerClickedPerfMarker_84;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerUpEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnPointerUpEventHandler_85;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerUpPerfMarker_86;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownEventHandler
	EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * ___OnInputDownEventHandler_87;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownWithActionEventHandler
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnInputDownWithActionEventHandler_88;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputDownPerfMarker_89;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpEventHandler
	EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * ___OnInputUpEventHandler_90;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpWithActionEventHandler
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnInputUpWithActionEventHandler_91;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputUpPerfMarker_92;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFloatInputChanged
	EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD * ___OnFloatInputChanged_93;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFloatInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFloatInputChangedPerfMarker_94;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTwoDoFInputChanged
	EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B * ___OnTwoDoFInputChanged_95;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePositionInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePositionInputChangedPerfMarker_96;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPositionInputChanged
	EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A * ___OnPositionInputChanged_97;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnRotationInputChanged
	EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF * ___OnRotationInputChanged_98;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseRotationInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseRotationInputChangedPerfMarker_99;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPoseInputChanged
	EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E * ___OnPoseInputChanged_100;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePoseInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePoseInputChangedPerfMarker_101;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStarted
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureStarted_102;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStartedWithAction
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnGestureStartedWithAction_103;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureStartedPerfMarker_104;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureUpdated
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureUpdated_105;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureUpdatedPerfMarker_106;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionUpdated
	EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * ___OnGestureVector2PositionUpdated_107;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionUpdated
	EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * ___OnGesturePositionUpdated_108;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationUpdated
	EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * ___OnGestureRotationUpdated_109;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseUpdated
	EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * ___OnGesturePoseUpdated_110;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompleted
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureCompleted_111;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompletedWithAction
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnGestureCompletedWithAction_112;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCompletedPerfMarker_113;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionCompleted
	EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * ___OnGestureVector2PositionCompleted_114;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionCompleted
	EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * ___OnGesturePositionCompleted_115;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationCompleted
	EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * ___OnGestureRotationCompleted_116;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseCompleted
	EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * ___OnGesturePoseCompleted_117;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCanceled
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureCanceled_118;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCanceledPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCanceledPerfMarker_119;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedEventHandler
	EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 * ___OnSpeechKeywordRecognizedEventHandler_120;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedWithActionEventHandler
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnSpeechKeywordRecognizedWithActionEventHandler_121;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSpeechCommandRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSpeechCommandRecognizedPerfMarker_122;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationHypothesisEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationHypothesisEventHandler_123;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationHypothesisPerfMarker_124;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationResultEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationResultEventHandler_125;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationResultPerfMarker_126;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationCompleteEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationCompleteEventHandler_127;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationCompletePerfMarker_128;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationErrorEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationErrorEventHandler_129;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationErrorPerfMarker_130;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandJointsUpdatedEventHandler
	EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A * ___OnHandJointsUpdatedEventHandler_131;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandJointsUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandJointsUpdatedPerfMarker_132;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandMeshUpdatedEventHandler
	EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A * ___OnHandMeshUpdatedEventHandler_133;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandMeshUpdatedPerfMarker_134;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchStartedEventHandler
	EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * ___OnTouchStartedEventHandler_135;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchStartedPerfMarker_136;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchCompletedEventHandler
	EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * ___OnTouchCompletedEventHandler_137;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchCompletedPerfMarker_138;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchUpdatedEventHandler
	EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * ___OnTouchUpdatedEventHandler_139;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchUpdatedPerfMarker_140;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ProcessRulesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessRulesInternalPerfMarker_141;

public:
	inline static int32_t get_offset_of_ExecuteHierarchyPerfMarker_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___ExecuteHierarchyPerfMarker_17)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteHierarchyPerfMarker_17() const { return ___ExecuteHierarchyPerfMarker_17; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteHierarchyPerfMarker_17() { return &___ExecuteHierarchyPerfMarker_17; }
	inline void set_ExecuteHierarchyPerfMarker_17(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteHierarchyPerfMarker_17 = value;
	}

	inline static int32_t get_offset_of_HandleEventPerfMarker_50() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandleEventPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleEventPerfMarker_50() const { return ___HandleEventPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleEventPerfMarker_50() { return &___HandleEventPerfMarker_50; }
	inline void set_HandleEventPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleEventPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_HandleFocusChangedEventsPerfMarker_51() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandleFocusChangedEventsPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusChangedEventsPerfMarker_51() const { return ___HandleFocusChangedEventsPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusChangedEventsPerfMarker_51() { return &___HandleFocusChangedEventsPerfMarker_51; }
	inline void set_HandleFocusChangedEventsPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusChangedEventsPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_HandleFocusEventPerfMarker_52() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandleFocusEventPerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusEventPerfMarker_52() const { return ___HandleFocusEventPerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusEventPerfMarker_52() { return &___HandleFocusEventPerfMarker_52; }
	inline void set_HandleFocusEventPerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusEventPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_HandlePointerEventPerfMarker_53() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandlePointerEventPerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandlePointerEventPerfMarker_53() const { return ___HandlePointerEventPerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandlePointerEventPerfMarker_53() { return &___HandlePointerEventPerfMarker_53; }
	inline void set_HandlePointerEventPerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandlePointerEventPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToGlobalListenersPerfMarker_54() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchEventToGlobalListenersPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToGlobalListenersPerfMarker_54() const { return ___DispatchEventToGlobalListenersPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToGlobalListenersPerfMarker_54() { return &___DispatchEventToGlobalListenersPerfMarker_54; }
	inline void set_DispatchEventToGlobalListenersPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToGlobalListenersPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToFallbackHandlersPerfMarker_55() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchEventToFallbackHandlersPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToFallbackHandlersPerfMarker_55() const { return ___DispatchEventToFallbackHandlersPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToFallbackHandlersPerfMarker_55() { return &___DispatchEventToFallbackHandlersPerfMarker_55; }
	inline void set_DispatchEventToFallbackHandlersPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToFallbackHandlersPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToObjectFocusedPerfMarker_56() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchEventToObjectFocusedPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToObjectFocusedPerfMarker_56() const { return ___DispatchEventToObjectFocusedPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToObjectFocusedPerfMarker_56() { return &___DispatchEventToObjectFocusedPerfMarker_56; }
	inline void set_DispatchEventToObjectFocusedPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToObjectFocusedPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_DispatchModalEventPerfMarker_57() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchModalEventPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchModalEventPerfMarker_57() const { return ___DispatchModalEventPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchModalEventPerfMarker_57() { return &___DispatchModalEventPerfMarker_57; }
	inline void set_DispatchModalEventPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchModalEventPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_58() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceDetectedPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_58() const { return ___RaiseSourceDetectedPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_58() { return &___RaiseSourceDetectedPerfMarker_58; }
	inline void set_RaiseSourceDetectedPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedEventHandler_59() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceDetectedEventHandler_59)); }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * get_OnSourceDetectedEventHandler_59() const { return ___OnSourceDetectedEventHandler_59; }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 ** get_address_of_OnSourceDetectedEventHandler_59() { return &___OnSourceDetectedEventHandler_59; }
	inline void set_OnSourceDetectedEventHandler_59(EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * value)
	{
		___OnSourceDetectedEventHandler_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceDetectedEventHandler_59), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceLostPerfMarker_60() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceLostPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceLostPerfMarker_60() const { return ___RaiseSourceLostPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceLostPerfMarker_60() { return &___RaiseSourceLostPerfMarker_60; }
	inline void set_RaiseSourceLostPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceLostPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostEventHandler_61() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceLostEventHandler_61)); }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * get_OnSourceLostEventHandler_61() const { return ___OnSourceLostEventHandler_61; }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 ** get_address_of_OnSourceLostEventHandler_61() { return &___OnSourceLostEventHandler_61; }
	inline void set_OnSourceLostEventHandler_61(EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * value)
	{
		___OnSourceLostEventHandler_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceLostEventHandler_61), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceTrackingStateChangedPerfMarker_62() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceTrackingStateChangedPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceTrackingStateChangedPerfMarker_62() const { return ___RaiseSourceTrackingStateChangedPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceTrackingStateChangedPerfMarker_62() { return &___RaiseSourceTrackingStateChangedPerfMarker_62; }
	inline void set_RaiseSourceTrackingStateChangedPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceTrackingStateChangedPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_OnSourceTrackingChangedEventHandler_63() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceTrackingChangedEventHandler_63)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourceTrackingChangedEventHandler_63() const { return ___OnSourceTrackingChangedEventHandler_63; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourceTrackingChangedEventHandler_63() { return &___OnSourceTrackingChangedEventHandler_63; }
	inline void set_OnSourceTrackingChangedEventHandler_63(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourceTrackingChangedEventHandler_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceTrackingChangedEventHandler_63), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePositionChangedPerfMarker_64() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourcePositionChangedPerfMarker_64)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePositionChangedPerfMarker_64() const { return ___RaiseSourcePositionChangedPerfMarker_64; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePositionChangedPerfMarker_64() { return &___RaiseSourcePositionChangedPerfMarker_64; }
	inline void set_RaiseSourcePositionChangedPerfMarker_64(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePositionChangedPerfMarker_64 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseVector2ChangedEventHandler_65() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourcePoseVector2ChangedEventHandler_65)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourcePoseVector2ChangedEventHandler_65() const { return ___OnSourcePoseVector2ChangedEventHandler_65; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourcePoseVector2ChangedEventHandler_65() { return &___OnSourcePoseVector2ChangedEventHandler_65; }
	inline void set_OnSourcePoseVector2ChangedEventHandler_65(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourcePoseVector2ChangedEventHandler_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseVector2ChangedEventHandler_65), (void*)value);
	}

	inline static int32_t get_offset_of_OnSourcePositionChangedEventHandler_66() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourcePositionChangedEventHandler_66)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourcePositionChangedEventHandler_66() const { return ___OnSourcePositionChangedEventHandler_66; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourcePositionChangedEventHandler_66() { return &___OnSourcePositionChangedEventHandler_66; }
	inline void set_OnSourcePositionChangedEventHandler_66(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourcePositionChangedEventHandler_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePositionChangedEventHandler_66), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceRotationChangedPerfMarker_67() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceRotationChangedPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceRotationChangedPerfMarker_67() const { return ___RaiseSourceRotationChangedPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceRotationChangedPerfMarker_67() { return &___RaiseSourceRotationChangedPerfMarker_67; }
	inline void set_RaiseSourceRotationChangedPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceRotationChangedPerfMarker_67 = value;
	}

	inline static int32_t get_offset_of_OnSourceRotationChangedEventHandler_68() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceRotationChangedEventHandler_68)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourceRotationChangedEventHandler_68() const { return ___OnSourceRotationChangedEventHandler_68; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourceRotationChangedEventHandler_68() { return &___OnSourceRotationChangedEventHandler_68; }
	inline void set_OnSourceRotationChangedEventHandler_68(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourceRotationChangedEventHandler_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceRotationChangedEventHandler_68), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePoseChangedPerfMarker_69() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourcePoseChangedPerfMarker_69)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePoseChangedPerfMarker_69() const { return ___RaiseSourcePoseChangedPerfMarker_69; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePoseChangedPerfMarker_69() { return &___RaiseSourcePoseChangedPerfMarker_69; }
	inline void set_RaiseSourcePoseChangedPerfMarker_69(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePoseChangedPerfMarker_69 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseChangedEventHandler_70() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourcePoseChangedEventHandler_70)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourcePoseChangedEventHandler_70() const { return ___OnSourcePoseChangedEventHandler_70; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourcePoseChangedEventHandler_70() { return &___OnSourcePoseChangedEventHandler_70; }
	inline void set_OnSourcePoseChangedEventHandler_70(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourcePoseChangedEventHandler_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseChangedEventHandler_70), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePreFocusChangedPerfMarker_71() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePreFocusChangedPerfMarker_71)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePreFocusChangedPerfMarker_71() const { return ___RaisePreFocusChangedPerfMarker_71; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePreFocusChangedPerfMarker_71() { return &___RaisePreFocusChangedPerfMarker_71; }
	inline void set_RaisePreFocusChangedPerfMarker_71(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePreFocusChangedPerfMarker_71 = value;
	}

	inline static int32_t get_offset_of_OnPreFocusChangedHandler_72() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPreFocusChangedHandler_72)); }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * get_OnPreFocusChangedHandler_72() const { return ___OnPreFocusChangedHandler_72; }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 ** get_address_of_OnPreFocusChangedHandler_72() { return &___OnPreFocusChangedHandler_72; }
	inline void set_OnPreFocusChangedHandler_72(EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * value)
	{
		___OnPreFocusChangedHandler_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreFocusChangedHandler_72), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusChangedPerfMarker_73() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFocusChangedPerfMarker_73)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusChangedPerfMarker_73() const { return ___RaiseFocusChangedPerfMarker_73; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusChangedPerfMarker_73() { return &___RaiseFocusChangedPerfMarker_73; }
	inline void set_RaiseFocusChangedPerfMarker_73(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusChangedPerfMarker_73 = value;
	}

	inline static int32_t get_offset_of_OnFocusChangedHandler_74() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFocusChangedHandler_74)); }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * get_OnFocusChangedHandler_74() const { return ___OnFocusChangedHandler_74; }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 ** get_address_of_OnFocusChangedHandler_74() { return &___OnFocusChangedHandler_74; }
	inline void set_OnFocusChangedHandler_74(EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * value)
	{
		___OnFocusChangedHandler_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusChangedHandler_74), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusEnterPerfMarker_75() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFocusEnterPerfMarker_75)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusEnterPerfMarker_75() const { return ___RaiseFocusEnterPerfMarker_75; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusEnterPerfMarker_75() { return &___RaiseFocusEnterPerfMarker_75; }
	inline void set_RaiseFocusEnterPerfMarker_75(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusEnterPerfMarker_75 = value;
	}

	inline static int32_t get_offset_of_OnFocusEnterEventHandler_76() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFocusEnterEventHandler_76)); }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * get_OnFocusEnterEventHandler_76() const { return ___OnFocusEnterEventHandler_76; }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 ** get_address_of_OnFocusEnterEventHandler_76() { return &___OnFocusEnterEventHandler_76; }
	inline void set_OnFocusEnterEventHandler_76(EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * value)
	{
		___OnFocusEnterEventHandler_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusEnterEventHandler_76), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusExitPerfMarker_77() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFocusExitPerfMarker_77)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusExitPerfMarker_77() const { return ___RaiseFocusExitPerfMarker_77; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusExitPerfMarker_77() { return &___RaiseFocusExitPerfMarker_77; }
	inline void set_RaiseFocusExitPerfMarker_77(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusExitPerfMarker_77 = value;
	}

	inline static int32_t get_offset_of_OnFocusExitEventHandler_78() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFocusExitEventHandler_78)); }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * get_OnFocusExitEventHandler_78() const { return ___OnFocusExitEventHandler_78; }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 ** get_address_of_OnFocusExitEventHandler_78() { return &___OnFocusExitEventHandler_78; }
	inline void set_OnFocusExitEventHandler_78(EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * value)
	{
		___OnFocusExitEventHandler_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusExitEventHandler_78), (void*)value);
	}

	inline static int32_t get_offset_of_OnPointerDownEventHandler_79() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPointerDownEventHandler_79)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnPointerDownEventHandler_79() const { return ___OnPointerDownEventHandler_79; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnPointerDownEventHandler_79() { return &___OnPointerDownEventHandler_79; }
	inline void set_OnPointerDownEventHandler_79(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnPointerDownEventHandler_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDownEventHandler_79), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDownPerfMarker_80() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerDownPerfMarker_80)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDownPerfMarker_80() const { return ___RaisePointerDownPerfMarker_80; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDownPerfMarker_80() { return &___RaisePointerDownPerfMarker_80; }
	inline void set_RaisePointerDownPerfMarker_80(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDownPerfMarker_80 = value;
	}

	inline static int32_t get_offset_of_OnPointerDraggedEventHandler_81() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPointerDraggedEventHandler_81)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnPointerDraggedEventHandler_81() const { return ___OnPointerDraggedEventHandler_81; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnPointerDraggedEventHandler_81() { return &___OnPointerDraggedEventHandler_81; }
	inline void set_OnPointerDraggedEventHandler_81(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnPointerDraggedEventHandler_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDraggedEventHandler_81), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDraggedPerfMarker_82() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerDraggedPerfMarker_82)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDraggedPerfMarker_82() const { return ___RaisePointerDraggedPerfMarker_82; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDraggedPerfMarker_82() { return &___RaisePointerDraggedPerfMarker_82; }
	inline void set_RaisePointerDraggedPerfMarker_82(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDraggedPerfMarker_82 = value;
	}

	inline static int32_t get_offset_of_OnInputClickedEventHandler_83() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputClickedEventHandler_83)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnInputClickedEventHandler_83() const { return ___OnInputClickedEventHandler_83; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnInputClickedEventHandler_83() { return &___OnInputClickedEventHandler_83; }
	inline void set_OnInputClickedEventHandler_83(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnInputClickedEventHandler_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputClickedEventHandler_83), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerClickedPerfMarker_84() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerClickedPerfMarker_84)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerClickedPerfMarker_84() const { return ___RaisePointerClickedPerfMarker_84; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerClickedPerfMarker_84() { return &___RaisePointerClickedPerfMarker_84; }
	inline void set_RaisePointerClickedPerfMarker_84(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerClickedPerfMarker_84 = value;
	}

	inline static int32_t get_offset_of_OnPointerUpEventHandler_85() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPointerUpEventHandler_85)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnPointerUpEventHandler_85() const { return ___OnPointerUpEventHandler_85; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnPointerUpEventHandler_85() { return &___OnPointerUpEventHandler_85; }
	inline void set_OnPointerUpEventHandler_85(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnPointerUpEventHandler_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerUpEventHandler_85), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerUpPerfMarker_86() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerUpPerfMarker_86)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerUpPerfMarker_86() const { return ___RaisePointerUpPerfMarker_86; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerUpPerfMarker_86() { return &___RaisePointerUpPerfMarker_86; }
	inline void set_RaisePointerUpPerfMarker_86(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerUpPerfMarker_86 = value;
	}

	inline static int32_t get_offset_of_OnInputDownEventHandler_87() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputDownEventHandler_87)); }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * get_OnInputDownEventHandler_87() const { return ___OnInputDownEventHandler_87; }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 ** get_address_of_OnInputDownEventHandler_87() { return &___OnInputDownEventHandler_87; }
	inline void set_OnInputDownEventHandler_87(EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * value)
	{
		___OnInputDownEventHandler_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownEventHandler_87), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputDownWithActionEventHandler_88() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputDownWithActionEventHandler_88)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnInputDownWithActionEventHandler_88() const { return ___OnInputDownWithActionEventHandler_88; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnInputDownWithActionEventHandler_88() { return &___OnInputDownWithActionEventHandler_88; }
	inline void set_OnInputDownWithActionEventHandler_88(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnInputDownWithActionEventHandler_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownWithActionEventHandler_88), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputDownPerfMarker_89() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnInputDownPerfMarker_89)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputDownPerfMarker_89() const { return ___RaiseOnInputDownPerfMarker_89; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputDownPerfMarker_89() { return &___RaiseOnInputDownPerfMarker_89; }
	inline void set_RaiseOnInputDownPerfMarker_89(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputDownPerfMarker_89 = value;
	}

	inline static int32_t get_offset_of_OnInputUpEventHandler_90() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputUpEventHandler_90)); }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * get_OnInputUpEventHandler_90() const { return ___OnInputUpEventHandler_90; }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 ** get_address_of_OnInputUpEventHandler_90() { return &___OnInputUpEventHandler_90; }
	inline void set_OnInputUpEventHandler_90(EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * value)
	{
		___OnInputUpEventHandler_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpEventHandler_90), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputUpWithActionEventHandler_91() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputUpWithActionEventHandler_91)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnInputUpWithActionEventHandler_91() const { return ___OnInputUpWithActionEventHandler_91; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnInputUpWithActionEventHandler_91() { return &___OnInputUpWithActionEventHandler_91; }
	inline void set_OnInputUpWithActionEventHandler_91(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnInputUpWithActionEventHandler_91 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpWithActionEventHandler_91), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputUpPerfMarker_92() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnInputUpPerfMarker_92)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputUpPerfMarker_92() const { return ___RaiseOnInputUpPerfMarker_92; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputUpPerfMarker_92() { return &___RaiseOnInputUpPerfMarker_92; }
	inline void set_RaiseOnInputUpPerfMarker_92(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputUpPerfMarker_92 = value;
	}

	inline static int32_t get_offset_of_OnFloatInputChanged_93() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFloatInputChanged_93)); }
	inline EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD * get_OnFloatInputChanged_93() const { return ___OnFloatInputChanged_93; }
	inline EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD ** get_address_of_OnFloatInputChanged_93() { return &___OnFloatInputChanged_93; }
	inline void set_OnFloatInputChanged_93(EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD * value)
	{
		___OnFloatInputChanged_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFloatInputChanged_93), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFloatInputChangedPerfMarker_94() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFloatInputChangedPerfMarker_94)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFloatInputChangedPerfMarker_94() const { return ___RaiseFloatInputChangedPerfMarker_94; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFloatInputChangedPerfMarker_94() { return &___RaiseFloatInputChangedPerfMarker_94; }
	inline void set_RaiseFloatInputChangedPerfMarker_94(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFloatInputChangedPerfMarker_94 = value;
	}

	inline static int32_t get_offset_of_OnTwoDoFInputChanged_95() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTwoDoFInputChanged_95)); }
	inline EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B * get_OnTwoDoFInputChanged_95() const { return ___OnTwoDoFInputChanged_95; }
	inline EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B ** get_address_of_OnTwoDoFInputChanged_95() { return &___OnTwoDoFInputChanged_95; }
	inline void set_OnTwoDoFInputChanged_95(EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B * value)
	{
		___OnTwoDoFInputChanged_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTwoDoFInputChanged_95), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePositionInputChangedPerfMarker_96() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePositionInputChangedPerfMarker_96)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePositionInputChangedPerfMarker_96() const { return ___RaisePositionInputChangedPerfMarker_96; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePositionInputChangedPerfMarker_96() { return &___RaisePositionInputChangedPerfMarker_96; }
	inline void set_RaisePositionInputChangedPerfMarker_96(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePositionInputChangedPerfMarker_96 = value;
	}

	inline static int32_t get_offset_of_OnPositionInputChanged_97() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPositionInputChanged_97)); }
	inline EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A * get_OnPositionInputChanged_97() const { return ___OnPositionInputChanged_97; }
	inline EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A ** get_address_of_OnPositionInputChanged_97() { return &___OnPositionInputChanged_97; }
	inline void set_OnPositionInputChanged_97(EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A * value)
	{
		___OnPositionInputChanged_97 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPositionInputChanged_97), (void*)value);
	}

	inline static int32_t get_offset_of_OnRotationInputChanged_98() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnRotationInputChanged_98)); }
	inline EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF * get_OnRotationInputChanged_98() const { return ___OnRotationInputChanged_98; }
	inline EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF ** get_address_of_OnRotationInputChanged_98() { return &___OnRotationInputChanged_98; }
	inline void set_OnRotationInputChanged_98(EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF * value)
	{
		___OnRotationInputChanged_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRotationInputChanged_98), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseRotationInputChangedPerfMarker_99() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseRotationInputChangedPerfMarker_99)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseRotationInputChangedPerfMarker_99() const { return ___RaiseRotationInputChangedPerfMarker_99; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseRotationInputChangedPerfMarker_99() { return &___RaiseRotationInputChangedPerfMarker_99; }
	inline void set_RaiseRotationInputChangedPerfMarker_99(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseRotationInputChangedPerfMarker_99 = value;
	}

	inline static int32_t get_offset_of_OnPoseInputChanged_100() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPoseInputChanged_100)); }
	inline EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E * get_OnPoseInputChanged_100() const { return ___OnPoseInputChanged_100; }
	inline EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E ** get_address_of_OnPoseInputChanged_100() { return &___OnPoseInputChanged_100; }
	inline void set_OnPoseInputChanged_100(EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E * value)
	{
		___OnPoseInputChanged_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPoseInputChanged_100), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePoseInputChangedPerfMarker_101() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePoseInputChangedPerfMarker_101)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePoseInputChangedPerfMarker_101() const { return ___RaisePoseInputChangedPerfMarker_101; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePoseInputChangedPerfMarker_101() { return &___RaisePoseInputChangedPerfMarker_101; }
	inline void set_RaisePoseInputChangedPerfMarker_101(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePoseInputChangedPerfMarker_101 = value;
	}

	inline static int32_t get_offset_of_OnGestureStarted_102() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureStarted_102)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureStarted_102() const { return ___OnGestureStarted_102; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureStarted_102() { return &___OnGestureStarted_102; }
	inline void set_OnGestureStarted_102(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureStarted_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStarted_102), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureStartedWithAction_103() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureStartedWithAction_103)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnGestureStartedWithAction_103() const { return ___OnGestureStartedWithAction_103; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnGestureStartedWithAction_103() { return &___OnGestureStartedWithAction_103; }
	inline void set_OnGestureStartedWithAction_103(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnGestureStartedWithAction_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStartedWithAction_103), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureStartedPerfMarker_104() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureStartedPerfMarker_104)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureStartedPerfMarker_104() const { return ___RaiseGestureStartedPerfMarker_104; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureStartedPerfMarker_104() { return &___RaiseGestureStartedPerfMarker_104; }
	inline void set_RaiseGestureStartedPerfMarker_104(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureStartedPerfMarker_104 = value;
	}

	inline static int32_t get_offset_of_OnGestureUpdated_105() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureUpdated_105)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureUpdated_105() const { return ___OnGestureUpdated_105; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureUpdated_105() { return &___OnGestureUpdated_105; }
	inline void set_OnGestureUpdated_105(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureUpdated_105 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureUpdated_105), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureUpdatedPerfMarker_106() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureUpdatedPerfMarker_106)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureUpdatedPerfMarker_106() const { return ___RaiseGestureUpdatedPerfMarker_106; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureUpdatedPerfMarker_106() { return &___RaiseGestureUpdatedPerfMarker_106; }
	inline void set_RaiseGestureUpdatedPerfMarker_106(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureUpdatedPerfMarker_106 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionUpdated_107() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureVector2PositionUpdated_107)); }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * get_OnGestureVector2PositionUpdated_107() const { return ___OnGestureVector2PositionUpdated_107; }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 ** get_address_of_OnGestureVector2PositionUpdated_107() { return &___OnGestureVector2PositionUpdated_107; }
	inline void set_OnGestureVector2PositionUpdated_107(EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * value)
	{
		___OnGestureVector2PositionUpdated_107 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionUpdated_107), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionUpdated_108() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePositionUpdated_108)); }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * get_OnGesturePositionUpdated_108() const { return ___OnGesturePositionUpdated_108; }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC ** get_address_of_OnGesturePositionUpdated_108() { return &___OnGesturePositionUpdated_108; }
	inline void set_OnGesturePositionUpdated_108(EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * value)
	{
		___OnGesturePositionUpdated_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionUpdated_108), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationUpdated_109() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureRotationUpdated_109)); }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * get_OnGestureRotationUpdated_109() const { return ___OnGestureRotationUpdated_109; }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D ** get_address_of_OnGestureRotationUpdated_109() { return &___OnGestureRotationUpdated_109; }
	inline void set_OnGestureRotationUpdated_109(EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * value)
	{
		___OnGestureRotationUpdated_109 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationUpdated_109), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseUpdated_110() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePoseUpdated_110)); }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * get_OnGesturePoseUpdated_110() const { return ___OnGesturePoseUpdated_110; }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 ** get_address_of_OnGesturePoseUpdated_110() { return &___OnGesturePoseUpdated_110; }
	inline void set_OnGesturePoseUpdated_110(EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * value)
	{
		___OnGesturePoseUpdated_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseUpdated_110), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompleted_111() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureCompleted_111)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureCompleted_111() const { return ___OnGestureCompleted_111; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureCompleted_111() { return &___OnGestureCompleted_111; }
	inline void set_OnGestureCompleted_111(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureCompleted_111 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompleted_111), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompletedWithAction_112() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureCompletedWithAction_112)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnGestureCompletedWithAction_112() const { return ___OnGestureCompletedWithAction_112; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnGestureCompletedWithAction_112() { return &___OnGestureCompletedWithAction_112; }
	inline void set_OnGestureCompletedWithAction_112(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnGestureCompletedWithAction_112 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompletedWithAction_112), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCompletedPerfMarker_113() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureCompletedPerfMarker_113)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCompletedPerfMarker_113() const { return ___RaiseGestureCompletedPerfMarker_113; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCompletedPerfMarker_113() { return &___RaiseGestureCompletedPerfMarker_113; }
	inline void set_RaiseGestureCompletedPerfMarker_113(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCompletedPerfMarker_113 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionCompleted_114() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureVector2PositionCompleted_114)); }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * get_OnGestureVector2PositionCompleted_114() const { return ___OnGestureVector2PositionCompleted_114; }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 ** get_address_of_OnGestureVector2PositionCompleted_114() { return &___OnGestureVector2PositionCompleted_114; }
	inline void set_OnGestureVector2PositionCompleted_114(EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * value)
	{
		___OnGestureVector2PositionCompleted_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionCompleted_114), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionCompleted_115() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePositionCompleted_115)); }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * get_OnGesturePositionCompleted_115() const { return ___OnGesturePositionCompleted_115; }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC ** get_address_of_OnGesturePositionCompleted_115() { return &___OnGesturePositionCompleted_115; }
	inline void set_OnGesturePositionCompleted_115(EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * value)
	{
		___OnGesturePositionCompleted_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionCompleted_115), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationCompleted_116() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureRotationCompleted_116)); }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * get_OnGestureRotationCompleted_116() const { return ___OnGestureRotationCompleted_116; }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D ** get_address_of_OnGestureRotationCompleted_116() { return &___OnGestureRotationCompleted_116; }
	inline void set_OnGestureRotationCompleted_116(EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * value)
	{
		___OnGestureRotationCompleted_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationCompleted_116), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseCompleted_117() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePoseCompleted_117)); }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * get_OnGesturePoseCompleted_117() const { return ___OnGesturePoseCompleted_117; }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 ** get_address_of_OnGesturePoseCompleted_117() { return &___OnGesturePoseCompleted_117; }
	inline void set_OnGesturePoseCompleted_117(EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * value)
	{
		___OnGesturePoseCompleted_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseCompleted_117), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCanceled_118() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureCanceled_118)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureCanceled_118() const { return ___OnGestureCanceled_118; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureCanceled_118() { return &___OnGestureCanceled_118; }
	inline void set_OnGestureCanceled_118(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureCanceled_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCanceled_118), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCanceledPerfMarker_119() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureCanceledPerfMarker_119)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCanceledPerfMarker_119() const { return ___RaiseGestureCanceledPerfMarker_119; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCanceledPerfMarker_119() { return &___RaiseGestureCanceledPerfMarker_119; }
	inline void set_RaiseGestureCanceledPerfMarker_119(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCanceledPerfMarker_119 = value;
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedEventHandler_120() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSpeechKeywordRecognizedEventHandler_120)); }
	inline EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 * get_OnSpeechKeywordRecognizedEventHandler_120() const { return ___OnSpeechKeywordRecognizedEventHandler_120; }
	inline EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 ** get_address_of_OnSpeechKeywordRecognizedEventHandler_120() { return &___OnSpeechKeywordRecognizedEventHandler_120; }
	inline void set_OnSpeechKeywordRecognizedEventHandler_120(EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 * value)
	{
		___OnSpeechKeywordRecognizedEventHandler_120 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedEventHandler_120), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedWithActionEventHandler_121() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSpeechKeywordRecognizedWithActionEventHandler_121)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnSpeechKeywordRecognizedWithActionEventHandler_121() const { return ___OnSpeechKeywordRecognizedWithActionEventHandler_121; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnSpeechKeywordRecognizedWithActionEventHandler_121() { return &___OnSpeechKeywordRecognizedWithActionEventHandler_121; }
	inline void set_OnSpeechKeywordRecognizedWithActionEventHandler_121(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnSpeechKeywordRecognizedWithActionEventHandler_121 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedWithActionEventHandler_121), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSpeechCommandRecognizedPerfMarker_122() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSpeechCommandRecognizedPerfMarker_122)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSpeechCommandRecognizedPerfMarker_122() const { return ___RaiseSpeechCommandRecognizedPerfMarker_122; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSpeechCommandRecognizedPerfMarker_122() { return &___RaiseSpeechCommandRecognizedPerfMarker_122; }
	inline void set_RaiseSpeechCommandRecognizedPerfMarker_122(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSpeechCommandRecognizedPerfMarker_122 = value;
	}

	inline static int32_t get_offset_of_OnDictationHypothesisEventHandler_123() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationHypothesisEventHandler_123)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationHypothesisEventHandler_123() const { return ___OnDictationHypothesisEventHandler_123; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationHypothesisEventHandler_123() { return &___OnDictationHypothesisEventHandler_123; }
	inline void set_OnDictationHypothesisEventHandler_123(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationHypothesisEventHandler_123 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationHypothesisEventHandler_123), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationHypothesisPerfMarker_124() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationHypothesisPerfMarker_124)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationHypothesisPerfMarker_124() const { return ___RaiseDictationHypothesisPerfMarker_124; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationHypothesisPerfMarker_124() { return &___RaiseDictationHypothesisPerfMarker_124; }
	inline void set_RaiseDictationHypothesisPerfMarker_124(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationHypothesisPerfMarker_124 = value;
	}

	inline static int32_t get_offset_of_OnDictationResultEventHandler_125() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationResultEventHandler_125)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationResultEventHandler_125() const { return ___OnDictationResultEventHandler_125; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationResultEventHandler_125() { return &___OnDictationResultEventHandler_125; }
	inline void set_OnDictationResultEventHandler_125(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationResultEventHandler_125 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationResultEventHandler_125), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationResultPerfMarker_126() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationResultPerfMarker_126)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationResultPerfMarker_126() const { return ___RaiseDictationResultPerfMarker_126; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationResultPerfMarker_126() { return &___RaiseDictationResultPerfMarker_126; }
	inline void set_RaiseDictationResultPerfMarker_126(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationResultPerfMarker_126 = value;
	}

	inline static int32_t get_offset_of_OnDictationCompleteEventHandler_127() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationCompleteEventHandler_127)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationCompleteEventHandler_127() const { return ___OnDictationCompleteEventHandler_127; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationCompleteEventHandler_127() { return &___OnDictationCompleteEventHandler_127; }
	inline void set_OnDictationCompleteEventHandler_127(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationCompleteEventHandler_127 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationCompleteEventHandler_127), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationCompletePerfMarker_128() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationCompletePerfMarker_128)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationCompletePerfMarker_128() const { return ___RaiseDictationCompletePerfMarker_128; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationCompletePerfMarker_128() { return &___RaiseDictationCompletePerfMarker_128; }
	inline void set_RaiseDictationCompletePerfMarker_128(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationCompletePerfMarker_128 = value;
	}

	inline static int32_t get_offset_of_OnDictationErrorEventHandler_129() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationErrorEventHandler_129)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationErrorEventHandler_129() const { return ___OnDictationErrorEventHandler_129; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationErrorEventHandler_129() { return &___OnDictationErrorEventHandler_129; }
	inline void set_OnDictationErrorEventHandler_129(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationErrorEventHandler_129 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationErrorEventHandler_129), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationErrorPerfMarker_130() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationErrorPerfMarker_130)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationErrorPerfMarker_130() const { return ___RaiseDictationErrorPerfMarker_130; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationErrorPerfMarker_130() { return &___RaiseDictationErrorPerfMarker_130; }
	inline void set_RaiseDictationErrorPerfMarker_130(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationErrorPerfMarker_130 = value;
	}

	inline static int32_t get_offset_of_OnHandJointsUpdatedEventHandler_131() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnHandJointsUpdatedEventHandler_131)); }
	inline EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A * get_OnHandJointsUpdatedEventHandler_131() const { return ___OnHandJointsUpdatedEventHandler_131; }
	inline EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A ** get_address_of_OnHandJointsUpdatedEventHandler_131() { return &___OnHandJointsUpdatedEventHandler_131; }
	inline void set_OnHandJointsUpdatedEventHandler_131(EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A * value)
	{
		___OnHandJointsUpdatedEventHandler_131 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandJointsUpdatedEventHandler_131), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandJointsUpdatedPerfMarker_132() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseHandJointsUpdatedPerfMarker_132)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandJointsUpdatedPerfMarker_132() const { return ___RaiseHandJointsUpdatedPerfMarker_132; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandJointsUpdatedPerfMarker_132() { return &___RaiseHandJointsUpdatedPerfMarker_132; }
	inline void set_RaiseHandJointsUpdatedPerfMarker_132(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandJointsUpdatedPerfMarker_132 = value;
	}

	inline static int32_t get_offset_of_OnHandMeshUpdatedEventHandler_133() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnHandMeshUpdatedEventHandler_133)); }
	inline EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A * get_OnHandMeshUpdatedEventHandler_133() const { return ___OnHandMeshUpdatedEventHandler_133; }
	inline EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A ** get_address_of_OnHandMeshUpdatedEventHandler_133() { return &___OnHandMeshUpdatedEventHandler_133; }
	inline void set_OnHandMeshUpdatedEventHandler_133(EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A * value)
	{
		___OnHandMeshUpdatedEventHandler_133 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandMeshUpdatedEventHandler_133), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandMeshUpdatedPerfMarker_134() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseHandMeshUpdatedPerfMarker_134)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandMeshUpdatedPerfMarker_134() const { return ___RaiseHandMeshUpdatedPerfMarker_134; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandMeshUpdatedPerfMarker_134() { return &___RaiseHandMeshUpdatedPerfMarker_134; }
	inline void set_RaiseHandMeshUpdatedPerfMarker_134(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandMeshUpdatedPerfMarker_134 = value;
	}

	inline static int32_t get_offset_of_OnTouchStartedEventHandler_135() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTouchStartedEventHandler_135)); }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * get_OnTouchStartedEventHandler_135() const { return ___OnTouchStartedEventHandler_135; }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED ** get_address_of_OnTouchStartedEventHandler_135() { return &___OnTouchStartedEventHandler_135; }
	inline void set_OnTouchStartedEventHandler_135(EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * value)
	{
		___OnTouchStartedEventHandler_135 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchStartedEventHandler_135), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchStartedPerfMarker_136() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnTouchStartedPerfMarker_136)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchStartedPerfMarker_136() const { return ___RaiseOnTouchStartedPerfMarker_136; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchStartedPerfMarker_136() { return &___RaiseOnTouchStartedPerfMarker_136; }
	inline void set_RaiseOnTouchStartedPerfMarker_136(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchStartedPerfMarker_136 = value;
	}

	inline static int32_t get_offset_of_OnTouchCompletedEventHandler_137() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTouchCompletedEventHandler_137)); }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * get_OnTouchCompletedEventHandler_137() const { return ___OnTouchCompletedEventHandler_137; }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED ** get_address_of_OnTouchCompletedEventHandler_137() { return &___OnTouchCompletedEventHandler_137; }
	inline void set_OnTouchCompletedEventHandler_137(EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * value)
	{
		___OnTouchCompletedEventHandler_137 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchCompletedEventHandler_137), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchCompletedPerfMarker_138() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnTouchCompletedPerfMarker_138)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchCompletedPerfMarker_138() const { return ___RaiseOnTouchCompletedPerfMarker_138; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchCompletedPerfMarker_138() { return &___RaiseOnTouchCompletedPerfMarker_138; }
	inline void set_RaiseOnTouchCompletedPerfMarker_138(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchCompletedPerfMarker_138 = value;
	}

	inline static int32_t get_offset_of_OnTouchUpdatedEventHandler_139() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTouchUpdatedEventHandler_139)); }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * get_OnTouchUpdatedEventHandler_139() const { return ___OnTouchUpdatedEventHandler_139; }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED ** get_address_of_OnTouchUpdatedEventHandler_139() { return &___OnTouchUpdatedEventHandler_139; }
	inline void set_OnTouchUpdatedEventHandler_139(EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * value)
	{
		___OnTouchUpdatedEventHandler_139 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchUpdatedEventHandler_139), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchUpdatedPerfMarker_140() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnTouchUpdatedPerfMarker_140)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchUpdatedPerfMarker_140() const { return ___RaiseOnTouchUpdatedPerfMarker_140; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchUpdatedPerfMarker_140() { return &___RaiseOnTouchUpdatedPerfMarker_140; }
	inline void set_RaiseOnTouchUpdatedPerfMarker_140(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchUpdatedPerfMarker_140 = value;
	}

	inline static int32_t get_offset_of_ProcessRulesInternalPerfMarker_141() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___ProcessRulesInternalPerfMarker_141)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessRulesInternalPerfMarker_141() const { return ___ProcessRulesInternalPerfMarker_141; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessRulesInternalPerfMarker_141() { return &___ProcessRulesInternalPerfMarker_141; }
	inline void set_ProcessRulesInternalPerfMarker_141(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessRulesInternalPerfMarker_141 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);


// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Byte System.Int16::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int16_System_IConvertible_ToByte_m0E74BCBCFA4D75E8FB13A2C257D10F18A96ED5F4 (int16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int16::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int16_System_IConvertible_ToUInt16_mE43A66ECABFF33A3471DF2B7DFCB4C2E8488C5B8 (int16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Int16::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int16_System_IConvertible_ToInt32_m1FD089282F21498CEF9EA2D367479CBD23980C67 (int16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int16::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int16_System_IConvertible_ToUInt32_m54D61D94009F47A80F433489EBD864D30936DD59 (int16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Int16::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int16_System_IConvertible_ToInt64_mF9BDC82C8A57A7CA671E8CCF9E6D3793743B91EE (int16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int16::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int16_System_IConvertible_ToUInt64_m6D56318016AAC83C6066DB4080E126DBEE6EFF98 (int16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int16::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int16_System_IConvertible_ToSingle_mB075924B227EDEA1C9FDD19AC13DADF9DF02CD8E (int16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int16::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int16_System_IConvertible_ToDouble_m729B7A60F7B8FDB5EF7F88E8491A9597A9634D01 (int16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Byte System.Int64::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int64_System_IConvertible_ToByte_m314323B8189FB3F2DA8464CF4F5F5E137B615C2E (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Int64::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int64_System_IConvertible_ToInt16_mC2B46F79D29BEDE260B7E90BA44720CA926C63B6 (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int64::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int64_System_IConvertible_ToUInt16_m3E36DCF20D4B1B99554BA57C2437503A23879EFB (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Int64::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_System_IConvertible_ToInt32_m6C0D3C28A7C76B397FC9680C093D02046840F661 (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int64::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int64_System_IConvertible_ToUInt32_m366E6C5025FC150F6B0E800890D655D582C0DC20 (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int64::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int64_System_IConvertible_ToUInt64_mD0A66DE9A57C277FB9919A604BDEC6668E6AC6B9 (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int64::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int64_System_IConvertible_ToSingle_m648FEC2A6C4C4B84B1DF2EE2E3770F2EFD3AFD1E (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int64::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int64_System_IConvertible_ToDouble_mA238A85D655CB5D380F26F92FF49E63BFB8D5F77 (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::GetAt(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, uint32_t ___index0, const RuntimeMethod* method);
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::IndexOf(System.Object,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, RuntimeObject * ___value0, uint32_t* ___index1, const RuntimeMethod* method);

// COM Callable Wrapper for Windows.Graphics.Holographic.HolographicViewConfigurationKind
struct HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper>, IReference_1_tCDFD1E097542F9F7957CC61D2EF0CB6ED4D47245, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tCDFD1E097542F9F7957CC61D2EF0CB6ED4D47245::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tCDFD1E097542F9F7957CC61D2EF0CB6ED4D47245*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tCDFD1E097542F9F7957CC61D2EF0CB6ED4D47245::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m62C19D1B7765C61ECB51B5783983EF2B4587D423(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.InputPlaybackService
struct InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputPlaybackService_t4581D7B105D8DBAE681C05597B9FC8710FFDD279_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.InputRecordingService
struct InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputRecordingService_tA847B98505BE7064D6751CD73492550FE4A2338B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.InputSimulationService
struct InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputSimulationService_tC2474A83D4E654B62C43598E195430898A3B2F0E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Int16_tD0F031114106263BB459DA1F099FF9F42691295A_ComCallableWrapper>, IReference_1_tC6255B8D76C30FB703AE5D37D44F122311813002, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Int16_tD0F031114106263BB459DA1F099FF9F42691295A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Int16_tD0F031114106263BB459DA1F099FF9F42691295A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tC6255B8D76C30FB703AE5D37D44F122311813002::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tC6255B8D76C30FB703AE5D37D44F122311813002*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tC6255B8D76C30FB703AE5D37D44F122311813002::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4109F1547651E29762681FE5A1F621A2747BE3BB(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			returnValue = *static_cast<int16_t*>(UnBox(GetManagedObjectInline(), Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 2;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int16_t value = *static_cast<int16_t*>(UnBox(GetManagedObjectInline(), Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int16_System_IConvertible_ToByte_m0E74BCBCFA4D75E8FB13A2C257D10F18A96ED5F4((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			returnValue = *static_cast<int16_t*>(UnBox(GetManagedObjectInline(), Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int16_t value = *static_cast<int16_t*>(UnBox(GetManagedObjectInline(), Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int16_System_IConvertible_ToUInt16_mE43A66ECABFF33A3471DF2B7DFCB4C2E8488C5B8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			int16_t value = *static_cast<int16_t*>(UnBox(GetManagedObjectInline(), Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var));
			try
			{
				int32_t il2cppRetVal;
				il2cppRetVal = Int16_System_IConvertible_ToInt32_m1FD089282F21498CEF9EA2D367479CBD23980C67((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "Int32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Int32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Int32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int16_t value = *static_cast<int16_t*>(UnBox(GetManagedObjectInline(), Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int16_System_IConvertible_ToUInt32_m54D61D94009F47A80F433489EBD864D30936DD59((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int16_t value = *static_cast<int16_t*>(UnBox(GetManagedObjectInline(), Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int16_System_IConvertible_ToInt64_mF9BDC82C8A57A7CA671E8CCF9E6D3793743B91EE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int16_t value = *static_cast<int16_t*>(UnBox(GetManagedObjectInline(), Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int16_System_IConvertible_ToUInt64_m6D56318016AAC83C6066DB4080E126DBEE6EFF98((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int16_t value = *static_cast<int16_t*>(UnBox(GetManagedObjectInline(), Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int16_System_IConvertible_ToSingle_mB075924B227EDEA1C9FDD19AC13DADF9DF02CD8E((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int16_t value = *static_cast<int16_t*>(UnBox(GetManagedObjectInline(), Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int16_System_IConvertible_ToDouble_m729B7A60F7B8FDB5EF7F88E8491A9597A9634D01((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int16", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int16", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Int16_tD0F031114106263BB459DA1F099FF9F42691295A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Int16_tD0F031114106263BB459DA1F099FF9F42691295A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_ComCallableWrapper>, IReference_1_tD34C6D96E80163C85D8630F18188527F391BD4EB, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tD34C6D96E80163C85D8630F18188527F391BD4EB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tD34C6D96E80163C85D8630F18188527F391BD4EB*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tD34C6D96E80163C85D8630F18188527F391BD4EB::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m281EE509DDB82977889529E36B88E3E25B5E0B67(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 4;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int32", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int32", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_ComCallableWrapper>, IReference_1_tF7CACD76E73FCC8B8DB84C6DD6DF3DDBEB5C3544, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tF7CACD76E73FCC8B8DB84C6DD6DF3DDBEB5C3544::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tF7CACD76E73FCC8B8DB84C6DD6DF3DDBEB5C3544*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tF7CACD76E73FCC8B8DB84C6DD6DF3DDBEB5C3544::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mFD4D785FA835F0F1E35392FD38594DB388DAD686(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			returnValue = *static_cast<int64_t*>(UnBox(GetManagedObjectInline(), Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 6;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int64_t value = *static_cast<int64_t*>(UnBox(GetManagedObjectInline(), Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int64_System_IConvertible_ToByte_m314323B8189FB3F2DA8464CF4F5F5E137B615C2E((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int64_t value = *static_cast<int64_t*>(UnBox(GetManagedObjectInline(), Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int64_System_IConvertible_ToInt16_mC2B46F79D29BEDE260B7E90BA44720CA926C63B6((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int64_t value = *static_cast<int64_t*>(UnBox(GetManagedObjectInline(), Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int64_System_IConvertible_ToUInt16_m3E36DCF20D4B1B99554BA57C2437503A23879EFB((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			int64_t value = *static_cast<int64_t*>(UnBox(GetManagedObjectInline(), Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
			try
			{
				int32_t il2cppRetVal;
				il2cppRetVal = Int64_System_IConvertible_ToInt32_m6C0D3C28A7C76B397FC9680C093D02046840F661((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "Int32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Int32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Int32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int64_t value = *static_cast<int64_t*>(UnBox(GetManagedObjectInline(), Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int64_System_IConvertible_ToUInt32_m366E6C5025FC150F6B0E800890D655D582C0DC20((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			returnValue = *static_cast<int64_t*>(UnBox(GetManagedObjectInline(), Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int64_t value = *static_cast<int64_t*>(UnBox(GetManagedObjectInline(), Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int64_System_IConvertible_ToUInt64_mD0A66DE9A57C277FB9919A604BDEC6668E6AC6B9((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int64_t value = *static_cast<int64_t*>(UnBox(GetManagedObjectInline(), Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int64_System_IConvertible_ToSingle_m648FEC2A6C4C4B84B1DF2EE2E3770F2EFD3AFD1E((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int64_t value = *static_cast<int64_t*>(UnBox(GetManagedObjectInline(), Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int64_System_IConvertible_ToDouble_mA238A85D655CB5D380F26F92FF49E63BFB8D5F77((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Int64", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Int64", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper>, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject * returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2(__thisValue, ___index0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		Il2CppIInspectable* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		RuntimeObject * ____value0_unmarshaled = NULL;
		if (___value0 != NULL)
		{
			____value0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____value0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____value0_unmarshaled), Il2CppIInspectable::IID, ___value0);
			}
		}
		else
		{
			____value0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___index1' to managed representation
		uint32_t ____index1_empty = 0;

		// Managed method invocation
		bool returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD(__thisValue, ____value0_unmarshaled, (&____index1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___index1' back from managed representation
		*___index1 = ____index1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MCMDictionary
struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>, IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>, IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 *>(UnBox(GetManagedObjectInline(), Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>, IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 *>(UnBox(GetManagedObjectInline(), Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00_ComCallableWrapper(obj));
}
