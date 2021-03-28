﻿#include "pch-cpp.hpp"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Func`2<System.Exception,System.Boolean>
struct Func_2_t6283F9D1F2A6C8BB45F72CDAD5856BC3FDF29C3F;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct KeyCollection_tE1910907EA38BAB17DB642AA6829FDED46193613;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t1E5094B165BA0458CA9D3802C14EFF5DB95213CB;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct ValueCollection_t8DE7DA329F6A29C185EDFDDA71627FD6C4C725F8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>[]
struct EntryU5BU5D_tD3A46C1343AC8626BEF0A6A5A00154836AE9526B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GUIStyle>[]
struct EntryU5BU5D_tC8019BE4D67E0EDA40C047FCBCE1D61AD6688C2B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t235EBBEEC46114FC73F1F522B0A0CC095B389926;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// System.Exception
struct Exception_t;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// UnityEngine.GUIScrollGroup
struct GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngineInternal.GenericStack
struct GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.ScrollViewState
struct ScrollViewState_t6ACB5023B94B7CD6372697F35F84E8A798C31AF0;
// UnityEngine.SliderState
struct SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// UnityEngine.TextEditor
struct TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExitGUIException_tA832626B99B4D827C8064643824847BCAA7877F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F;
IL2CPP_EXTERN_C String_t* _stringLiteral05CF9CF5853B675491570E9D20951E373F208902;
IL2CPP_EXTERN_C String_t* _stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400;
IL2CPP_EXTERN_C String_t* _stringLiteral0A9E6C82A5143ED08E63E500C0978BF5985C84CA;
IL2CPP_EXTERN_C String_t* _stringLiteral10ACE3A0FC4434FF078CBB1C934C7CE2ACEB3EE1;
IL2CPP_EXTERN_C String_t* _stringLiteral123B2E5CFC7B5F49F61A9A7E042BC077972AB7EA;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D;
IL2CPP_EXTERN_C String_t* _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887;
IL2CPP_EXTERN_C String_t* _stringLiteral3E5BD769C75B1966931F7A0F059B152FE79C2619;
IL2CPP_EXTERN_C String_t* _stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8B350C9F6A421FA80C169857D1523CD21C39B5;
IL2CPP_EXTERN_C String_t* _stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149;
IL2CPP_EXTERN_C String_t* _stringLiteral5220DD5A418252356A406067BC43EC0FB773A172;
IL2CPP_EXTERN_C String_t* _stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C;
IL2CPP_EXTERN_C String_t* _stringLiteral5DACFD2D2C00202C188DA9BBF7B7FDC9BB27DE15;
IL2CPP_EXTERN_C String_t* _stringLiteral5FCA7CBE61ADC605F9F35C467CFE5D765D935400;
IL2CPP_EXTERN_C String_t* _stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2;
IL2CPP_EXTERN_C String_t* _stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F;
IL2CPP_EXTERN_C String_t* _stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C;
IL2CPP_EXTERN_C String_t* _stringLiteral6866F44FE25F48E7BF04C35DA2F4C670D2021A33;
IL2CPP_EXTERN_C String_t* _stringLiteral74DA73DF8411070FEB987DE79D4529EE39FB3D96;
IL2CPP_EXTERN_C String_t* _stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957;
IL2CPP_EXTERN_C String_t* _stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB;
IL2CPP_EXTERN_C String_t* _stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C;
IL2CPP_EXTERN_C String_t* _stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3;
IL2CPP_EXTERN_C String_t* _stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0;
IL2CPP_EXTERN_C String_t* _stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D;
IL2CPP_EXTERN_C String_t* _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81;
IL2CPP_EXTERN_C String_t* _stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95;
IL2CPP_EXTERN_C String_t* _stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF;
IL2CPP_EXTERN_C String_t* _stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F;
IL2CPP_EXTERN_C String_t* _stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1;
IL2CPP_EXTERN_C String_t* _stringLiteralB31A5E45A7336CF4E926743AF852C59783F5D947;
IL2CPP_EXTERN_C String_t* _stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722;
IL2CPP_EXTERN_C String_t* _stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C;
IL2CPP_EXTERN_C String_t* _stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE;
IL2CPP_EXTERN_C String_t* _stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F;
IL2CPP_EXTERN_C String_t* _stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF;
IL2CPP_EXTERN_C String_t* _stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m990013907A0B53EE24D944EBFF39DA4107893D20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6DB3523BBD242ACAB14BD3365CC45F5AA054EBFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA640516AD4AE648ED6E0BF71A5A2117E3BC77D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mBED7C7FA2A970F18F12B7076F0FECD8BAEBEF781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m3E15A6938CA1A0EDC0BD3E28CBED54163A11EB17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m6E33E881BFD75761C0F91C7EEB1AF452BFD18445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m41D8569C1E1FFC40BAB05286F15A74835341C627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIUtility_CheckOnGUI_mA591FC883697B53B61EC6B5B4469262BA6936FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m27E8FFD81DA48070A0476471416266C19300D505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mB96B97C06F335F7DFB78C412185D7779A25DA4CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t905504B7CBE05E784AEC4443FEDCFE53912DE260 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct  Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD3A46C1343AC8626BEF0A6A5A00154836AE9526B* ___entries_1;
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
	KeyCollection_tE1910907EA38BAB17DB642AA6829FDED46193613 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8DE7DA329F6A29C185EDFDDA71627FD6C4C725F8 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4, ___entries_1)); }
	inline EntryU5BU5D_tD3A46C1343AC8626BEF0A6A5A00154836AE9526B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD3A46C1343AC8626BEF0A6A5A00154836AE9526B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD3A46C1343AC8626BEF0A6A5A00154836AE9526B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4, ___keys_7)); }
	inline KeyCollection_tE1910907EA38BAB17DB642AA6829FDED46193613 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE1910907EA38BAB17DB642AA6829FDED46193613 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE1910907EA38BAB17DB642AA6829FDED46193613 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4, ___values_8)); }
	inline ValueCollection_t8DE7DA329F6A29C185EDFDDA71627FD6C4C725F8 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8DE7DA329F6A29C185EDFDDA71627FD6C4C725F8 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8DE7DA329F6A29C185EDFDDA71627FD6C4C725F8 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct  Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC8019BE4D67E0EDA40C047FCBCE1D61AD6688C2B* ___entries_1;
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
	KeyCollection_t1E5094B165BA0458CA9D3802C14EFF5DB95213CB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80, ___entries_1)); }
	inline EntryU5BU5D_tC8019BE4D67E0EDA40C047FCBCE1D61AD6688C2B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC8019BE4D67E0EDA40C047FCBCE1D61AD6688C2B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC8019BE4D67E0EDA40C047FCBCE1D61AD6688C2B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80, ___keys_7)); }
	inline KeyCollection_t1E5094B165BA0458CA9D3802C14EFF5DB95213CB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1E5094B165BA0458CA9D3802C14EFF5DB95213CB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1E5094B165BA0458CA9D3802C14EFF5DB95213CB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80, ___values_8)); }
	inline ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct  List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GUILayoutEntryU5BU5D_t235EBBEEC46114FC73F1F522B0A0CC095B389926* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA, ____items_1)); }
	inline GUILayoutEntryU5BU5D_t235EBBEEC46114FC73F1F522B0A0CC095B389926* get__items_1() const { return ____items_1; }
	inline GUILayoutEntryU5BU5D_t235EBBEEC46114FC73F1F522B0A0CC095B389926** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GUILayoutEntryU5BU5D_t235EBBEEC46114FC73F1F522B0A0CC095B389926* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GUILayoutEntryU5BU5D_t235EBBEEC46114FC73F1F522B0A0CC095B389926* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA_StaticFields, ____emptyArray_5)); }
	inline GUILayoutEntryU5BU5D_t235EBBEEC46114FC73F1F522B0A0CC095B389926* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GUILayoutEntryU5BU5D_t235EBBEEC46114FC73F1F522B0A0CC095B389926** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GUILayoutEntryU5BU5D_t235EBBEEC46114FC73F1F522B0A0CC095B389926* value)
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


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct  ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40, ___dictionary_0)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// UnityEngine.GUIContent
struct  GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Image_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tooltip_2), (void*)value);
	}
};

struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Text_3)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Text_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Image_4)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Image_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TextImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___none_6)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_none_6() const { return ___none_6; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.GUILayout
struct  GUILayout_tE6ECB58801719BC9339344B37D62007A728C02B8  : public RuntimeObject
{
public:

public:
};


// UnityEngine.GUIUtility
struct  GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5  : public RuntimeObject
{
public:

public:
};

struct GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields
{
public:
	// System.Int32 UnityEngine.GUIUtility::s_SkinMode
	int32_t ___s_SkinMode_0;
	// System.Int32 UnityEngine.GUIUtility::s_OriginalID
	int32_t ___s_OriginalID_1;
	// System.Action UnityEngine.GUIUtility::takeCapture
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___takeCapture_2;
	// System.Action UnityEngine.GUIUtility::releaseCapture
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___releaseCapture_3;
	// System.Func`3<System.Int32,System.IntPtr,System.Boolean> UnityEngine.GUIUtility::processEvent
	Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0 * ___processEvent_4;
	// System.Func`2<System.Exception,System.Boolean> UnityEngine.GUIUtility::endContainerGUIFromException
	Func_2_t6283F9D1F2A6C8BB45F72CDAD5856BC3FDF29C3F * ___endContainerGUIFromException_5;
	// System.Action UnityEngine.GUIUtility::guiChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___guiChanged_6;
	// System.Boolean UnityEngine.GUIUtility::<guiIsExiting>k__BackingField
	bool ___U3CguiIsExitingU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_s_SkinMode_0() { return static_cast<int32_t>(offsetof(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields, ___s_SkinMode_0)); }
	inline int32_t get_s_SkinMode_0() const { return ___s_SkinMode_0; }
	inline int32_t* get_address_of_s_SkinMode_0() { return &___s_SkinMode_0; }
	inline void set_s_SkinMode_0(int32_t value)
	{
		___s_SkinMode_0 = value;
	}

	inline static int32_t get_offset_of_s_OriginalID_1() { return static_cast<int32_t>(offsetof(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields, ___s_OriginalID_1)); }
	inline int32_t get_s_OriginalID_1() const { return ___s_OriginalID_1; }
	inline int32_t* get_address_of_s_OriginalID_1() { return &___s_OriginalID_1; }
	inline void set_s_OriginalID_1(int32_t value)
	{
		___s_OriginalID_1 = value;
	}

	inline static int32_t get_offset_of_takeCapture_2() { return static_cast<int32_t>(offsetof(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields, ___takeCapture_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_takeCapture_2() const { return ___takeCapture_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_takeCapture_2() { return &___takeCapture_2; }
	inline void set_takeCapture_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___takeCapture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___takeCapture_2), (void*)value);
	}

	inline static int32_t get_offset_of_releaseCapture_3() { return static_cast<int32_t>(offsetof(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields, ___releaseCapture_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_releaseCapture_3() const { return ___releaseCapture_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_releaseCapture_3() { return &___releaseCapture_3; }
	inline void set_releaseCapture_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___releaseCapture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___releaseCapture_3), (void*)value);
	}

	inline static int32_t get_offset_of_processEvent_4() { return static_cast<int32_t>(offsetof(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields, ___processEvent_4)); }
	inline Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0 * get_processEvent_4() const { return ___processEvent_4; }
	inline Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0 ** get_address_of_processEvent_4() { return &___processEvent_4; }
	inline void set_processEvent_4(Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0 * value)
	{
		___processEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_endContainerGUIFromException_5() { return static_cast<int32_t>(offsetof(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields, ___endContainerGUIFromException_5)); }
	inline Func_2_t6283F9D1F2A6C8BB45F72CDAD5856BC3FDF29C3F * get_endContainerGUIFromException_5() const { return ___endContainerGUIFromException_5; }
	inline Func_2_t6283F9D1F2A6C8BB45F72CDAD5856BC3FDF29C3F ** get_address_of_endContainerGUIFromException_5() { return &___endContainerGUIFromException_5; }
	inline void set_endContainerGUIFromException_5(Func_2_t6283F9D1F2A6C8BB45F72CDAD5856BC3FDF29C3F * value)
	{
		___endContainerGUIFromException_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endContainerGUIFromException_5), (void*)value);
	}

	inline static int32_t get_offset_of_guiChanged_6() { return static_cast<int32_t>(offsetof(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields, ___guiChanged_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_guiChanged_6() const { return ___guiChanged_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_guiChanged_6() { return &___guiChanged_6; }
	inline void set_guiChanged_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___guiChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___guiChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CguiIsExitingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields, ___U3CguiIsExitingU3Ek__BackingField_7)); }
	inline bool get_U3CguiIsExitingU3Ek__BackingField_7() const { return ___U3CguiIsExitingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CguiIsExitingU3Ek__BackingField_7() { return &___U3CguiIsExitingU3Ek__BackingField_7; }
	inline void set_U3CguiIsExitingU3Ek__BackingField_7(bool value)
	{
		___U3CguiIsExitingU3Ek__BackingField_7 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.ScrollViewState
struct  ScrollViewState_t6ACB5023B94B7CD6372697F35F84E8A798C31AF0  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SliderState
struct  SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A  : public RuntimeObject
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


// System.StringComparer
struct  StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
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

// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.GUILayoutUtility/LayoutCache::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * ___topLevel_1;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * ___layoutGroups_2;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * ___windows_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___U3CidU3Ek__BackingField_0)); }
	inline int32_t get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(int32_t value)
	{
		___U3CidU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_topLevel_1() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___topLevel_1)); }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * get_topLevel_1() const { return ___topLevel_1; }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 ** get_address_of_topLevel_1() { return &___topLevel_1; }
	inline void set_topLevel_1(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * value)
	{
		___topLevel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topLevel_1), (void*)value);
	}

	inline static int32_t get_offset_of_layoutGroups_2() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___layoutGroups_2)); }
	inline GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * get_layoutGroups_2() const { return ___layoutGroups_2; }
	inline GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C ** get_address_of_layoutGroups_2() { return &___layoutGroups_2; }
	inline void set_layoutGroups_2(GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * value)
	{
		___layoutGroups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutGroups_2), (void*)value);
	}

	inline static int32_t get_offset_of_windows_3() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___windows_3)); }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * get_windows_3() const { return ___windows_3; }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 ** get_address_of_windows_3() { return &___windows_3; }
	inline void set_windows_3(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * value)
	{
		___windows_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windows_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
struct  Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6, ___list_0)); }
	inline List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * get_list_0() const { return ___list_0; }
	inline List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6, ___current_3)); }
	inline GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * get_current_3() const { return ___current_3; }
	inline GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
struct  Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC, ___dictionary_0)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC, ___currentValue_3)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_currentValue_3() const { return ___currentValue_3; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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

// UnityEngine.GUITargetAttribute
struct  GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 UnityEngine.GUITargetAttribute::displayMask
	int32_t ___displayMask_0;

public:
	inline static int32_t get_offset_of_displayMask_0() { return static_cast<int32_t>(offsetof(GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C, ___displayMask_0)); }
	inline int32_t get_displayMask_0() const { return ___displayMask_0; }
	inline int32_t* get_address_of_displayMask_0() { return &___displayMask_0; }
	inline void set_displayMask_0(int32_t value)
	{
		___displayMask_0 = value;
	}
};


// UnityEngineInternal.GenericStack
struct  GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C  : public Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981
{
public:

public:
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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

// UnityEngine.Event
struct  Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_Current_1)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_MasterEvent_2)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventModifiers
struct  EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventType
struct  EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.GUI
struct  GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1  : public RuntimeObject
{
public:

public:
};

struct GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields
{
public:
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_0;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_1;
	// System.Int32 UnityEngine.GUI::s_ButonHash
	int32_t ___s_ButonHash_2;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_3;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_4;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_5;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_6;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_7;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_8;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CnextScrollStepTimeU3Ek__BackingField_9;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___s_Skin_10;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::<scrollViewStates>k__BackingField
	GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * ___U3CscrollViewStatesU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_s_HotTextField_0() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___s_HotTextField_0)); }
	inline int32_t get_s_HotTextField_0() const { return ___s_HotTextField_0; }
	inline int32_t* get_address_of_s_HotTextField_0() { return &___s_HotTextField_0; }
	inline void set_s_HotTextField_0(int32_t value)
	{
		___s_HotTextField_0 = value;
	}

	inline static int32_t get_offset_of_s_BoxHash_1() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___s_BoxHash_1)); }
	inline int32_t get_s_BoxHash_1() const { return ___s_BoxHash_1; }
	inline int32_t* get_address_of_s_BoxHash_1() { return &___s_BoxHash_1; }
	inline void set_s_BoxHash_1(int32_t value)
	{
		___s_BoxHash_1 = value;
	}

	inline static int32_t get_offset_of_s_ButonHash_2() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___s_ButonHash_2)); }
	inline int32_t get_s_ButonHash_2() const { return ___s_ButonHash_2; }
	inline int32_t* get_address_of_s_ButonHash_2() { return &___s_ButonHash_2; }
	inline void set_s_ButonHash_2(int32_t value)
	{
		___s_ButonHash_2 = value;
	}

	inline static int32_t get_offset_of_s_RepeatButtonHash_3() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___s_RepeatButtonHash_3)); }
	inline int32_t get_s_RepeatButtonHash_3() const { return ___s_RepeatButtonHash_3; }
	inline int32_t* get_address_of_s_RepeatButtonHash_3() { return &___s_RepeatButtonHash_3; }
	inline void set_s_RepeatButtonHash_3(int32_t value)
	{
		___s_RepeatButtonHash_3 = value;
	}

	inline static int32_t get_offset_of_s_ToggleHash_4() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___s_ToggleHash_4)); }
	inline int32_t get_s_ToggleHash_4() const { return ___s_ToggleHash_4; }
	inline int32_t* get_address_of_s_ToggleHash_4() { return &___s_ToggleHash_4; }
	inline void set_s_ToggleHash_4(int32_t value)
	{
		___s_ToggleHash_4 = value;
	}

	inline static int32_t get_offset_of_s_ButtonGridHash_5() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___s_ButtonGridHash_5)); }
	inline int32_t get_s_ButtonGridHash_5() const { return ___s_ButtonGridHash_5; }
	inline int32_t* get_address_of_s_ButtonGridHash_5() { return &___s_ButtonGridHash_5; }
	inline void set_s_ButtonGridHash_5(int32_t value)
	{
		___s_ButtonGridHash_5 = value;
	}

	inline static int32_t get_offset_of_s_SliderHash_6() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___s_SliderHash_6)); }
	inline int32_t get_s_SliderHash_6() const { return ___s_SliderHash_6; }
	inline int32_t* get_address_of_s_SliderHash_6() { return &___s_SliderHash_6; }
	inline void set_s_SliderHash_6(int32_t value)
	{
		___s_SliderHash_6 = value;
	}

	inline static int32_t get_offset_of_s_BeginGroupHash_7() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___s_BeginGroupHash_7)); }
	inline int32_t get_s_BeginGroupHash_7() const { return ___s_BeginGroupHash_7; }
	inline int32_t* get_address_of_s_BeginGroupHash_7() { return &___s_BeginGroupHash_7; }
	inline void set_s_BeginGroupHash_7(int32_t value)
	{
		___s_BeginGroupHash_7 = value;
	}

	inline static int32_t get_offset_of_s_ScrollviewHash_8() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___s_ScrollviewHash_8)); }
	inline int32_t get_s_ScrollviewHash_8() const { return ___s_ScrollviewHash_8; }
	inline int32_t* get_address_of_s_ScrollviewHash_8() { return &___s_ScrollviewHash_8; }
	inline void set_s_ScrollviewHash_8(int32_t value)
	{
		___s_ScrollviewHash_8 = value;
	}

	inline static int32_t get_offset_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___U3CnextScrollStepTimeU3Ek__BackingField_9)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CnextScrollStepTimeU3Ek__BackingField_9() const { return ___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return &___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline void set_U3CnextScrollStepTimeU3Ek__BackingField_9(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CnextScrollStepTimeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_s_Skin_10() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___s_Skin_10)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_s_Skin_10() const { return ___s_Skin_10; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_s_Skin_10() { return &___s_Skin_10; }
	inline void set_s_Skin_10(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___s_Skin_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Skin_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CscrollViewStatesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields, ___U3CscrollViewStatesU3Ek__BackingField_11)); }
	inline GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * get_U3CscrollViewStatesU3Ek__BackingField_11() const { return ___U3CscrollViewStatesU3Ek__BackingField_11; }
	inline GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C ** get_address_of_U3CscrollViewStatesU3Ek__BackingField_11() { return &___U3CscrollViewStatesU3Ek__BackingField_11; }
	inline void set_U3CscrollViewStatesU3Ek__BackingField_11(GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * value)
	{
		___U3CscrollViewStatesU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CscrollViewStatesU3Ek__BackingField_11), (void*)value);
	}
};


// UnityEngine.GUILayoutEntry
struct  GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE  : public RuntimeObject
{
public:
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// System.Boolean UnityEngine.GUILayoutEntry::consideredForMargin
	bool ___consideredForMargin_7;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_Style_8;

public:
	inline static int32_t get_offset_of_minWidth_0() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___minWidth_0)); }
	inline float get_minWidth_0() const { return ___minWidth_0; }
	inline float* get_address_of_minWidth_0() { return &___minWidth_0; }
	inline void set_minWidth_0(float value)
	{
		___minWidth_0 = value;
	}

	inline static int32_t get_offset_of_maxWidth_1() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___maxWidth_1)); }
	inline float get_maxWidth_1() const { return ___maxWidth_1; }
	inline float* get_address_of_maxWidth_1() { return &___maxWidth_1; }
	inline void set_maxWidth_1(float value)
	{
		___maxWidth_1 = value;
	}

	inline static int32_t get_offset_of_minHeight_2() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___minHeight_2)); }
	inline float get_minHeight_2() const { return ___minHeight_2; }
	inline float* get_address_of_minHeight_2() { return &___minHeight_2; }
	inline void set_minHeight_2(float value)
	{
		___minHeight_2 = value;
	}

	inline static int32_t get_offset_of_maxHeight_3() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___maxHeight_3)); }
	inline float get_maxHeight_3() const { return ___maxHeight_3; }
	inline float* get_address_of_maxHeight_3() { return &___maxHeight_3; }
	inline void set_maxHeight_3(float value)
	{
		___maxHeight_3 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___rect_4)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_rect_4() const { return ___rect_4; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___rect_4 = value;
	}

	inline static int32_t get_offset_of_stretchWidth_5() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___stretchWidth_5)); }
	inline int32_t get_stretchWidth_5() const { return ___stretchWidth_5; }
	inline int32_t* get_address_of_stretchWidth_5() { return &___stretchWidth_5; }
	inline void set_stretchWidth_5(int32_t value)
	{
		___stretchWidth_5 = value;
	}

	inline static int32_t get_offset_of_stretchHeight_6() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___stretchHeight_6)); }
	inline int32_t get_stretchHeight_6() const { return ___stretchHeight_6; }
	inline int32_t* get_address_of_stretchHeight_6() { return &___stretchHeight_6; }
	inline void set_stretchHeight_6(int32_t value)
	{
		___stretchHeight_6 = value;
	}

	inline static int32_t get_offset_of_consideredForMargin_7() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___consideredForMargin_7)); }
	inline bool get_consideredForMargin_7() const { return ___consideredForMargin_7; }
	inline bool* get_address_of_consideredForMargin_7() { return &___consideredForMargin_7; }
	inline void set_consideredForMargin_7(bool value)
	{
		___consideredForMargin_7 = value;
	}

	inline static int32_t get_offset_of_m_Style_8() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___m_Style_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_Style_8() const { return ___m_Style_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_Style_8() { return &___m_Style_8; }
	inline void set_m_Style_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_Style_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Style_8), (void*)value);
	}
};

struct GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields
{
public:
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___kDummyRect_9;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_10;

public:
	inline static int32_t get_offset_of_kDummyRect_9() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields, ___kDummyRect_9)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_kDummyRect_9() const { return ___kDummyRect_9; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_kDummyRect_9() { return &___kDummyRect_9; }
	inline void set_kDummyRect_9(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___kDummyRect_9 = value;
	}

	inline static int32_t get_offset_of_indent_10() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields, ___indent_10)); }
	inline int32_t get_indent_10() const { return ___indent_10; }
	inline int32_t* get_address_of_indent_10() { return &___indent_10; }
	inline void set_indent_10(int32_t value)
	{
		___indent_10 = value;
	}
};


// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A  : public RuntimeObject
{
public:

public:
};

struct GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___kDummyRect_3;

public:
	inline static int32_t get_offset_of_s_StoredLayouts_0() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields, ___s_StoredLayouts_0)); }
	inline Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * get_s_StoredLayouts_0() const { return ___s_StoredLayouts_0; }
	inline Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 ** get_address_of_s_StoredLayouts_0() { return &___s_StoredLayouts_0; }
	inline void set_s_StoredLayouts_0(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * value)
	{
		___s_StoredLayouts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StoredLayouts_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_StoredWindows_1() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields, ___s_StoredWindows_1)); }
	inline Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * get_s_StoredWindows_1() const { return ___s_StoredWindows_1; }
	inline Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 ** get_address_of_s_StoredWindows_1() { return &___s_StoredWindows_1; }
	inline void set_s_StoredWindows_1(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * value)
	{
		___s_StoredWindows_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StoredWindows_1), (void*)value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields, ___current_2)); }
	inline LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * get_current_2() const { return ___current_2; }
	inline LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}

	inline static int32_t get_offset_of_kDummyRect_3() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields, ___kDummyRect_3)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_kDummyRect_3() const { return ___kDummyRect_3; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_kDummyRect_3() { return &___kDummyRect_3; }
	inline void set_kDummyRect_3(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___kDummyRect_3 = value;
	}
};


// UnityEngine.GUISettings
struct  GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.GUISettings::m_DoubleClickSelectsWord
	bool ___m_DoubleClickSelectsWord_0;
	// System.Boolean UnityEngine.GUISettings::m_TripleClickSelectsLine
	bool ___m_TripleClickSelectsLine_1;
	// UnityEngine.Color UnityEngine.GUISettings::m_CursorColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CursorColor_2;
	// System.Single UnityEngine.GUISettings::m_CursorFlashSpeed
	float ___m_CursorFlashSpeed_3;
	// UnityEngine.Color UnityEngine.GUISettings::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_4;

public:
	inline static int32_t get_offset_of_m_DoubleClickSelectsWord_0() { return static_cast<int32_t>(offsetof(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0, ___m_DoubleClickSelectsWord_0)); }
	inline bool get_m_DoubleClickSelectsWord_0() const { return ___m_DoubleClickSelectsWord_0; }
	inline bool* get_address_of_m_DoubleClickSelectsWord_0() { return &___m_DoubleClickSelectsWord_0; }
	inline void set_m_DoubleClickSelectsWord_0(bool value)
	{
		___m_DoubleClickSelectsWord_0 = value;
	}

	inline static int32_t get_offset_of_m_TripleClickSelectsLine_1() { return static_cast<int32_t>(offsetof(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0, ___m_TripleClickSelectsLine_1)); }
	inline bool get_m_TripleClickSelectsLine_1() const { return ___m_TripleClickSelectsLine_1; }
	inline bool* get_address_of_m_TripleClickSelectsLine_1() { return &___m_TripleClickSelectsLine_1; }
	inline void set_m_TripleClickSelectsLine_1(bool value)
	{
		___m_TripleClickSelectsLine_1 = value;
	}

	inline static int32_t get_offset_of_m_CursorColor_2() { return static_cast<int32_t>(offsetof(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0, ___m_CursorColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CursorColor_2() const { return ___m_CursorColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CursorColor_2() { return &___m_CursorColor_2; }
	inline void set_m_CursorColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CursorColor_2 = value;
	}

	inline static int32_t get_offset_of_m_CursorFlashSpeed_3() { return static_cast<int32_t>(offsetof(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0, ___m_CursorFlashSpeed_3)); }
	inline float get_m_CursorFlashSpeed_3() const { return ___m_CursorFlashSpeed_3; }
	inline float* get_address_of_m_CursorFlashSpeed_3() { return &___m_CursorFlashSpeed_3; }
	inline void set_m_CursorFlashSpeed_3(float value)
	{
		___m_CursorFlashSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_4() { return static_cast<int32_t>(offsetof(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0, ___m_SelectionColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_4() const { return ___m_SelectionColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_4() { return &___m_SelectionColor_4; }
	inline void set_m_SelectionColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_4 = value;
	}
};


// UnityEngine.GUIStyleState
struct  GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
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


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
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

// UnityEngine.RectOffset
struct  RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
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


// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.GUILayoutOption/Type
struct  Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextEditor/DblClickSnapping
struct  DblClickSnapping_t831A23F3ECEF6C68B62B6C3AEAF870F70596FABD 
{
public:
	// System.Byte UnityEngine.TextEditor/DblClickSnapping::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DblClickSnapping_t831A23F3ECEF6C68B62B6C3AEAF870F70596FABD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.ApplicationException
struct  ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// UnityEngine.ExitGUIException
struct  ExitGUIException_tA832626B99B4D827C8064643824847BCAA7877F4  : public Exception_t
{
public:

public:
};


// UnityEngine.Font
struct  Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontTextureRebuildCallback_5), (void*)value);
	}
};

struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureRebuilt_4), (void*)value);
	}
};


// UnityEngine.GUILayoutGroup
struct  GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9  : public GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * ___entries_11;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_12;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_13;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_14;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_15;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_16;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_19;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_21;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_25;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_26;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginLeft
	int32_t ___m_MarginLeft_27;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginRight
	int32_t ___m_MarginRight_28;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginTop
	int32_t ___m_MarginTop_29;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginBottom
	int32_t ___m_MarginBottom_30;

