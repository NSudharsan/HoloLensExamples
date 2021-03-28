#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>
struct EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t10AC44967751F27B2BFC1CDA880B1466D87483F1;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tAB52144CF1BE31970F39D1B37C6EFB450EE0F10B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t81B35976BCAABB86634D8CAB6C5EBECE36D65D3A;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler
struct IMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot
struct IMixedRealityTeleportHotSpot_tC322A822A17C34B9ACFD862732449C77BED89429;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData
struct TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c
struct U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportHotSpot_tC322A822A17C34B9ACFD862732449C77BED89429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportPointer_t512E8888A79D939AFE8F3809D15266C0B104B9E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1368B5D5C5B45AE31591BCF3645486425E6C0A22;
IL2CPP_EXTERN_C String_t* _stringLiteral3BEDD8A5E4E11ACDACE8299C529195CB3424CE12;
IL2CPP_EXTERN_C String_t* _stringLiteral485A478CF03D1C7CBD8C53456B5CAA42882354D3;
IL2CPP_EXTERN_C String_t* _stringLiteral4F29D0F17814227DFDAADF5F3649A3FCB047B2CC;
IL2CPP_EXTERN_C String_t* _stringLiteral67B6449F1BAD0A542C06774CB4179DEC54F04D47;
IL2CPP_EXTERN_C String_t* _stringLiteral762DA1192ACEC40D9F1945FA764CE95DC42F814B;
IL2CPP_EXTERN_C String_t* _stringLiteral87697DFF6C7C5EA241FE037E78348244A0354ACA;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9;
IL2CPP_EXTERN_C String_t* _stringLiteralD818882F3D6DEA9ADE38F7ED17CB332A5E586505;
IL2CPP_EXTERN_C String_t* _stringLiteralF988C7F2F580EB6406722D922B922E2DFBAF00D4;
IL2CPP_EXTERN_C const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_m335CBB82770429BC58A809AB646541F48F94D922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventFunction_1__ctor_m29AE55B9367FABD450F212938590105A6998AB3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_0_mE68EE23A773518EC5C0C91A02C1379F9CE176DDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_1_m40B8DD15134CE0794FB36DD462668F95F9A2210F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_2_m2FF66A688C315493D180EFD425CA427D5E3C1F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_3_m216C60675E573CCC8F99D46C8EDD2F4C451F8186_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE832EA231E3A84086D90F688290F2F394F45EB45 
{
public:

public:
};


// System.Object


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

// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c
struct  U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<>9
	U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
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


// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct  MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_point_0() const { return ___point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___point_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_barycentricCoordinate_2() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___barycentricCoordinate_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_barycentricCoordinate_2() const { return ___barycentricCoordinate_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_barycentricCoordinate_2() { return &___barycentricCoordinate_2; }
	inline void set_barycentricCoordinate_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___barycentricCoordinate_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_triangleIndex_4() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___triangleIndex_4)); }
	inline int32_t get_triangleIndex_4() const { return ___triangleIndex_4; }
	inline int32_t* get_address_of_triangleIndex_4() { return &___triangleIndex_4; }
	inline void set_triangleIndex_4(int32_t value)
	{
		___triangleIndex_4 = value;
	}

	inline static int32_t get_offset_of_textureCoord_5() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___textureCoord_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord_5() const { return ___textureCoord_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord_5() { return &___textureCoord_5; }
	inline void set_textureCoord_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord_5 = value;
	}

	inline static int32_t get_offset_of_textureCoord2_6() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___textureCoord2_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord2_6() const { return ___textureCoord2_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord2_6() { return &___textureCoord2_6; }
	inline void set_textureCoord2_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord2_6 = value;
	}

	inline static int32_t get_offset_of_transform_7() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___transform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_7() const { return ___transform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_7() { return &___transform_7; }
	inline void set_transform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_7), (void*)value);
	}

	inline static int32_t get_offset_of_lightmapCoord_8() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___lightmapCoord_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_lightmapCoord_8() const { return ___lightmapCoord_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_lightmapCoord_8() { return &___lightmapCoord_8; }
	inline void set_lightmapCoord_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___lightmapCoord_8 = value;
	}

	inline static int32_t get_offset_of_raycastValid_9() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___raycastValid_9)); }
	inline bool get_raycastValid_9() const { return ___raycastValid_9; }
	inline bool* get_address_of_raycastValid_9() { return &___raycastValid_9; }
	inline void set_raycastValid_9(bool value)
	{
		___raycastValid_9 = value;
	}

	inline static int32_t get_offset_of_collider_10() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___collider_10)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_collider_10() const { return ___collider_10; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_collider_10() { return &___collider_10; }
	inline void set_collider_10(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___collider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_10), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
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


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
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


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct  FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<RayDistance>k__BackingField
	float ___U3CRayDistanceU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Point>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Object>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4  ___U3CLastRaycastHitU3Ek__BackingField_4;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastGraphicsRaycastResult>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<PointLocalSpace>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<NormalLocalSpace>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CRayDistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CRayDistanceU3Ek__BackingField_0)); }
	inline float get_U3CRayDistanceU3Ek__BackingField_0() const { return ___U3CRayDistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CRayDistanceU3Ek__BackingField_0() { return &___U3CRayDistanceU3Ek__BackingField_0; }
	inline void set_U3CRayDistanceU3Ek__BackingField_0(float value)
	{
		___U3CRayDistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CPointU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointU3Ek__BackingField_1() const { return ___U3CPointU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointU3Ek__BackingField_1() { return &___U3CPointU3Ek__BackingField_1; }
	inline void set_U3CPointU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CNormalU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalU3Ek__BackingField_2() const { return ___U3CNormalU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalU3Ek__BackingField_2() { return &___U3CNormalU3Ek__BackingField_2; }
	inline void set_U3CNormalU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CObjectU3Ek__BackingField_3() const { return ___U3CObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CObjectU3Ek__BackingField_3() { return &___U3CObjectU3Ek__BackingField_3; }
	inline void set_U3CObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastRaycastHitU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CLastRaycastHitU3Ek__BackingField_4)); }
	inline MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4  get_U3CLastRaycastHitU3Ek__BackingField_4() const { return ___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4 * get_address_of_U3CLastRaycastHitU3Ek__BackingField_4() { return &___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline void set_U3CLastRaycastHitU3Ek__BackingField_4(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4  value)
	{
		___U3CLastRaycastHitU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() const { return ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return &___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline void set_U3CLastGraphicsRaycastResultU3Ek__BackingField_5(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CLastGraphicsRaycastResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CPointLocalSpaceU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointLocalSpaceU3Ek__BackingField_6() const { return ___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return &___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline void set_U3CPointLocalSpaceU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointLocalSpaceU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CNormalLocalSpaceU3Ek__BackingField_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalLocalSpaceU3Ek__BackingField_7() const { return ___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return &___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline void set_U3CNormalLocalSpaceU3Ek__BackingField_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalLocalSpaceU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7_marshaled_pinvoke
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4_marshaled_pinvoke ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7_marshaled_com
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4_marshaled_com ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};

// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData
struct  TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2  : public GenericBaseEventData_t063174F622A9296406C3FF3A6FB98B86BF269AB3
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::<HotSpot>k__BackingField
	RuntimeObject* ___U3CHotSpotU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2, ___U3CPointerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_5() const { return ___U3CPointerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_5() { return &___U3CPointerU3Ek__BackingField_5; }
	inline void set_U3CPointerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHotSpotU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2, ___U3CHotSpotU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CHotSpotU3Ek__BackingField_6() const { return ___U3CHotSpotU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CHotSpotU3Ek__BackingField_6() { return &___U3CHotSpotU3Ek__BackingField_6; }
	inline void set_U3CHotSpotU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CHotSpotU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHotSpotU3Ek__BackingField_6), (void*)value);
	}
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>
struct  EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246  : public MulticastDelegate_t
{
public:

public:
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


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct  MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4  : public BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1
{
public:
	// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportEventData
	TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * ___teleportEventData_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isTeleporting
	bool ___isTeleporting_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isProcessingTeleportRequest
	bool ___isProcessingTeleportRequest_16;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetRotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetRotation_18;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::eventSystemReference
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___eventSystemReference_19;
	// System.String Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_20;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportDuration
	float ___teleportDuration_22;

public:
	inline static int32_t get_offset_of_teleportEventData_14() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4, ___teleportEventData_14)); }
	inline TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * get_teleportEventData_14() const { return ___teleportEventData_14; }
	inline TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 ** get_address_of_teleportEventData_14() { return &___teleportEventData_14; }
	inline void set_teleportEventData_14(TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * value)
	{
		___teleportEventData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportEventData_14), (void*)value);
	}

	inline static int32_t get_offset_of_isTeleporting_15() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4, ___isTeleporting_15)); }
	inline bool get_isTeleporting_15() const { return ___isTeleporting_15; }
	inline bool* get_address_of_isTeleporting_15() { return &___isTeleporting_15; }
	inline void set_isTeleporting_15(bool value)
	{
		___isTeleporting_15 = value;
	}

	inline static int32_t get_offset_of_isProcessingTeleportRequest_16() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4, ___isProcessingTeleportRequest_16)); }
	inline bool get_isProcessingTeleportRequest_16() const { return ___isProcessingTeleportRequest_16; }
	inline bool* get_address_of_isProcessingTeleportRequest_16() { return &___isProcessingTeleportRequest_16; }
	inline void set_isProcessingTeleportRequest_16(bool value)
	{
		___isProcessingTeleportRequest_16 = value;
	}

	inline static int32_t get_offset_of_targetPosition_17() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4, ___targetPosition_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_17() const { return ___targetPosition_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_17() { return &___targetPosition_17; }
	inline void set_targetPosition_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_17 = value;
	}

	inline static int32_t get_offset_of_targetRotation_18() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4, ___targetRotation_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetRotation_18() const { return ___targetRotation_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetRotation_18() { return &___targetRotation_18; }
	inline void set_targetRotation_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetRotation_18 = value;
	}

	inline static int32_t get_offset_of_eventSystemReference_19() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4, ___eventSystemReference_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_eventSystemReference_19() const { return ___eventSystemReference_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_eventSystemReference_19() { return &___eventSystemReference_19; }
	inline void set_eventSystemReference_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___eventSystemReference_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemReference_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4, ___U3CNameU3Ek__BackingField_20)); }
	inline String_t* get_U3CNameU3Ek__BackingField_20() const { return ___U3CNameU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_20() { return &___U3CNameU3Ek__BackingField_20; }
	inline void set_U3CNameU3Ek__BackingField_20(String_t* value)
	{
		___U3CNameU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_teleportDuration_22() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4, ___teleportDuration_22)); }
	inline float get_teleportDuration_22() const { return ___teleportDuration_22; }
	inline float* get_address_of_teleportDuration_22() { return &___teleportDuration_22; }
	inline void set_teleportDuration_22(float value)
	{
		___teleportDuration_22 = value;
	}
};