public:
	inline static int32_t get_offset_of_entries_11() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___entries_11)); }
	inline List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * get_entries_11() const { return ___entries_11; }
	inline List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA ** get_address_of_entries_11() { return &___entries_11; }
	inline void set_entries_11(List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * value)
	{
		___entries_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_11), (void*)value);
	}

	inline static int32_t get_offset_of_isVertical_12() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___isVertical_12)); }
	inline bool get_isVertical_12() const { return ___isVertical_12; }
	inline bool* get_address_of_isVertical_12() { return &___isVertical_12; }
	inline void set_isVertical_12(bool value)
	{
		___isVertical_12 = value;
	}

	inline static int32_t get_offset_of_resetCoords_13() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___resetCoords_13)); }
	inline bool get_resetCoords_13() const { return ___resetCoords_13; }
	inline bool* get_address_of_resetCoords_13() { return &___resetCoords_13; }
	inline void set_resetCoords_13(bool value)
	{
		___resetCoords_13 = value;
	}

	inline static int32_t get_offset_of_spacing_14() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___spacing_14)); }
	inline float get_spacing_14() const { return ___spacing_14; }
	inline float* get_address_of_spacing_14() { return &___spacing_14; }
	inline void set_spacing_14(float value)
	{
		___spacing_14 = value;
	}

	inline static int32_t get_offset_of_sameSize_15() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___sameSize_15)); }
	inline bool get_sameSize_15() const { return ___sameSize_15; }
	inline bool* get_address_of_sameSize_15() { return &___sameSize_15; }
	inline void set_sameSize_15(bool value)
	{
		___sameSize_15 = value;
	}

	inline static int32_t get_offset_of_isWindow_16() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___isWindow_16)); }
	inline bool get_isWindow_16() const { return ___isWindow_16; }
	inline bool* get_address_of_isWindow_16() { return &___isWindow_16; }
	inline void set_isWindow_16(bool value)
	{
		___isWindow_16 = value;
	}

	inline static int32_t get_offset_of_windowID_17() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___windowID_17)); }
	inline int32_t get_windowID_17() const { return ___windowID_17; }
	inline int32_t* get_address_of_windowID_17() { return &___windowID_17; }
	inline void set_windowID_17(int32_t value)
	{
		___windowID_17 = value;
	}

	inline static int32_t get_offset_of_m_Cursor_18() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_Cursor_18)); }
	inline int32_t get_m_Cursor_18() const { return ___m_Cursor_18; }
	inline int32_t* get_address_of_m_Cursor_18() { return &___m_Cursor_18; }
	inline void set_m_Cursor_18(int32_t value)
	{
		___m_Cursor_18 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountX_19() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_StretchableCountX_19)); }
	inline int32_t get_m_StretchableCountX_19() const { return ___m_StretchableCountX_19; }
	inline int32_t* get_address_of_m_StretchableCountX_19() { return &___m_StretchableCountX_19; }
	inline void set_m_StretchableCountX_19(int32_t value)
	{
		___m_StretchableCountX_19 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountY_20() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_StretchableCountY_20)); }
	inline int32_t get_m_StretchableCountY_20() const { return ___m_StretchableCountY_20; }
	inline int32_t* get_address_of_m_StretchableCountY_20() { return &___m_StretchableCountY_20; }
	inline void set_m_StretchableCountY_20(int32_t value)
	{
		___m_StretchableCountY_20 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedWidth_21() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_UserSpecifiedWidth_21)); }
	inline bool get_m_UserSpecifiedWidth_21() const { return ___m_UserSpecifiedWidth_21; }
	inline bool* get_address_of_m_UserSpecifiedWidth_21() { return &___m_UserSpecifiedWidth_21; }
	inline void set_m_UserSpecifiedWidth_21(bool value)
	{
		___m_UserSpecifiedWidth_21 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedHeight_22() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_UserSpecifiedHeight_22)); }
	inline bool get_m_UserSpecifiedHeight_22() const { return ___m_UserSpecifiedHeight_22; }
	inline bool* get_address_of_m_UserSpecifiedHeight_22() { return &___m_UserSpecifiedHeight_22; }
	inline void set_m_UserSpecifiedHeight_22(bool value)
	{
		___m_UserSpecifiedHeight_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinWidth_23() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMinWidth_23)); }
	inline float get_m_ChildMinWidth_23() const { return ___m_ChildMinWidth_23; }
	inline float* get_address_of_m_ChildMinWidth_23() { return &___m_ChildMinWidth_23; }
	inline void set_m_ChildMinWidth_23(float value)
	{
		___m_ChildMinWidth_23 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxWidth_24() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMaxWidth_24)); }
	inline float get_m_ChildMaxWidth_24() const { return ___m_ChildMaxWidth_24; }
	inline float* get_address_of_m_ChildMaxWidth_24() { return &___m_ChildMaxWidth_24; }
	inline void set_m_ChildMaxWidth_24(float value)
	{
		___m_ChildMaxWidth_24 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinHeight_25() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMinHeight_25)); }
	inline float get_m_ChildMinHeight_25() const { return ___m_ChildMinHeight_25; }
	inline float* get_address_of_m_ChildMinHeight_25() { return &___m_ChildMinHeight_25; }
	inline void set_m_ChildMinHeight_25(float value)
	{
		___m_ChildMinHeight_25 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxHeight_26() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMaxHeight_26)); }
	inline float get_m_ChildMaxHeight_26() const { return ___m_ChildMaxHeight_26; }
	inline float* get_address_of_m_ChildMaxHeight_26() { return &___m_ChildMaxHeight_26; }
	inline void set_m_ChildMaxHeight_26(float value)
	{
		___m_ChildMaxHeight_26 = value;
	}

	inline static int32_t get_offset_of_m_MarginLeft_27() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginLeft_27)); }
	inline int32_t get_m_MarginLeft_27() const { return ___m_MarginLeft_27; }
	inline int32_t* get_address_of_m_MarginLeft_27() { return &___m_MarginLeft_27; }
	inline void set_m_MarginLeft_27(int32_t value)
	{
		___m_MarginLeft_27 = value;
	}

	inline static int32_t get_offset_of_m_MarginRight_28() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginRight_28)); }
	inline int32_t get_m_MarginRight_28() const { return ___m_MarginRight_28; }
	inline int32_t* get_address_of_m_MarginRight_28() { return &___m_MarginRight_28; }
	inline void set_m_MarginRight_28(int32_t value)
	{
		___m_MarginRight_28 = value;
	}

	inline static int32_t get_offset_of_m_MarginTop_29() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginTop_29)); }
	inline int32_t get_m_MarginTop_29() const { return ___m_MarginTop_29; }
	inline int32_t* get_address_of_m_MarginTop_29() { return &___m_MarginTop_29; }
	inline void set_m_MarginTop_29(int32_t value)
	{
		___m_MarginTop_29 = value;
	}

	inline static int32_t get_offset_of_m_MarginBottom_30() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginBottom_30)); }
	inline int32_t get_m_MarginBottom_30() const { return ___m_MarginBottom_30; }
	inline int32_t* get_address_of_m_MarginBottom_30() { return &___m_MarginBottom_30; }
	inline void set_m_MarginBottom_30(int32_t value)
	{
		___m_MarginBottom_30 = value;
	}
};

struct GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_StaticFields
{
public:
	// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::none
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * ___none_31;

public:
	inline static int32_t get_offset_of_none_31() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_StaticFields, ___none_31)); }
	inline GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * get_none_31() const { return ___none_31; }
	inline GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE ** get_address_of_none_31() { return &___none_31; }
	inline void set_none_31(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * value)
	{
		___none_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_31), (void*)value);
	}
};


// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.TextEditor
struct  TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B  : public RuntimeObject
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___scrollOffset_6;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___m_Content_7;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_8;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_9;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_10;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_11;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_12;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_13;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_14;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_15;

public:
	inline static int32_t get_offset_of_keyboardOnScreen_0() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___keyboardOnScreen_0)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_keyboardOnScreen_0() const { return ___keyboardOnScreen_0; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_keyboardOnScreen_0() { return &___keyboardOnScreen_0; }
	inline void set_keyboardOnScreen_0(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___keyboardOnScreen_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyboardOnScreen_0), (void*)value);
	}

	inline static int32_t get_offset_of_controlID_1() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___controlID_1)); }
	inline int32_t get_controlID_1() const { return ___controlID_1; }
	inline int32_t* get_address_of_controlID_1() { return &___controlID_1; }
	inline void set_controlID_1(int32_t value)
	{
		___controlID_1 = value;
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___style_2)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___style_2), (void*)value);
	}

	inline static int32_t get_offset_of_multiline_3() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___multiline_3)); }
	inline bool get_multiline_3() const { return ___multiline_3; }
	inline bool* get_address_of_multiline_3() { return &___multiline_3; }
	inline void set_multiline_3(bool value)
	{
		___multiline_3 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_4() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___hasHorizontalCursorPos_4)); }
	inline bool get_hasHorizontalCursorPos_4() const { return ___hasHorizontalCursorPos_4; }
	inline bool* get_address_of_hasHorizontalCursorPos_4() { return &___hasHorizontalCursorPos_4; }
	inline void set_hasHorizontalCursorPos_4(bool value)
	{
		___hasHorizontalCursorPos_4 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_5() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___isPasswordField_5)); }
	inline bool get_isPasswordField_5() const { return ___isPasswordField_5; }
	inline bool* get_address_of_isPasswordField_5() { return &___isPasswordField_5; }
	inline void set_isPasswordField_5(bool value)
	{
		___isPasswordField_5 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_6() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___scrollOffset_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_scrollOffset_6() const { return ___scrollOffset_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_scrollOffset_6() { return &___scrollOffset_6; }
	inline void set_scrollOffset_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___scrollOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_Content_7() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_Content_7)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_m_Content_7() const { return ___m_Content_7; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_m_Content_7() { return &___m_Content_7; }
	inline void set_m_Content_7(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___m_Content_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Content_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorIndex_8() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_CursorIndex_8)); }
	inline int32_t get_m_CursorIndex_8() const { return ___m_CursorIndex_8; }
	inline int32_t* get_address_of_m_CursorIndex_8() { return &___m_CursorIndex_8; }
	inline void set_m_CursorIndex_8(int32_t value)
	{
		___m_CursorIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_9() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_SelectIndex_9)); }
	inline int32_t get_m_SelectIndex_9() const { return ___m_SelectIndex_9; }
	inline int32_t* get_address_of_m_SelectIndex_9() { return &___m_SelectIndex_9; }
	inline void set_m_SelectIndex_9(int32_t value)
	{
		___m_SelectIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_10() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_RevealCursor_10)); }
	inline bool get_m_RevealCursor_10() const { return ___m_RevealCursor_10; }
	inline bool* get_address_of_m_RevealCursor_10() { return &___m_RevealCursor_10; }
	inline void set_m_RevealCursor_10(bool value)
	{
		___m_RevealCursor_10 = value;
	}

	inline static int32_t get_offset_of_m_MouseDragSelectsWholeWords_11() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_MouseDragSelectsWholeWords_11)); }
	inline bool get_m_MouseDragSelectsWholeWords_11() const { return ___m_MouseDragSelectsWholeWords_11; }
	inline bool* get_address_of_m_MouseDragSelectsWholeWords_11() { return &___m_MouseDragSelectsWholeWords_11; }
	inline void set_m_MouseDragSelectsWholeWords_11(bool value)
	{
		___m_MouseDragSelectsWholeWords_11 = value;
	}

	inline static int32_t get_offset_of_m_DblClickInitPos_12() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_DblClickInitPos_12)); }
	inline int32_t get_m_DblClickInitPos_12() const { return ___m_DblClickInitPos_12; }
	inline int32_t* get_address_of_m_DblClickInitPos_12() { return &___m_DblClickInitPos_12; }
	inline void set_m_DblClickInitPos_12(int32_t value)
	{
		___m_DblClickInitPos_12 = value;
	}

	inline static int32_t get_offset_of_m_DblClickSnap_13() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_DblClickSnap_13)); }
	inline uint8_t get_m_DblClickSnap_13() const { return ___m_DblClickSnap_13; }
	inline uint8_t* get_address_of_m_DblClickSnap_13() { return &___m_DblClickSnap_13; }
	inline void set_m_DblClickSnap_13(uint8_t value)
	{
		___m_DblClickSnap_13 = value;
	}

	inline static int32_t get_offset_of_m_bJustSelected_14() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_bJustSelected_14)); }
	inline bool get_m_bJustSelected_14() const { return ___m_bJustSelected_14; }
	inline bool* get_address_of_m_bJustSelected_14() { return &___m_bJustSelected_14; }
	inline void set_m_bJustSelected_14(bool value)
	{
		___m_bJustSelected_14 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_15() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_iAltCursorPos_15)); }
	inline int32_t get_m_iAltCursorPos_15() const { return ___m_iAltCursorPos_15; }
	inline int32_t* get_address_of_m_iAltCursorPos_15() { return &___m_iAltCursorPos_15; }
	inline void set_m_iAltCursorPos_15(int32_t value)
	{
		___m_iAltCursorPos_15 = value;
	}
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
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


// System.Func`2<System.Exception,System.Boolean>
struct  Func_2_t6283F9D1F2A6C8BB45F72CDAD5856BC3FDF29C3F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct  Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.GUIScrollGroup
struct  GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62  : public GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9
{
public:
	// System.Single UnityEngine.GUIScrollGroup::calcMinWidth
	float ___calcMinWidth_32;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxWidth
	float ___calcMaxWidth_33;
	// System.Single UnityEngine.GUIScrollGroup::calcMinHeight
	float ___calcMinHeight_34;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxHeight
	float ___calcMaxHeight_35;
	// System.Single UnityEngine.GUIScrollGroup::clientWidth
	float ___clientWidth_36;
	// System.Single UnityEngine.GUIScrollGroup::clientHeight
	float ___clientHeight_37;
	// System.Boolean UnityEngine.GUIScrollGroup::allowHorizontalScroll
	bool ___allowHorizontalScroll_38;
	// System.Boolean UnityEngine.GUIScrollGroup::allowVerticalScroll
	bool ___allowVerticalScroll_39;
	// System.Boolean UnityEngine.GUIScrollGroup::needsHorizontalScrollbar
	bool ___needsHorizontalScrollbar_40;
	// System.Boolean UnityEngine.GUIScrollGroup::needsVerticalScrollbar
	bool ___needsVerticalScrollbar_41;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___horizontalScrollbar_42;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___verticalScrollbar_43;

public:
	inline static int32_t get_offset_of_calcMinWidth_32() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___calcMinWidth_32)); }
	inline float get_calcMinWidth_32() const { return ___calcMinWidth_32; }
	inline float* get_address_of_calcMinWidth_32() { return &___calcMinWidth_32; }
	inline void set_calcMinWidth_32(float value)
	{
		___calcMinWidth_32 = value;
	}

	inline static int32_t get_offset_of_calcMaxWidth_33() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___calcMaxWidth_33)); }
	inline float get_calcMaxWidth_33() const { return ___calcMaxWidth_33; }
	inline float* get_address_of_calcMaxWidth_33() { return &___calcMaxWidth_33; }
	inline void set_calcMaxWidth_33(float value)
	{
		___calcMaxWidth_33 = value;
	}

	inline static int32_t get_offset_of_calcMinHeight_34() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___calcMinHeight_34)); }
	inline float get_calcMinHeight_34() const { return ___calcMinHeight_34; }
	inline float* get_address_of_calcMinHeight_34() { return &___calcMinHeight_34; }
	inline void set_calcMinHeight_34(float value)
	{
		___calcMinHeight_34 = value;
	}

	inline static int32_t get_offset_of_calcMaxHeight_35() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___calcMaxHeight_35)); }
	inline float get_calcMaxHeight_35() const { return ___calcMaxHeight_35; }
	inline float* get_address_of_calcMaxHeight_35() { return &___calcMaxHeight_35; }
	inline void set_calcMaxHeight_35(float value)
	{
		___calcMaxHeight_35 = value;
	}

	inline static int32_t get_offset_of_clientWidth_36() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___clientWidth_36)); }
	inline float get_clientWidth_36() const { return ___clientWidth_36; }
	inline float* get_address_of_clientWidth_36() { return &___clientWidth_36; }
	inline void set_clientWidth_36(float value)
	{
		___clientWidth_36 = value;
	}

	inline static int32_t get_offset_of_clientHeight_37() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___clientHeight_37)); }
	inline float get_clientHeight_37() const { return ___clientHeight_37; }
	inline float* get_address_of_clientHeight_37() { return &___clientHeight_37; }
	inline void set_clientHeight_37(float value)
	{
		___clientHeight_37 = value;
	}

	inline static int32_t get_offset_of_allowHorizontalScroll_38() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___allowHorizontalScroll_38)); }
	inline bool get_allowHorizontalScroll_38() const { return ___allowHorizontalScroll_38; }
	inline bool* get_address_of_allowHorizontalScroll_38() { return &___allowHorizontalScroll_38; }
	inline void set_allowHorizontalScroll_38(bool value)
	{
		___allowHorizontalScroll_38 = value;
	}

	inline static int32_t get_offset_of_allowVerticalScroll_39() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___allowVerticalScroll_39)); }
	inline bool get_allowVerticalScroll_39() const { return ___allowVerticalScroll_39; }
	inline bool* get_address_of_allowVerticalScroll_39() { return &___allowVerticalScroll_39; }
	inline void set_allowVerticalScroll_39(bool value)
	{
		___allowVerticalScroll_39 = value;
	}

	inline static int32_t get_offset_of_needsHorizontalScrollbar_40() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___needsHorizontalScrollbar_40)); }
	inline bool get_needsHorizontalScrollbar_40() const { return ___needsHorizontalScrollbar_40; }
	inline bool* get_address_of_needsHorizontalScrollbar_40() { return &___needsHorizontalScrollbar_40; }
	inline void set_needsHorizontalScrollbar_40(bool value)
	{
		___needsHorizontalScrollbar_40 = value;
	}

	inline static int32_t get_offset_of_needsVerticalScrollbar_41() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___needsVerticalScrollbar_41)); }
	inline bool get_needsVerticalScrollbar_41() const { return ___needsVerticalScrollbar_41; }
	inline bool* get_address_of_needsVerticalScrollbar_41() { return &___needsVerticalScrollbar_41; }
	inline void set_needsVerticalScrollbar_41(bool value)
	{
		___needsVerticalScrollbar_41 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollbar_42() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___horizontalScrollbar_42)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_horizontalScrollbar_42() const { return ___horizontalScrollbar_42; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_horizontalScrollbar_42() { return &___horizontalScrollbar_42; }
	inline void set_horizontalScrollbar_42(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___horizontalScrollbar_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___horizontalScrollbar_42), (void*)value);
	}

	inline static int32_t get_offset_of_verticalScrollbar_43() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62, ___verticalScrollbar_43)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_verticalScrollbar_43() const { return ___verticalScrollbar_43; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_verticalScrollbar_43() { return &___verticalScrollbar_43; }
	inline void set_verticalScrollbar_43(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___verticalScrollbar_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verticalScrollbar_43), (void*)value);
	}
};


// UnityEngine.GUISkin
struct  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_31;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_SliderMixed_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_SliderMixed_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SliderMixed_18() const { return ___m_SliderMixed_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SliderMixed_18() { return &___m_SliderMixed_18; }
	inline void set_m_SliderMixed_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SliderMixed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SliderMixed_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_19() const { return ___m_horizontalScrollbar_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_19() { return &___m_horizontalScrollbar_19; }
	inline void set_m_horizontalScrollbar_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_20() const { return ___m_horizontalScrollbarThumb_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_20() { return &___m_horizontalScrollbarThumb_20; }
	inline void set_m_horizontalScrollbarThumb_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_21() const { return ___m_horizontalScrollbarLeftButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_21() { return &___m_horizontalScrollbarLeftButton_21; }
	inline void set_m_horizontalScrollbarLeftButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_22() const { return ___m_horizontalScrollbarRightButton_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_22() { return &___m_horizontalScrollbarRightButton_22; }
	inline void set_m_horizontalScrollbarRightButton_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_23() const { return ___m_verticalScrollbar_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_23() { return &___m_verticalScrollbar_23; }
	inline void set_m_verticalScrollbar_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_24() const { return ___m_verticalScrollbarThumb_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_24() { return &___m_verticalScrollbarThumb_24; }
	inline void set_m_verticalScrollbarThumb_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_25() const { return ___m_verticalScrollbarUpButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_25() { return &___m_verticalScrollbarUpButton_25; }
	inline void set_m_verticalScrollbarUpButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_26() const { return ___m_verticalScrollbarDownButton_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_26() { return &___m_verticalScrollbarDownButton_26; }
	inline void set_m_verticalScrollbarDownButton_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_27)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_27() const { return ___m_ScrollView_27; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_27() { return &___m_ScrollView_27; }
	inline void set_m_ScrollView_27(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_28)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_28() const { return ___m_CustomStyles_28; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_28() { return &___m_CustomStyles_28; }
	inline void set_m_CustomStyles_28(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_29)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_29() const { return ___m_Settings_29; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_29() { return &___m_Settings_29; }
	inline void set_m_Settings_29(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_31)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_31() const { return ___m_Styles_31; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_31() { return &___m_Styles_31; }
	inline void set_m_Styles_31(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_31), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_33;

public:
	inline static int32_t get_offset_of_ms_Error_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_30)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_30() const { return ___ms_Error_30; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_30() { return &___ms_Error_30; }
	inline void set_ms_Error_30(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_32)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_32() const { return ___m_SkinChanged_32; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_32() { return &___m_SkinChanged_32; }
	inline void set_m_SkinChanged_32(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_current_33() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_33)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_33() const { return ___current_33; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_33() { return &___current_33; }
	inline void set_current_33(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_33), (void*)value);
	}
};


// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
};


// UnityEngine.GUI/WindowFunction
struct  WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.GUISkin/SkinChangedDelegate
struct  SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * m_Items[1];

public:
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke(const GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9& unmarshaled, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_back(const GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke& marshaled, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9& unmarshaled);
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_cleanup(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke(const RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70& unmarshaled, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke_back(const RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke& marshaled, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70& unmarshaled);
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_pinvoke_cleanup(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_com(const GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9& unmarshaled, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_com_back(const GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com& marshaled, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9& unmarshaled);
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_com_cleanup(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_com(const RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70& unmarshaled, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_com_back(const RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com& marshaled, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70& unmarshaled);
IL2CPP_EXTERN_C void RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshal_com_cleanup(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_back(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke& marshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_cleanup(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_com(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_com_back(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com& marshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_com_cleanup(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m42F33AB093A9AAB17C558FDBFF010443D1048400_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  ValueCollection_GetEnumerator_m401C0FF4E5F0194244B19D7B9EF4B173FB7E88C3_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method);
// !2 System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_3_Invoke_m41D8569C1E1FFC40BAB05286F15A74835341C627_gshared (Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0 * __this, int32_t ___arg10, intptr_t ___arg21, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_2_Invoke_mC9A30EEF00507C36CC34A71B88397287E6906197_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);

// System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_get_mousePosition_Injected_m2BAF28C88428EC08319483AE5F72A8A06E322458 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m60B56A595ED8C49C9E37F2B16740122D3FC1703E (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, int32_t ___displayIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_displayIndex_mECFA15B9D33DF3F81E3567BFBED691B1691C8AA9 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_SetNativeEvent_m0DCD895BCC98D00EFBB7AA5EE27829BFAB6A611F (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Event_Internal_Create_mADC5E58798E23BFC1F85483D4C79FCABB1161EF8 (int32_t ___displayIndex0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_Destroy_mDB808A17F13FA016D82D538209DA74DD1D9879DE (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::get_isKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isKey_m0F19E1B83F29BF05B0AD1B6F981447CE2A815910 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::get_isMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isMouse_m73E2EDD4336CF7D573889EAAE961214BE150C979 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Char UnityEngine.Event::get_character()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_mFDB32862186913735A8EC1B44F2455EC67C8403E (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9 (String_t* ___fmt0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String UnityEngine.Event::get_commandName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m5D0763551DDA469ACDBE3477D2210712F9B8B26D (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Void UnityEngineInternal.GenericStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericStack__ctor_m42B668E8F293EE21F529A2679AA110C0877605DD (GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_m3CF6DBBA4BE79B582AE4245AC02DED002C31E1DD_inline (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_CheckOnGUI_mA591FC883697B53B61EC6B5B4469262BA6936FA7 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DoSetSkin_mEB9C1242DC36F20472409A016DEF8E2A8103BDA4 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___newSkin0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUIUtility_GetDefaultSkin_m4CF951846AD574F548739127FB7569BB7E3593A4 (const RuntimeMethod* method);
// System.Void UnityEngine.GUISkin::MakeCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_MakeCurrent_mB668146FC9D42C40D6555936A1C88831014356E2 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * GUILayoutUtility_SelectIDList_mBB4E4C5EE476C431E3105D76F13CEA683E7021CB (int32_t ___instanceID0, bool ___isWindow1, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443 (const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53 (float ___width0, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_Height_m6705C2917595CCEA6D934DBB5DD8399DF6F5E464 (float ___height0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_BeginWindow_m1C75E01076E5777F316AD33291C7B9A37ABB32EA (int32_t ___windowID0, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style1, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options2, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction_Invoke_mF7D36482F583383AF583ED812A4E2487C06C3748 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Layout_mE876F10FD153DE2038066B29DBC444E4B5A3F88B (const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(System.String,UnityEngine.Texture,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m0C79169A2B4D160D3EB31D70F813ED6D2703BBB9 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___text0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, String_t* ___tooltip2, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_image(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_image_mED32F759E202E1B0717D1BF0899971CF4DC400E2 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_tooltip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_tooltip_mBAC5101EBC26E738DCBD2D9503E9B8E6BECA6732 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOption__ctor_m86D3D4B8A398111D2D0699DF13329F847F4AF79E (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method);
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_bottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_mDDEBF1389FC1B8DCD9FC15DF91E51D264925C00D (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_mD86F71263ED679EBA0B5E5415F1B8FB8C7509DA0 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m171F3A526E7FD0EB2FEF742F2BE125A72808A837 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_mE1D2038EB276EEC0FC42A0F08C782569EE2DE865 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_mB249B43773569736BF1D1014F890484B17A96BE4 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String UnityEngine.GUIStyle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_mDC1371698EB6B92D459AA165EFFE5983711C4BB6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
inline void List_1__ctor_m27E8FFD81DA48070A0476471416266C19300D505 (List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_m29C33DB9A9A93ECD86533A72B2822E34E8415640 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, float ____minWidth0, float ____maxWidth1, float ____minHeight2, float ____maxHeight3, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ____style4, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyOptions_m7AE5DA87B129DC9747284F29498BD24C6CD86537 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyStyleSettings_m422867BA96DFE0C65759764FC926162846BC6644 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
inline int32_t List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline (List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_horizontal_m7B1D97260EF95BCEDB9A7AF7AC9FAF99D56E9177 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
inline Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55 (List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  (*) (List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::get_Current()
inline GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline (Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 * __this, const RuntimeMethod* method)
{
	return ((  GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * (*) (Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUILayoutEntry::get_marginHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginHorizontal_mF9C781CECF148DD117AF1ED5848E56AD64199E6C (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::MoveNext()
inline bool Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486 (Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::Dispose()
inline void Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56 (Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
inline GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_inline (List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * (*) (List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetHorizontal_mAE5AD2CF919D6694A82B7AAB27967AF097928FD2 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, float ___x0, float ___width1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_vertical_m589292AEF7A556D4FD0CED648DEED422C1CA36A4 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetVertical_mF68B8311A53ABBAFCD8675137563F0AF64979952 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, float ___y0, float ___height1, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUILayoutEntry::get_marginVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginVertical_m2DC4DCD8760C40BA8396567A930FE58923472819 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method);
// System.String UnityEngine.GUILayoutEntry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayoutEntry_ToString_m605E966C2D198919A52D5EF14B1BD48F91E8762F (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_GetWindowRect_Injected_m7A33DA746412DD081C6F48C7C80F4B01EDB4FBC8 (int32_t ___windowID0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___ret1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_Injected_m84ED04D182A61B3F09A4E042ECF4074611A2EA73 (int32_t ___windowID0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___r1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m990013907A0B53EE24D944EBFF39DA4107893D20 (Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * __this, int32_t ___key0, LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 *, int32_t, LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache__ctor_m31B20021AD6C02155826BB808C8E243B340022C4 (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___instanceID0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3E15A6938CA1A0EDC0BD3E28CBED54163A11EB17 (Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * __this, int32_t ___key0, LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 *, int32_t, LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.GUILayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
inline void Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61 (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, const RuntimeMethod*))Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
inline void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04 (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, RuntimeObject *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFreeGroup_mA1D012DCCE903F07F73360DAF56606EFB093BE64 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * ___toplevel0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutSingleGroup_m9114B0CC757F1863A6599A14BF458CD8DBD34F6A (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * ___i0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_m45E547A457E4853D733D875D86424B27BC613F32 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  GUILayoutUtility_Internal_GetWindowRect_mEDAF013BCAD8976985F1B8DF688CAA038EBE3BD6 (int32_t ___windowID0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_m7896245CCE0C075879128E3F73E9FDE15B844A65 (int32_t ___windowID0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___r1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor()
inline void Dictionary_2__ctor_m6DB3523BBD242ACAB14BD3365CC45F5AA054EBFA (Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_m8B77B5F6053C9CBBBA9F79DBEDB58F768121503B (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_mE763CA867BC7D8D17551FED8A999243ED3CB2A4F (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, float ___x0, float ___width1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_m1A56E9FEB2F31B84A08D58CE564C2E4265CB53C1 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m4D5A3D430B3E9560D052D425DD6A490389CDCDE1 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, float ___y0, float ___height1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void UnityEngine.GUISettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISettings__ctor_mFF8AA561EEA66B4D8999ECEC496658C9BBF24B1C (GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUISkin::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_m4C316C5C11BE5C09B36934F23D3694C13022D6C1 (Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___font0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.GUISkin::BuildStyleCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_BuildStyleCache_m68834C4D2E821414ED9BDFD74607F068B281258F (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_mCA640516AD4AE648ED6E0BF71A5A2117E3BC77D2 (Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m42F33AB093A9AAB17C558FDBFF010443D1048400_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7 (Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * __this, String_t* ___key0, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 *, String_t*, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697 (Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * __this, String_t* ___key0, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 *, String_t*, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_error_m776812DEB6A65D35AE7217780D7D0D8058E3A3B5 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_stretchHeight_m36BB4A41AB08DF3286CB928688C6C4907134DEA9 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_FindStyle_m58E9077ABC7E89E75CB9074E6FE2EEEDF0C5286C (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, String_t* ___styleName0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Font UnityEngine.GUISkin::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * GUISkin_get_font_mDA1B666C2AF47B9523E909FA389F002AFAED7FCF (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_m5FEBFA0F8E80B0745121ECB1C59C9E0EF595CC3C (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
inline ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40 * Dictionary_2_get_Values_mBED7C7FA2A970F18F12B7076F0FECD8BAEBEF781 (Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40 * (*) (Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 *, const RuntimeMethod*))Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::GetEnumerator()
inline Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC  ValueCollection_GetEnumerator_mB96B97C06F335F7DFB78C412185D7779A25DA4CE (ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC  (*) (ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m401C0FF4E5F0194244B19D7B9EF4B173FB7E88C3_gshared)(__this, method);
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m1A826DEC0513F9B9C7E5C67D02D24BEA33783686 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_m51A33779ABE8BAF80E5F975F9F5AE8D960CB4EE8 (intptr_t ___self0, const RuntimeMethod* method);
// System.String UnityEngine.GUIStyle::get_rawName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_rawName_m1295BFC75B2924BEB81140B9476E5B97340A1713 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_rawName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_rawName_mFE7CE77C7654A7B1D68DDB557801C9D33896BDF1 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_mB1EEFB0E08D242D2B10272B5F2A78B23551E012E (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___idx0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyleState_GetGUIStyleState_mE8758CDE0E9E627ECDE92F60509A19B91922964C (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_mD3E24C1578BB69007E729CC624D264E1CD21D06A (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___idx0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_mA519A9F678D6B88731C3F6A67E0DA9092A4596D4 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, RuntimeObject * ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_mA4161E4AAAE12F40C7F1B937F2DDCAB1D81E221F (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___value0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.GUIStyleState::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_mDC103756AA527283D4D171277702A78211BE6392 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_mF5B23C65DA81DA85EAE2F148C549ECE0007F1652 (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_m811DBCF744DEC31303381BA28AD292209260C446 (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GUIUtility_Internal_GetDefaultSkin_mA64DFF25827FEF564C93F240B7C6614EEABC92E5 (int32_t ___skinMode0, const RuntimeMethod* method);
// !2 System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(!0,!1)
inline bool Func_3_Invoke_m41D8569C1E1FFC40BAB05286F15A74835341C627 (Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0 * __this, int32_t ___arg10, intptr_t ___arg21, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0 *, int32_t, intptr_t, const RuntimeMethod*))Func_3_Invoke_m41D8569C1E1FFC40BAB05286F15A74835341C627_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.GUIUtility::ResetGlobalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ResetGlobalState_m5D608E689B0B1AA994702358158C7BB65373D3F7 (const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Begin_m1A42FB0448413B7ED711887827CD6E8F9276C47D (int32_t ___instanceID0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFromEditorWindow_m47384B8E70622B43668E03DA67E8B455694A7005 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::ClearStaticCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_ClearStaticCache_mD4647E7AF90A71B211AF157C9DDF12D25A0059A2 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_ExitGUI_m0B9B3280EB0CA732C5CFA32DA0384EA2D0A41090 (const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_ShouldRethrowException_m4D31C054C92D4A3D13D7F64C23634376F1F44DCB (Exception_t * ___exception0, const RuntimeMethod* method);
// !1 System.Func`2<System.Exception,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_m6E33E881BFD75761C0F91C7EEB1AF452BFD18445 (Func_2_t6283F9D1F2A6C8BB45F72CDAD5856BC3FDF29C3F * __this, Exception_t * ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t6283F9D1F2A6C8BB45F72CDAD5856BC3FDF29C3F *, Exception_t *, const RuntimeMethod*))Func_2_Invoke_mC9A30EEF00507C36CC34A71B88397287E6906197_gshared)(__this, ___arg0, method);
}
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m13C69BE54D215B22CA7D1FE5192DD5ED744E0FCF_inline (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_changed_m7DBA5D0D2493D33D86E59D55942CE4FA56451DAC (bool ___value0, const RuntimeMethod* method);
// UnityEngineInternal.GenericStack UnityEngine.GUI::get_scrollViewStates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * GUI_get_scrollViewStates_mC0FF9F20045EB96D22254543B8C9A0643D54C4D4_inline (const RuntimeMethod* method);
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUIUtility::IsExitGUIException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_IsExitGUIException_mF80F38388A47904E471BC7CE0E1239845A9356C2 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUIUtility::get_guiDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_guiDepth_mCEE2CF2630726CA657D48F0375866E2B8C314F2E (const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545_inline (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// Conversion methods for marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke(const Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E& unmarshaled, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke_back(const Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_pinvoke& marshaled, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_pinvoke_cleanup(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_com(const Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E& unmarshaled, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_com_back(const Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_com& marshaled, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshal_com_cleanup(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_com& marshaled)
{
}
// UnityEngine.EventType UnityEngine.Event::get_rawType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_rawType_m8725042044E8089268FF9232CF7D30EF49144B0C (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Event_get_rawType_m8725042044E8089268FF9232CF7D30EF49144B0C_ftn) (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *);
	static Event_get_rawType_m8725042044E8089268FF9232CF7D30EF49144B0C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_rawType_m8725042044E8089268FF9232CF7D30EF49144B0C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Event_get_mousePosition_Injected_m2BAF28C88428EC08319483AE5F72A8A06E322458(__this, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886_ftn) (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *);
	static Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Char UnityEngine.Event::get_character()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_mFDB32862186913735A8EC1B44F2455EC67C8403E (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	typedef Il2CppChar (*Event_get_character_mFDB32862186913735A8EC1B44F2455EC67C8403E_ftn) (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *);
	static Event_get_character_mFDB32862186913735A8EC1B44F2455EC67C8403E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_mFDB32862186913735A8EC1B44F2455EC67C8403E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	Il2CppChar icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E_ftn) (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *);
	static Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_displayIndex_mECFA15B9D33DF3F81E3567BFBED691B1691C8AA9 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Event_set_displayIndex_mECFA15B9D33DF3F81E3567BFBED691B1691C8AA9_ftn) (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *, int32_t);
	static Event_set_displayIndex_mECFA15B9D33DF3F81E3567BFBED691B1691C8AA9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_displayIndex_mECFA15B9D33DF3F81E3567BFBED691B1691C8AA9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_displayIndex(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D_ftn) (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *);
	static Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Event::get_commandName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m5D0763551DDA469ACDBE3477D2210712F9B8B26D (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	typedef String_t* (*Event_get_commandName_m5D0763551DDA469ACDBE3477D2210712F9B8B26D_ftn) (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *);
	static Event_get_commandName_m5D0763551DDA469ACDBE3477D2210712F9B8B26D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m5D0763551DDA469ACDBE3477D2210712F9B8B26D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Event_Internal_Create_mADC5E58798E23BFC1F85483D4C79FCABB1161EF8 (int32_t ___displayIndex0, const RuntimeMethod* method)
{
	typedef intptr_t (*Event_Internal_Create_mADC5E58798E23BFC1F85483D4C79FCABB1161EF8_ftn) (int32_t);
	static Event_Internal_Create_mADC5E58798E23BFC1F85483D4C79FCABB1161EF8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Create_mADC5E58798E23BFC1F85483D4C79FCABB1161EF8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Create(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___displayIndex0);
	return icallRetVal;
}
// System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_Destroy_mDB808A17F13FA016D82D538209DA74DD1D9879DE (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*Event_Internal_Destroy_mDB808A17F13FA016D82D538209DA74DD1D9879DE_ftn) (intptr_t);
	static Event_Internal_Destroy_mDB808A17F13FA016D82D538209DA74DD1D9879DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Destroy_mDB808A17F13FA016D82D538209DA74DD1D9879DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_PopEvent_mCE0C136F327B5FC3822743208222799F7301170B (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___outEvent0, const RuntimeMethod* method)
{
	typedef bool (*Event_PopEvent_mCE0C136F327B5FC3822743208222799F7301170B_ftn) (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *);
	static Event_PopEvent_mCE0C136F327B5FC3822743208222799F7301170B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_PopEvent_mCE0C136F327B5FC3822743208222799F7301170B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	bool icallRetVal = _il2cpp_icall_func(___outEvent0);
	return icallRetVal;
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_SetNativeEvent_m0DCD895BCC98D00EFBB7AA5EE27829BFAB6A611F (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*Event_Internal_SetNativeEvent_m0DCD895BCC98D00EFBB7AA5EE27829BFAB6A611F_ftn) (intptr_t);
	static Event_Internal_SetNativeEvent_m0DCD895BCC98D00EFBB7AA5EE27829BFAB6A611F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_m0DCD895BCC98D00EFBB7AA5EE27829BFAB6A611F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_MakeMasterEventCurrent_m5719647ABFCB402AAC5E269BA2C4BB68C235CCD0 (int32_t ___displayIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0 = ((Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields*)il2cpp_codegen_static_fields_for(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		V_0 = (bool)((((RuntimeObject*)(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___displayIndex0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_3 = (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *)il2cpp_codegen_object_new(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var);
		Event__ctor_m60B56A595ED8C49C9E37F2B16740122D3FC1703E(L_3, L_2, /*hidden argument*/NULL);
		((Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields*)il2cpp_codegen_static_fields_for(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var))->set_s_MasterEvent_2(L_3);
	}

IL_0018:
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_4 = ((Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields*)il2cpp_codegen_static_fields_for(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		int32_t L_5 = ___displayIndex0;
		NullCheck(L_4);
		Event_set_displayIndex_mECFA15B9D33DF3F81E3567BFBED691B1691C8AA9(L_4, L_5, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_6 = ((Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields*)il2cpp_codegen_static_fields_for(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		((Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields*)il2cpp_codegen_static_fields_for(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var))->set_s_Current_1(L_6);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_7 = ((Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields*)il2cpp_codegen_static_fields_for(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var))->get_s_MasterEvent_2();
		NullCheck(L_7);
		intptr_t L_8 = L_7->get_m_Ptr_0();
		Event_Internal_SetNativeEvent_m0DCD895BCC98D00EFBB7AA5EE27829BFAB6A611F((intptr_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m0971FA11B481976C1F56306C7BBA7157FF236532 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0;
		L_0 = Event_Internal_Create_mADC5E58798E23BFC1F85483D4C79FCABB1161EF8(0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.Event::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m60B56A595ED8C49C9E37F2B16740122D3FC1703E (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, int32_t ___displayIndex0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___displayIndex0;
		intptr_t L_1;
		L_1 = Event_Internal_Create_mADC5E58798E23BFC1F85483D4C79FCABB1161EF8(L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
// System.Void UnityEngine.Event::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Finalize_m9B826C0792DF9BBE2C66BC4D104210EB7A75CEA2 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Ptr_0();
			bool L_1;
			L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			V_0 = L_1;
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_002f;
			}
		}

IL_0016:
		{
			intptr_t L_3 = __this->get_m_Ptr_0();
			Event_Internal_Destroy_mDB808A17F13FA016D82D538209DA74DD1D9879DE((intptr_t)L_3, /*hidden argument*/NULL);
			__this->set_m_Ptr_0((intptr_t)(0));
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x39, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		return;
	}
}
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * V_0 = NULL;
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0 = ((Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields*)il2cpp_codegen_static_fields_for(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var))->get_s_Current_1();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Event::get_isKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isKey_m0F19E1B83F29BF05B0AD1B6F981447CE2A815910 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isMouse_m73E2EDD4336CF7D573889EAAE961214BE150C979 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0;
		L_0 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)20))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B8_0 = ((((int32_t)L_7) == ((int32_t)((int32_t)21)))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B8_0 = 1;
	}

IL_0029:
	{
		V_1 = (bool)G_B8_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_GetHashCode_m08E32B939045F071D60D99D372DDBBB7531134AF (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		V_0 = 1;
		bool L_0;
		L_0 = Event_get_isKey_m0F19E1B83F29BF05B0AD1B6F981447CE2A815910(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2;
		L_2 = Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((uint16_t)L_2));
	}

IL_0015:
	{
		bool L_3;
		L_3 = Event_get_isMouse_m73E2EDD4336CF7D573889EAAE961214BE150C979(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9(__this, /*hidden argument*/NULL);
		V_3 = L_5;
		int32_t L_6;
		L_6 = Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0034:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)37)))|(int32_t)L_8));
		int32_t L_9 = V_0;
		V_4 = L_9;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_10 = V_4;
		return L_10;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_Equals_mD9883C935EDB9EC7EFF96FCB3FDC9D0568EDFE4F (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B9_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_0010:
	{
		RuntimeObject * L_2 = ___obj0;
		V_3 = (bool)((((RuntimeObject*)(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *)__this) == ((RuntimeObject*)(RuntimeObject *)L_2))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_00b4;
	}

IL_001f:
	{
		RuntimeObject * L_4 = ___obj0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		Type_t * L_6;
		L_6 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_003a:
	{
		RuntimeObject * L_8 = ___obj0;
		V_0 = ((Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *)CastclassSealed((RuntimeObject*)L_8, Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_il2cpp_TypeInfo_var));
		int32_t L_9;
		L_9 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(__this, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_10, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12;
		L_12 = Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886(__this, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886(L_13, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)-33)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B9_0 = 1;
	}

IL_0069:
	{
		V_5 = (bool)G_B9_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_0073:
	{
		bool L_16;
		L_16 = Event_get_isKey_m0F19E1B83F29BF05B0AD1B6F981447CE2A815910(__this, /*hidden argument*/NULL);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_18;
		L_18 = Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E(__this, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E(L_19, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_18) == ((int32_t)L_20))? 1 : 0);
		goto IL_00b4;
	}

IL_0090:
	{
		bool L_21;
		L_21 = Event_get_isMouse_m73E2EDD4336CF7D573889EAAE961214BE150C979(__this, /*hidden argument*/NULL);
		V_7 = L_21;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00b0;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9(__this, /*hidden argument*/NULL);
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_24 = V_0;
		NullCheck(L_24);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_23, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		goto IL_00b4;
	}

IL_00b0:
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_00b4:
	{
		bool L_27 = V_2;
		return L_27;
	}
}
// System.String UnityEngine.Event::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_ToString_m3C80218472D8EA8A707235F320D2264B97FBBBAC (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9E6C82A5143ED08E63E500C0978BF5985C84CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E8B350C9F6A421FA80C169857D1523CD21C39B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5220DD5A418252356A406067BC43EC0FB773A172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DACFD2D2C00202C188DA9BBF7B7FDC9BB27DE15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B9_0 = 0;
	String_t* G_B13_0 = NULL;
	String_t* G_B12_0 = NULL;
	{
		bool L_0;
		L_0 = Event_get_isKey_m0F19E1B83F29BF05B0AD1B6F981447CE2A815910(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		Il2CppChar L_2;
		L_2 = Event_get_character_mFDB32862186913735A8EC1B44F2455EC67C8403E(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int32_t L_6;
		L_6 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int32_t L_10;
		L_10 = Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		int32_t L_14;
		L_14 = Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_16);
		String_t* L_17;
		L_17 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteral4E8B350C9F6A421FA80C169857D1523CD21C39B5, L_13, /*hidden argument*/NULL);
		V_2 = L_17;
		goto IL_0196;
	}

IL_005c:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		int32_t L_21;
		L_21 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(__this, /*hidden argument*/NULL);
		V_3 = L_21;
		RuntimeObject * L_22 = Box(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		V_3 = *(int32_t*)UnBox(L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_23);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		Il2CppChar L_26;
		L_26 = Event_get_character_mFDB32862186913735A8EC1B44F2455EC67C8403E(__this, /*hidden argument*/NULL);
		V_4 = L_26;
		String_t* L_27;
		L_27 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_25;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral5220DD5A418252356A406067BC43EC0FB773A172);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5220DD5A418252356A406067BC43EC0FB773A172);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		int32_t L_30;
		L_30 = Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886(__this, /*hidden argument*/NULL);
		V_5 = L_30;
		RuntimeObject * L_31 = Box(EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA_il2cpp_TypeInfo_var, (&V_5));
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		V_5 = *(int32_t*)UnBox(L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_32);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		int32_t L_35;
		L_35 = Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E(__this, /*hidden argument*/NULL);
		V_6 = L_35;
		RuntimeObject * L_36 = Box(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var, (&V_6));
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		V_6 = *(int32_t*)UnBox(L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_37);
		String_t* L_38;
		L_38 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_34, /*hidden argument*/NULL);
		V_2 = L_38;
		goto IL_0196;
	}

IL_00e6:
	{
		bool L_39;
		L_39 = Event_get_isMouse_m73E2EDD4336CF7D573889EAAE961214BE150C979(__this, /*hidden argument*/NULL);
		V_7 = L_39;
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_012f;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_41;
		int32_t L_43;
		L_43 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(__this, /*hidden argument*/NULL);
		int32_t L_44 = L_43;
		RuntimeObject * L_45 = Box(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_45);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46 = L_42;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48 = L_47;
		RuntimeObject * L_49 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_49);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_50 = L_46;
		int32_t L_51;
		L_51 = Event_get_modifiers_m01356D3F1DDF6746122F129713EBE87BFA65D886(__this, /*hidden argument*/NULL);
		int32_t L_52 = L_51;
		RuntimeObject * L_53 = Box(EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_53);
		String_t* L_54;
		L_54 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteral5DACFD2D2C00202C188DA9BBF7B7FDC9BB27DE15, L_50, /*hidden argument*/NULL);
		V_2 = L_54;
		goto IL_0196;
	}

IL_012f:
	{
		int32_t L_55;
		L_55 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_55) == ((int32_t)((int32_t)14))))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_56;
		L_56 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(__this, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)L_56) == ((int32_t)((int32_t)13)))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B9_0 = 1;
	}

IL_0146:
	{
		V_8 = (bool)G_B9_0;
		bool L_57 = V_8;
		if (!L_57)
		{
			goto IL_0176;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_58 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_59 = L_58;
		int32_t L_60;
		L_60 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(__this, /*hidden argument*/NULL);
		int32_t L_61 = L_60;
		RuntimeObject * L_62 = Box(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_il2cpp_TypeInfo_var, &L_61);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_62);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_63 = L_59;
		String_t* L_64;
		L_64 = Event_get_commandName_m5D0763551DDA469ACDBE3477D2210712F9B8B26D(__this, /*hidden argument*/NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_64);
		String_t* L_65;
		L_65 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteral0A9E6C82A5143ED08E63E500C0978BF5985C84CA, L_63, /*hidden argument*/NULL);
		V_2 = L_65;
		goto IL_0196;
	}

IL_0176:
	{
		int32_t L_66;
		L_66 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(__this, /*hidden argument*/NULL);
		V_3 = L_66;
		RuntimeObject * L_67 = Box(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_67);
		V_3 = *(int32_t*)UnBox(L_67);
		String_t* L_69 = L_68;
		G_B12_0 = L_69;
		if (L_69)
		{
			G_B13_0 = L_69;
			goto IL_0193;
		}
	}
	{
		G_B13_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0193:
	{
		V_2 = G_B13_0;
		goto IL_0196;
	}

IL_0196:
	{
		String_t* L_70 = V_2;
		return L_70;
	}
}
// System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_get_mousePosition_Injected_m2BAF28C88428EC08319483AE5F72A8A06E322458 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Event_get_mousePosition_Injected_m2BAF28C88428EC08319483AE5F72A8A06E322458_ftn) (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *);
	static Event_get_mousePosition_Injected_m2BAF28C88428EC08319483AE5F72A8A06E322458_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_mousePosition_Injected_m2BAF28C88428EC08319483AE5F72A8A06E322458_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_changed_m7DBA5D0D2493D33D86E59D55942CE4FA56451DAC (bool ___value0, const RuntimeMethod* method)
{
	typedef void (*GUI_set_changed_m7DBA5D0D2493D33D86E59D55942CE4FA56451DAC_ftn) (bool);
	static GUI_set_changed_m7DBA5D0D2493D33D86E59D55942CE4FA56451DAC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_changed_m7DBA5D0D2493D33D86E59D55942CE4FA56451DAC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.GUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI__cctor_m524C2B0E73115204913DA4C068DF5B537BA66359 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_s_HotTextField_0((-1));
		NullCheck(_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_s_BoxHash_1(L_0);
		NullCheck(_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_s_ButonHash_2(L_1);
		NullCheck(_stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_s_RepeatButtonHash_3(L_2);
		NullCheck(_stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_s_ToggleHash_4(L_3);
		NullCheck(_stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_s_ButtonGridHash_5(L_4);
		NullCheck(_stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_s_SliderHash_6(L_5);
		NullCheck(_stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_s_BeginGroupHash_7(L_6);
		NullCheck(_stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_s_ScrollviewHash_8(L_7);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_8 = (GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C *)il2cpp_codegen_object_new(GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_il2cpp_TypeInfo_var);
		GenericStack__ctor_m42B668E8F293EE21F529A2679AA110C0877605DD(L_8, /*hidden argument*/NULL);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_U3CscrollViewStatesU3Ek__BackingField_11(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_9;
		L_9 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		GUI_set_nextScrollStepTime_m3CF6DBBA4BE79B582AE4245AC02DED002C31E1DD_inline(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_m3CF6DBBA4BE79B582AE4245AC02DED002C31E1DD (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_U3CnextScrollStepTimeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIUtility_CheckOnGUI_mA591FC883697B53B61EC6B5B4469262BA6936FA7(/*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DoSetSkin_mEB9C1242DC36F20472409A016DEF8E2A8103BDA4(L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * V_0 = NULL;
	{
		GUIUtility_CheckOnGUI_mA591FC883697B53B61EC6B5B4469262BA6936FA7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0 = ((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->get_s_Skin_10();
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DoSetSkin_mEB9C1242DC36F20472409A016DEF8E2A8103BDA4 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___newSkin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0 = ___newSkin0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_3;
		L_3 = GUIUtility_GetDefaultSkin_m4CF951846AD574F548739127FB7569BB7E3593A4(/*hidden argument*/NULL);
		___newSkin0 = L_3;
	}

IL_0015:
	{
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_4 = ___newSkin0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_s_Skin_10(L_4);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_5 = ___newSkin0;
		NullCheck(L_5);
		GUISkin_MakeCurrent_mB668146FC9D42C40D6555936A1C88831014356E2(L_5, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngineInternal.GenericStack UnityEngine.GUI::get_scrollViewStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * GUI_get_scrollViewStates_mC0FF9F20045EB96D22254543B8C9A0643D54C4D4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_0 = ((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->get_U3CscrollViewStatesU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_CallWindowDelegate_m06B357445D7356475C200AFC92ECA07AA59D1FBB (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * ___func0, int32_t ___id1, int32_t ___instanceID2, GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ____skin3, int32_t ___forceRect4, float ___width5, float ___height6, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* V_3 = NULL;
	bool V_4 = false;
	{
		int32_t L_0 = ___id1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_1;
		L_1 = GUILayoutUtility_SelectIDList_mBB4E4C5EE476C431E3105D76F13CEA683E7021CB(L_0, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_2;
		L_2 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		V_0 = L_2;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_3;
		L_3 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_3, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)8))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_6 = ___forceRect4;
		V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_8 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_9 = L_8;
		float L_10 = ___width5;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_11;
		L_11 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_11);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_12 = L_9;
		float L_13 = ___height6;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_14;
		L_14 = GUILayout_Height_m6705C2917595CCEA6D934DBB5DD8399DF6F5E464(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_14);
		V_3 = L_12;
		int32_t L_15 = ___id1;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_16 = ___style7;
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m1C75E01076E5777F316AD33291C7B9A37ABB32EA(L_15, L_16, L_17, /*hidden argument*/NULL);
		goto IL_005f;
	}

IL_0053:
	{
		int32_t L_18 = ___id1;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_19 = ___style7;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m1C75E01076E5777F316AD33291C7B9A37ABB32EA(L_18, L_19, (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)NULL, /*hidden argument*/NULL);
	}

IL_005f:
	{
		goto IL_0071;
	}

IL_0062:
	{
		int32_t L_20 = ___id1;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_21;
		L_21 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m1C75E01076E5777F316AD33291C7B9A37ABB32EA(L_20, L_21, (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)NULL, /*hidden argument*/NULL);
	}

IL_0071:
	{
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_22 = ____skin3;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E(L_22, /*hidden argument*/NULL);
		WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * L_23 = ___func0;
		if (L_23)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0085;
	}

IL_007d:
	{
		WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * L_24 = ___func0;
		int32_t L_25 = ___id1;
		NullCheck(L_24);
		WindowFunction_Invoke_mF7D36482F583383AF583ED812A4E2487C06C3748(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0085:
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_26;
		L_26 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_26, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_27) == ((int32_t)8))? 1 : 0);
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		GUILayoutUtility_Layout_mE876F10FD153DE2038066B29DBC444E4B5A3F88B(/*hidden argument*/NULL);
	}

IL_00a0:
	{
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E(L_29, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke(const GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E& unmarshaled, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_back(const GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke& marshaled, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E& unmarshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_cleanup(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_com(const GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E& unmarshaled, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com& marshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_com_back(const GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com& marshaled, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E& unmarshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_com_cleanup(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIContent::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_Text_0(L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::set_image(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_image_mED32F759E202E1B0717D1BF0899971CF4DC400E2 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method)
{
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___value0;
		__this->set_m_Image_1(L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::set_tooltip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_tooltip_mBAC5101EBC26E738DCBD2D9503E9B8E6BECA6732 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_Tooltip_2(L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Text_0(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Tooltip_2(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		GUIContent__ctor_m0C79169A2B4D160D3EB31D70F813ED6D2703BBB9(__this, L_0, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String,UnityEngine.Texture,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m0C79169A2B4D160D3EB31D70F813ED6D2703BBB9 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___text0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, String_t* ___tooltip2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Text_0(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Tooltip_2(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___text0;
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(__this, L_2, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3 = ___image1;
		GUIContent_set_image_mED32F759E202E1B0717D1BF0899971CF4DC400E2(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___tooltip2;
		GUIContent_set_tooltip_mBAC5101EBC26E738DCBD2D9503E9B8E6BECA6732(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::ClearStaticCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_ClearStaticCache_mD4647E7AF90A71B211AF157C9DDF12D25A0059A2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_0 = ((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var))->get_s_Text_3();
		NullCheck(L_0);
		L_0->set_m_Text_0((String_t*)NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_1 = ((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var))->get_s_Text_3();
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_1);
		L_1->set_m_Tooltip_2(L_2);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_3 = ((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var))->get_s_Image_4();
		NullCheck(L_3);
		L_3->set_m_Image_1((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_4 = ((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var))->get_s_Image_4();
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_4);
		L_4->set_m_Tooltip_2(L_5);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_6 = ((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var))->get_s_TextImage_5();
		NullCheck(L_6);
		L_6->set_m_Text_0((String_t*)NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_7 = ((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var))->get_s_TextImage_5();
		NullCheck(L_7);
		L_7->set_m_Image_1((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__cctor_m3FB9CD7704F7A4E8D124FC95085BE945C2A642E8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_0 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42(L_0, /*hidden argument*/NULL);
		((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var))->set_s_Text_3(L_0);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_1 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42(L_1, /*hidden argument*/NULL);
		((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var))->set_s_Image_4(L_1);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_2 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42(L_2, /*hidden argument*/NULL);
		((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var))->set_s_TextImage_5(L_2);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_3 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var))->set_none_6(L_3);
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
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53 (float ___width0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * V_0 = NULL;
	{
		float L_0 = ___width0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_3 = (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)il2cpp_codegen_object_new(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m86D3D4B8A398111D2D0699DF13329F847F4AF79E(L_3, 0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_Height_m6705C2917595CCEA6D934DBB5DD8399DF6F5E464 (float ___height0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * V_0 = NULL;
	{
		float L_0 = ___height0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_3 = (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)il2cpp_codegen_object_new(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m86D3D4B8A398111D2D0699DF13329F847F4AF79E(L_3, 1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_4 = V_0;
		return L_4;
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
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_Style_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_mD86F71263ED679EBA0B5E5415F1B8FB8C7509DA0 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_Style_8(L_0);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = ___value0;
		VirtActionInvoker1< GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * >::Invoke(12 /* System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle) */, __this, L_1);
		return;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginLeft_m0FBCC81D797CE874B05F1AD26FB607FBA178126E (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0;
		L_0 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_1;
		L_1 = GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginRight_m4961D277EAE01801593E21CA79CC5765A96463A0 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0;
		L_0 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_1;
		L_1 = GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginTop_mEB6DD4C9806CA80BB24CA2155D8D09F385279A36 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0;
		L_0 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_1;
		L_1 = GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginBottom_mAAC307912CF29C6F4315CF004518F2619A977107 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0;
		L_0 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_1;
		L_1 = GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_bottom_mDDEBF1389FC1B8DCD9FC15DF91E51D264925C00D(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginHorizontal_mF9C781CECF148DD117AF1ED5848E56AD64199E6C (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, __this);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, __this);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginVertical_m2DC4DCD8760C40BA8396567A930FE58923472819 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, __this);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, __this);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_m29C33DB9A9A93ECD86533A72B2822E34E8415640 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, float ____minWidth0, float ____maxWidth1, float ____minHeight2, float ____maxHeight3, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ____style4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_rect_4(L_0);
		__this->set_consideredForMargin_7((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1;
		L_1 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		__this->set_m_Style_8(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		float L_2 = ____minWidth0;
		__this->set_minWidth_0(L_2);
		float L_3 = ____maxWidth1;
		__this->set_maxWidth_1(L_3);
		float L_4 = ____minHeight2;
		__this->set_minHeight_2(L_4);
		float L_5 = ____maxHeight3;
		__this->set_maxHeight_3(L_5);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = ____style4;
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_8;
		L_8 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		____style4 = L_8;
	}

IL_0066:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_9 = ____style4;
		GUILayoutEntry_set_style_mD86F71263ED679EBA0B5E5415F1B8FB8C7509DA0(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_CalcWidth_m213DF3D899EE0013994AC2915492341700778663 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_CalcHeight_mD4416290780D3EF1537BCD6F7E2D376348C863EB (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetHorizontal_mAE5AD2CF919D6694A82B7AAB27967AF097928FD2 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, float ___x0, float ___width1, const RuntimeMethod* method)
{
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_0 = __this->get_address_of_rect_4();
		float L_1 = ___x0;
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_0, L_1, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_2 = __this->get_address_of_rect_4();
		float L_3 = ___width1;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetVertical_mF68B8311A53ABBAFCD8675137563F0AF64979952 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, float ___y0, float ___height1, const RuntimeMethod* method)
{
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_0 = __this->get_address_of_rect_4();
		float L_1 = ___y0;
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_0, L_1, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_2 = __this->get_address_of_rect_4();
		float L_3 = ___height1;
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyStyleSettings_m422867BA96DFE0C65759764FC926162846BC6644 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style0, const RuntimeMethod* method)
{
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * G_B2_0 = NULL;
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * G_B1_0 = NULL;
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * G_B4_1 = NULL;
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * G_B6_0 = NULL;
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * G_B5_0 = NULL;
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * G_B7_0 = NULL;
	int32_t G_B8_0 = 0;
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * G_B8_1 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___style0;
		NullCheck(L_0);
		float L_1;
		L_1 = GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = ___style0;
		NullCheck(L_2);
		bool L_3;
		L_3 = GUIStyle_get_stretchWidth_m171F3A526E7FD0EB2FEF742F2BE125A72808A837(L_2, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}

IL_0017:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001b:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_stretchWidth_5(G_B4_0);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = ___style0;
		NullCheck(L_4);
		float L_5;
		L_5 = GUIStyle_get_fixedHeight_mE1D2038EB276EEC0FC42A0F08C782569EE2DE865(L_4, /*hidden argument*/NULL);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B6_0 = __this;
			goto IL_0036;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = ___style0;
		NullCheck(L_6);
		bool L_7;
		L_7 = GUIStyle_get_stretchHeight_mB249B43773569736BF1D1014F890484B17A96BE4(L_6, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_0039;
		}
	}

IL_0036:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_003a;
	}

IL_0039:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003a:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_stretchHeight_6(G_B8_0);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_8 = ___style0;
		__this->set_m_Style_8(L_8);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyOptions_m7AE5DA87B129DC9747284F29498BD24C6CD86537 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* V_1 = NULL;
	int32_t V_2 = 0;
	GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	{
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_0 = ___options0;
		V_0 = (bool)((((RuntimeObject*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0219;
	}

IL_000e:
	{
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_2 = ___options0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_01b0;
	}

IL_0018:
	{
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_7 = V_3;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_type_0();
		V_5 = L_8;
		int32_t L_9 = V_5;
		V_4 = L_9;
		int32_t L_10 = V_4;
		switch (L_10)
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_007d;
			}
			case 2:
			{
				goto IL_00a5;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_0118;
			}
			case 5:
			{
				goto IL_014b;
			}
			case 6:
			{
				goto IL_0185;
			}
			case 7:
			{
				goto IL_0198;
			}
		}
	}
	{
		goto IL_01ab;
	}

IL_0055:
	{
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_11 = V_3;
		NullCheck(L_11);
		RuntimeObject * L_12 = L_11->get_value_1();
		float L_13 = ((*(float*)((float*)UnBox(L_12, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		V_6 = L_13;
		__this->set_maxWidth_1(L_13);
		float L_14 = V_6;
		__this->set_minWidth_0(L_14);
		__this->set_stretchWidth_5(0);
		goto IL_01ab;
	}

IL_007d:
	{
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_15 = V_3;
		NullCheck(L_15);
		RuntimeObject * L_16 = L_15->get_value_1();
		float L_17 = ((*(float*)((float*)UnBox(L_16, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		V_6 = L_17;
		__this->set_maxHeight_3(L_17);
		float L_18 = V_6;
		__this->set_minHeight_2(L_18);
		__this->set_stretchHeight_6(0);
		goto IL_01ab;
	}

IL_00a5:
	{
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_19 = V_3;
		NullCheck(L_19);
		RuntimeObject * L_20 = L_19->get_value_1();
		__this->set_minWidth_0(((*(float*)((float*)UnBox(L_20, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))));
		float L_21 = __this->get_maxWidth_1();
		float L_22 = __this->get_minWidth_0();
		V_7 = (bool)((((float)L_21) < ((float)L_22))? 1 : 0);
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00d6;
		}
	}
	{
		float L_24 = __this->get_minWidth_0();
		__this->set_maxWidth_1(L_24);
	}

IL_00d6:
	{
		goto IL_01ab;
	}

IL_00db:
	{
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_25 = V_3;
		NullCheck(L_25);
		RuntimeObject * L_26 = L_25->get_value_1();
		__this->set_maxWidth_1(((*(float*)((float*)UnBox(L_26, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))));
		float L_27 = __this->get_minWidth_0();
		float L_28 = __this->get_maxWidth_1();
		V_8 = (bool)((((float)L_27) > ((float)L_28))? 1 : 0);
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_010c;
		}
	}
	{
		float L_30 = __this->get_maxWidth_1();
		__this->set_minWidth_0(L_30);
	}

IL_010c:
	{
		__this->set_stretchWidth_5(0);
		goto IL_01ab;
	}

IL_0118:
	{
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_31 = V_3;
		NullCheck(L_31);
		RuntimeObject * L_32 = L_31->get_value_1();
		__this->set_minHeight_2(((*(float*)((float*)UnBox(L_32, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))));
		float L_33 = __this->get_maxHeight_3();
		float L_34 = __this->get_minHeight_2();
		V_9 = (bool)((((float)L_33) < ((float)L_34))? 1 : 0);
		bool L_35 = V_9;
		if (!L_35)
		{
			goto IL_0149;
		}
	}
	{
		float L_36 = __this->get_minHeight_2();
		__this->set_maxHeight_3(L_36);
	}

IL_0149:
	{
		goto IL_01ab;
	}

IL_014b:
	{
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_37 = V_3;
		NullCheck(L_37);
		RuntimeObject * L_38 = L_37->get_value_1();
		__this->set_maxHeight_3(((*(float*)((float*)UnBox(L_38, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))));
		float L_39 = __this->get_minHeight_2();
		float L_40 = __this->get_maxHeight_3();
		V_10 = (bool)((((float)L_39) > ((float)L_40))? 1 : 0);
		bool L_41 = V_10;
		if (!L_41)
		{
			goto IL_017c;
		}
	}
	{
		float L_42 = __this->get_maxHeight_3();
		__this->set_minHeight_2(L_42);
	}

IL_017c:
	{
		__this->set_stretchHeight_6(0);
		goto IL_01ab;
	}

IL_0185:
	{
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_43 = V_3;
		NullCheck(L_43);
		RuntimeObject * L_44 = L_43->get_value_1();
		__this->set_stretchWidth_5(((*(int32_t*)((int32_t*)UnBox(L_44, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		goto IL_01ab;
	}

IL_0198:
	{
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_45 = V_3;
		NullCheck(L_45);
		RuntimeObject * L_46 = L_45->get_value_1();
		__this->set_stretchHeight_6(((*(int32_t*)((int32_t*)UnBox(L_46, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		goto IL_01ab;
	}

IL_01ab:
	{
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_01b0:
	{
		int32_t L_48 = V_2;
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_49 = V_1;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length))))))
		{
			goto IL_0018;
		}
	}
	{
		float L_50 = __this->get_maxWidth_1();
		if ((((float)L_50) == ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_51 = __this->get_maxWidth_1();
		float L_52 = __this->get_minWidth_0();
		G_B26_0 = ((((float)L_51) < ((float)L_52))? 1 : 0);
		goto IL_01d7;
	}

IL_01d6:
	{
		G_B26_0 = 0;
	}

IL_01d7:
	{
		V_11 = (bool)G_B26_0;
		bool L_53 = V_11;
		if (!L_53)
		{
			goto IL_01e9;
		}
	}
	{
		float L_54 = __this->get_minWidth_0();
		__this->set_maxWidth_1(L_54);
	}

IL_01e9:
	{
		float L_55 = __this->get_maxHeight_3();
		if ((((float)L_55) == ((float)(0.0f))))
		{
			goto IL_0206;
		}
	}
	{
		float L_56 = __this->get_maxHeight_3();
		float L_57 = __this->get_minHeight_2();
		G_B31_0 = ((((float)L_56) < ((float)L_57))? 1 : 0);
		goto IL_0207;
	}

IL_0206:
	{
		G_B31_0 = 0;
	}

IL_0207:
	{
		V_12 = (bool)G_B31_0;
		bool L_58 = V_12;
		if (!L_58)
		{
			goto IL_0219;
		}
	}
	{
		float L_59 = __this->get_minHeight_2();
		__this->set_maxHeight_3(L_59);
	}

IL_0219:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutEntry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayoutEntry_ToString_m605E966C2D198919A52D5EF14B1BD48F91E8762F (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B5_4 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_5 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_6 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	int32_t G_B4_4 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_5 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_6 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	int32_t G_B6_5 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_6 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_7 = NULL;
	int32_t G_B8_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	int32_t G_B11_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	int32_t G_B10_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = 0;
		goto IL_001b;
	}

IL_000b:
	{
		String_t* L_0 = V_0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_001b:
	{
		int32_t L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var))->get_indent_10();
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_000b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_10;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_12;
		L_12 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		G_B4_0 = 0;
		G_B4_1 = L_11;
		G_B4_2 = L_11;
		G_B4_3 = _stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4;
		G_B4_4 = 1;
		G_B4_5 = L_9;
		G_B4_6 = L_9;
		if (L_12)
		{
			G_B5_0 = 0;
			G_B5_1 = L_11;
			G_B5_2 = L_11;
			G_B5_3 = _stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4;
			G_B5_4 = 1;
			G_B5_5 = L_9;
			G_B5_6 = L_9;
			goto IL_0050;
		}
	}
	{
		G_B6_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_005b;
	}

IL_0050:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_13;
		L_13 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GUIStyle_get_name_mDC1371698EB6B92D459AA165EFFE5983711C4BB6(L_13, /*hidden argument*/NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_005b:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = G_B6_3;
		Type_t * L_16;
		L_16 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_15;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_18 = __this->get_address_of_rect_4();
		float L_19;
		L_19 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_18, /*hidden argument*/NULL);
		float L_20 = L_19;
		RuntimeObject * L_21 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_17;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_23 = __this->get_address_of_rect_4();
		float L_24;
		L_24 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_23, /*hidden argument*/NULL);
		float L_25 = L_24;
		RuntimeObject * L_26 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = L_22;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_28 = __this->get_address_of_rect_4();
		float L_29;
		L_29 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_28, /*hidden argument*/NULL);
		float L_30 = L_29;
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_31);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = L_27;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_33 = __this->get_address_of_rect_4();
		float L_34;
		L_34 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_33, /*hidden argument*/NULL);
		float L_35 = L_34;
		RuntimeObject * L_36 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_36);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_36);
		String_t* L_37;
		L_37 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(G_B6_4, L_32, /*hidden argument*/NULL);
		NullCheck(G_B6_6);
		ArrayElementTypeCheck (G_B6_6, L_37);
		(G_B6_6)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_5), (String_t*)L_37);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = G_B6_7;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_38;
		float* L_40 = __this->get_address_of_minWidth_0();
		String_t* L_41;
		L_41 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_41);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_39;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_42;
		float* L_44 = __this->get_address_of_maxWidth_1();
		String_t* L_45;
		L_45 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_45);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_43;
		int32_t L_47 = __this->get_stretchWidth_5();
		G_B7_0 = 6;
		G_B7_1 = L_46;
		G_B7_2 = L_46;
		if (L_47)
		{
			G_B8_0 = 6;
			G_B8_1 = L_46;
			G_B8_2 = L_46;
			goto IL_00f4;
		}
	}
	{
		G_B9_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_00f9;
	}

IL_00f4:
	{
		G_B9_0 = _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_00f9:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = G_B9_3;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_48;
		float* L_50 = __this->get_address_of_minHeight_2();
		String_t* L_51;
		L_51 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_51);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_51);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = L_49;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = L_52;
		float* L_54 = __this->get_address_of_maxHeight_3();
		String_t* L_55;
		L_55 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_54, /*hidden argument*/NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_55);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_55);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_53;
		int32_t L_57 = __this->get_stretchHeight_6();
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_56;
		G_B10_2 = L_56;
		if (L_57)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_56;
			G_B11_2 = L_56;
			goto IL_013a;
		}
	}
	{
		G_B12_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_013f;
	}

IL_013a:
	{
		G_B12_0 = _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_013f:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		String_t* L_58;
		L_58 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B12_3, /*hidden argument*/NULL);
		V_3 = L_58;
		goto IL_0148;
	}

IL_0148:
	{
		String_t* L_59 = V_3;
		return L_59;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry__cctor_m6F7F9D8D468D5785F9A8576FA319650ECB89442B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var))->set_kDummyRect_9(L_0);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var))->set_indent_10(0);
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
// System.Int32 UnityEngine.GUILayoutGroup::get_marginLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginLeft_m4F4E389AB5B79F632E36428883E3360E2CB59B93 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_MarginLeft_27();
		return L_0;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginRight_mEC182F3324C3FA1E6DEB1D3B097F4E08CA32701C (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_MarginRight_28();
		return L_0;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginTop_m94E947C2612FA0A51D949747F6068359FF6AB0E4 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_MarginTop_29();
		return L_0;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginBottom_mA8069A4D388A8EAE2B54AA51FA80E1CA0A483346 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_MarginBottom_30();
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m27E8FFD81DA48070A0476471416266C19300D505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_0 = (List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA *)il2cpp_codegen_object_new(List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA_il2cpp_TypeInfo_var);
		List_1__ctor_m27E8FFD81DA48070A0476471416266C19300D505(L_0, /*hidden argument*/List_1__ctor_m27E8FFD81DA48070A0476471416266C19300D505_RuntimeMethod_var);
		__this->set_entries_11(L_0);
		__this->set_isVertical_12((bool)1);
		__this->set_resetCoords_13((bool)0);
		__this->set_spacing_14((0.0f));
		__this->set_sameSize_15((bool)1);
		__this->set_isWindow_16((bool)0);
		__this->set_windowID_17((-1));
		__this->set_m_Cursor_18(0);
		__this->set_m_StretchableCountX_19(((int32_t)100));
		__this->set_m_StretchableCountY_20(((int32_t)100));
		__this->set_m_UserSpecifiedWidth_21((bool)0);
		__this->set_m_UserSpecifiedHeight_22((bool)0);
		__this->set_m_ChildMinWidth_23((100.0f));
		__this->set_m_ChildMaxWidth_24((100.0f));
		__this->set_m_ChildMinHeight_25((100.0f));
		__this->set_m_ChildMaxHeight_26((100.0f));
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1;
		L_1 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m29C33DB9A9A93ECD86533A72B2822E34E8415640(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ApplyOptions_m5E273DF04F867EE533781DFE46B35862363AE21A (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* V_1 = NULL;
	int32_t V_2 = 0;
	GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_0 = ___options0;
		V_0 = (bool)((((RuntimeObject*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0085;
	}

IL_000b:
	{
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_2 = ___options0;
		GUILayoutEntry_ApplyOptions_m7AE5DA87B129DC9747284F29498BD24C6CD86537(__this, L_2, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_3 = ___options0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_007f;
	}

IL_001a:
	{
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_type_0();
		V_5 = L_9;
		int32_t L_10 = V_5;
		V_4 = L_10;
		int32_t L_11 = V_4;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0054;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0054;
			}
			case 4:
			{
				goto IL_005d;
			}
			case 5:
			{
				goto IL_005d;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_004c:
	{
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)13))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_007a;
	}

IL_0054:
	{
		__this->set_m_UserSpecifiedHeight_22((bool)1);
		goto IL_007a;
	}

IL_005d:
	{
		__this->set_m_UserSpecifiedWidth_21((bool)1);
		goto IL_007a;
	}

IL_0066:
	{
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_13 = V_3;
		NullCheck(L_13);
		RuntimeObject * L_14 = L_13->get_value_1();
		__this->set_spacing_14(((float)((float)((*(int32_t*)((int32_t*)UnBox(L_14, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))));
		goto IL_007a;
	}

IL_007a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_16 = V_2;
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_001a;
		}
	}

IL_0085:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ApplyStyleSettings_mF9807616F82263737EF10D5442D2E21728D5C0EE (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style0, const RuntimeMethod* method)
{
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___style0;
		GUILayoutEntry_ApplyStyleSettings_m422867BA96DFE0C65759764FC926162846BC6644(__this, L_0, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = ___style0;
		NullCheck(L_1);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_2;
		L_2 = GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_3, /*hidden argument*/NULL);
		__this->set_m_MarginLeft_27(L_4);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6(L_5, /*hidden argument*/NULL);
		__this->set_m_MarginRight_28(L_6);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_7, /*hidden argument*/NULL);
		__this->set_m_MarginTop_29(L_8);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RectOffset_get_bottom_mDDEBF1389FC1B8DCD9FC15DF91E51D264925C00D(L_9, /*hidden argument*/NULL);
		__this->set_m_MarginBottom_30(L_10);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_m45E547A457E4853D733D875D86424B27BC613F32 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Cursor_18(0);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_m8B77B5F6053C9CBBBA9F79DBEDB58F768121503B (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_8;
	memset((&V_8), 0, sizeof(V_8));
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_13;
	memset((&V_13), 0, sizeof(V_13));
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * V_14 = NULL;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B22_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B43_1 = 0;
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * G_B43_2 = NULL;
	int32_t G_B42_0 = 0;
	int32_t G_B42_1 = 0;
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * G_B42_2 = NULL;
	int32_t G_B44_0 = 0;
	int32_t G_B44_1 = 0;
	int32_t G_B44_2 = 0;
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * G_B44_3 = NULL;
	{
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_0 = __this->get_entries_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline(L_0, /*hidden argument*/List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3;
		L_3 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_4;
		L_4 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RectOffset_get_horizontal_m7B1D97260EF95BCEDB9A7AF7AC9FAF99D56E9177(L_4, /*hidden argument*/NULL);
		float L_6 = ((float)((float)L_5));
		V_6 = L_6;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minWidth_0(L_6);
		float L_7 = V_6;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxWidth_1(L_7);
		goto IL_043a;
	}

IL_003d:
	{
		V_0 = 0;
		V_1 = 0;
		__this->set_m_ChildMinWidth_23((0.0f));
		__this->set_m_ChildMaxWidth_24((0.0f));
		__this->set_m_StretchableCountX_19(0);
		V_2 = (bool)1;
		bool L_8 = __this->get_isVertical_12();
		V_7 = L_8;
		bool L_9 = V_7;
		if (!L_9)
		{
			goto IL_0181;
		}
	}
	{
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_10 = __this->get_entries_11();
		NullCheck(L_10);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_11;
		L_11 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_10, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_8 = L_11;
	}

IL_007e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013c;
		}

IL_0083:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_12;
			L_12 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_8), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_9 = L_12;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_13 = V_9;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_13);
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_14 = V_9;
			NullCheck(L_14);
			bool L_15 = L_14->get_consideredForMargin_7();
			V_10 = L_15;
			bool L_16 = V_10;
			if (!L_16)
			{
				goto IL_0127;
			}
		}

IL_00a5:
		{
			bool L_17 = V_2;
			V_11 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
			bool L_18 = V_11;
			if (!L_18)
			{
				goto IL_00d0;
			}
		}

IL_00b0:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_19 = V_9;
			NullCheck(L_19);
			int32_t L_20;
			L_20 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_19);
			int32_t L_21 = V_0;
			int32_t L_22;
			L_22 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_20, L_21, /*hidden argument*/NULL);
			V_0 = L_22;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_23 = V_9;
			NullCheck(L_23);
			int32_t L_24;
			L_24 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_23);
			int32_t L_25 = V_1;
			int32_t L_26;
			L_26 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_24, L_25, /*hidden argument*/NULL);
			V_1 = L_26;
			goto IL_00e4;
		}

IL_00d0:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_27 = V_9;
			NullCheck(L_27);
			int32_t L_28;
			L_28 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_27);
			V_0 = L_28;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_29 = V_9;
			NullCheck(L_29);
			int32_t L_30;
			L_30 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_29);
			V_1 = L_30;
			V_2 = (bool)0;
		}

IL_00e4:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_31 = V_9;
			NullCheck(L_31);
			float L_32 = L_31->get_minWidth_0();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_33 = V_9;
			NullCheck(L_33);
			int32_t L_34;
			L_34 = GUILayoutEntry_get_marginHorizontal_mF9C781CECF148DD117AF1ED5848E56AD64199E6C(L_33, /*hidden argument*/NULL);
			float L_35 = __this->get_m_ChildMinWidth_23();
			float L_36;
			L_36 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)il2cpp_codegen_add((float)L_32, (float)((float)((float)L_34)))), L_35, /*hidden argument*/NULL);
			__this->set_m_ChildMinWidth_23(L_36);
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_37 = V_9;
			NullCheck(L_37);
			float L_38 = L_37->get_maxWidth_1();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_39 = V_9;
			NullCheck(L_39);
			int32_t L_40;
			L_40 = GUILayoutEntry_get_marginHorizontal_mF9C781CECF148DD117AF1ED5848E56AD64199E6C(L_39, /*hidden argument*/NULL);
			float L_41 = __this->get_m_ChildMaxWidth_24();
			float L_42;
			L_42 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)il2cpp_codegen_add((float)L_38, (float)((float)((float)L_40)))), L_41, /*hidden argument*/NULL);
			__this->set_m_ChildMaxWidth_24(L_42);
		}

IL_0127:
		{
			int32_t L_43 = __this->get_m_StretchableCountX_19();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_44 = V_9;
			NullCheck(L_44);
			int32_t L_45 = L_44->get_stretchWidth_5();
			__this->set_m_StretchableCountX_19(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_45)));
		}

IL_013c:
		{
			bool L_46;
			L_46 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_46)
			{
				goto IL_0083;
			}
		}

IL_0148:
		{
			IL2CPP_LEAVE(0x159, FINALLY_014a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014a;
	}

FINALLY_014a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_8), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(330)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(330)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x159, IL_0159)
	}

IL_0159:
	{
		float L_47 = __this->get_m_ChildMinWidth_23();
		int32_t L_48 = V_0;
		int32_t L_49 = V_1;
		__this->set_m_ChildMinWidth_23(((float)il2cpp_codegen_subtract((float)L_47, (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)L_49)))))));
		float L_50 = __this->get_m_ChildMaxWidth_24();
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		__this->set_m_ChildMaxWidth_24(((float)il2cpp_codegen_subtract((float)L_50, (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)L_52)))))));
		goto IL_02fa;
	}

IL_0181:
	{
		V_12 = 0;
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_53 = __this->get_entries_11();
		NullCheck(L_53);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_54;
		L_54 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_53, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_13 = L_54;
	}

IL_0193:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0283;
		}

IL_0198:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_55;
			L_55 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_13), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_14 = L_55;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_56 = V_14;
			NullCheck(L_56);
			VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_56);
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_57 = V_14;
			NullCheck(L_57);
			bool L_58 = L_57->get_consideredForMargin_7();
			V_16 = L_58;
			bool L_59 = V_16;
			if (!L_59)
			{
				goto IL_0244;
			}
		}

IL_01ba:
		{
			bool L_60 = V_2;
			V_17 = (bool)((((int32_t)L_60) == ((int32_t)0))? 1 : 0);
			bool L_61 = V_17;
			if (!L_61)
			{
				goto IL_01df;
			}
		}

IL_01c5:
		{
			int32_t L_62 = V_12;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_63 = V_14;
			NullCheck(L_63);
			int32_t L_64;
			L_64 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_63);
			if ((((int32_t)L_62) > ((int32_t)L_64)))
			{
				goto IL_01d9;
			}
		}

IL_01d0:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_65 = V_14;
			NullCheck(L_65);
			int32_t L_66;
			L_66 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_65);
			G_B22_0 = L_66;
			goto IL_01db;
		}

IL_01d9:
		{
			int32_t L_67 = V_12;
			G_B22_0 = L_67;
		}

IL_01db:
		{
			V_15 = G_B22_0;
			goto IL_01e6;
		}

IL_01df:
		{
			V_15 = 0;
			V_2 = (bool)0;
		}

IL_01e6:
		{
			float L_68 = __this->get_m_ChildMinWidth_23();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_69 = V_14;
			NullCheck(L_69);
			float L_70 = L_69->get_minWidth_0();
			float L_71 = __this->get_spacing_14();
			int32_t L_72 = V_15;
			__this->set_m_ChildMinWidth_23(((float)il2cpp_codegen_add((float)L_68, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_70, (float)L_71)), (float)((float)((float)L_72)))))));
			float L_73 = __this->get_m_ChildMaxWidth_24();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_74 = V_14;
			NullCheck(L_74);
			float L_75 = L_74->get_maxWidth_1();
			float L_76 = __this->get_spacing_14();
			int32_t L_77 = V_15;
			__this->set_m_ChildMaxWidth_24(((float)il2cpp_codegen_add((float)L_73, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_75, (float)L_76)), (float)((float)((float)L_77)))))));
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_78 = V_14;
			NullCheck(L_78);
			int32_t L_79;
			L_79 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_78);
			V_12 = L_79;
			int32_t L_80 = __this->get_m_StretchableCountX_19();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_81 = V_14;
			NullCheck(L_81);
			int32_t L_82 = L_81->get_stretchWidth_5();
			__this->set_m_StretchableCountX_19(((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)L_82)));
			goto IL_0282;
		}

IL_0244:
		{
			float L_83 = __this->get_m_ChildMinWidth_23();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_84 = V_14;
			NullCheck(L_84);
			float L_85 = L_84->get_minWidth_0();
			__this->set_m_ChildMinWidth_23(((float)il2cpp_codegen_add((float)L_83, (float)L_85)));
			float L_86 = __this->get_m_ChildMaxWidth_24();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_87 = V_14;
			NullCheck(L_87);
			float L_88 = L_87->get_maxWidth_1();
			__this->set_m_ChildMaxWidth_24(((float)il2cpp_codegen_add((float)L_86, (float)L_88)));
			int32_t L_89 = __this->get_m_StretchableCountX_19();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_90 = V_14;
			NullCheck(L_90);
			int32_t L_91 = L_90->get_stretchWidth_5();
			__this->set_m_StretchableCountX_19(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_91)));
		}

IL_0282:
		{
		}

IL_0283:
		{
			bool L_92;
			L_92 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_13), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_92)
			{
				goto IL_0198;
			}
		}

IL_028f:
		{
			IL2CPP_LEAVE(0x2A0, FINALLY_0291);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0291;
	}

FINALLY_0291:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_13), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(657)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(657)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A0, IL_02a0)
	}

IL_02a0:
	{
		float L_93 = __this->get_m_ChildMinWidth_23();
		float L_94 = __this->get_spacing_14();
		__this->set_m_ChildMinWidth_23(((float)il2cpp_codegen_subtract((float)L_93, (float)L_94)));
		float L_95 = __this->get_m_ChildMaxWidth_24();
		float L_96 = __this->get_spacing_14();
		__this->set_m_ChildMaxWidth_24(((float)il2cpp_codegen_subtract((float)L_95, (float)L_96)));
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_97 = __this->get_entries_11();
		NullCheck(L_97);
		int32_t L_98;
		L_98 = List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline(L_97, /*hidden argument*/List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		V_18 = (bool)((!(((uint32_t)L_98) <= ((uint32_t)0)))? 1 : 0);
		bool L_99 = V_18;
		if (!L_99)
		{
			goto IL_02f3;
		}
	}
	{
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_100 = __this->get_entries_11();
		NullCheck(L_100);
		GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_101;
		L_101 = List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_inline(L_100, 0, /*hidden argument*/List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_RuntimeMethod_var);
		NullCheck(L_101);
		int32_t L_102;
		L_102 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_101);
		V_0 = L_102;
		int32_t L_103 = V_12;
		V_1 = L_103;
		goto IL_02f9;
	}

IL_02f3:
	{
		int32_t L_104 = 0;
		V_1 = L_104;
		V_0 = L_104;
	}

IL_02f9:
	{
	}

IL_02fa:
	{
		V_3 = (0.0f);
		V_4 = (0.0f);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_105;
		L_105 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_106;
		L_106 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_105) == ((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_106))))
		{
			goto IL_031c;
		}
	}
	{
		bool L_107 = __this->get_m_UserSpecifiedWidth_21();
		G_B37_0 = ((int32_t)(L_107));
		goto IL_031d;
	}

IL_031c:
	{
		G_B37_0 = 1;
	}

IL_031d:
	{
		V_19 = (bool)G_B37_0;
		bool L_108 = V_19;
		if (!L_108)
		{
			goto IL_0358;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_109;
		L_109 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_109);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_110;
		L_110 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_109, /*hidden argument*/NULL);
		NullCheck(L_110);
		int32_t L_111;
		L_111 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_110, /*hidden argument*/NULL);
		int32_t L_112 = V_0;
		int32_t L_113;
		L_113 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_111, L_112, /*hidden argument*/NULL);
		V_3 = ((float)((float)L_113));
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_114;
		L_114 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_114);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_115;
		L_115 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_114, /*hidden argument*/NULL);
		NullCheck(L_115);
		int32_t L_116;
		L_116 = RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6(L_115, /*hidden argument*/NULL);
		int32_t L_117 = V_1;
		int32_t L_118;
		L_118 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_116, L_117, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_118));
		goto IL_0371;
	}

IL_0358:
	{
		int32_t L_119 = V_0;
		__this->set_m_MarginLeft_27(L_119);
		int32_t L_120 = V_1;
		__this->set_m_MarginRight_28(L_120);
		float L_121 = (0.0f);
		V_4 = L_121;
		V_3 = L_121;
	}

IL_0371:
	{
		float L_122 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minWidth_0();
		float L_123 = __this->get_m_ChildMinWidth_23();
		float L_124 = V_3;
		float L_125 = V_4;
		float L_126;
		L_126 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_122, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_123, (float)L_124)), (float)L_125)), /*hidden argument*/NULL);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minWidth_0(L_126);
		float L_127 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_maxWidth_1();
		V_20 = (bool)((((float)L_127) == ((float)(0.0f)))? 1 : 0);
		bool L_128 = V_20;
		if (!L_128)
		{
			goto IL_03da;
		}
	}
	{
		int32_t L_129 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_stretchWidth_5();
		int32_t L_130 = __this->get_m_StretchableCountX_19();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_131;
		L_131 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_131);
		bool L_132;
		L_132 = GUIStyle_get_stretchWidth_m171F3A526E7FD0EB2FEF742F2BE125A72808A837(L_131, /*hidden argument*/NULL);
		G_B42_0 = L_130;
		G_B42_1 = L_129;
		G_B42_2 = __this;
		if (L_132)
		{
			G_B43_0 = L_130;
			G_B43_1 = L_129;
			G_B43_2 = __this;
			goto IL_03be;
		}
	}
	{
		G_B44_0 = 0;
		G_B44_1 = G_B42_0;
		G_B44_2 = G_B42_1;
		G_B44_3 = G_B42_2;
		goto IL_03bf;
	}

IL_03be:
	{
		G_B44_0 = 1;
		G_B44_1 = G_B43_0;
		G_B44_2 = G_B43_1;
		G_B44_3 = G_B43_2;
	}

IL_03bf:
	{
		NullCheck(G_B44_3);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)G_B44_3)->set_stretchWidth_5(((int32_t)il2cpp_codegen_add((int32_t)G_B44_2, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B44_1, (int32_t)G_B44_0)))));
		float L_133 = __this->get_m_ChildMaxWidth_24();
		float L_134 = V_3;
		float L_135 = V_4;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxWidth_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_133, (float)L_134)), (float)L_135)));
		goto IL_03e3;
	}

IL_03da:
	{
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_stretchWidth_5(0);
	}

IL_03e3:
	{
		float L_136 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_maxWidth_1();
		float L_137 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minWidth_0();
		float L_138;
		L_138 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_136, L_137, /*hidden argument*/NULL);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxWidth_1(L_138);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_139;
		L_139 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_139);
		float L_140;
		L_140 = GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C(L_139, /*hidden argument*/NULL);
		V_21 = (bool)((((int32_t)((((float)L_140) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_141 = V_21;
		if (!L_141)
		{
			goto IL_043a;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_142;
		L_142 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_142);
		float L_143;
		L_143 = GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C(L_142, /*hidden argument*/NULL);
		float L_144 = L_143;
		V_6 = L_144;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minWidth_0(L_144);
		float L_145 = V_6;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxWidth_1(L_145);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_stretchWidth_5(0);
	}

IL_043a:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_mE763CA867BC7D8D17551FED8A999243ED3CB2A4F (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, float ___x0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_4;
	memset((&V_4), 0, sizeof(V_4));
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	bool V_9 = false;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_12;
	memset((&V_12), 0, sizeof(V_12));
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * V_13 = NULL;
	bool V_14 = false;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_27;
	memset((&V_27), 0, sizeof(V_27));
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * V_28 = NULL;
	float V_29 = 0.0f;
	bool V_30 = false;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	bool V_33 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B43_0 = 0;
	{
		float L_0 = ___x0;
		float L_1 = ___width1;
		GUILayoutEntry_SetHorizontal_mAE5AD2CF919D6694A82B7AAB27967AF097928FD2(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get_resetCoords_13();
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		___x0 = (0.0f);
	}

IL_001b:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4;
		L_4 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_5;
		L_5 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = __this->get_isVertical_12();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_01b3;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_8;
		L_8 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_9;
		L_9 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_8) == ((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00fd;
		}
	}
	{
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_11 = __this->get_entries_11();
		NullCheck(L_11);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_12;
		L_12 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_11, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_4 = L_12;
	}

IL_005b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00da;
		}

IL_005d:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_13;
			L_13 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_4), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_5 = L_13;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_14 = V_5;
			NullCheck(L_14);
			int32_t L_15;
			L_15 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_14);
			RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_16 = V_0;
			NullCheck(L_16);
			int32_t L_17;
			L_17 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_16, /*hidden argument*/NULL);
			int32_t L_18;
			L_18 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_15, L_17, /*hidden argument*/NULL);
			V_6 = ((float)((float)L_18));
			float L_19 = ___x0;
			float L_20 = V_6;
			V_7 = ((float)il2cpp_codegen_add((float)L_19, (float)L_20));
			float L_21 = ___width1;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_22 = V_5;
			NullCheck(L_22);
			int32_t L_23;
			L_23 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_22);
			RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_24 = V_0;
			NullCheck(L_24);
			int32_t L_25;
			L_25 = RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6(L_24, /*hidden argument*/NULL);
			int32_t L_26;
			L_26 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_23, L_25, /*hidden argument*/NULL);
			float L_27 = V_6;
			V_8 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_21, (float)((float)((float)L_26)))), (float)L_27));
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_28 = V_5;
			NullCheck(L_28);
			int32_t L_29 = L_28->get_stretchWidth_5();
			V_9 = (bool)((!(((uint32_t)L_29) <= ((uint32_t)0)))? 1 : 0);
			bool L_30 = V_9;
			if (!L_30)
			{
				goto IL_00ba;
			}
		}

IL_00ac:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_31 = V_5;
			float L_32 = V_7;
			float L_33 = V_8;
			NullCheck(L_31);
			VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_31, L_32, L_33);
			goto IL_00d9;
		}

IL_00ba:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_34 = V_5;
			float L_35 = V_7;
			float L_36 = V_8;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_37 = V_5;
			NullCheck(L_37);
			float L_38 = L_37->get_minWidth_0();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_39 = V_5;
			NullCheck(L_39);
			float L_40 = L_39->get_maxWidth_1();
			float L_41;
			L_41 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_36, L_38, L_40, /*hidden argument*/NULL);
			NullCheck(L_34);
			VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_34, L_35, L_41);
		}

IL_00d9:
		{
		}

IL_00da:
		{
			bool L_42;
			L_42 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_005d;
			}
		}

IL_00e6:
		{
			IL2CPP_LEAVE(0xF7, FINALLY_00e8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e8;
	}

FINALLY_00e8:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(232)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(232)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF7, IL_00f7)
	}

IL_00f7:
	{
		goto IL_01ad;
	}

IL_00fd:
	{
		float L_43 = ___x0;
		int32_t L_44;
		L_44 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, __this);
		V_10 = ((float)il2cpp_codegen_subtract((float)L_43, (float)((float)((float)L_44))));
		float L_45 = ___width1;
		int32_t L_46;
		L_46 = GUILayoutEntry_get_marginHorizontal_mF9C781CECF148DD117AF1ED5848E56AD64199E6C(__this, /*hidden argument*/NULL);
		V_11 = ((float)il2cpp_codegen_add((float)L_45, (float)((float)((float)L_46))));
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_47 = __this->get_entries_11();
		NullCheck(L_47);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_48;
		L_48 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_47, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_12 = L_48;
	}

IL_0122:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0192;
		}

IL_0124:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_49;
			L_49 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_12), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_13 = L_49;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_50 = V_13;
			NullCheck(L_50);
			int32_t L_51 = L_50->get_stretchWidth_5();
			V_14 = (bool)((!(((uint32_t)L_51) <= ((uint32_t)0)))? 1 : 0);
			bool L_52 = V_14;
			if (!L_52)
			{
				goto IL_0160;
			}
		}

IL_013e:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_53 = V_13;
			float L_54 = V_10;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_55 = V_13;
			NullCheck(L_55);
			int32_t L_56;
			L_56 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_55);
			float L_57 = V_11;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_58 = V_13;
			NullCheck(L_58);
			int32_t L_59;
			L_59 = GUILayoutEntry_get_marginHorizontal_mF9C781CECF148DD117AF1ED5848E56AD64199E6C(L_58, /*hidden argument*/NULL);
			NullCheck(L_53);
			VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_53, ((float)il2cpp_codegen_add((float)L_54, (float)((float)((float)L_56)))), ((float)il2cpp_codegen_subtract((float)L_57, (float)((float)((float)L_59)))));
			goto IL_0191;
		}