struct MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::HandleEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleEventPerfMarker_21;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportRequestHandler
	EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * ___OnTeleportRequestHandler_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportRequestPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportRequestPerfMarker_24;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportStartedHandler
	EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * ___OnTeleportStartedHandler_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportStartedPerfMarker_26;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCompletedHandler
	EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * ___OnTeleportCompletedHandler_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportCompletePerfMarker_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCanceledHandler
	EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * ___OnTeleportCanceledHandler_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCanceledPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportCanceledPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequestPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessTeleportationRequestPerfMarker_31;

public:
	inline static int32_t get_offset_of_HandleEventPerfMarker_21() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields, ___HandleEventPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleEventPerfMarker_21() const { return ___HandleEventPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleEventPerfMarker_21() { return &___HandleEventPerfMarker_21; }
	inline void set_HandleEventPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleEventPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_OnTeleportRequestHandler_23() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields, ___OnTeleportRequestHandler_23)); }
	inline EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * get_OnTeleportRequestHandler_23() const { return ___OnTeleportRequestHandler_23; }
	inline EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 ** get_address_of_OnTeleportRequestHandler_23() { return &___OnTeleportRequestHandler_23; }
	inline void set_OnTeleportRequestHandler_23(EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * value)
	{
		___OnTeleportRequestHandler_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportRequestHandler_23), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportRequestPerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields, ___RaiseTeleportRequestPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportRequestPerfMarker_24() const { return ___RaiseTeleportRequestPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportRequestPerfMarker_24() { return &___RaiseTeleportRequestPerfMarker_24; }
	inline void set_RaiseTeleportRequestPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportRequestPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnTeleportStartedHandler_25() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields, ___OnTeleportStartedHandler_25)); }
	inline EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * get_OnTeleportStartedHandler_25() const { return ___OnTeleportStartedHandler_25; }
	inline EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 ** get_address_of_OnTeleportStartedHandler_25() { return &___OnTeleportStartedHandler_25; }
	inline void set_OnTeleportStartedHandler_25(EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * value)
	{
		___OnTeleportStartedHandler_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportStartedHandler_25), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportStartedPerfMarker_26() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields, ___RaiseTeleportStartedPerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportStartedPerfMarker_26() const { return ___RaiseTeleportStartedPerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportStartedPerfMarker_26() { return &___RaiseTeleportStartedPerfMarker_26; }
	inline void set_RaiseTeleportStartedPerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportStartedPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_OnTeleportCompletedHandler_27() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields, ___OnTeleportCompletedHandler_27)); }
	inline EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * get_OnTeleportCompletedHandler_27() const { return ___OnTeleportCompletedHandler_27; }
	inline EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 ** get_address_of_OnTeleportCompletedHandler_27() { return &___OnTeleportCompletedHandler_27; }
	inline void set_OnTeleportCompletedHandler_27(EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * value)
	{
		___OnTeleportCompletedHandler_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportCompletedHandler_27), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportCompletePerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields, ___RaiseTeleportCompletePerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportCompletePerfMarker_28() const { return ___RaiseTeleportCompletePerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportCompletePerfMarker_28() { return &___RaiseTeleportCompletePerfMarker_28; }
	inline void set_RaiseTeleportCompletePerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportCompletePerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_OnTeleportCanceledHandler_29() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields, ___OnTeleportCanceledHandler_29)); }
	inline EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * get_OnTeleportCanceledHandler_29() const { return ___OnTeleportCanceledHandler_29; }
	inline EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 ** get_address_of_OnTeleportCanceledHandler_29() { return &___OnTeleportCanceledHandler_29; }
	inline void set_OnTeleportCanceledHandler_29(EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * value)
	{
		___OnTeleportCanceledHandler_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportCanceledHandler_29), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportCanceledPerfMarker_30() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields, ___RaiseTeleportCanceledPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportCanceledPerfMarker_30() const { return ___RaiseTeleportCanceledPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportCanceledPerfMarker_30() { return &___RaiseTeleportCanceledPerfMarker_30; }
	inline void set_RaiseTeleportCanceledPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportCanceledPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_ProcessTeleportationRequestPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields, ___ProcessTeleportationRequestPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessTeleportationRequestPerfMarker_31() const { return ___ProcessTeleportationRequestPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessTeleportationRequestPerfMarker_31() { return &___ProcessTeleportationRequestPerfMarker_31; }
	inline void set_ProcessTeleportationRequestPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessTeleportationRequestPerfMarker_31 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_m3F82DE59817188D1A794C88049022C027E5EC53D_gshared (EventFunction_1_t10AC44967751F27B2BFC1CDA880B1466D87483F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_m2EF33FE4C8E15ED2F07EF4F042474BA6EF9668C6 (BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1 * __this, RuntimeObject* ___registrar0, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m41C7F8717AB5D871F276AEE009640821912A84D0_inline (BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_m9F585751EE910179FD30E1147AF80D6D29C2F32D (BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1 * __this, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m2854DC6A1734D75511EF9330824787E4E6B2E0B9 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_InitializeInternal_m59A7BC9D6AC7C0FA8D405C192D92A90B1AF7E84D (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportEventData__ctor_mDB47F43A149E28A724F2E410B780F46023563119 (TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_mB676A7F14CDDC1778779E9DB2B7FB36577EBFF4B (BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Register_m9D2A6325FBF64222C1F8C9433FB48647A58A1505 (BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Unregister(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Unregister_m2B78856594D3428EA89E238BE7F1591CA834BCB7 (BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::Initialize(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportEventData_Initialize_m3F8C47E315D2042C4AB60B30DB26FE43FCB49941 (TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___target1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_ProcessTeleportationRequest_m5DFC52B60DC89398B72200DD08EB83BB0784FD8E (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * ___eventData0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::get_Pointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Pointer_mF20C542AFAB7F490F612E810A2CCD79BD83116B1_inline (TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Point()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Point_m64928E75649D63E98441E757747B337430BD3BB3_inline (FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::get_HotSpot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_HotSpot_mFD01290512736A6E2AF40BDF9125714EA709C89F_inline (TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_get_Position_mFA2AD73CFCD44DCEE1D433FF286FF7CDDE8394D0 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Position_mC2919EB2593621FFF8BB47C3BEDEE23EEA2BEB04 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_RotateAround_m1A5D13F5B5E4F066B3D18BFB32D3F584AE7C89A7 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___angle2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportComplete_mD50EC768C1CA21DD54EBDDD60A5BEE60E148DB90 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m29AE55B9367FABD450F212938590105A6998AB3D (EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m3F82DE59817188D1A794C88049022C027E5EC53D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mED2C2EB943542D61945D9104E324C6D63879E327 (U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData>(UnityEngine.EventSystems.BaseEventData)
inline TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__ctor_m48679151EF38F2302DD8B870EA29344224DDE0E6 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, RuntimeObject* ___registrar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 targetPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_targetPosition_17(L_0);
		// private Vector3 targetRotation = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_targetRotation_18(L_1);
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		__this->set_U3CNameU3Ek__BackingField_20(_stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9);
		// private float teleportDuration = 0.25f;
		__this->set_teleportDuration_22((0.25f));
		// IMixedRealityServiceRegistrar registrar) : base(registrar, null) 
		RuntimeObject* L_2 = ___registrar0;
		BaseCoreSystem__ctor_m2EF33FE4C8E15ED2F07EF4F042474BA6EF9668C6(__this, L_2, (BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 *)NULL, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_3 = ___registrar0;
		BaseCoreSystem_set_Registrar_m41C7F8717AB5D871F276AEE009640821912A84D0_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__ctor_m2A4FD7C0A824808D53D126ED8A8752C0DC412958 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 targetPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_targetPosition_17(L_0);
		// private Vector3 targetRotation = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_targetRotation_18(L_1);
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		__this->set_U3CNameU3Ek__BackingField_20(_stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9);
		// private float teleportDuration = 0.25f;
		__this->set_teleportDuration_22((0.25f));
		// public MixedRealityTeleportSystem() : base(null) { } 
		BaseCoreSystem__ctor_m9F585751EE910179FD30E1147AF80D6D29C2F32D(__this, (BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 *)NULL, /*hidden argument*/NULL);
		// public MixedRealityTeleportSystem() : base(null) { } 
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityTeleportSystem_get_Name_m1D689ABA3E685287E83E25ED055533A418A259D9 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_set_Name_m5CE9CC302FD10BE945093B0A107E28F8689EEAB7 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Initialize_m1A7EFBEDC4A5FA3AF8C061D79D22DE314F7F3087 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, const RuntimeMethod* method)
{
	{
		// base.Initialize();
		BaseService_Initialize_m2854DC6A1734D75511EF9330824787E4E6B2E0B9(__this, /*hidden argument*/NULL);
		// InitializeInternal();
		MixedRealityTeleportSystem_InitializeInternal_m59A7BC9D6AC7C0FA8D405C192D92A90B1AF7E84D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_InitializeInternal_m59A7BC9D6AC7C0FA8D405C192D92A90B1AF7E84D (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// teleportEventData = new TeleportEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_1 = (TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 *)il2cpp_codegen_object_new(TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_il2cpp_TypeInfo_var);
		TeleportEventData__ctor_mDB47F43A149E28A724F2E410B780F46023563119(L_1, L_0, /*hidden argument*/NULL);
		__this->set_teleportEventData_14(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Destroy_m12E54230904216ADD53EA1AC03988D4B8DA8E24A (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Destroy();
		BaseEventSystem_Destroy_mB676A7F14CDDC1778779E9DB2B7FB36577EBFF4B(__this, /*hidden argument*/NULL);
		// if (eventSystemReference != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_eventSystemReference_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (!Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Object.DestroyImmediate(eventSystemReference);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_eventSystemReference_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// Object.Destroy(eventSystemReference);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_eventSystemReference_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Register_m27C7B5BD517CFDB74B50DF1CB44F8981A21EA161 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener0, const RuntimeMethod* method)
{
	{
		// public override void Register(GameObject listener) => base.Register(listener);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___listener0;
		BaseEventSystem_Register_m9D2A6325FBF64222C1F8C9433FB48647A58A1505(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Unregister(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Unregister_mF3A064C92C34196ECC782619359996974583DFB8 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener0, const RuntimeMethod* method)
{
	{
		// public override void Unregister(GameObject listener) => base.Unregister(listener);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___listener0;
		BaseEventSystem_Unregister_m2B78856594D3428EA89E238BE7F1591CA834BCB7(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::get_IsInputSystemEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityTeleportSystem_get_IsInputSystemEnabled_m8CABF6313063A2D5F4FA023438477370981C822B (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsInputSystemEnabled => CoreServices.InputSystem != null;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::get_TeleportDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityTeleportSystem_get_TeleportDuration_mD72E0B1C5DB97B818FA4090D6D39C5731FE5801C (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, const RuntimeMethod* method)
{
	{
		// get => teleportDuration;
		float L_0 = __this->get_teleportDuration_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::set_TeleportDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_set_TeleportDuration_mABDA6DAFE9AC10EB326282CD5B72DB10F0B640A7 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F29D0F17814227DFDAADF5F3649A3FCB047B2CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isProcessingTeleportRequest)
		bool L_0 = __this->get_isProcessingTeleportRequest_16();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("Couldn't change teleport duration. Teleport in progress.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral4F29D0F17814227DFDAADF5F3649A3FCB047B2CC, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// teleportDuration = value;
		float L_1 = ___value0;
		__this->set_teleportDuration_22(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportRequest(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportRequest_mE52833AE2164BF3461238B3B55DB1568CF73B130 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_m335CBB82770429BC58A809AB646541F48F94D922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
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
		// using (RaiseTeleportRequestPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->get_RaiseTeleportRequestPerfMarker_24();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_2 = __this->get_teleportEventData_14();
		RuntimeObject* L_3 = ___pointer0;
		RuntimeObject* L_4 = ___hotSpot1;
		NullCheck(L_2);
		TeleportEventData_Initialize_m3F8C47E315D2042C4AB60B30DB26FE43FCB49941(L_2, L_3, L_4, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportRequestHandler);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_5 = __this->get_teleportEventData_14();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * L_6 = ((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->get_OnTeleportRequestHandler_23();
		GenericVirtActionInvoker2< BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_m335CBB82770429BC58A809AB646541F48F94D922_RuntimeMethod_var, __this, L_5, L_6);
		// }
		IL2CPP_LEAVE(0x3C, FINALLY_002e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportStarted_mB83539B10D93ADA577449B4D789BA132994205A3 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_m335CBB82770429BC58A809AB646541F48F94D922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral485A478CF03D1C7CBD8C53456B5CAA42882354D3);
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
		// if (isTeleporting)
		bool L_0 = __this->get_isTeleporting_15();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("Teleportation already in progress");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral485A478CF03D1C7CBD8C53456B5CAA42882354D3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// using (RaiseTeleportStartedPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1 = ((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->get_RaiseTeleportStartedPerfMarker_26();
		V_1 = L_1;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2;
		L_2 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// isTeleporting = true;
		__this->set_isTeleporting_15((bool)1);
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_3 = __this->get_teleportEventData_14();
		RuntimeObject* L_4 = ___pointer0;
		RuntimeObject* L_5 = ___hotSpot1;
		NullCheck(L_3);
		TeleportEventData_Initialize_m3F8C47E315D2042C4AB60B30DB26FE43FCB49941(L_3, L_4, L_5, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportStartedHandler);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_6 = __this->get_teleportEventData_14();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * L_7 = ((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->get_OnTeleportStartedHandler_25();
		GenericVirtActionInvoker2< BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_m335CBB82770429BC58A809AB646541F48F94D922_RuntimeMethod_var, __this, L_6, L_7);
		// ProcessTeleportationRequest(teleportEventData);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_8 = __this->get_teleportEventData_14();
		MixedRealityTeleportSystem_ProcessTeleportationRequest_m5DFC52B60DC89398B72200DD08EB83BB0784FD8E(__this, L_8, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x62, FINALLY_0054);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x62, IL_0062)
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportComplete_mD50EC768C1CA21DD54EBDDD60A5BEE60E148DB90 (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_m335CBB82770429BC58A809AB646541F48F94D922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral762DA1192ACEC40D9F1945FA764CE95DC42F814B);
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
		// if (!isTeleporting)
		bool L_0 = __this->get_isTeleporting_15();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("No Active Teleportation in progress.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral762DA1192ACEC40D9F1945FA764CE95DC42F814B, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// using (RaiseTeleportCompletePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1 = ((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->get_RaiseTeleportCompletePerfMarker_28();
		V_1 = L_1;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2;
		L_2 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_3 = __this->get_teleportEventData_14();
		RuntimeObject* L_4 = ___pointer0;
		RuntimeObject* L_5 = ___hotSpot1;
		NullCheck(L_3);
		TeleportEventData_Initialize_m3F8C47E315D2042C4AB60B30DB26FE43FCB49941(L_3, L_4, L_5, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportCompletedHandler);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_6 = __this->get_teleportEventData_14();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * L_7 = ((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->get_OnTeleportCompletedHandler_27();
		GenericVirtActionInvoker2< BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_m335CBB82770429BC58A809AB646541F48F94D922_RuntimeMethod_var, __this, L_6, L_7);
		// isTeleporting = false;
		__this->set_isTeleporting_15((bool)0);
		// }
		IL2CPP_LEAVE(0x56, FINALLY_0048);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportCanceled_m0AC81BE853F31614ADDBBE2C0192A332842EE96A (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_m335CBB82770429BC58A809AB646541F48F94D922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
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
		// using (RaiseTeleportCanceledPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->get_RaiseTeleportCanceledPerfMarker_30();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_2 = __this->get_teleportEventData_14();
		RuntimeObject* L_3 = ___pointer0;
		RuntimeObject* L_4 = ___hotSpot1;
		NullCheck(L_2);
		TeleportEventData_Initialize_m3F8C47E315D2042C4AB60B30DB26FE43FCB49941(L_2, L_3, L_4, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportCanceledHandler);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_5 = __this->get_teleportEventData_14();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * L_6 = ((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->get_OnTeleportCanceledHandler_29();
		GenericVirtActionInvoker2< BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_m335CBB82770429BC58A809AB646541F48F94D922_RuntimeMethod_var, __this, L_5, L_6);
		// }
		IL2CPP_LEAVE(0x3C, FINALLY_002e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_ProcessTeleportationRequest_m5DFC52B60DC89398B72200DD08EB83BB0784FD8E (MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4 * __this, TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportHotSpot_tC322A822A17C34B9ACFD862732449C77BED89429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportPointer_t512E8888A79D939AFE8F3809D15266C0B104B9E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	float V_3 = 0.0f;
	FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ProcessTeleportationRequestPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->get_ProcessTeleportationRequestPerfMarker_31();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// isProcessingTeleportRequest = true;
			__this->set_isProcessingTeleportRequest_16((bool)1);
			// targetRotation = Vector3.zero;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
			L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			__this->set_targetRotation_18(L_2);
			// var teleportPointer = eventData.Pointer as IMixedRealityTeleportPointer;
			TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_3 = ___eventData0;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = TeleportEventData_get_Pointer_mF20C542AFAB7F490F612E810A2CCD79BD83116B1_inline(L_3, /*hidden argument*/NULL);
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMixedRealityTeleportPointer_t512E8888A79D939AFE8F3809D15266C0B104B9E5_il2cpp_TypeInfo_var));
			// if (teleportPointer != null)
			RuntimeObject* L_5 = V_2;
			if (!L_5)
			{
				goto IL_0040;
			}
		}

IL_002f:
		{
			// targetRotation.y = teleportPointer.PointerOrientation;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_targetRotation_18();
			RuntimeObject* L_7 = V_2;
			NullCheck(L_7);
			float L_8;
			L_8 = InterfaceFuncInvoker0< float >::Invoke(3 /* System.Single Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer::get_PointerOrientation() */, IMixedRealityTeleportPointer_t512E8888A79D939AFE8F3809D15266C0B104B9E5_il2cpp_TypeInfo_var, L_7);
			L_6->set_y_3(L_8);
		}

IL_0040:
		{
			// targetPosition = eventData.Pointer.Result.Details.Point;
			TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_9 = ___eventData0;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = TeleportEventData_get_Pointer_mF20C542AFAB7F490F612E810A2CCD79BD83116B1_inline(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_10);
			NullCheck(L_11);
			FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  L_12;
			L_12 = InterfaceFuncInvoker0< FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_11);
			V_4 = L_12;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = FocusDetails_get_Point_m64928E75649D63E98441E757747B337430BD3BB3_inline((FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 *)(&V_4), /*hidden argument*/NULL);
			__this->set_targetPosition_17(L_13);
			// if (eventData.HotSpot != null)
			TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_14 = ___eventData0;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = TeleportEventData_get_HotSpot_mFD01290512736A6E2AF40BDF9125714EA709C89F_inline(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_009b;
			}
		}

IL_0067:
		{
			// targetPosition = eventData.HotSpot.Position;
			TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_16 = ___eventData0;
			NullCheck(L_16);
			RuntimeObject* L_17;
			L_17 = TeleportEventData_get_HotSpot_mFD01290512736A6E2AF40BDF9125714EA709C89F_inline(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = InterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot::get_Position() */, IMixedRealityTeleportHotSpot_tC322A822A17C34B9ACFD862732449C77BED89429_il2cpp_TypeInfo_var, L_17);
			__this->set_targetPosition_17(L_18);
			// if (eventData.HotSpot.OverrideTargetOrientation)
			TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_19 = ___eventData0;
			NullCheck(L_19);
			RuntimeObject* L_20;
			L_20 = TeleportEventData_get_HotSpot_mFD01290512736A6E2AF40BDF9125714EA709C89F_inline(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			bool L_21;
			L_21 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot::get_OverrideTargetOrientation() */, IMixedRealityTeleportHotSpot_tC322A822A17C34B9ACFD862732449C77BED89429_il2cpp_TypeInfo_var, L_20);
			if (!L_21)
			{
				goto IL_009b;
			}
		}

IL_0085:
		{
			// targetRotation.y = eventData.HotSpot.TargetOrientation;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_targetRotation_18();
			TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_23 = ___eventData0;
			NullCheck(L_23);
			RuntimeObject* L_24;
			L_24 = TeleportEventData_get_HotSpot_mFD01290512736A6E2AF40BDF9125714EA709C89F_inline(L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			float L_25;
			L_25 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot::get_TargetOrientation() */, IMixedRealityTeleportHotSpot_tC322A822A17C34B9ACFD862732449C77BED89429_il2cpp_TypeInfo_var, L_24);
			L_22->set_y_3(L_25);
		}

IL_009b:
		{
			// float height = targetPosition.y;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = __this->get_address_of_targetPosition_17();
			float L_27 = L_26->get_y_3();
			V_3 = L_27;
			// targetPosition -= CameraCache.Main.transform.position - MixedRealityPlayspace.Position;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_targetPosition_17();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_29;
			L_29 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
			NullCheck(L_29);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
			L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_29, /*hidden argument*/NULL);
			NullCheck(L_30);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
			L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tE2F8362585176E7F63D20E5AFD385E3FC0F689F1_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
			L_32 = MixedRealityPlayspace_get_Position_mFA2AD73CFCD44DCEE1D433FF286FF7CDDE8394D0(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
			L_33 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_31, L_32, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
			L_34 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_28, L_33, /*hidden argument*/NULL);
			__this->set_targetPosition_17(L_34);
			// targetPosition.y = height;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_35 = __this->get_address_of_targetPosition_17();
			float L_36 = V_3;
			L_35->set_y_3(L_36);
			// MixedRealityPlayspace.Position = targetPosition;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_targetPosition_17();
			MixedRealityPlayspace_set_Position_mC2919EB2593621FFF8BB47C3BEDEE23EEA2BEB04(L_37, /*hidden argument*/NULL);
			// MixedRealityPlayspace.RotateAround(
			//             CameraCache.Main.transform.position,
			//             Vector3.up,
			//             targetRotation.y - CameraCache.Main.transform.eulerAngles.y);
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_38;
			L_38 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
			NullCheck(L_38);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
			L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_38, /*hidden argument*/NULL);
			NullCheck(L_39);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
			L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_42 = __this->get_address_of_targetRotation_18();
			float L_43 = L_42->get_y_3();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_44;
			L_44 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
			NullCheck(L_44);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
			L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
			NullCheck(L_45);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
			L_46 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_45, /*hidden argument*/NULL);
			float L_47 = L_46.get_y_3();
			MixedRealityPlayspace_RotateAround_m1A5D13F5B5E4F066B3D18BFB32D3F584AE7C89A7(L_40, L_41, ((float)il2cpp_codegen_subtract((float)L_43, (float)L_47)), /*hidden argument*/NULL);
			// isProcessingTeleportRequest = false;
			__this->set_isProcessingTeleportRequest_16((bool)0);
			// RaiseTeleportComplete(eventData.Pointer, eventData.HotSpot);
			TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_48 = ___eventData0;
			NullCheck(L_48);
			RuntimeObject* L_49;
			L_49 = TeleportEventData_get_Pointer_mF20C542AFAB7F490F612E810A2CCD79BD83116B1_inline(L_48, /*hidden argument*/NULL);
			TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_50 = ___eventData0;
			NullCheck(L_50);
			RuntimeObject* L_51;
			L_51 = TeleportEventData_get_HotSpot_mFD01290512736A6E2AF40BDF9125714EA709C89F_inline(L_50, /*hidden argument*/NULL);
			MixedRealityTeleportSystem_RaiseTeleportComplete_mD50EC768C1CA21DD54EBDDD60A5BEE60E148DB90(__this, L_49, L_51, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x14A, FINALLY_013c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013c;
	}

FINALLY_013c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(316)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(316)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14A, IL_014a)
	}

IL_014a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__cctor_m66AF54D29E521060D7922693E878853710D7C4FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1__ctor_m29AE55B9367FABD450F212938590105A6998AB3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__39_0_mE68EE23A773518EC5C0C91A02C1379F9CE176DDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__39_1_m40B8DD15134CE0794FB36DD462668F95F9A2210F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__39_2_m2FF66A688C315493D180EFD425CA427D5E3C1F0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__39_3_m216C60675E573CCC8F99D46C8EDD2F4C451F8186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1368B5D5C5B45AE31591BCF3645486425E6C0A22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BEDD8A5E4E11ACDACE8299C529195CB3424CE12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67B6449F1BAD0A542C06774CB4179DEC54F04D47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87697DFF6C7C5EA241FE037E78348244A0354ACA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD818882F3D6DEA9ADE38F7ED17CB332A5E586505);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF988C7F2F580EB6406722D922B922E2DFBAF00D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker HandleEventPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.HandleEvent");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral3BEDD8A5E4E11ACDACE8299C529195CB3424CE12, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->set_HandleEventPerfMarker_21(L_0);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportRequestHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportRequest(casted);
		//     };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_il2cpp_TypeInfo_var);
		U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * L_1 = ((U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * L_2 = (EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 *)il2cpp_codegen_object_new(EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m29AE55B9367FABD450F212938590105A6998AB3D(L_2, L_1, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__39_0_mE68EE23A773518EC5C0C91A02C1379F9CE176DDF_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m29AE55B9367FABD450F212938590105A6998AB3D_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->set_OnTeleportRequestHandler_23(L_2);
		// private static readonly ProfilerMarker RaiseTeleportRequestPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportRequest");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral87697DFF6C7C5EA241FE037E78348244A0354ACA, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->set_RaiseTeleportRequestPerfMarker_24(L_3);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportStartedHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportStarted(casted);
		//     };
		U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * L_4 = ((U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * L_5 = (EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 *)il2cpp_codegen_object_new(EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m29AE55B9367FABD450F212938590105A6998AB3D(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__39_1_m40B8DD15134CE0794FB36DD462668F95F9A2210F_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m29AE55B9367FABD450F212938590105A6998AB3D_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->set_OnTeleportStartedHandler_25(L_5);
		// private static readonly ProfilerMarker RaiseTeleportStartedPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportStarted");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_6), _stringLiteralD818882F3D6DEA9ADE38F7ED17CB332A5E586505, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->set_RaiseTeleportStartedPerfMarker_26(L_6);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportCompletedHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportCompleted(casted);
		//     };
		U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * L_7 = ((U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * L_8 = (EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 *)il2cpp_codegen_object_new(EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m29AE55B9367FABD450F212938590105A6998AB3D(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__39_2_m2FF66A688C315493D180EFD425CA427D5E3C1F0F_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m29AE55B9367FABD450F212938590105A6998AB3D_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->set_OnTeleportCompletedHandler_27(L_8);
		// private static readonly ProfilerMarker RaiseTeleportCompletePerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportComplete");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_9), _stringLiteral1368B5D5C5B45AE31591BCF3645486425E6C0A22, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->set_RaiseTeleportCompletePerfMarker_28(L_9);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportCanceledHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportCanceled(casted);
		//     };
		U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * L_10 = ((U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 * L_11 = (EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246 *)il2cpp_codegen_object_new(EventFunction_1_t2079745996CCF03481820B14D7A046C05D966246_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m29AE55B9367FABD450F212938590105A6998AB3D(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__39_3_m216C60675E573CCC8F99D46C8EDD2F4C451F8186_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m29AE55B9367FABD450F212938590105A6998AB3D_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->set_OnTeleportCanceledHandler_29(L_11);
		// private static readonly ProfilerMarker RaiseTeleportCanceledPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportHandled");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_12), _stringLiteral67B6449F1BAD0A542C06774CB4179DEC54F04D47, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->set_RaiseTeleportCanceledPerfMarker_30(L_12);
		// private static readonly ProfilerMarker ProcessTeleportationRequestPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.ProcessTeleportationRequest");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_13), _stringLiteralF988C7F2F580EB6406722D922B922E2DFBAF00D4, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t200DD3AC8018EBB441D4AC8ADC3A24449AA541F4_il2cpp_TypeInfo_var))->set_ProcessTeleportationRequestPerfMarker_31(L_13);
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
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9ED44885F392E704E0A210D1FF0DE28ED1F77804 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * L_0 = (U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E *)il2cpp_codegen_object_new(U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mED2C2EB943542D61945D9104E324C6D63879E327(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mED2C2EB943542D61945D9104E324C6D63879E327 (U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_0(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_0_mE68EE23A773518EC5C0C91A02C1379F9CE176DDF (U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportRequest(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_1(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_1_m40B8DD15134CE0794FB36DD462668F95F9A2210F (U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportStarted(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_2(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_2_m2FF66A688C315493D180EFD425CA427D5E3C1F0F (U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportCompleted(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_3(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_3_m216C60675E573CCC8F99D46C8EDD2F4C451F8186 (U3CU3Ec_tD3795F41E9C2BFB026DB0313AD7E3D1ABC3AED3E * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2_mAEB2825811A0E46C4D22ED4D86C9A4DEA7F85706_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportCanceled(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportCanceled(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t841BFAA0E188A0CEADCAF72C6031D92FB4D9BA99_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m41C7F8717AB5D871F276AEE009640821912A84D0_inline (BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_13(L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Pointer_mF20C542AFAB7F490F612E810A2CCD79BD83116B1_inline (TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityPointer Pointer { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CPointerU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Point_m64928E75649D63E98441E757747B337430BD3BB3_inline (FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPointU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_HotSpot_mFD01290512736A6E2AF40BDF9125714EA709C89F_inline (TeleportEventData_tD38237F467954AFE4C5D13E66D5BFBAB826AAAC2 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityTeleportHotSpot HotSpot { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CHotSpotU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