IL_0160:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_60 = V_13;
			float L_61 = V_10;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_62 = V_13;
			NullCheck(L_62);
			int32_t L_63;
			L_63 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_62);
			float L_64 = V_11;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_65 = V_13;
			NullCheck(L_65);
			int32_t L_66;
			L_66 = GUILayoutEntry_get_marginHorizontal_mF9C781CECF148DD117AF1ED5848E56AD64199E6C(L_65, /*hidden argument*/NULL);
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_67 = V_13;
			NullCheck(L_67);
			float L_68 = L_67->get_minWidth_0();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_69 = V_13;
			NullCheck(L_69);
			float L_70 = L_69->get_maxWidth_1();
			float L_71;
			L_71 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)L_64, (float)((float)((float)L_66)))), L_68, L_70, /*hidden argument*/NULL);
			NullCheck(L_60);
			VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_60, ((float)il2cpp_codegen_add((float)L_61, (float)((float)((float)L_63)))), L_71);
		}

IL_0191:
		{
		}

IL_0192:
		{
			bool L_72;
			L_72 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_12), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_72)
			{
				goto IL_0124;
			}
		}

IL_019b:
		{
			IL2CPP_LEAVE(0x1AC, FINALLY_019d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_019d;
	}

FINALLY_019d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_12), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(413)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(413)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1AC, IL_01ac)
	}

IL_01ac:
	{
	}

IL_01ad:
	{
		goto IL_03b2;
	}

IL_01b3:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_73;
		L_73 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_74;
		L_74 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		V_20 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_73) == ((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_74))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_75 = V_20;
		if (!L_75)
		{
			goto IL_0245;
		}
	}
	{
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_76 = V_0;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_76, /*hidden argument*/NULL);
		V_21 = ((float)((float)L_77));
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6(L_78, /*hidden argument*/NULL);
		V_22 = ((float)((float)L_79));
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_80 = __this->get_entries_11();
		NullCheck(L_80);
		int32_t L_81;
		L_81 = List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline(L_80, /*hidden argument*/List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		V_23 = (bool)((!(((uint32_t)L_81) <= ((uint32_t)0)))? 1 : 0);
		bool L_82 = V_23;
		if (!L_82)
		{
			goto IL_0235;
		}
	}
	{
		float L_83 = V_21;
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_84 = __this->get_entries_11();
		NullCheck(L_84);
		GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_85;
		L_85 = List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_inline(L_84, 0, /*hidden argument*/List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_RuntimeMethod_var);
		NullCheck(L_85);
		int32_t L_86;
		L_86 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_85);
		float L_87;
		L_87 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_83, ((float)((float)L_86)), /*hidden argument*/NULL);
		V_21 = L_87;
		float L_88 = V_22;
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_89 = __this->get_entries_11();
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_90 = __this->get_entries_11();
		NullCheck(L_90);
		int32_t L_91;
		L_91 = List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline(L_90, /*hidden argument*/List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		NullCheck(L_89);
		GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_92;
		L_92 = List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_inline(L_89, ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)1)), /*hidden argument*/List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_RuntimeMethod_var);
		NullCheck(L_92);
		int32_t L_93;
		L_93 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_92);
		float L_94;
		L_94 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_88, ((float)((float)L_93)), /*hidden argument*/NULL);
		V_22 = L_94;
	}

IL_0235:
	{
		float L_95 = ___x0;
		float L_96 = V_21;
		___x0 = ((float)il2cpp_codegen_add((float)L_95, (float)L_96));
		float L_97 = ___width1;
		float L_98 = V_22;
		float L_99 = V_21;
		___width1 = ((float)il2cpp_codegen_subtract((float)L_97, (float)((float)il2cpp_codegen_add((float)L_98, (float)L_99))));
	}

IL_0245:
	{
		float L_100 = ___width1;
		float L_101 = __this->get_spacing_14();
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_102 = __this->get_entries_11();
		NullCheck(L_102);
		int32_t L_103;
		L_103 = List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline(L_102, /*hidden argument*/List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		V_15 = ((float)il2cpp_codegen_subtract((float)L_100, (float)((float)il2cpp_codegen_multiply((float)L_101, (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_103, (int32_t)1))))))));
		V_16 = (0.0f);
		float L_104 = __this->get_m_ChildMinWidth_23();
		float L_105 = __this->get_m_ChildMaxWidth_24();
		V_24 = (bool)((((int32_t)((((float)L_104) == ((float)L_105))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_106 = V_24;
		if (!L_106)
		{
			goto IL_02a4;
		}
	}
	{
		float L_107 = V_15;
		float L_108 = __this->get_m_ChildMinWidth_23();
		float L_109 = __this->get_m_ChildMaxWidth_24();
		float L_110 = __this->get_m_ChildMinWidth_23();
		float L_111;
		L_111 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)((float)((float)il2cpp_codegen_subtract((float)L_107, (float)L_108))/(float)((float)il2cpp_codegen_subtract((float)L_109, (float)L_110)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_16 = L_111;
	}

IL_02a4:
	{
		V_17 = (0.0f);
		float L_112 = V_15;
		float L_113 = __this->get_m_ChildMaxWidth_24();
		V_25 = (bool)((((float)L_112) > ((float)L_113))? 1 : 0);
		bool L_114 = V_25;
		if (!L_114)
		{
			goto IL_02e1;
		}
	}
	{
		int32_t L_115 = __this->get_m_StretchableCountX_19();
		V_26 = (bool)((((int32_t)L_115) > ((int32_t)0))? 1 : 0);
		bool L_116 = V_26;
		if (!L_116)
		{
			goto IL_02e0;
		}
	}
	{
		float L_117 = V_15;
		float L_118 = __this->get_m_ChildMaxWidth_24();
		int32_t L_119 = __this->get_m_StretchableCountX_19();
		V_17 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_117, (float)L_118))/(float)((float)((float)L_119))));
	}

IL_02e0:
	{
	}

IL_02e1:
	{
		V_18 = 0;
		V_19 = (bool)1;
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_120 = __this->get_entries_11();
		NullCheck(L_120);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_121;
		L_121 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_120, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_27 = L_121;
	}

IL_02f5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0394;
		}

IL_02fa:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_122;
			L_122 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_27), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_28 = L_122;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_123 = V_28;
			NullCheck(L_123);
			float L_124 = L_123->get_minWidth_0();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_125 = V_28;
			NullCheck(L_125);
			float L_126 = L_125->get_maxWidth_1();
			float L_127 = V_16;
			float L_128;
			L_128 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_124, L_126, L_127, /*hidden argument*/NULL);
			V_29 = L_128;
			float L_129 = V_29;
			float L_130 = V_17;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_131 = V_28;
			NullCheck(L_131);
			int32_t L_132 = L_131->get_stretchWidth_5();
			V_29 = ((float)il2cpp_codegen_add((float)L_129, (float)((float)il2cpp_codegen_multiply((float)L_130, (float)((float)((float)L_132))))));
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_133 = V_28;
			NullCheck(L_133);
			bool L_134 = L_133->get_consideredForMargin_7();
			V_30 = L_134;
			bool L_135 = V_30;
			if (!L_135)
			{
				goto IL_0371;
			}
		}

IL_0338:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_136 = V_28;
			NullCheck(L_136);
			int32_t L_137;
			L_137 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_136);
			V_31 = L_137;
			bool L_138 = V_19;
			V_33 = L_138;
			bool L_139 = V_33;
			if (!L_139)
			{
				goto IL_0352;
			}
		}

IL_034a:
		{
			V_31 = 0;
			V_19 = (bool)0;
		}

IL_0352:
		{
			int32_t L_140 = V_18;
			int32_t L_141 = V_31;
			if ((((int32_t)L_140) > ((int32_t)L_141)))
			{
				goto IL_035c;
			}
		}

IL_0358:
		{
			int32_t L_142 = V_31;
			G_B43_0 = L_142;
			goto IL_035e;
		}

IL_035c:
		{
			int32_t L_143 = V_18;
			G_B43_0 = L_143;
		}

IL_035e:
		{
			V_32 = G_B43_0;
			float L_144 = ___x0;
			int32_t L_145 = V_32;
			___x0 = ((float)il2cpp_codegen_add((float)L_144, (float)((float)((float)L_145))));
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_146 = V_28;
			NullCheck(L_146);
			int32_t L_147;
			L_147 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_146);
			V_18 = L_147;
		}

IL_0371:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_148 = V_28;
			float L_149 = ___x0;
			float L_150;
			L_150 = bankers_roundf(L_149);
			float L_151 = V_29;
			float L_152;
			L_152 = bankers_roundf(L_151);
			NullCheck(L_148);
			VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_148, L_150, L_152);
			float L_153 = ___x0;
			float L_154 = V_29;
			float L_155 = __this->get_spacing_14();
			___x0 = ((float)il2cpp_codegen_add((float)L_153, (float)((float)il2cpp_codegen_add((float)L_154, (float)L_155))));
		}

IL_0394:
		{
			bool L_156;
			L_156 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_27), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_156)
			{
				goto IL_02fa;
			}
		}

IL_03a0:
		{
			IL2CPP_LEAVE(0x3B1, FINALLY_03a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03a2;
	}

FINALLY_03a2:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_27), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(930)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(930)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B1, IL_03b1)
	}

IL_03b1:
	{
	}

IL_03b2:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_m1A56E9FEB2F31B84A08D58CE564C2E4265CB53C1 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	float V_5 = 0.0f;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_9;
	memset((&V_9), 0, sizeof(V_9));
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_16;
	memset((&V_16), 0, sizeof(V_16));
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B34_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * G_B40_2 = NULL;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * G_B39_2 = NULL;
	int32_t G_B41_0 = 0;
	int32_t G_B41_1 = 0;
	int32_t G_B41_2 = 0;
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * G_B41_3 = NULL;
	{
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_0 = __this->get_entries_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline(L_0, /*hidden argument*/List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3;
		L_3 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_4;
		L_4 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RectOffset_get_vertical_m589292AEF7A556D4FD0CED648DEED422C1CA36A4(L_4, /*hidden argument*/NULL);
		float L_6 = ((float)((float)L_5));
		V_5 = L_6;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minHeight_2(L_6);
		float L_7 = V_5;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxHeight_3(L_7);
		goto IL_03fe;
	}

IL_003d:
	{
		V_0 = 0;
		V_1 = 0;
		__this->set_m_ChildMinHeight_25((0.0f));
		__this->set_m_ChildMaxHeight_26((0.0f));
		__this->set_m_StretchableCountY_20(0);
		bool L_8 = __this->get_isVertical_12();
		V_6 = L_8;
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_01e8;
		}
	}
	{
		V_7 = 0;
		V_8 = (bool)1;
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_10 = __this->get_entries_11();
		NullCheck(L_10);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_11;
		L_11 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_10, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_9 = L_11;
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		{
			goto IL_016c;
		}

IL_0087:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_12;
			L_12 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_9), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_10 = L_12;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_13 = V_10;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_13);
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_14 = V_10;
			NullCheck(L_14);
			bool L_15 = L_14->get_consideredForMargin_7();
			V_12 = L_15;
			bool L_16 = V_12;
			if (!L_16)
			{
				goto IL_012d;
			}
		}

IL_00a9:
		{
			bool L_17 = V_8;
			V_13 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
			bool L_18 = V_13;
			if (!L_18)
			{
				goto IL_00c7;
			}
		}

IL_00b5:
		{
			int32_t L_19 = V_7;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_20 = V_10;
			NullCheck(L_20);
			int32_t L_21;
			L_21 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_20);
			int32_t L_22;
			L_22 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_19, L_21, /*hidden argument*/NULL);
			V_11 = L_22;
			goto IL_00cf;
		}

IL_00c7:
		{
			V_11 = 0;
			V_8 = (bool)0;
		}

IL_00cf:
		{
			float L_23 = __this->get_m_ChildMinHeight_25();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_24 = V_10;
			NullCheck(L_24);
			float L_25 = L_24->get_minHeight_2();
			float L_26 = __this->get_spacing_14();
			int32_t L_27 = V_11;
			__this->set_m_ChildMinHeight_25(((float)il2cpp_codegen_add((float)L_23, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_25, (float)L_26)), (float)((float)((float)L_27)))))));
			float L_28 = __this->get_m_ChildMaxHeight_26();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_29 = V_10;
			NullCheck(L_29);
			float L_30 = L_29->get_maxHeight_3();
			float L_31 = __this->get_spacing_14();
			int32_t L_32 = V_11;
			__this->set_m_ChildMaxHeight_26(((float)il2cpp_codegen_add((float)L_28, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_30, (float)L_31)), (float)((float)((float)L_32)))))));
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_33 = V_10;
			NullCheck(L_33);
			int32_t L_34;
			L_34 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_33);
			V_7 = L_34;
			int32_t L_35 = __this->get_m_StretchableCountY_20();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_36 = V_10;
			NullCheck(L_36);
			int32_t L_37 = L_36->get_stretchHeight_6();
			__this->set_m_StretchableCountY_20(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_37)));
			goto IL_016b;
		}

IL_012d:
		{
			float L_38 = __this->get_m_ChildMinHeight_25();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_39 = V_10;
			NullCheck(L_39);
			float L_40 = L_39->get_minHeight_2();
			__this->set_m_ChildMinHeight_25(((float)il2cpp_codegen_add((float)L_38, (float)L_40)));
			float L_41 = __this->get_m_ChildMaxHeight_26();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_42 = V_10;
			NullCheck(L_42);
			float L_43 = L_42->get_maxHeight_3();
			__this->set_m_ChildMaxHeight_26(((float)il2cpp_codegen_add((float)L_41, (float)L_43)));
			int32_t L_44 = __this->get_m_StretchableCountY_20();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_45 = V_10;
			NullCheck(L_45);
			int32_t L_46 = L_45->get_stretchHeight_6();
			__this->set_m_StretchableCountY_20(((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_46)));
		}

IL_016b:
		{
		}

IL_016c:
		{
			bool L_47;
			L_47 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_47)
			{
				goto IL_0087;
			}
		}

IL_0178:
		{
			IL2CPP_LEAVE(0x189, FINALLY_017a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_017a;
	}

FINALLY_017a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_9), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(378)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(378)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x189, IL_0189)
	}

IL_0189:
	{
		float L_48 = __this->get_m_ChildMinHeight_25();
		float L_49 = __this->get_spacing_14();
		__this->set_m_ChildMinHeight_25(((float)il2cpp_codegen_subtract((float)L_48, (float)L_49)));
		float L_50 = __this->get_m_ChildMaxHeight_26();
		float L_51 = __this->get_spacing_14();
		__this->set_m_ChildMaxHeight_26(((float)il2cpp_codegen_subtract((float)L_50, (float)L_51)));
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_52 = __this->get_entries_11();
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline(L_52, /*hidden argument*/List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		V_14 = (bool)((!(((uint32_t)L_53) <= ((uint32_t)0)))? 1 : 0);
		bool L_54 = V_14;
		if (!L_54)
		{
			goto IL_01dc;
		}
	}
	{
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_55 = __this->get_entries_11();
		NullCheck(L_55);
		GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_56;
		L_56 = List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_inline(L_55, 0, /*hidden argument*/List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_RuntimeMethod_var);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_56);
		V_0 = L_57;
		int32_t L_58 = V_7;
		V_1 = L_58;
		goto IL_01e2;
	}

IL_01dc:
	{
		int32_t L_59 = 0;
		V_0 = L_59;
		V_1 = L_59;
	}

IL_01e2:
	{
		goto IL_02c3;
	}

IL_01e8:
	{
		V_15 = (bool)1;
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_60 = __this->get_entries_11();
		NullCheck(L_60);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_61;
		L_61 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_60, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_16 = L_61;
	}

IL_01fa:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02a5;
		}

IL_01ff:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_62;
			L_62 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_16), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_17 = L_62;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_63 = V_17;
			NullCheck(L_63);
			VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_63);
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_64 = V_17;
			NullCheck(L_64);
			bool L_65 = L_64->get_consideredForMargin_7();
			V_18 = L_65;
			bool L_66 = V_18;
			if (!L_66)
			{
				goto IL_0290;
			}
		}

IL_021e:
		{
			bool L_67 = V_15;
			V_19 = (bool)((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
			bool L_68 = V_19;
			if (!L_68)
			{
				goto IL_024a;
			}
		}

IL_022a:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_69 = V_17;
			NullCheck(L_69);
			int32_t L_70;
			L_70 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_69);
			int32_t L_71 = V_0;
			int32_t L_72;
			L_72 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_70, L_71, /*hidden argument*/NULL);
			V_0 = L_72;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_73 = V_17;
			NullCheck(L_73);
			int32_t L_74;
			L_74 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_73);
			int32_t L_75 = V_1;
			int32_t L_76;
			L_76 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_74, L_75, /*hidden argument*/NULL);
			V_1 = L_76;
			goto IL_025f;
		}

IL_024a:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_77 = V_17;
			NullCheck(L_77);
			int32_t L_78;
			L_78 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_77);
			V_0 = L_78;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_79 = V_17;
			NullCheck(L_79);
			int32_t L_80;
			L_80 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_79);
			V_1 = L_80;
			V_15 = (bool)0;
		}

IL_025f:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_81 = V_17;
			NullCheck(L_81);
			float L_82 = L_81->get_minHeight_2();
			float L_83 = __this->get_m_ChildMinHeight_25();
			float L_84;
			L_84 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_82, L_83, /*hidden argument*/NULL);
			__this->set_m_ChildMinHeight_25(L_84);
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_85 = V_17;
			NullCheck(L_85);
			float L_86 = L_85->get_maxHeight_3();
			float L_87 = __this->get_m_ChildMaxHeight_26();
			float L_88;
			L_88 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_86, L_87, /*hidden argument*/NULL);
			__this->set_m_ChildMaxHeight_26(L_88);
		}

IL_0290:
		{
			int32_t L_89 = __this->get_m_StretchableCountY_20();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_90 = V_17;
			NullCheck(L_90);
			int32_t L_91 = L_90->get_stretchHeight_6();
			__this->set_m_StretchableCountY_20(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_91)));
		}

IL_02a5:
		{
			bool L_92;
			L_92 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_16), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_92)
			{
				goto IL_01ff;
			}
		}

IL_02b1:
		{
			IL2CPP_LEAVE(0x2C2, FINALLY_02b3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02b3;
	}

FINALLY_02b3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_16), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(691)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(691)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2C2, IL_02c2)
	}

IL_02c2:
	{
	}

IL_02c3:
	{
		V_2 = (0.0f);
		V_3 = (0.0f);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_93;
		L_93 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_94;
		L_94 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_93) == ((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_94))))
		{
			goto IL_02e4;
		}
	}
	{
		bool L_95 = __this->get_m_UserSpecifiedHeight_22();
		G_B34_0 = ((int32_t)(L_95));
		goto IL_02e5;
	}

IL_02e4:
	{
		G_B34_0 = 1;
	}

IL_02e5:
	{
		V_20 = (bool)G_B34_0;
		bool L_96 = V_20;
		if (!L_96)
		{
			goto IL_031f;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_97;
		L_97 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_97);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_98;
		L_98 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_97, /*hidden argument*/NULL);
		NullCheck(L_98);
		int32_t L_99;
		L_99 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_98, /*hidden argument*/NULL);
		int32_t L_100 = V_0;
		int32_t L_101;
		L_101 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_99, L_100, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_101));
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_102;
		L_102 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_102);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_103;
		L_103 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_102, /*hidden argument*/NULL);
		NullCheck(L_103);
		int32_t L_104;
		L_104 = RectOffset_get_bottom_mDDEBF1389FC1B8DCD9FC15DF91E51D264925C00D(L_103, /*hidden argument*/NULL);
		int32_t L_105 = V_1;
		int32_t L_106;
		L_106 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_104, L_105, /*hidden argument*/NULL);
		V_3 = ((float)((float)L_106));
		goto IL_0337;
	}

IL_031f:
	{
		int32_t L_107 = V_0;
		__this->set_m_MarginTop_29(L_107);
		int32_t L_108 = V_1;
		__this->set_m_MarginBottom_30(L_108);
		float L_109 = (0.0f);
		V_3 = L_109;
		V_2 = L_109;
	}

IL_0337:
	{
		float L_110 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minHeight_2();
		float L_111 = __this->get_m_ChildMinHeight_25();
		float L_112 = V_2;
		float L_113 = V_3;
		float L_114;
		L_114 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_110, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_111, (float)L_112)), (float)L_113)), /*hidden argument*/NULL);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minHeight_2(L_114);
		float L_115 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_maxHeight_3();
		V_21 = (bool)((((float)L_115) == ((float)(0.0f)))? 1 : 0);
		bool L_116 = V_21;
		if (!L_116)
		{
			goto IL_039e;
		}
	}
	{
		int32_t L_117 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_stretchHeight_6();
		int32_t L_118 = __this->get_m_StretchableCountY_20();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_119;
		L_119 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_119);
		bool L_120;
		L_120 = GUIStyle_get_stretchHeight_mB249B43773569736BF1D1014F890484B17A96BE4(L_119, /*hidden argument*/NULL);
		G_B39_0 = L_118;
		G_B39_1 = L_117;
		G_B39_2 = __this;
		if (L_120)
		{
			G_B40_0 = L_118;
			G_B40_1 = L_117;
			G_B40_2 = __this;
			goto IL_0383;
		}
	}
	{
		G_B41_0 = 0;
		G_B41_1 = G_B39_0;
		G_B41_2 = G_B39_1;
		G_B41_3 = G_B39_2;
		goto IL_0384;
	}

IL_0383:
	{
		G_B41_0 = 1;
		G_B41_1 = G_B40_0;
		G_B41_2 = G_B40_1;
		G_B41_3 = G_B40_2;
	}

IL_0384:
	{
		NullCheck(G_B41_3);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)G_B41_3)->set_stretchHeight_6(((int32_t)il2cpp_codegen_add((int32_t)G_B41_2, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B41_1, (int32_t)G_B41_0)))));
		float L_121 = __this->get_m_ChildMaxHeight_26();
		float L_122 = V_2;
		float L_123 = V_3;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxHeight_3(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_121, (float)L_122)), (float)L_123)));
		goto IL_03a7;
	}

IL_039e:
	{
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_stretchHeight_6(0);
	}

IL_03a7:
	{
		float L_124 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_maxHeight_3();
		float L_125 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minHeight_2();
		float L_126;
		L_126 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_124, L_125, /*hidden argument*/NULL);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxHeight_3(L_126);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_127;
		L_127 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_127);
		float L_128;
		L_128 = GUIStyle_get_fixedHeight_mE1D2038EB276EEC0FC42A0F08C782569EE2DE865(L_127, /*hidden argument*/NULL);
		V_22 = (bool)((((int32_t)((((float)L_128) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_129 = V_22;
		if (!L_129)
		{
			goto IL_03fe;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_130;
		L_130 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_130);
		float L_131;
		L_131 = GUIStyle_get_fixedHeight_mE1D2038EB276EEC0FC42A0F08C782569EE2DE865(L_130, /*hidden argument*/NULL);
		float L_132 = L_131;
		V_5 = L_132;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minHeight_2(L_132);
		float L_133 = V_5;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxHeight_3(L_133);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_stretchHeight_6(0);
	}

IL_03fe:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m4D5A3D430B3E9560D052D425DD6A490389CDCDE1 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, float ___y0, float ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_16;
	memset((&V_16), 0, sizeof(V_16));
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * V_17 = NULL;
	float V_18 = 0.0f;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_24;
	memset((&V_24), 0, sizeof(V_24));
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * V_25 = NULL;
	float V_26 = 0.0f;
	float V_27 = 0.0f;
	float V_28 = 0.0f;
	bool V_29 = false;
	float V_30 = 0.0f;
	float V_31 = 0.0f;
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_32;
	memset((&V_32), 0, sizeof(V_32));
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * V_33 = NULL;
	bool V_34 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B23_0 = 0;
	{
		float L_0 = ___y0;
		float L_1 = ___height1;
		GUILayoutEntry_SetVertical_mF68B8311A53ABBAFCD8675137563F0AF64979952(__this, L_0, L_1, /*hidden argument*/NULL);
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_2 = __this->get_entries_11();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline(L_2, /*hidden argument*/List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_03c7;
	}

IL_0021:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5;
		L_5 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_6;
		L_6 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = __this->get_resetCoords_13();
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		___y0 = (0.0f);
	}

IL_003e:
	{
		bool L_9 = __this->get_isVertical_12();
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_024d;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_11;
		L_11 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_12;
		L_12 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_11) == ((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_9;
		if (!L_13)
		{
			goto IL_00dd;
		}
	}
	{
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_14, /*hidden argument*/NULL);
		V_10 = ((float)((float)L_15));
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = RectOffset_get_bottom_mDDEBF1389FC1B8DCD9FC15DF91E51D264925C00D(L_16, /*hidden argument*/NULL);
		V_11 = ((float)((float)L_17));
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_18 = __this->get_entries_11();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline(L_18, /*hidden argument*/List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		V_12 = (bool)((!(((uint32_t)L_19) <= ((uint32_t)0)))? 1 : 0);
		bool L_20 = V_12;
		if (!L_20)
		{
			goto IL_00cd;
		}
	}
	{
		float L_21 = V_10;
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_22 = __this->get_entries_11();
		NullCheck(L_22);
		GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_23;
		L_23 = List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_inline(L_22, 0, /*hidden argument*/List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_23);
		float L_25;
		L_25 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_21, ((float)((float)L_24)), /*hidden argument*/NULL);
		V_10 = L_25;
		float L_26 = V_11;
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_27 = __this->get_entries_11();
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_28 = __this->get_entries_11();
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline(L_28, /*hidden argument*/List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		NullCheck(L_27);
		GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_30;
		L_30 = List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_inline(L_27, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), /*hidden argument*/List_1_get_Item_m8A67FBCD377B2C645DFDF42A676357729A6DC8FC_RuntimeMethod_var);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_30);
		float L_32;
		L_32 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_26, ((float)((float)L_31)), /*hidden argument*/NULL);
		V_11 = L_32;
	}

IL_00cd:
	{
		float L_33 = ___y0;
		float L_34 = V_10;
		___y0 = ((float)il2cpp_codegen_add((float)L_33, (float)L_34));
		float L_35 = ___height1;
		float L_36 = V_11;
		float L_37 = V_10;
		___height1 = ((float)il2cpp_codegen_subtract((float)L_35, (float)((float)il2cpp_codegen_add((float)L_36, (float)L_37))));
	}

IL_00dd:
	{
		float L_38 = ___height1;
		float L_39 = __this->get_spacing_14();
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_40 = __this->get_entries_11();
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_inline(L_40, /*hidden argument*/List_1_get_Count_mB13B9D965AB57785BD815DB355455073B0E8AA4E_RuntimeMethod_var);
		V_4 = ((float)il2cpp_codegen_subtract((float)L_38, (float)((float)il2cpp_codegen_multiply((float)L_39, (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1))))))));
		V_5 = (0.0f);
		float L_42 = __this->get_m_ChildMinHeight_25();
		float L_43 = __this->get_m_ChildMaxHeight_26();
		V_13 = (bool)((((int32_t)((((float)L_42) == ((float)L_43))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_13;
		if (!L_44)
		{
			goto IL_013c;
		}
	}
	{
		float L_45 = V_4;
		float L_46 = __this->get_m_ChildMinHeight_25();
		float L_47 = __this->get_m_ChildMaxHeight_26();
		float L_48 = __this->get_m_ChildMinHeight_25();
		float L_49;
		L_49 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)((float)((float)il2cpp_codegen_subtract((float)L_45, (float)L_46))/(float)((float)il2cpp_codegen_subtract((float)L_47, (float)L_48)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_5 = L_49;
	}

IL_013c:
	{
		V_6 = (0.0f);
		float L_50 = V_4;
		float L_51 = __this->get_m_ChildMaxHeight_26();
		V_14 = (bool)((((float)L_50) > ((float)L_51))? 1 : 0);
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_53 = __this->get_m_StretchableCountY_20();
		V_15 = (bool)((((int32_t)L_53) > ((int32_t)0))? 1 : 0);
		bool L_54 = V_15;
		if (!L_54)
		{
			goto IL_0176;
		}
	}
	{
		float L_55 = V_4;
		float L_56 = __this->get_m_ChildMaxHeight_26();
		int32_t L_57 = __this->get_m_StretchableCountY_20();
		V_6 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_55, (float)L_56))/(float)((float)((float)L_57))));
	}

IL_0176:
	{
	}

IL_0177:
	{
		V_7 = 0;
		V_8 = (bool)1;
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_58 = __this->get_entries_11();
		NullCheck(L_58);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_59;
		L_59 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_58, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_16 = L_59;
	}

IL_018b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_022a;
		}

IL_0190:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_60;
			L_60 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_16), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_17 = L_60;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_61 = V_17;
			NullCheck(L_61);
			float L_62 = L_61->get_minHeight_2();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_63 = V_17;
			NullCheck(L_63);
			float L_64 = L_63->get_maxHeight_3();
			float L_65 = V_5;
			float L_66;
			L_66 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_62, L_64, L_65, /*hidden argument*/NULL);
			V_18 = L_66;
			float L_67 = V_18;
			float L_68 = V_6;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_69 = V_17;
			NullCheck(L_69);
			int32_t L_70 = L_69->get_stretchHeight_6();
			V_18 = ((float)il2cpp_codegen_add((float)L_67, (float)((float)il2cpp_codegen_multiply((float)L_68, (float)((float)((float)L_70))))));
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_71 = V_17;
			NullCheck(L_71);
			bool L_72 = L_71->get_consideredForMargin_7();
			V_19 = L_72;
			bool L_73 = V_19;
			if (!L_73)
			{
				goto IL_0207;
			}
		}

IL_01ce:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_74 = V_17;
			NullCheck(L_74);
			int32_t L_75;
			L_75 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_74);
			V_20 = L_75;
			bool L_76 = V_8;
			V_22 = L_76;
			bool L_77 = V_22;
			if (!L_77)
			{
				goto IL_01e8;
			}
		}

IL_01e0:
		{
			V_20 = 0;
			V_8 = (bool)0;
		}

IL_01e8:
		{
			int32_t L_78 = V_7;
			int32_t L_79 = V_20;
			if ((((int32_t)L_78) > ((int32_t)L_79)))
			{
				goto IL_01f2;
			}
		}

IL_01ee:
		{
			int32_t L_80 = V_20;
			G_B23_0 = L_80;
			goto IL_01f4;
		}

IL_01f2:
		{
			int32_t L_81 = V_7;
			G_B23_0 = L_81;
		}

IL_01f4:
		{
			V_21 = G_B23_0;
			float L_82 = ___y0;
			int32_t L_83 = V_21;
			___y0 = ((float)il2cpp_codegen_add((float)L_82, (float)((float)((float)L_83))));
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_84 = V_17;
			NullCheck(L_84);
			int32_t L_85;
			L_85 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_84);
			V_7 = L_85;
		}

IL_0207:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_86 = V_17;
			float L_87 = ___y0;
			float L_88;
			L_88 = bankers_roundf(L_87);
			float L_89 = V_18;
			float L_90;
			L_90 = bankers_roundf(L_89);
			NullCheck(L_86);
			VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_86, L_88, L_90);
			float L_91 = ___y0;
			float L_92 = V_18;
			float L_93 = __this->get_spacing_14();
			___y0 = ((float)il2cpp_codegen_add((float)L_91, (float)((float)il2cpp_codegen_add((float)L_92, (float)L_93))));
		}

IL_022a:
		{
			bool L_94;
			L_94 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_16), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_94)
			{
				goto IL_0190;
			}
		}

IL_0236:
		{
			IL2CPP_LEAVE(0x247, FINALLY_0238);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0238;
	}

FINALLY_0238:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_16), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(568)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(568)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x247, IL_0247)
	}

IL_0247:
	{
		goto IL_03c7;
	}

IL_024d:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_95;
		L_95 = GUILayoutEntry_get_style_mCBE0882318C702289CFD524CF4246D1201BDCB7F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_96;
		L_96 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		V_23 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_95) == ((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_96))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_97 = V_23;
		if (!L_97)
		{
			goto IL_0318;
		}
	}
	{
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_98 = __this->get_entries_11();
		NullCheck(L_98);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_99;
		L_99 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_98, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_24 = L_99;
	}

IL_0276:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02f5;
		}

IL_0278:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_100;
			L_100 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_24), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_25 = L_100;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_101 = V_25;
			NullCheck(L_101);
			int32_t L_102;
			L_102 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_101);
			RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_103 = V_0;
			NullCheck(L_103);
			int32_t L_104;
			L_104 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_103, /*hidden argument*/NULL);
			int32_t L_105;
			L_105 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_102, L_104, /*hidden argument*/NULL);
			V_26 = ((float)((float)L_105));
			float L_106 = ___y0;
			float L_107 = V_26;
			V_27 = ((float)il2cpp_codegen_add((float)L_106, (float)L_107));
			float L_108 = ___height1;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_109 = V_25;
			NullCheck(L_109);
			int32_t L_110;
			L_110 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_109);
			RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_111 = V_0;
			NullCheck(L_111);
			int32_t L_112;
			L_112 = RectOffset_get_bottom_mDDEBF1389FC1B8DCD9FC15DF91E51D264925C00D(L_111, /*hidden argument*/NULL);
			int32_t L_113;
			L_113 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_110, L_112, /*hidden argument*/NULL);
			float L_114 = V_26;
			V_28 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_108, (float)((float)((float)L_113)))), (float)L_114));
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_115 = V_25;
			NullCheck(L_115);
			int32_t L_116 = L_115->get_stretchHeight_6();
			V_29 = (bool)((!(((uint32_t)L_116) <= ((uint32_t)0)))? 1 : 0);
			bool L_117 = V_29;
			if (!L_117)
			{
				goto IL_02d5;
			}
		}

IL_02c7:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_118 = V_25;
			float L_119 = V_27;
			float L_120 = V_28;
			NullCheck(L_118);
			VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_118, L_119, L_120);
			goto IL_02f4;
		}

IL_02d5:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_121 = V_25;
			float L_122 = V_27;
			float L_123 = V_28;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_124 = V_25;
			NullCheck(L_124);
			float L_125 = L_124->get_minHeight_2();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_126 = V_25;
			NullCheck(L_126);
			float L_127 = L_126->get_maxHeight_3();
			float L_128;
			L_128 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_123, L_125, L_127, /*hidden argument*/NULL);
			NullCheck(L_121);
			VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_121, L_122, L_128);
		}

IL_02f4:
		{
		}

IL_02f5:
		{
			bool L_129;
			L_129 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_24), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_129)
			{
				goto IL_0278;
			}
		}

IL_0301:
		{
			IL2CPP_LEAVE(0x312, FINALLY_0303);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0303;
	}

FINALLY_0303:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_24), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(771)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(771)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x312, IL_0312)
	}

IL_0312:
	{
		goto IL_03c6;
	}

IL_0318:
	{
		float L_130 = ___y0;
		int32_t L_131;
		L_131 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, __this);
		V_30 = ((float)il2cpp_codegen_subtract((float)L_130, (float)((float)((float)L_131))));
		float L_132 = ___height1;
		int32_t L_133;
		L_133 = GUILayoutEntry_get_marginVertical_m2DC4DCD8760C40BA8396567A930FE58923472819(__this, /*hidden argument*/NULL);
		V_31 = ((float)il2cpp_codegen_add((float)L_132, (float)((float)((float)L_133))));
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_134 = __this->get_entries_11();
		NullCheck(L_134);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_135;
		L_135 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_134, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_32 = L_135;
	}

IL_033d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03ab;
		}

IL_033f:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_136;
			L_136 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_32), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_33 = L_136;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_137 = V_33;
			NullCheck(L_137);
			int32_t L_138 = L_137->get_stretchHeight_6();
			V_34 = (bool)((!(((uint32_t)L_138) <= ((uint32_t)0)))? 1 : 0);
			bool L_139 = V_34;
			if (!L_139)
			{
				goto IL_0379;
			}
		}

IL_0359:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_140 = V_33;
			float L_141 = V_30;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_142 = V_33;
			NullCheck(L_142);
			int32_t L_143;
			L_143 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_142);
			float L_144 = V_31;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_145 = V_33;
			NullCheck(L_145);
			int32_t L_146;
			L_146 = GUILayoutEntry_get_marginVertical_m2DC4DCD8760C40BA8396567A930FE58923472819(L_145, /*hidden argument*/NULL);
			NullCheck(L_140);
			VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_140, ((float)il2cpp_codegen_add((float)L_141, (float)((float)((float)L_143)))), ((float)il2cpp_codegen_subtract((float)L_144, (float)((float)((float)L_146)))));
			goto IL_03aa;
		}

IL_0379:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_147 = V_33;
			float L_148 = V_30;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_149 = V_33;
			NullCheck(L_149);
			int32_t L_150;
			L_150 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_149);
			float L_151 = V_31;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_152 = V_33;
			NullCheck(L_152);
			int32_t L_153;
			L_153 = GUILayoutEntry_get_marginVertical_m2DC4DCD8760C40BA8396567A930FE58923472819(L_152, /*hidden argument*/NULL);
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_154 = V_33;
			NullCheck(L_154);
			float L_155 = L_154->get_minHeight_2();
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_156 = V_33;
			NullCheck(L_156);
			float L_157 = L_156->get_maxHeight_3();
			float L_158;
			L_158 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)L_151, (float)((float)((float)L_153)))), L_155, L_157, /*hidden argument*/NULL);
			NullCheck(L_147);
			VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_147, ((float)il2cpp_codegen_add((float)L_148, (float)((float)((float)L_150)))), L_158);
		}

IL_03aa:
		{
		}

IL_03ab:
		{
			bool L_159;
			L_159 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_32), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_159)
			{
				goto IL_033f;
			}
		}

IL_03b4:
		{
			IL2CPP_LEAVE(0x3C5, FINALLY_03b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03b6;
	}

FINALLY_03b6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_32), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(950)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(950)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C5, IL_03c5)
	}

IL_03c5:
	{
	}

IL_03c6:
	{
	}

IL_03c7:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutGroup::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayoutGroup_ToString_m6ABF457D2B5F27B86D86FC4FD9DA17C16DB206F8 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_4;
	memset((&V_4), 0, sizeof(V_4));
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * V_5 = NULL;
	String_t* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		String_t* L_0 = V_1;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_3 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var))->get_indent_10();
		V_3 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_0011;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		String_t* L_10;
		L_10 = GUILayoutEntry_ToString_m605E966C2D198919A52D5EF14B1BD48F91E8762F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		float* L_13 = __this->get_address_of_m_ChildMinHeight_25();
		String_t* L_14;
		L_14 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var);
		int32_t L_17 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var))->get_indent_10();
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var))->set_indent_10(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)4)));
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_18 = __this->get_entries_11();
		NullCheck(L_18);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_19;
		L_19 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_18, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_4 = L_19;
	}

IL_007e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a5;
		}

IL_0080:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_20;
			L_20 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_4), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_5 = L_20;
			String_t* L_21 = V_0;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_22 = V_5;
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_23 = L_22;
			G_B6_0 = L_23;
			G_B6_1 = L_21;
			if (L_23)
			{
				G_B7_0 = L_23;
				G_B7_1 = L_21;
				goto IL_0094;
			}
		}

IL_0090:
		{
			G_B8_0 = ((String_t*)(NULL));
			G_B8_1 = G_B6_1;
			goto IL_0099;
		}

IL_0094:
		{
			NullCheck(G_B7_0);
			String_t* L_24;
			L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
			G_B8_0 = L_24;
			G_B8_1 = G_B7_1;
		}

IL_0099:
		{
			String_t* L_25;
			L_25 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B8_1, G_B8_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
			V_0 = L_25;
		}

IL_00a5:
		{
			bool L_26;
			L_26 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_0080;
			}
		}

IL_00ae:
		{
			IL2CPP_LEAVE(0xBF, FINALLY_00b0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b0;
	}

FINALLY_00b0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(176)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(176)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
	}

IL_00bf:
	{
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		String_t* L_29;
		L_29 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_27, L_28, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		V_0 = L_29;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var);
		int32_t L_30 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var))->get_indent_10();
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var))->set_indent_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)4)));
		String_t* L_31 = V_0;
		V_6 = L_31;
		goto IL_00dd;
	}

IL_00dd:
	{
		String_t* L_32 = V_6;
		return L_32;
	}
}
// System.Void UnityEngine.GUILayoutGroup::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__cctor_m44D985064FC3C0FEAD773AE2CF9785B0795C7A00 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0;
		L_0 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_1 = (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)il2cpp_codegen_object_new(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m29C33DB9A9A93ECD86533A72B2822E34E8415640(L_1, (0.0f), (1.0f), (0.0f), (1.0f), L_0, /*hidden argument*/NULL);
		((GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var))->set_none_31(L_1);
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
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOption__ctor_m86D3D4B8A398111D2D0699DF13329F847F4AF79E (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type0;
		__this->set_type_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
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
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  GUILayoutUtility_Internal_GetWindowRect_mEDAF013BCAD8976985F1B8DF688CAA038EBE3BD6 (int32_t ___windowID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___windowID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		GUILayoutUtility_Internal_GetWindowRect_Injected_m7A33DA746412DD081C6F48C7C80F4B01EDB4FBC8(L_0, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_m7896245CCE0C075879128E3F73E9FDE15B844A65 (int32_t ___windowID0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___windowID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		GUILayoutUtility_Internal_MoveWindow_Injected_m84ED04D182A61B3F09A4E042ECF4074611A2EA73(L_0, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r1), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * GUILayoutUtility_SelectIDList_mBB4E4C5EE476C431E3105D76F13CEA683E7021CB (int32_t ___instanceID0, bool ___isWindow1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m990013907A0B53EE24D944EBFF39DA4107893D20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m3E15A6938CA1A0EDC0BD3E28CBED54163A11EB17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * V_0 = NULL;
	LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * V_1 = NULL;
	bool V_2 = false;
	LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * V_3 = NULL;
	Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * G_B3_0 = NULL;
	{
		bool L_0 = ___isWindow1;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * L_1 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_s_StoredLayouts_0();
		G_B3_0 = L_1;
		goto IL_0010;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * L_2 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_s_StoredWindows_1();
		G_B3_0 = L_2;
	}

IL_0010:
	{
		V_0 = G_B3_0;
		Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * L_3 = V_0;
		int32_t L_4 = ___instanceID0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m990013907A0B53EE24D944EBFF39DA4107893D20(L_3, L_4, (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m990013907A0B53EE24D944EBFF39DA4107893D20_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___instanceID0;
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_8 = (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 *)il2cpp_codegen_object_new(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m31B20021AD6C02155826BB808C8E243B340022C4(L_8, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * L_9 = V_0;
		int32_t L_10 = ___instanceID0;
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_11 = V_1;
		NullCheck(L_9);
		Dictionary_2_set_Item_m3E15A6938CA1A0EDC0BD3E28CBED54163A11EB17(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_set_Item_m3E15A6938CA1A0EDC0BD3E28CBED54163A11EB17_RuntimeMethod_var);
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_12 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_13 = V_1;
		NullCheck(L_13);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_14 = L_13->get_topLevel_1();
		NullCheck(L_12);
		L_12->set_topLevel_1(L_14);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_15 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_16 = V_1;
		NullCheck(L_16);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_17 = L_16->get_layoutGroups_2();
		NullCheck(L_15);
		L_15->set_layoutGroups_2(L_17);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_18 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_19 = V_1;
		NullCheck(L_19);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_20 = L_19->get_windows_3();
		NullCheck(L_18);
		L_18->set_windows_3(L_20);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_21 = V_1;
		V_3 = L_21;
		goto IL_0067;
	}

IL_0067:
	{
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_22 = V_3;
		return L_22;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Begin_m1A42FB0448413B7ED711887827CD6E8F9276C47D (int32_t ___instanceID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * V_0 = NULL;
	bool V_1 = false;
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * V_2 = NULL;
	{
		int32_t L_0 = ___instanceID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_1;
		L_1 = GUILayoutUtility_SelectIDList_mBB4E4C5EE476C431E3105D76F13CEA683E7021CB(L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_2;
		L_2 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)8))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_5 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_6 = V_0;
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_7 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_7, /*hidden argument*/NULL);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_8 = L_7;
		V_2 = L_8;
		NullCheck(L_6);
		L_6->set_topLevel_1(L_8);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_9 = V_2;
		NullCheck(L_5);
		L_5->set_topLevel_1(L_9);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_10 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_10);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_11 = L_10->get_layoutGroups_2();
		NullCheck(L_11);
		Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61(L_11, /*hidden argument*/Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_RuntimeMethod_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_12 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_12);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_13 = L_12->get_layoutGroups_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_14 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_14);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_15 = L_14->get_topLevel_1();
		NullCheck(L_13);
		Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04(L_13, L_15, /*hidden argument*/Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_RuntimeMethod_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_16 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_17 = V_0;
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_18 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_18, /*hidden argument*/NULL);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_19 = L_18;
		V_2 = L_19;
		NullCheck(L_17);
		L_17->set_windows_3(L_19);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_20 = V_2;
		NullCheck(L_16);
		L_16->set_windows_3(L_20);
		goto IL_00aa;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_21 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_22 = V_0;
		NullCheck(L_22);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_23 = L_22->get_topLevel_1();
		NullCheck(L_21);
		L_21->set_topLevel_1(L_23);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_24 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_25 = V_0;
		NullCheck(L_25);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_26 = L_25->get_layoutGroups_2();
		NullCheck(L_24);
		L_24->set_layoutGroups_2(L_26);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_27 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_28 = V_0;
		NullCheck(L_28);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_29 = L_28->get_windows_3();
		NullCheck(L_27);
		L_27->set_windows_3(L_29);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_BeginWindow_m1C75E01076E5777F316AD33291C7B9A37ABB32EA (int32_t ___windowID0, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style1, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * V_0 = NULL;
	bool V_1 = false;
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * V_2 = NULL;
	bool V_3 = false;
	{
		int32_t L_0 = ___windowID0;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_1;
		L_1 = GUILayoutUtility_SelectIDList_mBB4E4C5EE476C431E3105D76F13CEA683E7021CB(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_2;
		L_2 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)8))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00b5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_5 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_6 = V_0;
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_7 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_7, /*hidden argument*/NULL);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_8 = L_7;
		V_2 = L_8;
		NullCheck(L_6);
		L_6->set_topLevel_1(L_8);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_9 = V_2;
		NullCheck(L_5);
		L_5->set_topLevel_1(L_9);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_10 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_10);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_11 = L_10->get_topLevel_1();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_12 = ___style1;
		NullCheck(L_11);
		GUILayoutEntry_set_style_mD86F71263ED679EBA0B5E5415F1B8FB8C7509DA0(L_11, L_12, /*hidden argument*/NULL);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_13 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_13);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_14 = L_13->get_topLevel_1();
		int32_t L_15 = ___windowID0;
		NullCheck(L_14);
		L_14->set_windowID_17(L_15);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_16 = ___options2;
		V_3 = (bool)((!(((RuntimeObject*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_18 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_18);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_19 = L_18->get_topLevel_1();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_20 = ___options2;
		NullCheck(L_19);
		VirtActionInvoker1< GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* >::Invoke(13 /* System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[]) */, L_19, L_20);
	}

IL_0070:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_21 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_21);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_22 = L_21->get_layoutGroups_2();
		NullCheck(L_22);
		Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61(L_22, /*hidden argument*/Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_RuntimeMethod_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_23 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_23);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_24 = L_23->get_layoutGroups_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_25 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_25);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_26 = L_25->get_topLevel_1();
		NullCheck(L_24);
		Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04(L_24, L_26, /*hidden argument*/Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_RuntimeMethod_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_27 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_28 = V_0;
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_29 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_29, /*hidden argument*/NULL);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_30 = L_29;
		V_2 = L_30;
		NullCheck(L_28);
		L_28->set_windows_3(L_30);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_31 = V_2;
		NullCheck(L_27);
		L_27->set_windows_3(L_31);
		goto IL_00e7;
	}

IL_00b5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_32 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_33 = V_0;
		NullCheck(L_33);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_34 = L_33->get_topLevel_1();
		NullCheck(L_32);
		L_32->set_topLevel_1(L_34);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_35 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_36 = V_0;
		NullCheck(L_36);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_37 = L_36->get_layoutGroups_2();
		NullCheck(L_35);
		L_35->set_layoutGroups_2(L_37);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_38 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_39 = V_0;
		NullCheck(L_39);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_40 = L_39->get_windows_3();
		NullCheck(L_38);
		L_38->set_windows_3(L_40);
	}

IL_00e7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Layout_mE876F10FD153DE2038066B29DBC444E4B5A3F88B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_0 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_0);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_1 = L_0->get_topLevel_1();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_windowID_17();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_4 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_4);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_5 = L_4->get_topLevel_1();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_5);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_6 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_6);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_7 = L_6->get_topLevel_1();
		int32_t L_8;
		L_8 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_9;
		L_9 = GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579(/*hidden argument*/NULL);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_10 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_10);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_11 = L_10->get_topLevel_1();
		NullCheck(L_11);
		float L_12 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_11)->get_maxWidth_1();
		float L_13;
		L_13 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)((float)((float)((float)L_8))/(float)L_9)), L_12, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_7, (0.0f), L_13);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_14 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_14);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_15 = L_14->get_topLevel_1();
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_15);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_16 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_16);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_17 = L_16->get_topLevel_1();
		int32_t L_18;
		L_18 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_19;
		L_19 = GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579(/*hidden argument*/NULL);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_20 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_20);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_21 = L_20->get_topLevel_1();
		NullCheck(L_21);
		float L_22 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_21)->get_maxHeight_3();
		float L_23;
		L_23 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)((float)((float)((float)L_18))/(float)L_19)), L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_17, (0.0f), L_23);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_24 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_24);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_25 = L_24->get_windows_3();
		GUILayoutUtility_LayoutFreeGroup_mA1D012DCCE903F07F73360DAF56606EFB093BE64(L_25, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_26 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_26);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_27 = L_26->get_topLevel_1();
		GUILayoutUtility_LayoutSingleGroup_m9114B0CC757F1863A6599A14BF458CD8DBD34F6A(L_27, /*hidden argument*/NULL);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_28 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_28);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_29 = L_28->get_windows_3();
		GUILayoutUtility_LayoutFreeGroup_mA1D012DCCE903F07F73360DAF56606EFB093BE64(L_29, /*hidden argument*/NULL);
	}

IL_00da:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFromEditorWindow_m47384B8E70622B43668E03DA67E8B455694A7005 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10ACE3A0FC4434FF078CBB1C934C7CE2ACEB3EE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_0 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_0);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_1 = L_0->get_topLevel_1();
		V_0 = (bool)((!(((RuntimeObject*)(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0088;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_3 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_3);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_4 = L_3->get_topLevel_1();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_4);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_5 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_5);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_6 = L_5->get_topLevel_1();
		int32_t L_7;
		L_7 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_8;
		L_8 = GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579(/*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_6, (0.0f), ((float)((float)((float)((float)L_7))/(float)L_8)));
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_9 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_9);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_10 = L_9->get_topLevel_1();
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_10);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_11 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_11);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_12 = L_11->get_topLevel_1();
		int32_t L_13;
		L_13 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_14;
		L_14 = GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579(/*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_12, (0.0f), ((float)((float)((float)((float)L_13))/(float)L_14)));
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_15 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_15);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_16 = L_15->get_windows_3();
		GUILayoutUtility_LayoutFreeGroup_mA1D012DCCE903F07F73360DAF56606EFB093BE64(L_16, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0088:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral10ACE3A0FC4434FF078CBB1C934C7CE2ACEB3EE1, /*hidden argument*/NULL);
	}

IL_0095:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFreeGroup_mA1D012DCCE903F07F73360DAF56606EFB093BE64 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * ___toplevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_0 = ___toplevel0;
		NullCheck(L_0);
		List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * L_1 = L_0->get_entries_11();
		NullCheck(L_1);
		Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6  L_2;
		L_2 = List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55(L_1, /*hidden argument*/List_1_GetEnumerator_m6C70E331174505F014792A4A92FF48C8DE2CEB55_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_0010:
		{
			GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * L_3;
			L_3 = Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_inline((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC5F374B72F6D90C7BCA9C2015C533753E7FE8110_RuntimeMethod_var);
			V_1 = ((GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)CastclassClass((RuntimeObject*)L_3, GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var));
			GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_4 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutSingleGroup_m9114B0CC757F1863A6599A14BF458CD8DBD34F6A(L_4, /*hidden argument*/NULL);
		}

IL_0026:
		{
			bool L_5;
			L_5 = Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m6626281C0812D04DDF7B5B6F783E7BD8DCA7F486_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0010;
			}
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56((Enumerator_t904197F3C188DCC906AB50CEC102EF739DA4E9D6 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4178518B95B893FC41AC5A58AD967EB6FFE24C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
	}

IL_0040:
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_6 = ___toplevel0;
		NullCheck(L_6);
		GUILayoutGroup_ResetCursor_m45E547A457E4853D733D875D86424B27BC613F32(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutSingleGroup_m9114B0CC757F1863A6599A14BF458CD8DBD34F6A (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_0 = ___i0;
		NullCheck(L_0);
		bool L_1 = L_0->get_isWindow_16();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007c;
		}
	}
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_3 = ___i0;
		NullCheck(L_3);
		float L_4 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_3)->get_minWidth_0();
		V_1 = L_4;
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_5 = ___i0;
		NullCheck(L_5);
		float L_6 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_5)->get_maxWidth_1();
		V_2 = L_6;
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_7 = ___i0;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_7);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_8 = ___i0;
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_9 = ___i0;
		NullCheck(L_9);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_10 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_9)->get_address_of_rect_4();
		float L_11;
		L_11 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_10, /*hidden argument*/NULL);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_12 = ___i0;
		NullCheck(L_12);
		float L_13 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_12)->get_maxWidth_1();
		float L_14 = V_1;
		float L_15 = V_2;
		float L_16;
		L_16 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_13, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_8, L_11, L_16);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_17 = ___i0;
		NullCheck(L_17);
		float L_18 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_17)->get_minHeight_2();
		V_3 = L_18;
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_19 = ___i0;
		NullCheck(L_19);
		float L_20 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_19)->get_maxHeight_3();
		V_4 = L_20;
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_21 = ___i0;
		NullCheck(L_21);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_21);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_22 = ___i0;
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_23 = ___i0;
		NullCheck(L_23);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_24 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_23)->get_address_of_rect_4();
		float L_25;
		L_25 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_24, /*hidden argument*/NULL);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_26 = ___i0;
		NullCheck(L_26);
		float L_27 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_26)->get_maxHeight_3();
		float L_28 = V_3;
		float L_29 = V_4;
		float L_30;
		L_30 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_27, L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_22, L_25, L_30);
		goto IL_00f7;
	}

IL_007c:
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_31 = ___i0;
		NullCheck(L_31);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_31);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_32 = ___i0;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_windowID_17();
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_34;
		L_34 = GUILayoutUtility_Internal_GetWindowRect_mEDAF013BCAD8976985F1B8DF688CAA038EBE3BD6(L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_35 = ___i0;
		float L_36;
		L_36 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		float L_37;
		L_37 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_38 = ___i0;
		NullCheck(L_38);
		float L_39 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_38)->get_minWidth_0();
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_40 = ___i0;
		NullCheck(L_40);
		float L_41 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_40)->get_maxWidth_1();
		float L_42;
		L_42 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_37, L_39, L_41, /*hidden argument*/NULL);
		NullCheck(L_35);
		VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_35, L_36, L_42);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_43 = ___i0;
		NullCheck(L_43);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_43);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_44 = ___i0;
		float L_45;
		L_45 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		float L_46;
		L_46 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_47 = ___i0;
		NullCheck(L_47);
		float L_48 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_47)->get_minHeight_2();
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_49 = ___i0;
		NullCheck(L_49);
		float L_50 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_49)->get_maxHeight_3();
		float L_51;
		L_51 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_46, L_48, L_50, /*hidden argument*/NULL);
		NullCheck(L_44);
		VirtActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_44, L_45, L_51);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_52 = ___i0;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_windowID_17();
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_54 = ___i0;
		NullCheck(L_54);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_55 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_54)->get_rect_4();
		GUILayoutUtility_Internal_MoveWindow_m7896245CCE0C075879128E3F73E9FDE15B844A65(L_53, L_55, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility__cctor_m1A29C8E503DD8027F79CB7D0D4D7B8672CC07344 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6DB3523BBD242ACAB14BD3365CC45F5AA054EBFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * L_0 = (Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 *)il2cpp_codegen_object_new(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6DB3523BBD242ACAB14BD3365CC45F5AA054EBFA(L_0, /*hidden argument*/Dictionary_2__ctor_m6DB3523BBD242ACAB14BD3365CC45F5AA054EBFA_RuntimeMethod_var);
		((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->set_s_StoredLayouts_0(L_0);
		Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * L_1 = (Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 *)il2cpp_codegen_object_new(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6DB3523BBD242ACAB14BD3365CC45F5AA054EBFA(L_1, /*hidden argument*/Dictionary_2__ctor_m6DB3523BBD242ACAB14BD3365CC45F5AA054EBFA_RuntimeMethod_var);
		((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->set_s_StoredWindows_1(L_1);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_2 = (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 *)il2cpp_codegen_object_new(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m31B20021AD6C02155826BB808C8E243B340022C4(L_2, (-1), /*hidden argument*/NULL);
		((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->set_current_2(L_2);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->set_kDummyRect_3(L_3);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_GetWindowRect_Injected_m7A33DA746412DD081C6F48C7C80F4B01EDB4FBC8 (int32_t ___windowID0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*GUILayoutUtility_Internal_GetWindowRect_Injected_m7A33DA746412DD081C6F48C7C80F4B01EDB4FBC8_ftn) (int32_t, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *);
	static GUILayoutUtility_Internal_GetWindowRect_Injected_m7A33DA746412DD081C6F48C7C80F4B01EDB4FBC8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_GetWindowRect_Injected_m7A33DA746412DD081C6F48C7C80F4B01EDB4FBC8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID0, ___ret1);
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_Injected_m84ED04D182A61B3F09A4E042ECF4074611A2EA73 (int32_t ___windowID0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___r1, const RuntimeMethod* method)
{
	typedef void (*GUILayoutUtility_Internal_MoveWindow_Injected_m84ED04D182A61B3F09A4E042ECF4074611A2EA73_ftn) (int32_t, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *);
	static GUILayoutUtility_Internal_MoveWindow_Injected_m84ED04D182A61B3F09A4E042ECF4074611A2EA73_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_MoveWindow_Injected_m84ED04D182A61B3F09A4E042ECF4074611A2EA73_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID0, ___r1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUIScrollGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup__ctor_mDD7A0FFABA651948BF9CECE7EC203BD054B63164 (GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_allowHorizontalScroll_38((bool)1);
		__this->set_allowVerticalScroll_39((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcWidth_m93475AA8AFE81E5A6C4BDECA4620D431257BC407 (GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		float L_0 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minWidth_0();
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_maxWidth_1();
		V_1 = L_1;
		bool L_2 = __this->get_allowHorizontalScroll_38();
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minWidth_0((0.0f));
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxWidth_1((0.0f));
	}

IL_0031:
	{
		GUILayoutGroup_CalcWidth_m8B77B5F6053C9CBBBA9F79DBEDB58F768121503B(__this, /*hidden argument*/NULL);
		float L_4 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minWidth_0();
		__this->set_calcMinWidth_32(L_4);
		float L_5 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_maxWidth_1();
		__this->set_calcMaxWidth_33(L_5);
		bool L_6 = __this->get_allowHorizontalScroll_38();
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00b3;
		}
	}
	{
		float L_8 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minWidth_0();
		V_4 = (bool)((((float)L_8) > ((float)(32.0f)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minWidth_0((32.0f));
	}

IL_0079:
	{
		float L_10 = V_0;
		V_5 = (bool)((((int32_t)((((float)L_10) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0091;
		}
	}
	{
		float L_12 = V_0;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minWidth_0(L_12);
	}

IL_0091:
	{
		float L_13 = V_1;
		V_6 = (bool)((((int32_t)((((float)L_13) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_00b2;
		}
	}
	{
		float L_15 = V_1;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxWidth_1(L_15);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_stretchWidth_5(0);
	}

IL_00b2:
	{
	}

IL_00b3:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_SetHorizontal_m3C1FB87A7C5A50194BBE9351BCDE887D7EADB89B (GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62 * __this, float ___x0, float ___width1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float G_B3_0 = 0.0f;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = __this->get_needsVerticalScrollbar_41();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		float L_1 = ___width1;
		G_B3_0 = L_1;
		goto IL_002b;
	}

IL_000c:
	{
		float L_2 = ___width1;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3 = __this->get_verticalScrollbar_43();
		NullCheck(L_3);
		float L_4;
		L_4 = GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C(L_3, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5 = __this->get_verticalScrollbar_43();
		NullCheck(L_5);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_6;
		L_6 = GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_6, /*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_4)), (float)((float)((float)L_7))));
	}

IL_002b:
	{
		V_0 = G_B3_0;
		bool L_8 = __this->get_allowHorizontalScroll_38();
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = __this->get_calcMinWidth_32();
		G_B6_0 = ((((float)L_9) < ((float)L_10))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
	}

IL_0040:
	{
		V_1 = (bool)G_B6_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		__this->set_needsHorizontalScrollbar_40((bool)1);
		float L_12 = __this->get_calcMinWidth_32();
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minWidth_0(L_12);
		float L_13 = __this->get_calcMaxWidth_33();
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxWidth_1(L_13);
		float L_14 = ___x0;
		float L_15 = __this->get_calcMinWidth_32();
		GUILayoutGroup_SetHorizontal_mE763CA867BC7D8D17551FED8A999243ED3CB2A4F(__this, L_14, L_15, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_16 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_address_of_rect_4();
		float L_17 = ___width1;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_16, L_17, /*hidden argument*/NULL);
		float L_18 = __this->get_calcMinWidth_32();
		__this->set_clientWidth_36(L_18);
		goto IL_00d8;
	}

IL_008e:
	{
		__this->set_needsHorizontalScrollbar_40((bool)0);
		bool L_19 = __this->get_allowHorizontalScroll_38();
		V_2 = L_19;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		float L_21 = __this->get_calcMinWidth_32();
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minWidth_0(L_21);
		float L_22 = __this->get_calcMaxWidth_33();
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxWidth_1(L_22);
	}

IL_00ba:
	{
		float L_23 = ___x0;
		float L_24 = V_0;
		GUILayoutGroup_SetHorizontal_mE763CA867BC7D8D17551FED8A999243ED3CB2A4F(__this, L_23, L_24, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_25 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_address_of_rect_4();
		float L_26 = ___width1;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_25, L_26, /*hidden argument*/NULL);
		float L_27 = V_0;
		__this->set_clientWidth_36(L_27);
	}

IL_00d8:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcHeight_mC9C00600B3785B9C576702913589A8F65750793F (GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		float L_0 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minHeight_2();
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_maxHeight_3();
		V_1 = L_1;
		bool L_2 = __this->get_allowVerticalScroll_39();
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minHeight_2((0.0f));
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxHeight_3((0.0f));
	}

IL_0031:
	{
		GUILayoutGroup_CalcHeight_m1A56E9FEB2F31B84A08D58CE564C2E4265CB53C1(__this, /*hidden argument*/NULL);
		float L_4 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minHeight_2();
		__this->set_calcMinHeight_34(L_4);
		float L_5 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_maxHeight_3();
		__this->set_calcMaxHeight_35(L_5);
		bool L_6 = __this->get_needsHorizontalScrollbar_40();
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0099;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_8 = __this->get_horizontalScrollbar_42();
		NullCheck(L_8);
		float L_9;
		L_9 = GUIStyle_get_fixedHeight_mE1D2038EB276EEC0FC42A0F08C782569EE2DE865(L_8, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_10 = __this->get_horizontalScrollbar_42();
		NullCheck(L_10);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_11;
		L_11 = GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_11, /*hidden argument*/NULL);
		V_4 = ((float)il2cpp_codegen_add((float)L_9, (float)((float)((float)L_12))));
		float L_13 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minHeight_2();
		float L_14 = V_4;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minHeight_2(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
		float L_15 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_maxHeight_3();
		float L_16 = V_4;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxHeight_3(((float)il2cpp_codegen_add((float)L_15, (float)L_16)));
	}

IL_0099:
	{
		bool L_17 = __this->get_allowVerticalScroll_39();
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00fe;
		}
	}
	{
		float L_19 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minHeight_2();
		V_6 = (bool)((((float)L_19) > ((float)(32.0f)))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00c4;
		}
	}
	{
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minHeight_2((32.0f));
	}

IL_00c4:
	{
		float L_21 = V_0;
		V_7 = (bool)((((int32_t)((((float)L_21) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00dc;
		}
	}
	{
		float L_23 = V_0;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minHeight_2(L_23);
	}

IL_00dc:
	{
		float L_24 = V_1;
		V_8 = (bool)((((int32_t)((((float)L_24) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00fd;
		}
	}
	{
		float L_26 = V_1;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxHeight_3(L_26);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_stretchHeight_6(0);
	}

IL_00fd:
	{
	}

IL_00fe:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_SetVertical_m5EC430106417EEBBCD2258A917FC3CE2CD159725 (GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62 * __this, float ___y0, float ___height1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	{
		float L_0 = ___height1;
		V_0 = L_0;
		bool L_1 = __this->get_needsHorizontalScrollbar_40();
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = V_0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = __this->get_horizontalScrollbar_42();
		NullCheck(L_4);
		float L_5;
		L_5 = GUIStyle_get_fixedHeight_mE1D2038EB276EEC0FC42A0F08C782569EE2DE865(L_4, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = __this->get_horizontalScrollbar_42();
		NullCheck(L_6);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_7;
		L_7 = GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_7, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)((float)il2cpp_codegen_add((float)L_5, (float)((float)((float)L_8))))));
	}

IL_002d:
	{
		bool L_9 = __this->get_allowVerticalScroll_39();
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = __this->get_calcMinHeight_34();
		G_B5_0 = ((((float)L_10) < ((float)L_11))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B5_0 = 0;
	}

IL_0041:
	{
		V_2 = (bool)G_B5_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0151;
		}
	}
	{
		bool L_13 = __this->get_needsHorizontalScrollbar_40();
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		bool L_14 = __this->get_needsVerticalScrollbar_41();
		G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B9_0 = 0;
	}

IL_005d:
	{
		V_5 = (bool)G_B9_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00f1;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_16 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_address_of_rect_4();
		float L_17;
		L_17 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_16, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_18 = __this->get_verticalScrollbar_43();
		NullCheck(L_18);
		float L_19;
		L_19 = GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C(L_18, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_20 = __this->get_verticalScrollbar_43();
		NullCheck(L_20);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_21;
		L_21 = GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_21, /*hidden argument*/NULL);
		__this->set_clientWidth_36(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), (float)((float)((float)L_22)))));
		float L_23 = __this->get_clientWidth_36();
		float L_24 = __this->get_calcMinWidth_32();
		V_7 = (bool)((((float)L_23) < ((float)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00b6;
		}
	}
	{
		float L_26 = __this->get_calcMinWidth_32();
		__this->set_clientWidth_36(L_26);
	}

IL_00b6:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_27 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_address_of_rect_4();
		float L_28;
		L_28 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_29 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_address_of_rect_4();
		float L_30;
		L_30 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_clientWidth_36();
		VirtActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, __this, L_30, L_31);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, __this);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_32 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_address_of_rect_4();
		float L_33 = V_6;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_32, L_33, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		float L_34 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_minHeight_2();
		V_3 = L_34;
		float L_35 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_maxHeight_3();
		V_4 = L_35;
		float L_36 = __this->get_calcMinHeight_34();
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minHeight_2(L_36);
		float L_37 = __this->get_calcMaxHeight_35();
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxHeight_3(L_37);
		float L_38 = ___y0;
		float L_39 = __this->get_calcMinHeight_34();
		GUILayoutGroup_SetVertical_m4D5A3D430B3E9560D052D425DD6A490389CDCDE1(__this, L_38, L_39, /*hidden argument*/NULL);
		float L_40 = V_3;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minHeight_2(L_40);
		float L_41 = V_4;
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxHeight_3(L_41);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_42 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_address_of_rect_4();
		float L_43 = ___height1;
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_42, L_43, /*hidden argument*/NULL);
		float L_44 = __this->get_calcMinHeight_34();
		__this->set_clientHeight_37(L_44);
		goto IL_0196;
	}

IL_0151:
	{
		bool L_45 = __this->get_allowVerticalScroll_39();
		V_8 = L_45;
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_0178;
		}
	}
	{
		float L_47 = __this->get_calcMinHeight_34();
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_minHeight_2(L_47);
		float L_48 = __this->get_calcMaxHeight_35();
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->set_maxHeight_3(L_48);
	}

IL_0178:
	{
		float L_49 = ___y0;
		float L_50 = V_0;
		GUILayoutGroup_SetVertical_m4D5A3D430B3E9560D052D425DD6A490389CDCDE1(__this, L_49, L_50, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_51 = ((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)__this)->get_address_of_rect_4();
		float L_52 = ___height1;
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_51, L_52, /*hidden argument*/NULL);
		float L_53 = V_0;
		__this->set_clientHeight_37(L_53);
	}

IL_0196:
	{
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
// System.Void UnityEngine.GUISettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISettings__ctor_mFF8AA561EEA66B4D8999ECEC496658C9BBF24B1C (GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_DoubleClickSelectsWord_0((bool)1);
		__this->set_m_TripleClickSelectsLine_1((bool)1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_m_CursorColor_2(L_0);
		__this->set_m_CursorFlashSpeed_3((-1.0f));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_1), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_SelectionColor_4(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.GUISkin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin__ctor_m3E0DF4CC7DB927DBDAFB222546DE8CF0511B2F4B (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * L_0 = (GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 *)il2cpp_codegen_object_new(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_il2cpp_TypeInfo_var);
		GUISettings__ctor_mFF8AA561EEA66B4D8999ECEC496658C9BBF24B1C(L_0, /*hidden argument*/NULL);
		__this->set_m_Settings_29(L_0);
		__this->set_m_Styles_31((Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 *)NULL);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* L_1 = (GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70*)(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70*)SZArrayNew(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_CustomStyles_28(L_1);
		return;
	}
}
// System.Void UnityEngine.GUISkin::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_OnEnable_m5DF7AE85502066753893C5367DFA25255E4A8A25 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	{
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::CleanupRoots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_CleanupRoots_m5FFC1B2CF08A222CF34083FF10BC4A94EA10E2E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var))->set_current_33((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *)NULL);
		((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var))->set_ms_Error_30((GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)NULL);
		return;
	}
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * GUISkin_get_font_mDA1B666C2AF47B9523E909FA389F002AFAED7FCF (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * V_0 = NULL;
	{
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_0 = __this->get_m_Font_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_font_mFD210B6A22AA1CF934FB00E7B955A03DF038B74A (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_0 = ___value0;
		__this->set_m_Font_4(L_0);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_1 = ((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var))->get_current_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, __this, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_4 = __this->get_m_Font_4();
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m4C316C5C11BE5C09B36934F23D3694C13022D6C1(L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_box_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_box_m5C0818E1E9AFBCB5153EC87138F73EA45DD8FAC5 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_box_5(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_label_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_label_m022AA145EDFBC817BB7CCD65C2EBBBB0A6AD7B00 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_label_8(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_textField_m67C339C38C9FB3A01D8651F397999157B2AECAC0 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_textField_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_textField_m5A611A1E0D548052ECBF2FCFCF5D0DEC94E70B34 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_textField_9(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_textArea_m8BBC4CC263F64A665B0E8C45A31B4E715758F551 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_textArea_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_textArea_m39B5B5BED610DB3F34BA7B9E5107AEB776443E19 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_textArea_10(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_button_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_button_m4E87B15B79381BDC8BFFEF1B8AF96677AEA48AE8 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_button_6(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_toggle_m118F5C6638F4BA13DA15D7A3DEAB1CE3F19AEEC4 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_toggle_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_toggle_m80B2B1D6CFF8CD6F821AC27DE7B76D2531980AE3 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_toggle_7(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_window_m1D0D746487C1EAA4AD25259F8BFA003BC18B4347 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_window_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_window_mF7D8ADB02919405A87B1E2BFBAFC097B0CEFD1EF (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_window_11(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_horizontalSlider_m5B8CD2A769E0449EB327BFAE376DA85B718B8DCC (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_horizontalSlider_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalSlider_m6B9D78EBFEE7BBA2AC66274D1F6EAF6A2658EA81 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_horizontalSlider_12(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_horizontalSliderThumb_mED15EFDEDDC5AD8473483C7A1DB04BFCFA63137D (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_horizontalSliderThumb_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalSliderThumb_m1DD9172B272C02D690C40250C3F5BFDF9DDB6998 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_horizontalSliderThumb_13(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumbExtent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_horizontalSliderThumbExtent_m07A1B959BFB70DBC252358F9653C7602D148970A (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_horizontalSliderThumbExtent_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumbExtent(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalSliderThumbExtent_m9CDF48CA75C7322C2BE0DF2790C62667273500BE (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_horizontalSliderThumbExtent_14(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_sliderMixed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_sliderMixed_mA7C15FD68247FD1E4814857E4A11656C5F8F7882 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_SliderMixed_18();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_sliderMixed(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_sliderMixed_m1BC13727546E6889C9839A4E75332C7A971DC8B2 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_SliderMixed_18(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_verticalSlider_mF13B44578EB443294934E12F66E28A95D6C942E6 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_verticalSlider_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalSlider_m2C6A10A6B028CF9001B0BE728563F0E471B9F7F5 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_verticalSlider_15(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_verticalSliderThumb_mB9432AD06F93CADB8F3E096CE8AF2ECF4F3C08AC (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_verticalSliderThumb_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalSliderThumb_m20FB935B437B281D56A9CBC530C5558287B05861 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_verticalSliderThumb_16(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumbExtent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_verticalSliderThumbExtent_m3E319761BAD69792186D5ECB122032518D6E3AD2 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_verticalSliderThumbExtent_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumbExtent(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalSliderThumbExtent_m9DCC6DC2AC1B809B05959DB93A185A81D1660DC2 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_verticalSliderThumbExtent_17(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_horizontalScrollbar_mDA59FF09C65D1D578ADC21CD65A1FF283BAF066F (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_horizontalScrollbar_19();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbar_m35441892B0DBA46E967D760FCF3A5C13AEE9BABB (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_horizontalScrollbar_19(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_horizontalScrollbarThumb_mB6482F28F8DA0D4D42F33FF8B17428E2E8E24753 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_horizontalScrollbarThumb_20();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarThumb_m8CD196A3EEAE4F236EC6762BBD820064B335E8A2 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_horizontalScrollbarThumb_20(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_horizontalScrollbarLeftButton_m67E0327768768AFEB02002370F589A9D87D2839E (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_horizontalScrollbarLeftButton_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarLeftButton_mFF7799CE1FA278E5C636E41B4E77EB93CE980FA3 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_horizontalScrollbarLeftButton_21(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_horizontalScrollbarRightButton_m0784C466FEEAF7DD7D3363BA3BF5742C1F59D33C (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_horizontalScrollbarRightButton_22();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarRightButton_m7619A5EB24468FB19B22A969E007EBC85A16FB86 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_horizontalScrollbarRightButton_22(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_verticalScrollbar_m790AE20B23ACC9D3EF957C4799CD9DBD7FCA461C (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_verticalScrollbar_23();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbar_m891FE011CAC6970FE6C930A516080CCE1465BC76 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_verticalScrollbar_23(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_verticalScrollbarThumb_m3846AB0AD7791ED6C1FAA04B557B2EBB8116E57E (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_verticalScrollbarThumb_24();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarThumb_m563CB1B5E9D53EDBA30529996201F359306D5F64 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_verticalScrollbarThumb_24(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_verticalScrollbarUpButton_m68A56EB158C3CFACABF3727321807C66C877050B (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_verticalScrollbarUpButton_25();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarUpButton_m574AF6730F43902B24DAC412CAA3A07F2D0B487F (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_verticalScrollbarUpButton_25(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_verticalScrollbarDownButton_m231991196D2A5A6E5BF4930327179322C96EEA54 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_verticalScrollbarDownButton_26();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarDownButton_m6B9773AD40BE6C0EE6EA7B831044CC511AD59DA5 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_verticalScrollbarDownButton_26(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_scrollView_m5E2F227BBF34402AC1B739855633DD56BD01407E (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_ScrollView_27();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_scrollView_mB2D667FD3806B21A8AE9FC6C4F0C3E1FB8332CCD (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method)
{
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___value0;
		__this->set_m_ScrollView_27(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* GUISkin_get_customStyles_m7533AB8E823E8973E564867E88251F6B09F834CB (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* V_0 = NULL;
	{
		GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* L_0 = __this->get_m_CustomStyles_28();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_customStyles_mC8B5299CA1A2FAB7A26D9830F0774FDC9F2B7949 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___value0, const RuntimeMethod* method)
{
	{
		GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* L_0 = ___value0;
		__this->set_m_CustomStyles_28(L_0);
		GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * GUISkin_get_settings_m10680CA935A2122970FF245119CB9D428B4920E8 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * V_0 = NULL;
	{
		GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * L_0 = __this->get_m_Settings_29();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_error_m776812DEB6A65D35AE7217780D7D0D8058E3A3B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FCA7CBE61ADC605F9F35C467CFE5D765D935400);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_1 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var))->get_ms_Error_30();
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_2, /*hidden argument*/NULL);
		((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var))->set_ms_Error_30(L_2);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3 = ((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var))->get_ms_Error_30();
		NullCheck(L_3);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_3, _stringLiteral5FCA7CBE61ADC605F9F35C467CFE5D765D935400, /*hidden argument*/NULL);
	}

IL_0029:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = ((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var))->get_ms_Error_30();
		V_1 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.GUISkin::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_Apply_m8BEB9B0E40092883F9B3ECB8822F7802689E882C (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74DA73DF8411070FEB987DE79D4529EE39FB3D96);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* L_0 = __this->get_m_CustomStyles_28();
		V_0 = (bool)((((RuntimeObject*)(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral74DA73DF8411070FEB987DE79D4529EE39FB3D96, /*hidden argument*/NULL);
	}

IL_0019:
	{
		GUISkin_BuildStyleCache_m68834C4D2E821414ED9BDFD74607F068B281258F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::BuildStyleCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_BuildStyleCache_m68834C4D2E821414ED9BDFD74607F068B281258F (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCA640516AD4AE648ED6E0BF71A5A2117E3BC77D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CF9CF5853B675491570E9D20951E373F208902);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6866F44FE25F48E7BF04C35DA2F4C670D2021A33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB31A5E45A7336CF4E926743AF852C59783F5D947);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_box_5();
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_2, /*hidden argument*/NULL);
		__this->set_m_box_5(L_2);
	}

IL_0019:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3 = __this->get_m_button_6();
		V_1 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_5, /*hidden argument*/NULL);
		__this->set_m_button_6(L_5);
	}

IL_0031:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = __this->get_m_toggle_7();
		V_2 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_8 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_8, /*hidden argument*/NULL);
		__this->set_m_toggle_7(L_8);
	}

IL_0049:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_9 = __this->get_m_label_8();
		V_3 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_9) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_11 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_11, /*hidden argument*/NULL);
		__this->set_m_label_8(L_11);
	}

IL_0061:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_12 = __this->get_m_window_11();
		V_4 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_12) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_14 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_14, /*hidden argument*/NULL);
		__this->set_m_window_11(L_14);
	}

IL_007b:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_15 = __this->get_m_textField_9();
		V_5 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_15) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0095;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_17 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_17, /*hidden argument*/NULL);
		__this->set_m_textField_9(L_17);
	}

IL_0095:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_18 = __this->get_m_textArea_10();
		V_6 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_18) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00af;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_20 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_20, /*hidden argument*/NULL);
		__this->set_m_textArea_10(L_20);
	}

IL_00af:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_21 = __this->get_m_horizontalSlider_12();
		V_7 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_21) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00c9;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_23 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_23, /*hidden argument*/NULL);
		__this->set_m_horizontalSlider_12(L_23);
	}

IL_00c9:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_24 = __this->get_m_horizontalSliderThumb_13();
		V_8 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_24) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00e3;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_26 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_26, /*hidden argument*/NULL);
		__this->set_m_horizontalSliderThumb_13(L_26);
	}

IL_00e3:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_27 = __this->get_m_verticalSlider_15();
		V_9 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_27) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_00fd;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_29 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_29, /*hidden argument*/NULL);
		__this->set_m_verticalSlider_15(L_29);
	}

IL_00fd:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_30 = __this->get_m_verticalSliderThumb_16();
		V_10 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_30) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_0117;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_32 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_32, /*hidden argument*/NULL);
		__this->set_m_verticalSliderThumb_16(L_32);
	}

IL_0117:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_33 = __this->get_m_horizontalScrollbar_19();
		V_11 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_33) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0131;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_35 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_35, /*hidden argument*/NULL);
		__this->set_m_horizontalScrollbar_19(L_35);
	}

IL_0131:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_36 = __this->get_m_horizontalScrollbarThumb_20();
		V_12 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_36) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_014b;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_38 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_38, /*hidden argument*/NULL);
		__this->set_m_horizontalScrollbarThumb_20(L_38);
	}

IL_014b:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_39 = __this->get_m_horizontalScrollbarLeftButton_21();
		V_13 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_39) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_40 = V_13;
		if (!L_40)
		{
			goto IL_0165;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_41 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_41, /*hidden argument*/NULL);
		__this->set_m_horizontalScrollbarLeftButton_21(L_41);
	}

IL_0165:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_42 = __this->get_m_horizontalScrollbarRightButton_22();
		V_14 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_42) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_43 = V_14;
		if (!L_43)
		{
			goto IL_017f;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_44 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_44, /*hidden argument*/NULL);
		__this->set_m_horizontalScrollbarRightButton_22(L_44);
	}

IL_017f:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_45 = __this->get_m_verticalScrollbar_23();
		V_15 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_45) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_46 = V_15;
		if (!L_46)
		{
			goto IL_0199;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_47 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_47, /*hidden argument*/NULL);
		__this->set_m_verticalScrollbar_23(L_47);
	}

IL_0199:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_48 = __this->get_m_verticalScrollbarThumb_24();
		V_16 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_48) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_49 = V_16;
		if (!L_49)
		{
			goto IL_01b3;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_50 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_50, /*hidden argument*/NULL);
		__this->set_m_verticalScrollbarThumb_24(L_50);
	}

IL_01b3:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_51 = __this->get_m_verticalScrollbarUpButton_25();
		V_17 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_51) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_52 = V_17;
		if (!L_52)
		{
			goto IL_01cd;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_53 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_53, /*hidden argument*/NULL);
		__this->set_m_verticalScrollbarUpButton_25(L_53);
	}

IL_01cd:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_54 = __this->get_m_verticalScrollbarDownButton_26();
		V_18 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_54) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_55 = V_18;
		if (!L_55)
		{
			goto IL_01e7;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_56 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_56, /*hidden argument*/NULL);
		__this->set_m_verticalScrollbarDownButton_26(L_56);
	}

IL_01e7:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_57 = __this->get_m_ScrollView_27();
		V_19 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_57) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_58 = V_19;
		if (!L_58)
		{
			goto IL_0201;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_59 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_59, /*hidden argument*/NULL);
		__this->set_m_ScrollView_27(L_59);
	}

IL_0201:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_60;
		L_60 = StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline(/*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_61 = (Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 *)il2cpp_codegen_object_new(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA640516AD4AE648ED6E0BF71A5A2117E3BC77D2(L_61, L_60, /*hidden argument*/Dictionary_2__ctor_mCA640516AD4AE648ED6E0BF71A5A2117E3BC77D2_RuntimeMethod_var);
		__this->set_m_Styles_31(L_61);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_62 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_63 = __this->get_m_box_5();
		NullCheck(L_62);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_62, _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, L_63, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_64 = __this->get_m_box_5();
		NullCheck(L_64);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_64, _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_65 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_66 = __this->get_m_button_6();
		NullCheck(L_65);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_65, _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654, L_66, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_67 = __this->get_m_button_6();
		NullCheck(L_67);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_67, _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_68 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_69 = __this->get_m_toggle_7();
		NullCheck(L_68);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_68, _stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957, L_69, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_70 = __this->get_m_toggle_7();
		NullCheck(L_70);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_70, _stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_71 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_72 = __this->get_m_label_8();
		NullCheck(L_71);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_71, _stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE, L_72, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_73 = __this->get_m_label_8();
		NullCheck(L_73);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_73, _stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_74 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_75 = __this->get_m_window_11();
		NullCheck(L_74);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_74, _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA, L_75, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_76 = __this->get_m_window_11();
		NullCheck(L_76);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_76, _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_77 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_78 = __this->get_m_textField_9();
		NullCheck(L_77);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_77, _stringLiteral05CF9CF5853B675491570E9D20951E373F208902, L_78, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_79 = __this->get_m_textField_9();
		NullCheck(L_79);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_79, _stringLiteral05CF9CF5853B675491570E9D20951E373F208902, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_80 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_81 = __this->get_m_textArea_10();
		NullCheck(L_80);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_80, _stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C, L_81, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_82 = __this->get_m_textArea_10();
		NullCheck(L_82);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_82, _stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_83 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_84 = __this->get_m_horizontalSlider_12();
		NullCheck(L_83);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_83, _stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF, L_84, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_85 = __this->get_m_horizontalSlider_12();
		NullCheck(L_85);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_85, _stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_86 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_87 = __this->get_m_horizontalSliderThumb_13();
		NullCheck(L_86);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_86, _stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1, L_87, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_88 = __this->get_m_horizontalSliderThumb_13();
		NullCheck(L_88);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_88, _stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_89 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_90 = __this->get_m_verticalSlider_15();
		NullCheck(L_89);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_89, _stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149, L_90, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_91 = __this->get_m_verticalSlider_15();
		NullCheck(L_91);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_91, _stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_92 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_93 = __this->get_m_verticalSliderThumb_16();
		NullCheck(L_92);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_92, _stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5, L_93, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_94 = __this->get_m_verticalSliderThumb_16();
		NullCheck(L_94);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_94, _stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_95 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_96 = __this->get_m_horizontalScrollbar_19();
		NullCheck(L_95);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_95, _stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB, L_96, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_97 = __this->get_m_horizontalScrollbar_19();
		NullCheck(L_97);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_97, _stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_98 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_99 = __this->get_m_horizontalScrollbarThumb_20();
		NullCheck(L_98);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_98, _stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766, L_99, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_100 = __this->get_m_horizontalScrollbarThumb_20();
		NullCheck(L_100);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_100, _stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_101 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_102 = __this->get_m_horizontalScrollbarLeftButton_21();
		NullCheck(L_101);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_101, _stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D, L_102, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_103 = __this->get_m_horizontalScrollbarLeftButton_21();
		NullCheck(L_103);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_103, _stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_104 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_105 = __this->get_m_horizontalScrollbarRightButton_22();
		NullCheck(L_104);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_104, _stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722, L_105, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_106 = __this->get_m_horizontalScrollbarRightButton_22();
		NullCheck(L_106);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_106, _stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_107 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_108 = __this->get_m_verticalScrollbar_23();
		NullCheck(L_107);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_107, _stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7, L_108, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_109 = __this->get_m_verticalScrollbar_23();
		NullCheck(L_109);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_109, _stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_110 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_111 = __this->get_m_verticalScrollbarThumb_24();
		NullCheck(L_110);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_110, _stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3, L_111, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_112 = __this->get_m_verticalScrollbarThumb_24();
		NullCheck(L_112);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_112, _stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_113 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_114 = __this->get_m_verticalScrollbarUpButton_25();
		NullCheck(L_113);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_113, _stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E, L_114, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_115 = __this->get_m_verticalScrollbarUpButton_25();
		NullCheck(L_115);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_115, _stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_116 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_117 = __this->get_m_verticalScrollbarDownButton_26();
		NullCheck(L_116);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_116, _stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D, L_117, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_118 = __this->get_m_verticalScrollbarDownButton_26();
		NullCheck(L_118);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_118, _stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_119 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_120 = __this->get_m_ScrollView_27();
		NullCheck(L_119);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_119, _stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0, L_120, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_121 = __this->get_m_ScrollView_27();
		NullCheck(L_121);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_121, _stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0, /*hidden argument*/NULL);
		GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* L_122 = __this->get_m_CustomStyles_28();
		V_20 = (bool)((!(((RuntimeObject*)(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70*)L_122) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_123 = V_20;
		if (!L_123)
		{
			goto IL_0598;
		}
	}
	{
		V_21 = 0;
		goto IL_0585;
	}

IL_0546:
	{
		GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* L_124 = __this->get_m_CustomStyles_28();
		int32_t L_125 = V_21;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		V_22 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_127) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_128 = V_22;
		if (!L_128)
		{
			goto IL_055b;
		}
	}
	{
		goto IL_057f;
	}

IL_055b:
	{
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_129 = __this->get_m_Styles_31();
		GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* L_130 = __this->get_m_CustomStyles_28();
		int32_t L_131 = V_21;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_133);
		String_t* L_134;
		L_134 = GUIStyle_get_name_mDC1371698EB6B92D459AA165EFFE5983711C4BB6(L_133, /*hidden argument*/NULL);
		GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* L_135 = __this->get_m_CustomStyles_28();
		int32_t L_136 = V_21;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_129);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_129, L_134, L_138, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
	}

IL_057f:
	{
		int32_t L_139 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
	}

IL_0585:
	{
		int32_t L_140 = V_21;
		GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* L_141 = __this->get_m_CustomStyles_28();
		NullCheck(L_141);
		V_23 = (bool)((((int32_t)L_140) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_141)->max_length)))))? 1 : 0);
		bool L_142 = V_23;
		if (L_142)
		{
			goto IL_0546;
		}
	}
	{
	}

IL_0598:
	{
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_143 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** L_144 = __this->get_address_of_m_horizontalSliderThumbExtent_14();
		NullCheck(L_143);
		bool L_145;
		L_145 = Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697(L_143, _stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C, (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 **)L_144, /*hidden argument*/Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697_RuntimeMethod_var);
		V_24 = (bool)((((int32_t)L_145) == ((int32_t)0))? 1 : 0);
		bool L_146 = V_24;
		if (!L_146)
		{
			goto IL_05ec;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_147 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_147, /*hidden argument*/NULL);
		__this->set_m_horizontalSliderThumbExtent_14(L_147);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_148 = __this->get_m_horizontalSliderThumbExtent_14();
		NullCheck(L_148);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_148, _stringLiteral6866F44FE25F48E7BF04C35DA2F4C670D2021A33, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_149 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_150 = __this->get_m_horizontalSliderThumbExtent_14();
		NullCheck(L_149);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_149, _stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C, L_150, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
	}

IL_05ec:
	{
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_151 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** L_152 = __this->get_address_of_m_SliderMixed_18();
		NullCheck(L_151);
		bool L_153;
		L_153 = Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697(L_151, _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362, (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 **)L_152, /*hidden argument*/Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697_RuntimeMethod_var);
		V_25 = (bool)((((int32_t)L_153) == ((int32_t)0))? 1 : 0);
		bool L_154 = V_25;
		if (!L_154)
		{
			goto IL_0640;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_155 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_155, /*hidden argument*/NULL);
		__this->set_m_SliderMixed_18(L_155);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_156 = __this->get_m_SliderMixed_18();
		NullCheck(L_156);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_156, _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362, /*hidden argument*/NULL);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_157 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_158 = __this->get_m_SliderMixed_18();
		NullCheck(L_157);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_157, _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362, L_158, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
	}

IL_0640:
	{
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_159 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** L_160 = __this->get_address_of_m_verticalSliderThumbExtent_17();
		NullCheck(L_159);
		bool L_161;
		L_161 = Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697(L_159, _stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2, (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 **)L_160, /*hidden argument*/Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697_RuntimeMethod_var);
		V_26 = (bool)((((int32_t)L_161) == ((int32_t)0))? 1 : 0);
		bool L_162 = V_26;
		if (!L_162)
		{
			goto IL_0694;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_163 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_163, /*hidden argument*/NULL);
		__this->set_m_verticalSliderThumbExtent_17(L_163);
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_164 = __this->get_m_Styles_31();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_165 = __this->get_m_verticalSliderThumbExtent_17();
		NullCheck(L_164);
		Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7(L_164, _stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2, L_165, /*hidden argument*/Dictionary_2_set_Item_mDA74F03BD986E7EF4B12F4878094112C7B9567F7_RuntimeMethod_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_166 = __this->get_m_verticalSliderThumbExtent_17();
		NullCheck(L_166);
		GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5(L_166, _stringLiteralB31A5E45A7336CF4E926743AF852C59783F5D947, /*hidden argument*/NULL);
	}

IL_0694:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_167;
		L_167 = GUISkin_get_error_m776812DEB6A65D35AE7217780D7D0D8058E3A3B5(/*hidden argument*/NULL);
		NullCheck(L_167);
		GUIStyle_set_stretchHeight_m36BB4A41AB08DF3286CB928688C6C4907134DEA9(L_167, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_168;
		L_168 = GUISkin_get_error_m776812DEB6A65D35AE7217780D7D0D8058E3A3B5(/*hidden argument*/NULL);
		NullCheck(L_168);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_169;
		L_169 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_168, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_170;
		L_170 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_169);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_169, L_170, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_GetStyle_m9E4D3C8C29B12DAEC9D521277BE3CA490A7C2ADC (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, String_t* ___styleName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral123B2E5CFC7B5F49F61A9A7E042BC077972AB7EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	bool V_1 = false;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t G_B4_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	{
		String_t* L_0 = ___styleName0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1;
		L_1 = GUISkin_FindStyle_m58E9077ABC7E89E75CB9074E6FE2EEEDF0C5286C(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = V_0;
		V_2 = L_4;
		goto IL_007c;
	}

IL_0015:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = ___styleName0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		String_t* L_11;
		L_11 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_14;
		L_14 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		G_B3_0 = 5;
		G_B3_1 = L_13;
		G_B3_2 = L_13;
		if (L_14)
		{
			G_B4_0 = 5;
			G_B4_1 = L_13;
			G_B4_2 = L_13;
			goto IL_0050;
		}
	}
	{
		G_B5_0 = _stringLiteral123B2E5CFC7B5F49F61A9A7E042BC077972AB7EA;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0068;
	}

IL_0050:
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_15;
		L_15 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		RuntimeObject * L_17 = Box(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		V_3 = *(int32_t*)UnBox(L_17);
		G_B5_0 = L_18;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0068:
	{
		NullCheck(G_B5_2);
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		String_t* L_19;
		L_19 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B5_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_19, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_20;
		L_20 = GUISkin_get_error_m776812DEB6A65D35AE7217780D7D0D8058E3A3B5(/*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_007c;
	}

IL_007c:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_21 = V_2;
		return L_21;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_FindStyle_m58E9077ABC7E89E75CB9074E6FE2EEEDF0C5286C (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, String_t* ___styleName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_3 = NULL;
	{
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_0 = __this->get_m_Styles_31();
		V_1 = (bool)((((RuntimeObject*)(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		GUISkin_BuildStyleCache_m68834C4D2E821414ED9BDFD74607F068B281258F(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_2 = __this->get_m_Styles_31();
		String_t* L_3 = ___styleName0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697(L_2, L_3, (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m71B14182450A0554B8239E6FF84138C16071E697_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = V_0;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002b:
	{
		V_3 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)NULL;
		goto IL_002f;
	}

IL_002f:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_7 = V_3;
		return L_7;
	}
}
// System.Void UnityEngine.GUISkin::MakeCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_MakeCurrent_mB668146FC9D42C40D6555936A1C88831014356E2 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var))->set_current_33(__this);
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_0;
		L_0 = GUISkin_get_font_mDA1B666C2AF47B9523E909FA389F002AFAED7FCF(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m4C316C5C11BE5C09B36934F23D3694C13022D6C1(L_0, /*hidden argument*/NULL);
		SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * L_1 = ((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var))->get_m_SkinChanged_32();
		V_0 = (bool)((!(((RuntimeObject*)(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * L_3 = ((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var))->get_m_SkinChanged_32();
		NullCheck(L_3);
		SkinChangedDelegate_Invoke_m5FEBFA0F8E80B0745121ECB1C59C9E0EF595CC3C(L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUISkin_GetEnumerator_mA33DC06CDAC0F083FF25E5B144DDD445AC68ABFB (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mBED7C7FA2A970F18F12B7076F0FECD8BAEBEF781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mB96B97C06F335F7DFB78C412185D7779A25DA4CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_0 = __this->get_m_Styles_31();
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		GUISkin_BuildStyleCache_m68834C4D2E821414ED9BDFD74607F068B281258F(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * L_2 = __this->get_m_Styles_31();
		NullCheck(L_2);
		ValueCollection_t312A7AF0FDAD31430764A7529F07B6E5D558AA40 * L_3;
		L_3 = Dictionary_2_get_Values_mBED7C7FA2A970F18F12B7076F0FECD8BAEBEF781(L_2, /*hidden argument*/Dictionary_2_get_Values_mBED7C7FA2A970F18F12B7076F0FECD8BAEBEF781_RuntimeMethod_var);
		NullCheck(L_3);
		Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC  L_4;
		L_4 = ValueCollection_GetEnumerator_mB96B97C06F335F7DFB78C412185D7779A25DA4CE(L_3, /*hidden argument*/ValueCollection_GetEnumerator_mB96B97C06F335F7DFB78C412185D7779A25DA4CE_RuntimeMethod_var);
		Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC  L_5 = L_4;
		RuntimeObject * L_6 = Box(Enumerator_tACC48965650F51A91F54D133900EA79A915D05AC_il2cpp_TypeInfo_var, &L_5);
		V_1 = (RuntimeObject*)L_6;
		goto IL_002d;
	}

IL_002d:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
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
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_back(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke& marshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_cleanup(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke& marshaled)
{
}
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_com(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_com_back(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com& marshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_com_cleanup(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com& marshaled)
{
}
// System.String UnityEngine.GUIStyle::get_rawName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_rawName_m1295BFC75B2924BEB81140B9476E5B97340A1713 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*GUIStyle_get_rawName_m1295BFC75B2924BEB81140B9476E5B97340A1713_ftn) (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *);
	static GUIStyle_get_rawName_m1295BFC75B2924BEB81140B9476E5B97340A1713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_rawName_m1295BFC75B2924BEB81140B9476E5B97340A1713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_rawName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_rawName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_rawName_mFE7CE77C7654A7B1D68DDB557801C9D33896BDF1 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_set_rawName_mFE7CE77C7654A7B1D68DDB557801C9D33896BDF1_ftn) (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *, String_t*);
	static GUIStyle_set_rawName_mFE7CE77C7654A7B1D68DDB557801C9D33896BDF1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_rawName_mFE7CE77C7654A7B1D68DDB557801C9D33896BDF1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_rawName(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	typedef float (*GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C_ftn) (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *);
	static GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_mE1D2038EB276EEC0FC42A0F08C782569EE2DE865 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	typedef float (*GUIStyle_get_fixedHeight_mE1D2038EB276EEC0FC42A0F08C782569EE2DE865_ftn) (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *);
	static GUIStyle_get_fixedHeight_mE1D2038EB276EEC0FC42A0F08C782569EE2DE865_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_mE1D2038EB276EEC0FC42A0F08C782569EE2DE865_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m171F3A526E7FD0EB2FEF742F2BE125A72808A837 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	typedef bool (*GUIStyle_get_stretchWidth_m171F3A526E7FD0EB2FEF742F2BE125A72808A837_ftn) (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *);
	static GUIStyle_get_stretchWidth_m171F3A526E7FD0EB2FEF742F2BE125A72808A837_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m171F3A526E7FD0EB2FEF742F2BE125A72808A837_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_mB249B43773569736BF1D1014F890484B17A96BE4 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	typedef bool (*GUIStyle_get_stretchHeight_mB249B43773569736BF1D1014F890484B17A96BE4_ftn) (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *);
	static GUIStyle_get_stretchHeight_mB249B43773569736BF1D1014F890484B17A96BE4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_mB249B43773569736BF1D1014F890484B17A96BE4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_stretchHeight_m36BB4A41AB08DF3286CB928688C6C4907134DEA9 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_set_stretchHeight_m36BB4A41AB08DF3286CB928688C6C4907134DEA9_ftn) (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *, bool);
	static GUIStyle_set_stretchHeight_m36BB4A41AB08DF3286CB928688C6C4907134DEA9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_m36BB4A41AB08DF3286CB928688C6C4907134DEA9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m1A826DEC0513F9B9C7E5C67D02D24BEA33783686 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___self0, const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyle_Internal_Create_m1A826DEC0513F9B9C7E5C67D02D24BEA33783686_ftn) (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *);
	static GUIStyle_Internal_Create_m1A826DEC0513F9B9C7E5C67D02D24BEA33783686_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Create_m1A826DEC0513F9B9C7E5C67D02D24BEA33783686_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)");
	intptr_t icallRetVal = _il2cpp_icall_func(___self0);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_m51A33779ABE8BAF80E5F975F9F5AE8D960CB4EE8 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_Internal_Destroy_m51A33779ABE8BAF80E5F975F9F5AE8D960CB4EE8_ftn) (intptr_t);
	static GUIStyle_Internal_Destroy_m51A33779ABE8BAF80E5F975F9F5AE8D960CB4EE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Destroy_m51A33779ABE8BAF80E5F975F9F5AE8D960CB4EE8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_mB1EEFB0E08D242D2B10272B5F2A78B23551E012E (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyle_GetStyleStatePtr_mB1EEFB0E08D242D2B10272B5F2A78B23551E012E_ftn) (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *, int32_t);
	static GUIStyle_GetStyleStatePtr_mB1EEFB0E08D242D2B10272B5F2A78B23551E012E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_mB1EEFB0E08D242D2B10272B5F2A78B23551E012E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(__this, ___idx0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_mD3E24C1578BB69007E729CC624D264E1CD21D06A (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyle_GetRectOffsetPtr_mD3E24C1578BB69007E729CC624D264E1CD21D06A_ftn) (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *, int32_t);
	static GUIStyle_GetRectOffsetPtr_mD3E24C1578BB69007E729CC624D264E1CD21D06A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_mD3E24C1578BB69007E729CC624D264E1CD21D06A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(__this, ___idx0);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_m4C316C5C11BE5C09B36934F23D3694C13022D6C1 (Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___font0, const RuntimeMethod* method)
{
	typedef void (*GUIStyle_SetDefaultFont_m4C316C5C11BE5C09B36934F23D3694C13022D6C1_ftn) (Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 *);
	static GUIStyle_SetDefaultFont_m4C316C5C11BE5C09B36934F23D3694C13022D6C1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_m4C316C5C11BE5C09B36934F23D3694C13022D6C1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___font0);
}
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = GUIStyle_Internal_Create_m1A826DEC0513F9B9C7E5C67D02D24BEA33783686(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Finalize_m8FE33DAF2928CEDFE7DA82B5D95251C3FCB30ACC (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Ptr_0();
			bool L_1;
			L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			V_0 = L_1;
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_002f;
			}
		}

IL_0016:
		{
			intptr_t L_3 = __this->get_m_Ptr_0();
			IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
			GUIStyle_Internal_Destroy_m51A33779ABE8BAF80E5F975F9F5AE8D960CB4EE8((intptr_t)L_3, /*hidden argument*/NULL);
			__this->set_m_Ptr_0((intptr_t)(0));
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x39, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		return;
	}
}
// System.String UnityEngine.GUIStyle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_mDC1371698EB6B92D459AA165EFFE5983711C4BB6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Name_13();
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001a;
		}
	}
	{
		String_t* L_2;
		L_2 = GUIStyle_get_rawName_m1295BFC75B2924BEB81140B9476E5B97340A1713(__this, /*hidden argument*/NULL);
		String_t* L_3 = L_2;
		V_0 = L_3;
		__this->set_m_Name_13(L_3);
		String_t* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001a:
	{
		V_1 = G_B2_0;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_name_m8CC2C59EC03B61F7BC8E4276B509ACCE772C7AA5 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_Name_13(L_0);
		String_t* L_1 = ___value0;
		GUIStyle_set_rawName_mFE7CE77C7654A7B1D68DDB557801C9D33896BDF1(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * V_0 = NULL;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * V_1 = NULL;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * G_B2_0 = NULL;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * G_B1_0 = NULL;
	{
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_0 = __this->get_m_Normal_1();
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetStyleStatePtr_mB1EEFB0E08D242D2B10272B5F2A78B23551E012E(__this, 0, /*hidden argument*/NULL);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_3;
		L_3 = GUIStyleState_GetGUIStyleState_mE8758CDE0E9E627ECDE92F60509A19B91922964C(__this, (intptr_t)L_2, /*hidden argument*/NULL);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_4 = L_3;
		V_0 = L_4;
		__this->set_m_Normal_1(L_4);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * V_0 = NULL;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * V_1 = NULL;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * G_B2_0 = NULL;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * G_B1_0 = NULL;
	{
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_0 = __this->get_m_Margin_11();
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mD3E24C1578BB69007E729CC624D264E1CD21D06A(__this, 1, /*hidden argument*/NULL);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_3 = (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 *)il2cpp_codegen_object_new(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var);
		RectOffset__ctor_mA519A9F678D6B88731C3F6A67E0DA9092A4596D4(L_3, __this, (intptr_t)L_2, /*hidden argument*/NULL);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_4 = L_3;
		V_0 = L_4;
		__this->set_m_Margin_11(L_4);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * V_0 = NULL;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * V_1 = NULL;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * G_B2_0 = NULL;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * G_B1_0 = NULL;
	{
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_0 = __this->get_m_Padding_10();
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mD3E24C1578BB69007E729CC624D264E1CD21D06A(__this, 2, /*hidden argument*/NULL);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_3 = (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 *)il2cpp_codegen_object_new(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var);
		RectOffset__ctor_mA519A9F678D6B88731C3F6A67E0DA9092A4596D4(L_3, __this, (intptr_t)L_2, /*hidden argument*/NULL);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_4 = L_3;
		V_0 = L_4;
		__this->set_m_Padding_10(L_4);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * G_B2_0 = NULL;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ((GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var))->get_s_None_15();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_2, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		((GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var))->set_s_None_15(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// System.String UnityEngine.GUIStyle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_ToString_mD76BC8FD1791793D427C90D190301A1A3FD5A288 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2;
		L_2 = GUIStyle_get_name_mDC1371698EB6B92D459AA165EFFE5983711C4BB6(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		String_t* L_3;
		L_3 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__cctor_mB6ECD2FB21FFBFBB0E7AC9A49A03560E20007B80 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var))->set_showKeyboardFocus_14((bool)1);
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


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke(const GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9& unmarshaled, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_back(const GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke& marshaled, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_pinvoke_cleanup(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_com(const GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9& unmarshaled, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_com_back(const GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com& marshaled, GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshal_com_cleanup(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		GUIStyleState_set_textColor_Injected_mA4161E4AAAE12F40C7F1B937F2DDCAB1D81E221F(__this, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.GUIStyleState::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_mDC103756AA527283D4D171277702A78211BE6392 (const RuntimeMethod* method)
{
	typedef intptr_t (*GUIStyleState_Init_mDC103756AA527283D4D171277702A78211BE6392_ftn) ();
	static GUIStyleState_Init_mDC103756AA527283D4D171277702A78211BE6392_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_mDC103756AA527283D4D171277702A78211BE6392_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_m811DBCF744DEC31303381BA28AD292209260C446 (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, const RuntimeMethod* method)
{
	typedef void (*GUIStyleState_Cleanup_m811DBCF744DEC31303381BA28AD292209260C446_ftn) (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 *);
	static GUIStyleState_Cleanup_m811DBCF744DEC31303381BA28AD292209260C446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_m811DBCF744DEC31303381BA28AD292209260C446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_mA3A7EEABCD874B29FE0014784D81D77D74262E56 (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0;
		L_0 = GUIStyleState_Init_mDC103756AA527283D4D171277702A78211BE6392(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_mF5B23C65DA81DA85EAE2F148C549ECE0007F1652 (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___sourceStyle0;
		__this->set_m_SourceStyle_1(L_0);
		intptr_t L_1 = ___source1;
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyleState_GetGUIStyleState_mE8758CDE0E9E627ECDE92F60509A19B91922964C (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * V_0 = NULL;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * V_1 = NULL;
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___sourceStyle0;
		intptr_t L_1 = ___source1;
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_2 = (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 *)il2cpp_codegen_object_new(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_il2cpp_TypeInfo_var);
		GUIStyleState__ctor_mF5B23C65DA81DA85EAE2F148C549ECE0007F1652(L_2, L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_3 = V_0;
		V_1 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Finalize_m2C59477659BC41A85FC7AE4DBB124294C94BE9B1 (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = __this->get_m_SourceStyle_1();
			V_0 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_0023;
			}
		}

IL_000f:
		{
			GUIStyleState_Cleanup_m811DBCF744DEC31303381BA28AD292209260C446(__this, /*hidden argument*/NULL);
			__this->set_m_Ptr_0((intptr_t)(0));
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x2D, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_mA4161E4AAAE12F40C7F1B937F2DDCAB1D81E221F (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIStyleState_set_textColor_Injected_mA4161E4AAAE12F40C7F1B937F2DDCAB1D81E221F_ftn) (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *);
	static GUIStyleState_set_textColor_Injected_mA4161E4AAAE12F40C7F1B937F2DDCAB1D81E221F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_set_textColor_Injected_mA4161E4AAAE12F40C7F1B937F2DDCAB1D81E221F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.GUITargetAttribute::GetGUITargetAttrValue(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUITargetAttribute_GetGUITargetAttrValue_mCC2254E894729E2DDFAB25D9FC26CD4913E8ADC2 (Type_t * ___klass0, String_t* ___methodName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C * V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		Type_t * L_0 = ___klass0;
		String_t* L_1 = ___methodName1;
		NullCheck(L_0);
		MethodInfo_t * L_2;
		L_2 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_0, L_1, ((int32_t)52), /*hidden argument*/NULL);
		V_0 = L_2;
		MethodInfo_t * L_3 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(MethodInfo_t *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		MethodInfo_t * L_5 = V_0;
		NullCheck(L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6;
		L_6 = VirtFuncInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, bool >::Invoke(10 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_5, (bool)1);
		V_2 = L_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		V_4 = 0;
		goto IL_0067;
	}

IL_002a:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_2;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Type_t * L_13;
		L_13 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_12, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_14, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Type_t *)L_13) == ((RuntimeObject*)(Type_t *)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0061;
	}

IL_004b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = V_2;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = ((GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C *)IsInstClass((RuntimeObject*)L_20, GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C_il2cpp_TypeInfo_var));
		GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C * L_21 = V_5;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_displayMask_0();
		V_7 = L_22;
		goto IL_007b;
	}

IL_0061:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0067:
	{
		int32_t L_24 = V_4;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = V_2;
		NullCheck(L_25);
		V_8 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))? 1 : 0);
		bool L_26 = V_8;
		if (L_26)
		{
			goto IL_002a;
		}
	}
	{
	}

IL_0075:
	{
	}

IL_0076:
	{
		V_7 = (-1);
		goto IL_007b;
	}

IL_007b:
	{
		int32_t L_27 = V_7;
		return L_27;
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
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579 (const RuntimeMethod* method)
{
	typedef float (*GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579_ftn) ();
	static GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_pixelsPerPoint_mB5D6900CC67E192C0189890FBB163E5ECD662579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_pixelsPerPoint()");
	float icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Int32 UnityEngine.GUIUtility::get_guiDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_guiDepth_mCEE2CF2630726CA657D48F0375866E2B8C314F2E (const RuntimeMethod* method)
{
	typedef int32_t (*GUIUtility_get_guiDepth_mCEE2CF2630726CA657D48F0375866E2B8C314F2E_ftn) ();
	static GUIUtility_get_guiDepth_mCEE2CF2630726CA657D48F0375866E2B8C314F2E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_guiDepth_mCEE2CF2630726CA657D48F0375866E2B8C314F2E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_guiDepth()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E (const RuntimeMethod* method)
{
	typedef String_t* (*GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E_ftn) ();
	static GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	String_t* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95 (String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95_ftn) (String_t*);
	static GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(___value0);
}
// System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GUIUtility_Internal_GetDefaultSkin_mA64DFF25827FEF564C93F240B7C6614EEABC92E5 (int32_t ___skinMode0, const RuntimeMethod* method)
{
	typedef RuntimeObject * (*GUIUtility_Internal_GetDefaultSkin_mA64DFF25827FEF564C93F240B7C6614EEABC92E5_ftn) (int32_t);
	static GUIUtility_Internal_GetDefaultSkin_mA64DFF25827FEF564C93F240B7C6614EEABC92E5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetDefaultSkin_mA64DFF25827FEF564C93F240B7C6614EEABC92E5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	RuntimeObject * icallRetVal = _il2cpp_icall_func(___skinMode0);
	return icallRetVal;
}
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_ExitGUI_m0B9B3280EB0CA732C5CFA32DA0384EA2D0A41090 (const RuntimeMethod* method)
{
	typedef void (*GUIUtility_Internal_ExitGUI_m0B9B3280EB0CA732C5CFA32DA0384EA2D0A41090_ftn) ();
	static GUIUtility_Internal_ExitGUI_m0B9B3280EB0CA732C5CFA32DA0384EA2D0A41090_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_ExitGUI_m0B9B3280EB0CA732C5CFA32DA0384EA2D0A41090_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::MarkGUIChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_MarkGUIChanged_m81ADFC648B63CFD4C6524BEA5268C4F0CAE07A61 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->get_guiChanged_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m13C69BE54D215B22CA7D1FE5192DD5ED744E0FCF (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->set_U3CguiIsExitingU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void UnityEngine.GUIUtility::TakeCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_TakeCapture_mB10E9D004B3C8B072634BB16C8D99DA9F6A4A006 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->get_takeCapture_2();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::RemoveCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_RemoveCapture_m6FA86E68E9C40AB3153203644AB6020E5D85167C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->get_releaseCapture_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUIUtility_GetDefaultSkin_m4CF951846AD574F548739127FB7569BB7E3593A4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * V_0 = NULL;
	{
		int32_t L_0 = ((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->get_s_SkinMode_0();
		RuntimeObject * L_1;
		L_1 = GUIUtility_Internal_GetDefaultSkin_mA64DFF25827FEF564C93F240B7C6614EEABC92E5(L_0, /*hidden argument*/NULL);
		V_0 = ((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *)IsInstSealed((RuntimeObject*)L_1, GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var));
		goto IL_0013;
	}

IL_0013:
	{
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUIUtility::ProcessEvent(System.Int32,System.IntPtr,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ProcessEvent_m96FCE6AD81E6EEE66422C72FC61C633BDFB84B8F (int32_t ___instanceID0, intptr_t ___nativeEventPtr1, bool* ___result2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_m41D8569C1E1FFC40BAB05286F15A74835341C627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool* L_0 = ___result2;
		*((int8_t*)L_0) = (int8_t)0;
		Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0 * L_1 = ((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->get_processEvent_4();
		V_0 = (bool)((!(((RuntimeObject*)(Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool* L_3 = ___result2;
		Func_3_tC53D1EA39D16EE63C9C8B6C2EC9769A630644CE0 * L_4 = ((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->get_processEvent_4();
		int32_t L_5 = ___instanceID0;
		intptr_t L_6 = ___nativeEventPtr1;
		NullCheck(L_4);
		bool L_7;
		L_7 = Func_3_Invoke_m41D8569C1E1FFC40BAB05286F15A74835341C627(L_4, L_5, (intptr_t)L_6, /*hidden argument*/Func_3_Invoke_m41D8569C1E1FFC40BAB05286F15A74835341C627_RuntimeMethod_var);
		*((int8_t*)L_3) = (int8_t)L_7;
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_BeginGUI_mC845F40D18A61ABC56B8428DD231030CDD312C05 (int32_t ___skinMode0, int32_t ___instanceID1, int32_t ___useGUILayout2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___skinMode0;
		((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->set_s_SkinMode_0(L_0);
		int32_t L_1 = ___instanceID1;
		((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->set_s_OriginalID_1(L_1);
		GUIUtility_ResetGlobalState_m5D608E689B0B1AA994702358158C7BB65373D3F7(/*hidden argument*/NULL);
		int32_t L_2 = ___useGUILayout2;
		V_0 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = ___instanceID1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		GUILayoutUtility_Begin_m1A42FB0448413B7ED711887827CD6E8F9276C47D(L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_EndGUI_mFB2C261AB2BA4AD1D79FE74258363B4B20D631C3 (int32_t ___layoutType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0;
			L_0 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
			NullCheck(L_0);
			int32_t L_1;
			L_1 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_0, /*hidden argument*/NULL);
			V_0 = (bool)((((int32_t)L_1) == ((int32_t)8))? 1 : 0);
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_003f;
			}
		}

IL_0013:
		{
			int32_t L_3 = ___layoutType0;
			V_2 = L_3;
			int32_t L_4 = V_2;
			V_1 = L_4;
			int32_t L_5 = V_1;
			switch (L_5)
			{
				case 0:
				{
					goto IL_002c;
				}
				case 1:
				{
					goto IL_002e;
				}
				case 2:
				{
					goto IL_0036;
				}
			}
		}

IL_002a:
		{
			goto IL_003e;
		}

IL_002c:
		{
			goto IL_003e;
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
			GUILayoutUtility_Layout_mE876F10FD153DE2038066B29DBC444E4B5A3F88B(/*hidden argument*/NULL);
			goto IL_003e;
		}

IL_0036:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutFromEditorWindow_m47384B8E70622B43668E03DA67E8B455694A7005(/*hidden argument*/NULL);
			goto IL_003e;
		}

IL_003e:
		{
		}

IL_003f:
		{
			int32_t L_6 = ((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->get_s_OriginalID_1();
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
			LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_7;
			L_7 = GUILayoutUtility_SelectIDList_mBB4E4C5EE476C431E3105D76F13CEA683E7021CB(L_6, (bool)0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
			GUIContent_ClearStaticCache_mD4647E7AF90A71B211AF157C9DDF12D25A0059A2(/*hidden argument*/NULL);
			IL2CPP_LEAVE(0x5D, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		GUIUtility_Internal_ExitGUI_m0B9B3280EB0CA732C5CFA32DA0384EA2D0A41090(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_EndGUIFromException_mA815072F2FCEAAEA06BF7B23624251F58747E2AF (Exception_t * ___exception0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		GUIUtility_Internal_ExitGUI_m0B9B3280EB0CA732C5CFA32DA0384EA2D0A41090(/*hidden argument*/NULL);
		Exception_t * L_0 = ___exception0;
		bool L_1;
		L_1 = GUIUtility_ShouldRethrowException_m4D31C054C92D4A3D13D7F64C23634376F1F44DCB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndContainerGUIFromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_EndContainerGUIFromException_mA368DE91CD76071668ADB7DB87E579CF0D552E1A (Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m6E33E881BFD75761C0F91C7EEB1AF452BFD18445_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Func_2_t6283F9D1F2A6C8BB45F72CDAD5856BC3FDF29C3F * L_0 = ((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->get_endContainerGUIFromException_5();
		V_0 = (bool)((!(((RuntimeObject*)(Func_2_t6283F9D1F2A6C8BB45F72CDAD5856BC3FDF29C3F *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Func_2_t6283F9D1F2A6C8BB45F72CDAD5856BC3FDF29C3F * L_2 = ((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->get_endContainerGUIFromException_5();
		Exception_t * L_3 = ___exception0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Func_2_Invoke_m6E33E881BFD75761C0F91C7EEB1AF452BFD18445(L_2, L_3, /*hidden argument*/Func_2_Invoke_m6E33E881BFD75761C0F91C7EEB1AF452BFD18445_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_001f;
	}

IL_001b:
	{
		V_1 = (bool)0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.GUIUtility::ResetGlobalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ResetGlobalState_m5D608E689B0B1AA994702358158C7BB65373D3F7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *)NULL, /*hidden argument*/NULL);
		GUIUtility_set_guiIsExiting_m13C69BE54D215B22CA7D1FE5192DD5ED744E0FCF_inline((bool)0, /*hidden argument*/NULL);
		GUI_set_changed_m7DBA5D0D2493D33D86E59D55942CE4FA56451DAC((bool)0, /*hidden argument*/NULL);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_0;
		L_0 = GUI_get_scrollViewStates_mC0FF9F20045EB96D22254543B8C9A0643D54C4D4_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61(L_0, /*hidden argument*/Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::IsExitGUIException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_IsExitGUIException_mF80F38388A47904E471BC7CE0E1239845A9356C2 (Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitGUIException_tA832626B99B4D827C8064643824847BCAA7877F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		goto IL_000b;
	}

IL_0003:
	{
		Exception_t * L_0 = ___exception0;
		NullCheck(L_0);
		Exception_t * L_1;
		L_1 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_0, /*hidden argument*/NULL);
		___exception0 = L_1;
	}

IL_000b:
	{
		Exception_t * L_2 = ___exception0;
		if (!((TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *)IsInstSealed((RuntimeObject*)L_2, TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_3 = ___exception0;
		NullCheck(L_3);
		Exception_t * L_4;
		L_4 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_3, /*hidden argument*/NULL);
		G_B5_0 = ((!(((RuntimeObject*)(Exception_t *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B5_0;
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0003;
		}
	}
	{
		Exception_t * L_6 = ___exception0;
		V_1 = (bool)((!(((RuntimeObject*)(ExitGUIException_tA832626B99B4D827C8064643824847BCAA7877F4 *)((ExitGUIException_tA832626B99B4D827C8064643824847BCAA7877F4 *)IsInstSealed((RuntimeObject*)L_6, ExitGUIException_tA832626B99B4D827C8064643824847BCAA7877F4_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_002f;
	}

IL_002f:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_ShouldRethrowException_m4D31C054C92D4A3D13D7F64C23634376F1F44DCB (Exception_t * ___exception0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Exception_t * L_0 = ___exception0;
		bool L_1;
		L_1 = GUIUtility_IsExitGUIException_mF80F38388A47904E471BC7CE0E1239845A9356C2(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_CheckOnGUI_mA591FC883697B53B61EC6B5B4469262BA6936FA7 (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = GUIUtility_get_guiDepth_mCEE2CF2630726CA657D48F0375866E2B8C314F2E(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E5BD769C75B1966931F7A0F059B152FE79C2619)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GUIUtility_CheckOnGUI_mA591FC883697B53B61EC6B5B4469262BA6936FA7_RuntimeMethod_var)));
	}

IL_001b:
	{
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
// System.Void UnityEngine.ScrollViewState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollViewState__ctor_m0D7C09E917B98DAE6CA669F180201B52F74A2C0E (ScrollViewState_t6ACB5023B94B7CD6372697F35F84E8A798C31AF0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.SliderState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderState__ctor_m52C1830A6B916BE4BD18799B3934E79665EE3EDE (SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.TextEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor__ctor_m638747CE4AED20B2F497618337649E32D2ADA099 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_keyboardOnScreen_0((TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E *)NULL);
		__this->set_controlID_1(0);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0;
		L_0 = GUIStyle_get_none_mE13C9D26505C972F8697EE0E0E66D169D6D731A1(/*hidden argument*/NULL);
		__this->set_style_2(L_0);
		__this->set_multiline_3((bool)0);
		__this->set_hasHorizontalCursorPos_4((bool)0);
		__this->set_isPasswordField_5((bool)0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_scrollOffset_6(L_1);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_2 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42(L_2, /*hidden argument*/NULL);
		__this->set_m_Content_7(L_2);
		__this->set_m_CursorIndex_8(0);
		__this->set_m_SelectIndex_9(0);
		__this->set_m_RevealCursor_10((bool)0);
		__this->set_m_MouseDragSelectsWholeWords_11((bool)0);
		__this->set_m_DblClickInitPos_12(0);
		__this->set_m_DblClickSnap_13(0);
		__this->set_m_bJustSelected_14((bool)0);
		__this->set_m_iAltCursorPos_15((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___id0);

}
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_mCC6005520B912B8BFFAECE3612EB3334FF681238 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction_Invoke_mF7D36482F583383AF583ED812A4E2487C06C3748 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, int32_t ___id0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___id0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.GUI/WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowFunction_BeginInvoke_m9F57C6EAE29A60C2D896F2FC784280ECE8AAFBCA (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, int32_t ___id0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___id0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.GUI/WindowFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction_EndInvoke_mD9651FD07B46D56BB2BC6B061FB90D3423A0B761 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545 (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache__ctor_m31B20021AD6C02155826BB808C8E243B340022C4 (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___instanceID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_0 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_0, /*hidden argument*/NULL);
		__this->set_topLevel_1(L_0);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_1 = (GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C *)il2cpp_codegen_object_new(GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_il2cpp_TypeInfo_var);
		GenericStack__ctor_m42B668E8F293EE21F529A2679AA110C0877605DD(L_1, /*hidden argument*/NULL);
		__this->set_layoutGroups_2(L_1);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_2 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_2, /*hidden argument*/NULL);
		__this->set_windows_3(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___instanceID0;
		LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545_inline(__this, L_3, /*hidden argument*/NULL);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_4 = __this->get_layoutGroups_2();
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_5 = __this->get_topLevel_1();
		NullCheck(L_4);
		Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04(L_4, L_5, /*hidden argument*/Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_RuntimeMethod_var);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate__ctor_m89C35E9FE770168E1BEE3990E7E399891788B6DB (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_m5FEBFA0F8E80B0745121ECB1C59C9E0EF595CC3C (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkinChangedDelegate_BeginInvoke_m7FA7715C6C7E8D8B0C95159E565520492D01F5CE (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate_EndInvoke_m6F5C8C0C660819B74CB8541173EA917C1A6A8D87 (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_m3CF6DBBA4BE79B582AE4245AC02DED002C31E1DD_inline (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->set_U3CnextScrollStepTimeU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinalIgnoreCase_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m13C69BE54D215B22CA7D1FE5192DD5ED744E0FCF_inline (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		((GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_il2cpp_TypeInfo_var))->set_U3CguiIsExitingU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * GUI_get_scrollViewStates_mC0FF9F20045EB96D22254543B8C9A0643D54C4D4_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_0 = ((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var))->get_U3CscrollViewStatesU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get__innerException_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545_inline (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
