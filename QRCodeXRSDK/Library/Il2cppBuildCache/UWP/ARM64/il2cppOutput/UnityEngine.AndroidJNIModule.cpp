﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaException
struct AndroidJavaException_tA371556A4C19FBFA201DD4939DFA781D109B243D;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60;
// UnityEngine.AndroidJavaRunnableProxy
struct AndroidJavaRunnableProxy_t17D14B64AF448BEC13E64E394A2626B261ED3BEB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Reflection.TargetInvocationException
struct TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaException_tA371556A4C19FBFA201DD4939DFA781D109B243D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnableProxy_t17D14B64AF448BEC13E64E394A2626B261ED3BEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68;
IL2CPP_EXTERN_C String_t* _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
IL2CPP_EXTERN_C String_t* _stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC;
IL2CPP_EXTERN_C String_t* _stringLiteral0F9959D6967BF0405610B0041D446B892A631997;
IL2CPP_EXTERN_C String_t* _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E;
IL2CPP_EXTERN_C String_t* _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251;
IL2CPP_EXTERN_C String_t* _stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A;
IL2CPP_EXTERN_C String_t* _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B;
IL2CPP_EXTERN_C String_t* _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
IL2CPP_EXTERN_C String_t* _stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C;
IL2CPP_EXTERN_C String_t* _stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B;
IL2CPP_EXTERN_C String_t* _stringLiteral29533AC1D363321ECFB96B50441B9418763D4176;
IL2CPP_EXTERN_C String_t* _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE;
IL2CPP_EXTERN_C String_t* _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10;
IL2CPP_EXTERN_C String_t* _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC;
IL2CPP_EXTERN_C String_t* _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297;
IL2CPP_EXTERN_C String_t* _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C;
IL2CPP_EXTERN_C String_t* _stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF;
IL2CPP_EXTERN_C String_t* _stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA;
IL2CPP_EXTERN_C String_t* _stringLiteral65572413F78A98D745AF7C2CCAF152BD2C90FF88;
IL2CPP_EXTERN_C String_t* _stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827;
IL2CPP_EXTERN_C String_t* _stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185;
IL2CPP_EXTERN_C String_t* _stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845;
IL2CPP_EXTERN_C String_t* _stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156;
IL2CPP_EXTERN_C String_t* _stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F;
IL2CPP_EXTERN_C String_t* _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A;
IL2CPP_EXTERN_C String_t* _stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05;
IL2CPP_EXTERN_C String_t* _stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66;
IL2CPP_EXTERN_C String_t* _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A;
IL2CPP_EXTERN_C String_t* _stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1;
IL2CPP_EXTERN_C String_t* _stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE771679CD1C7D2C1D9B577D342220161AD2D3D;
IL2CPP_EXTERN_C String_t* _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069;
IL2CPP_EXTERN_C String_t* _stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39;
IL2CPP_EXTERN_C String_t* _stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552;
IL2CPP_EXTERN_C String_t* _stringLiteral997CC228CD49CB51A21F3301055CBEE380042055;
IL2CPP_EXTERN_C String_t* _stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035;
IL2CPP_EXTERN_C String_t* _stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3;
IL2CPP_EXTERN_C String_t* _stringLiteralA2267B1424757597EAEC3CB1B8269FF078CC487C;
IL2CPP_EXTERN_C String_t* _stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D;
IL2CPP_EXTERN_C String_t* _stringLiteralA39614FE650CC59501DA62392479CBAD5E59947A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9;
IL2CPP_EXTERN_C String_t* _stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293;
IL2CPP_EXTERN_C String_t* _stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95;
IL2CPP_EXTERN_C String_t* _stringLiteralBB8F0908585792018E468F1010A23CFD167A686C;
IL2CPP_EXTERN_C String_t* _stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
IL2CPP_EXTERN_C String_t* _stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904;
IL2CPP_EXTERN_C String_t* _stringLiteralCE42F595933CDB601C52327F32C83017C908C430;
IL2CPP_EXTERN_C String_t* _stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08;
IL2CPP_EXTERN_C String_t* _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
IL2CPP_EXTERN_C String_t* _stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E;
IL2CPP_EXTERN_C String_t* _stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1AC4D20161E303D304EC6B1002667BE658488EE;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralE46DFB424F1D16B497976AB817F603BF3B170AF9;
IL2CPP_EXTERN_C String_t* _stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56;
IL2CPP_EXTERN_C String_t* _stringLiteralE5BEC2753A5201D97F16E51BDAFBB18987ECD93B;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC;
IL2CPP_EXTERN_C String_t* _stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490;
IL2CPP_EXTERN_C String_t* _stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF76791D0FE1272AD994E3611223AB6D219F5FC;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJNIHelper_CreateJavaProxy_mF3E9256AF65CC078B82DD0E1DC65306AA79DBBEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaClass__ctor_m61AE95F9D20CA648AEFC18AE922FE70F0B90786F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m5E5A9D2A5C78D0EC058BBE4A6EFDE1F1C042D19B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mC771B88EC17F0B174134EC1218654F42A807A3B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m01DA767827B3724380256A9F20BE680EE56B1C36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m0E0C93662AE6147907838FA7BAC5DFFF12DA8CD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaProxy_Invoke_m0908B96EF03FC0465EAC584963213D227A3048D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_Box_m36D8F62AEE89925F24BEB84DD91A5FF771255E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertToJNIArray_m8254063CFA125088D840280AEF8C2ACF1B1ED4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_CreateJNIArgArray_m6CAC58535CA8F9F1A7A4458BA1BC855CB46609E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetConstructorID_m0802B71B149170217E6FE75A7864A4BE7315215F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetMethodID_m74B615C2438AF4A05F5FDA31F871AA641799CC9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_UnboxArray_m6287C810F0A8190BA7A7D2B104437F28B785FE7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeArray_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB;
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t16907FB6E08E92217A5123230DA0635610807D19 
{
public:

public:
};


// System.Object


// UnityEngine.AndroidJNI
struct  AndroidJNI_t4ADD4E8322A2E7638103A35259232E333D8ABF85  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AndroidJNIHelper
struct  AndroidJNIHelper_t42BC87A499D1F8E320AC8D663692540AA0DE2847  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AndroidJNISafe
struct  AndroidJNISafe_t2DF3C52D886D3CA488B0322BC39A0691F15EE27E  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.Binder
struct  Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30  : public RuntimeObject
{
public:

public:
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// UnityEngine._AndroidJNIHelper
struct  _AndroidJNIHelper_t664F535B46589884A627F66F98A451D1CD48F76B  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.ParameterModifier
struct  ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____byRef_0;

public:
	inline static int32_t get_offset_of__byRef_0() { return static_cast<int32_t>(offsetof(ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA, ____byRef_0)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__byRef_0() const { return ____byRef_0; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__byRef_0() { return &____byRef_0; }
	inline void set__byRef_0(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____byRef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byRef_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// UnityEngine.AndroidReflection
struct  AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16  : public RuntimeObject
{
public:

public:
};

struct AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidReflection::s_ReflectionHelperClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_ReflectionHelperClass_0;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetConstructorID
	intptr_t ___s_ReflectionHelperGetConstructorID_1;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetMethodID
	intptr_t ___s_ReflectionHelperGetMethodID_2;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetFieldID
	intptr_t ___s_ReflectionHelperGetFieldID_3;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperGetFieldSignature
	intptr_t ___s_ReflectionHelperGetFieldSignature_4;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperNewProxyInstance
	intptr_t ___s_ReflectionHelperNewProxyInstance_5;
	// System.IntPtr UnityEngine.AndroidReflection::s_ReflectionHelperSetNativeExceptionOnProxy
	intptr_t ___s_ReflectionHelperSetNativeExceptionOnProxy_6;
	// System.IntPtr UnityEngine.AndroidReflection::s_FieldGetDeclaringClass
	intptr_t ___s_FieldGetDeclaringClass_7;

public:
	inline static int32_t get_offset_of_s_ReflectionHelperClass_0() { return static_cast<int32_t>(offsetof(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields, ___s_ReflectionHelperClass_0)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_ReflectionHelperClass_0() const { return ___s_ReflectionHelperClass_0; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_ReflectionHelperClass_0() { return &___s_ReflectionHelperClass_0; }
	inline void set_s_ReflectionHelperClass_0(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_ReflectionHelperClass_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ReflectionHelperClass_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_ReflectionHelperGetConstructorID_1() { return static_cast<int32_t>(offsetof(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields, ___s_ReflectionHelperGetConstructorID_1)); }
	inline intptr_t get_s_ReflectionHelperGetConstructorID_1() const { return ___s_ReflectionHelperGetConstructorID_1; }
	inline intptr_t* get_address_of_s_ReflectionHelperGetConstructorID_1() { return &___s_ReflectionHelperGetConstructorID_1; }
	inline void set_s_ReflectionHelperGetConstructorID_1(intptr_t value)
	{
		___s_ReflectionHelperGetConstructorID_1 = value;
	}

	inline static int32_t get_offset_of_s_ReflectionHelperGetMethodID_2() { return static_cast<int32_t>(offsetof(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields, ___s_ReflectionHelperGetMethodID_2)); }
	inline intptr_t get_s_ReflectionHelperGetMethodID_2() const { return ___s_ReflectionHelperGetMethodID_2; }
	inline intptr_t* get_address_of_s_ReflectionHelperGetMethodID_2() { return &___s_ReflectionHelperGetMethodID_2; }
	inline void set_s_ReflectionHelperGetMethodID_2(intptr_t value)
	{
		___s_ReflectionHelperGetMethodID_2 = value;
	}

	inline static int32_t get_offset_of_s_ReflectionHelperGetFieldID_3() { return static_cast<int32_t>(offsetof(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields, ___s_ReflectionHelperGetFieldID_3)); }
	inline intptr_t get_s_ReflectionHelperGetFieldID_3() const { return ___s_ReflectionHelperGetFieldID_3; }
	inline intptr_t* get_address_of_s_ReflectionHelperGetFieldID_3() { return &___s_ReflectionHelperGetFieldID_3; }
	inline void set_s_ReflectionHelperGetFieldID_3(intptr_t value)
	{
		___s_ReflectionHelperGetFieldID_3 = value;
	}

	inline static int32_t get_offset_of_s_ReflectionHelperGetFieldSignature_4() { return static_cast<int32_t>(offsetof(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields, ___s_ReflectionHelperGetFieldSignature_4)); }
	inline intptr_t get_s_ReflectionHelperGetFieldSignature_4() const { return ___s_ReflectionHelperGetFieldSignature_4; }
	inline intptr_t* get_address_of_s_ReflectionHelperGetFieldSignature_4() { return &___s_ReflectionHelperGetFieldSignature_4; }
	inline void set_s_ReflectionHelperGetFieldSignature_4(intptr_t value)
	{
		___s_ReflectionHelperGetFieldSignature_4 = value;
	}

	inline static int32_t get_offset_of_s_ReflectionHelperNewProxyInstance_5() { return static_cast<int32_t>(offsetof(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields, ___s_ReflectionHelperNewProxyInstance_5)); }
	inline intptr_t get_s_ReflectionHelperNewProxyInstance_5() const { return ___s_ReflectionHelperNewProxyInstance_5; }
	inline intptr_t* get_address_of_s_ReflectionHelperNewProxyInstance_5() { return &___s_ReflectionHelperNewProxyInstance_5; }
	inline void set_s_ReflectionHelperNewProxyInstance_5(intptr_t value)
	{
		___s_ReflectionHelperNewProxyInstance_5 = value;
	}

	inline static int32_t get_offset_of_s_ReflectionHelperSetNativeExceptionOnProxy_6() { return static_cast<int32_t>(offsetof(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields, ___s_ReflectionHelperSetNativeExceptionOnProxy_6)); }
	inline intptr_t get_s_ReflectionHelperSetNativeExceptionOnProxy_6() const { return ___s_ReflectionHelperSetNativeExceptionOnProxy_6; }
	inline intptr_t* get_address_of_s_ReflectionHelperSetNativeExceptionOnProxy_6() { return &___s_ReflectionHelperSetNativeExceptionOnProxy_6; }
	inline void set_s_ReflectionHelperSetNativeExceptionOnProxy_6(intptr_t value)
	{
		___s_ReflectionHelperSetNativeExceptionOnProxy_6 = value;
	}

	inline static int32_t get_offset_of_s_FieldGetDeclaringClass_7() { return static_cast<int32_t>(offsetof(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields, ___s_FieldGetDeclaringClass_7)); }
	inline intptr_t get_s_FieldGetDeclaringClass_7() const { return ___s_FieldGetDeclaringClass_7; }
	inline intptr_t* get_address_of_s_FieldGetDeclaringClass_7() { return &___s_FieldGetDeclaringClass_7; }
	inline void set_s_FieldGetDeclaringClass_7(intptr_t value)
	{
		___s_FieldGetDeclaringClass_7 = value;
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

// UnityEngine.GlobalJavaObjectRef
struct  GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.GlobalJavaObjectRef::m_disposed
	bool ___m_disposed_0;
	// System.IntPtr UnityEngine.GlobalJavaObjectRef::m_jobject
	intptr_t ___m_jobject_1;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}

	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289, ___m_jobject_1)); }
	inline intptr_t get_m_jobject_1() const { return ___m_jobject_1; }
	inline intptr_t* get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(intptr_t value)
	{
		___m_jobject_1 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
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


// UnityEngine.jvalue
struct  jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_z_0() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___z_0)); }
	inline bool get_z_0() const { return ___z_0; }
	inline bool* get_address_of_z_0() { return &___z_0; }
	inline void set_z_0(bool value)
	{
		___z_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___b_1)); }
	inline int8_t get_b_1() const { return ___b_1; }
	inline int8_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int8_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___c_2)); }
	inline Il2CppChar get_c_2() const { return ___c_2; }
	inline Il2CppChar* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(Il2CppChar value)
	{
		___c_2 = value;
	}

	inline static int32_t get_offset_of_s_3() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___s_3)); }
	inline int16_t get_s_3() const { return ___s_3; }
	inline int16_t* get_address_of_s_3() { return &___s_3; }
	inline void set_s_3(int16_t value)
	{
		___s_3 = value;
	}

	inline static int32_t get_offset_of_i_4() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___i_4)); }
	inline int32_t get_i_4() const { return ___i_4; }
	inline int32_t* get_address_of_i_4() { return &___i_4; }
	inline void set_i_4(int32_t value)
	{
		___i_4 = value;
	}

	inline static int32_t get_offset_of_j_5() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___j_5)); }
	inline int64_t get_j_5() const { return ___j_5; }
	inline int64_t* get_address_of_j_5() { return &___j_5; }
	inline void set_j_5(int64_t value)
	{
		___j_5 = value;
	}

	inline static int32_t get_offset_of_f_6() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___f_6)); }
	inline float get_f_6() const { return ___f_6; }
	inline float* get_address_of_f_6() { return &___f_6; }
	inline void set_f_6(float value)
	{
		___f_6 = value;
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___d_7)); }
	inline double get_d_7() const { return ___d_7; }
	inline double* get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(double value)
	{
		___d_7 = value;
	}

	inline static int32_t get_offset_of_l_8() { return static_cast<int32_t>(offsetof(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587, ___l_8)); }
	inline intptr_t get_l_8() const { return ___l_8; }
	inline intptr_t* get_address_of_l_8() { return &___l_8; }
	inline void set_l_8(intptr_t value)
	{
		___l_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};

// UnityEngine.AndroidJavaException
struct  AndroidJavaException_tA371556A4C19FBFA201DD4939DFA781D109B243D  : public Exception_t
{
public:
	// System.String UnityEngine.AndroidJavaException::mJavaStackTrace
	String_t* ___mJavaStackTrace_17;

public:
	inline static int32_t get_offset_of_mJavaStackTrace_17() { return static_cast<int32_t>(offsetof(AndroidJavaException_tA371556A4C19FBFA201DD4939DFA781D109B243D, ___mJavaStackTrace_17)); }
	inline String_t* get_mJavaStackTrace_17() const { return ___mJavaStackTrace_17; }
	inline String_t** get_address_of_mJavaStackTrace_17() { return &___mJavaStackTrace_17; }
	inline void set_mJavaStackTrace_17(String_t* value)
	{
		___mJavaStackTrace_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJavaStackTrace_17), (void*)value);
	}
};


// UnityEngine.AndroidJavaRunnableProxy
struct  AndroidJavaRunnableProxy_t17D14B64AF448BEC13E64E394A2626B261ED3BEB  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// UnityEngine.AndroidJavaRunnable UnityEngine.AndroidJavaRunnableProxy::mRunnable
	AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * ___mRunnable_4;

public:
	inline static int32_t get_offset_of_mRunnable_4() { return static_cast<int32_t>(offsetof(AndroidJavaRunnableProxy_t17D14B64AF448BEC13E64E394A2626B261ED3BEB, ___mRunnable_4)); }
	inline AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * get_mRunnable_4() const { return ___mRunnable_4; }
	inline AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 ** get_address_of_mRunnable_4() { return &___mRunnable_4; }
	inline void set_mRunnable_4(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * value)
	{
		___mRunnable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRunnable_4), (void*)value);
	}
};


// System.ApplicationException
struct  ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
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


// UnityEngine.AndroidJavaRunnable
struct  AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  m_Items[1];

public:
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
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
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  m_Items[1];

public:
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * m_Items[1];

public:
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
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
// UnityEngine.AndroidJavaClass[]
struct AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * m_Items[1];

public:
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.SByte>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_Call_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m0E0C93662AE6147907838FA7BAC5DFFF12DA8CD2_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int16>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_Call_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m01DA767827B3724380256A9F20BE680EE56B1C36_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mC771B88EC17F0B174134EC1218654F42A807A3B5_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Char>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_Call_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m5E5A9D2A5C78D0EC058BBE4A6EFDE1F1C042D19B_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);

// System.IntPtr UnityEngine.AndroidJNI::NewStringFromStr(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewStringFromStr_m2FA0D93FE6ABFD5D1B3546B797EDE6ABB37208CC (String_t* ___chars0, const RuntimeMethod* method);
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m0802B71B149170217E6FE75A7864A4BE7315215F (intptr_t ___jclass0, String_t* ___signature1, const RuntimeMethod* method);
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_m74B615C2438AF4A05F5FDA31F871AA641799CC9C (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaRunnable_m9FEEC38F8F25D8A5E6DBD8329094C3C24D73EC52 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * ___jrunnable0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___value0, const RuntimeMethod* method);
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaProxy(System.IntPtr,UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaProxy_mCE38F0AE360145E8ECD9B15364CF570EE1D57D5D (intptr_t ___delegateHandle0, AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * ___proxy1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// UnityEngine.jvalue[] UnityEngine._AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* _AndroidJNIHelper_CreateJNIArgArray_m6CAC58535CA8F9F1A7A4458BA1BC855CB46609E2 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine._AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_DeleteJNIArgArray_m1ECC70D98768BD3E5C6C6EABC1162F43B297AD85 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___jniArgs1, const RuntimeMethod* method);
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m59BD3F866A86FC0FFDB26FFB820124E830CDB3E7 (intptr_t ___jclass0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991 (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7 (const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FindClass_m9271648050957874E8489952E493156991C511F5 (String_t* ___name0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_m4A0DBC91C300B8F342333561BA237258E12D0A3B (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticMethodID_mB2C04328A527EB6EAC74F048CC10DEB3099C4826 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method);
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m8D44F815C76333C22FF73753CF8289089E633261 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m4089540DF5B52F735C6C70988D73FE69463B7B44 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaException__ctor_mD451AB9B54A333C79F0F0650DD4DC2B173CAA910 (AndroidJavaException_tA371556A4C19FBFA201DD4939DFA781D109B243D * __this, String_t* ___message0, String_t* ___javaStackTrace1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39 (intptr_t ___localref0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteGlobalRef_m0B4945EEFFCA6F7CC0808310DD6FA8BFB58A4F53 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteWeakGlobalRef_m972079D94C174FA5F427AC16C92B2B3179175F46 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_m5EEFE4C0CA9F65208C117ECE9D893A993A477DB4 (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewString_m39B9E7C930BE075D93850E925F808720BEB5C673 (String_t* ___chars0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNISafe::CheckException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249 (const RuntimeMethod* method);
// System.String UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringChars_m95FBBCDB48D425FBDC19710D92C7D6D175041778 (intptr_t ___str0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectClass_m38B1858A3F6F7336FBEC67F36E998D61DE93988A (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FromReflectedMethod_mBF204982142E2EA82F66F562F5661F2A459F34F5 (intptr_t ___refMethod0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObject_m8D445E11DAFC786997C16BF296C0BB844F6E7D60 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallStaticVoidMethod_mE35981047575D7C0028FC4EF205B05909911F0E3 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallStaticObjectMethod_m41962AB7EBBC53ACB5ACD5D7CC175EC8CFF22B13 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallStaticCharMethod_mA3E1C0CA79C37C0E8CA480305C0195D87C4EBBF7 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallStaticDoubleMethod_m705917C9F0238B4C0E040C9156424FB1BD2FC4DA (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallStaticFloatMethod_m0DA71B5E200550A66C4880BFF404225B063ACDFE (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethod_mA9AAA7D40F0F6D5BB9EB183ED5E9ADD05714648B (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallStaticShortMethod_m06B921F4634800E6E42691920E9DD1697491061A (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.SByte UnityEngine.AndroidJNI::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallStaticSByteMethod_m5E1FBD3B228299120E15BC39A97BB98BFD8CEA68 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallStaticBooleanMethod_mA658B97E472490DCEF41A9C9BE9E2808FD4D8649 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallStaticIntMethod_mE05BBCE19901EED01DB88DCE7775D2EC75266F6F (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethod_m29CAA840E7ECD2A6B835EAF9E119F8E3E5B99495 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallCharMethod_m6D9AB75BB4E6E6F40C12654EADB9CB3AC441F257 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethod_mC6B84A261650B29C19C304F07D1080B38ABC7186 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallFloatMethod_mB40ADB8EFB34D674AF586B65E3B443AF51B62CD9 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallLongMethod_m566FBCF6E3D1B11ECBA4DBB51E3712F2EE9A7FE9 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallShortMethod_m719565EF3E0DB80078F924283F72E3492BCED486 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.SByte UnityEngine.AndroidJNI::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallSByteMethod_mD99C2871A4ED3D2228B6F9EA97484D71E529C5EA (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallBooleanMethod_mCC2BF562D42946CC90BB9E5489C9311DB38A6F8A (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethod_m3A49D0808C1D0C3EAF25B3F2DC7890B483B00CDF (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* AndroidJNI_FromCharArray_mCDE27061131471E18F064241982F7C58921B4BCE (intptr_t ___array0, const RuntimeMethod* method);
// System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* AndroidJNI_FromDoubleArray_mB8DA303F2DC6FB96E45D6C2DEC2B1C7AF9A7D9BE (intptr_t ___array0, const RuntimeMethod* method);
// System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* AndroidJNI_FromFloatArray_m01E10AC1773DE0878B8875994E74B205E42EE2E4 (intptr_t ___array0, const RuntimeMethod* method);
// System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidJNI_FromLongArray_m62518A89509FAD6404628618EA05A63911DB0941 (intptr_t ___array0, const RuntimeMethod* method);
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* AndroidJNI_FromShortArray_mAD7FEF4EEAEC6A3DEF148C02EF4E00002A70542E (intptr_t ___array0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AndroidJNI_FromByteArray_m8EC58D6AE31ADD634490F84A4F4E36831DB2EC87 (intptr_t ___array0, const RuntimeMethod* method);
// System.SByte[] UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* AndroidJNI_FromSByteArray_m5372FB70B8027721C47BE0359F538A90128288CD (intptr_t ___array0, const RuntimeMethod* method);
// System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* AndroidJNI_FromBooleanArray_m082FF870EE916B9603686E35776D5369B95D207E (intptr_t ___array0, const RuntimeMethod* method);
// System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* AndroidJNI_FromIntArray_mA60A708BA57B6F520260D4DC6B10E07C54E29C1F (intptr_t ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToObjectArray_m1C7B8259B04AC6D68F56BF5F108026882B039F24 (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___array0, intptr_t ___arrayClass1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToCharArray_mC48F010177FFBC2F0CCAAE1B675B6C4882EBA257 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToDoubleArray_m00242343670C4CC0103A07CB766D80F53E36130D (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToFloatArray_m197E51BD1D14272F35DA0FF57B9C158E3DC5DA8D (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToLongArray_m784C3156DDD9D0D74E21F394CDFEB3C87538355F (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToShortArray_m37FFD5AD4C5CC07127F2E64598FCD5A0924B246F (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToByteArray_m099C6F143979F050C4A6AECF70854153CE8B58CC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToSByteArray_m91EBEA7CBDBCCDF759D77AB5BD1AE8BF00030B5F (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToBooleanArray_m105D3745D21CE3B0780C3861BB455A9E29B0B9F6 (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToIntArray_mB2B766977213FA271EE9044B5B781112CA274317 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetArrayLength_m48A34992E6BF0EF5510037EA38EB2D348634C9DE (intptr_t ___array0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m76D62BEE18E830EBCDE4B6860AC3C8A5979C9F18 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::_AndroidJavaClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__AndroidJavaClass_mD69A3836B7DD13F6514499FFE167BCB136A5BBAB (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::DebugPrint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_DebugPrint_m4F2A8B6447F29A548C6AE6F74CBD3AF51B587F7D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618 (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FindClass_mD96E72414A78F50B07019D26B87A93799D85BB0A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.GlobalJavaObjectRef::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * __this, intptr_t ___jobject0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.Exception::get_StackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_StackTrace_m66E7EFBB3658852BCB2960743DC9352D90C9EE48 (Exception_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::_AndroidJavaObject(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__AndroidJavaObject_m54584F0F147ECA1A0B7DEB875742B3331CC1666A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawObject_mD52629909E16A092896CD884BB710F876BE14975 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawClass_mCEFEDEA158099706B9B2F1CB40C843D2E899932C (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* AndroidJNIHelper_CreateJNIArgArray_m3B928C14D5B3E86B38331427E0605478402DFDCE (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.GlobalJavaObjectRef::op_Implicit(UnityEngine.GlobalJavaObjectRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m7A992ACF399BAD3EFC96D88CE00B235D8B669B33 (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___obj0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_mDC08F55A8FFF5D4E2B6CB5FB6808935EC8211007 (intptr_t ___jclass0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewObject_m8B3CE344FE9144B92096F0A36CF75DA56C380BF7 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_mF43CDD1F690C9E843FE622B9A5F7B21F7556408A (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___jniArgs1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectClass_m6FD726927BEAAA70778766E29215A6CA63A93DC3 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GlobalJavaObjectRef::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Dispose_mDAF2DE01EBD608E63CB661954D0B50015D08FF28 (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, intptr_t ___jobject0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_m61AE95F9D20CA648AEFC18AE922FE70F0B90786F (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, intptr_t ___jclass0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m17BDD42A24CEBD07722B68A25CAD6DEAF64241E1 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNISafe::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteWeakGlobalRef_m0FC9348DE2D937798DB6D6A5461021AFEBC7506D (intptr_t ___globalref0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m69EE86B5A87244C925333CCF1B6D6B9BCFED8A89 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___binder2, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types3, ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B* ___modifiers4, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject UnityEngine._AndroidJNIHelper::Box(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * _AndroidJNIHelper_Box_m36D8F62AEE89925F24BEB84DD91A5FF771255E28 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.Reflection.TargetInvocationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetInvocationException__ctor_m5436E5EE63CBC376FADE4422FDC24067402E42A9 (TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJavaProxy::GetRawProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_GetRawProxy_m125686B87104A00FD20DEB87F24074A3AD68D354 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidReflection::SetNativeExceptionOnProxy(System.IntPtr,System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReflection_SetNativeExceptionOnProxy_m3156C711782C12CDE0E994C37630F762C0FE0808 (intptr_t ___proxy0, Exception_t * ___e1, bool ___methodNotFound2, const RuntimeMethod* method);
// System.Object UnityEngine._AndroidJNIHelper::Unbox(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_Unbox_mE00F4AED2AAAACF5C617820A41A4F28F1D501708 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaObject::AndroidJavaObjectDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB977696EA6F6BB6369A8F783EFB5D99C445C11FD (intptr_t ___jobject0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewLocalRef_m9309F714C7C9C3C47EA48218FB6B0BE810E42EAE (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaProxy(UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaProxy_mF3E9256AF65CC078B82DD0E1DC65306AA79DBBEC (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * ___proxy0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewWeakGlobalRef_mB62AFFE361315D8C045F6EF4D961C5501839E295 (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticMethodID_m883F40A297071B64F8DE3572FDBB8B9834EF1163 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetMethodID_mB6545767927E1F859540D99EBD39E464811E5F8F (intptr_t ___obj0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewString_m5F5B2B700BDE2D0D1D105687D4ACC9567CEE7A23 (String_t* ___chars0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_mE83D4A0C1BF62925F8B9D4B49040A90CBA1B8860 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A (intptr_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNISafe::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CallStaticVoidMethod_m6D6C21C3489E19241A6856D7642CDC56752D7128 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidReflection::GetStaticMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetStaticMethodID_m36025A22F483A7C1D53BFAA0505DC59A7B503EA1 (String_t* ___clazz0, String_t* ___methodName1, String_t* ___signature2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidReflection::GetMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodID_m99B37E6A752683D8F77DA7319D9956E03BAC322E (String_t* ___clazz0, String_t* ___methodName1, String_t* ___signature2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewGlobalRef_m34740B5AECF82CE97986D6E67F5E1D8CBF7DB837 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNISafe::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteGlobalRef_m7651FA0BAEE0F4D660393C5CC6914F21270B0288 (intptr_t ___globalref0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_m051337FD2D7C0E765641B192D86FF4A06257836B (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidReflection::NewProxyInstance(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_NewProxyInstance_m53695E04979F0C45768004C5CC36A95A684C847C (intptr_t ___delegateHandle0, intptr_t ___interfaze1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaRunnableProxy::.ctor(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnableProxy__ctor_mDF1B01EBE4C312B67A43B452B440303855973A89 (AndroidJavaRunnableProxy_t17D14B64AF448BEC13E64E394A2626B261ED3BEB * __this, AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * ___runnable0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56 (intptr_t ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectArrayElement_m3219215297449FA1854927E80F1B74EF7413EF73 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m09E30F9AF9DD2AE07D34CE3915BDA557E206271D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D (Type_t * ___t0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_ConvertToJNIArray_m8254063CFA125088D840280AEF8C2ACF1B1ED4D9 (RuntimeArray * ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaRunnable_m789E333B57BE23010719477567A818C88A529153 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * ___jrunnable0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mD28884941182C5B7118CFBA3D55DB9CEA8797455 (RuntimeArray * __this, RuntimeObject * ___value0, int32_t ___index1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.SByte>(System.String,System.Object[])
inline int8_t AndroidJavaObject_Call_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m0E0C93662AE6147907838FA7BAC5DFFF12DA8CD2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m0E0C93662AE6147907838FA7BAC5DFFF12DA8CD2_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int16>(System.String,System.Object[])
inline int16_t AndroidJavaObject_Call_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m01DA767827B3724380256A9F20BE680EE56B1C36 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m01DA767827B3724380256A9F20BE680EE56B1C36_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
inline float AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
inline double AndroidJavaObject_Call_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mC771B88EC17F0B174134EC1218654F42A807A3B5 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mC771B88EC17F0B174134EC1218654F42A807A3B5_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Char>(System.String,System.Object[])
inline Il2CppChar AndroidJavaObject_Call_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m5E5A9D2A5C78D0EC058BBE4A6EFDE1F1C042D19B (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m5E5A9D2A5C78D0EC058BBE4A6EFDE1F1C042D19B_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Object UnityEngine._AndroidJNIHelper::UnboxArray(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_UnboxArray_m6287C810F0A8190BA7A7D2B104437F28B785FE7F (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::GetProxyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaProxy_GetProxyObject_mEDC1D96AAE0A4FC2B4E57E1FC3AE5C47C27FDC6A (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToIntArray_mD2FB6E5F31F6FD8A12DD3E86E1022EC14AFF5D0C (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToBooleanArray_m2298F4521FD7F175F15B30FF7887D365BD1543BB (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToByteArray_mCA96D852C39F79F57A8B68B8B03AF9EC795EA6D9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToSByteArray_m6C05420E192FBA37D7B168EC98BE04F56492087B (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToShortArray_m52204D9DB65374293E9D6954A2C9C4D47B4396D1 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToLongArray_m0C3D6AD8D2D116C3F11AECD5317AC01EABE16727 (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToFloatArray_m28D93667CB9E86FE20D0FC8B372BE26CEE9D8A19 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToDoubleArray_m0273BA7E9FBD2216215EBD176C8F329973BA53E0 (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToCharArray_mC1083C57846830CFA1A7CFFE5BE92F3B826FAC1D (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObjectArray_m40592BC65B199B1AAE32F2682D8E9236E07929EE (int32_t ___size0, intptr_t ___clazz1, intptr_t ___obj2, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetObjectArrayElement_m1C6E498550EF9FCA24DBD3E6D4F2BF6764FB315D (intptr_t ___array0, int32_t ___index1, intptr_t ___obj2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToObjectArray_m669E5441604094D8A20E3C1F1F5407AE985F82B8 (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___array0, intptr_t ___type1, const RuntimeMethod* method);
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m7621549E54EFD6362170628549B996BF5C52FBB7 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m22710C39375F8A965C70F995413D4B3C62E85E30 (intptr_t ___javaClass0, String_t* ___signature1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidReflection::GetConstructorMember(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetConstructorMember_m4E88C8F6F83DB80D3313835CE760D8E7DC533C02 (intptr_t ___jclass0, String_t* ___signature1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FromReflectedMethod_m21A25975498B872199E7B9708AF0AD6E1248E3A7 (intptr_t ___refMethod0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidReflection::GetMethodMember(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodMember_m2959FEB7888CE8740DE1CF88C0CCB8A72F9F017B (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodIDFallback(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodIDFallback_mCAB1BB814895547718E10BA70AEA126CE98AD48C (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.Boolean UnityEngine.AndroidReflection::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_m7B46715954FFFBDFA63B681FAF87AEB2ECF0E47C (Type_t * ___t0, Type_t * ___from1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
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
// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FindClass_m9271648050957874E8489952E493156991C511F5 (String_t* ___name0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_FindClass_m9271648050957874E8489952E493156991C511F5_ftn) (String_t*);
	static AndroidJNI_FindClass_m9271648050957874E8489952E493156991C511F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FindClass_m9271648050957874E8489952E493156991C511F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FindClass(System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___name0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FromReflectedMethod_mBF204982142E2EA82F66F562F5661F2A459F34F5 (intptr_t ___refMethod0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_FromReflectedMethod_mBF204982142E2EA82F66F562F5661F2A459F34F5_ftn) (intptr_t);
	static AndroidJNI_FromReflectedMethod_mBF204982142E2EA82F66F562F5661F2A459F34F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromReflectedMethod_mBF204982142E2EA82F66F562F5661F2A459F34F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___refMethod0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991 (const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991_ftn) ();
	static AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ExceptionOccurred()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7 (const RuntimeMethod* method)
{
	typedef void (*AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7_ftn) ();
	static AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ExceptionClear()");
	_il2cpp_icall_func();
}
// System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewGlobalRef_m34740B5AECF82CE97986D6E67F5E1D8CBF7DB837 (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_NewGlobalRef_m34740B5AECF82CE97986D6E67F5E1D8CBF7DB837_ftn) (intptr_t);
	static AndroidJNI_NewGlobalRef_m34740B5AECF82CE97986D6E67F5E1D8CBF7DB837_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewGlobalRef_m34740B5AECF82CE97986D6E67F5E1D8CBF7DB837_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteGlobalRef_m0B4945EEFFCA6F7CC0808310DD6FA8BFB58A4F53 (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (*AndroidJNI_DeleteGlobalRef_m0B4945EEFFCA6F7CC0808310DD6FA8BFB58A4F53_ftn) (intptr_t);
	static AndroidJNI_DeleteGlobalRef_m0B4945EEFFCA6F7CC0808310DD6FA8BFB58A4F53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteGlobalRef_m0B4945EEFFCA6F7CC0808310DD6FA8BFB58A4F53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)");
	_il2cpp_icall_func(___obj0);
}
// System.IntPtr UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewWeakGlobalRef_mB62AFFE361315D8C045F6EF4D961C5501839E295 (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_NewWeakGlobalRef_mB62AFFE361315D8C045F6EF4D961C5501839E295_ftn) (intptr_t);
	static AndroidJNI_NewWeakGlobalRef_mB62AFFE361315D8C045F6EF4D961C5501839E295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewWeakGlobalRef_mB62AFFE361315D8C045F6EF4D961C5501839E295_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteWeakGlobalRef_m972079D94C174FA5F427AC16C92B2B3179175F46 (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (*AndroidJNI_DeleteWeakGlobalRef_m972079D94C174FA5F427AC16C92B2B3179175F46_ftn) (intptr_t);
	static AndroidJNI_DeleteWeakGlobalRef_m972079D94C174FA5F427AC16C92B2B3179175F46_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteWeakGlobalRef_m972079D94C174FA5F427AC16C92B2B3179175F46_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)");
	_il2cpp_icall_func(___obj0);
}
// System.IntPtr UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewLocalRef_m9309F714C7C9C3C47EA48218FB6B0BE810E42EAE (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_NewLocalRef_m9309F714C7C9C3C47EA48218FB6B0BE810E42EAE_ftn) (intptr_t);
	static AndroidJNI_NewLocalRef_m9309F714C7C9C3C47EA48218FB6B0BE810E42EAE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewLocalRef_m9309F714C7C9C3C47EA48218FB6B0BE810E42EAE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_m5EEFE4C0CA9F65208C117ECE9D893A993A477DB4 (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (*AndroidJNI_DeleteLocalRef_m5EEFE4C0CA9F65208C117ECE9D893A993A477DB4_ftn) (intptr_t);
	static AndroidJNI_DeleteLocalRef_m5EEFE4C0CA9F65208C117ECE9D893A993A477DB4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteLocalRef_m5EEFE4C0CA9F65208C117ECE9D893A993A477DB4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)");
	_il2cpp_icall_func(___obj0);
}
// System.IntPtr UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObject_m8D445E11DAFC786997C16BF296C0BB844F6E7D60 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_NewObject_m8D445E11DAFC786997C16BF296C0BB844F6E7D60_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_NewObject_m8D445E11DAFC786997C16BF296C0BB844F6E7D60_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewObject_m8D445E11DAFC786997C16BF296C0BB844F6E7D60_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectClass_m38B1858A3F6F7336FBEC67F36E998D61DE93988A (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_GetObjectClass_m38B1858A3F6F7336FBEC67F36E998D61DE93988A_ftn) (intptr_t);
	static AndroidJNI_GetObjectClass_m38B1858A3F6F7336FBEC67F36E998D61DE93988A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetObjectClass_m38B1858A3F6F7336FBEC67F36E998D61DE93988A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_m4A0DBC91C300B8F342333561BA237258E12D0A3B (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_GetMethodID_m4A0DBC91C300B8F342333561BA237258E12D0A3B_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetMethodID_m4A0DBC91C300B8F342333561BA237258E12D0A3B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetMethodID_m4A0DBC91C300B8F342333561BA237258E12D0A3B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___clazz0, ___name1, ___sig2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticMethodID_mB2C04328A527EB6EAC74F048CC10DEB3099C4826 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_GetStaticMethodID_mB2C04328A527EB6EAC74F048CC10DEB3099C4826_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetStaticMethodID_mB2C04328A527EB6EAC74F048CC10DEB3099C4826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticMethodID_mB2C04328A527EB6EAC74F048CC10DEB3099C4826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___clazz0, ___name1, ___sig2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewString_m39B9E7C930BE075D93850E925F808720BEB5C673 (String_t* ___chars0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___chars0;
		intptr_t L_1;
		L_1 = AndroidJNI_NewStringFromStr_m2FA0D93FE6ABFD5D1B3546B797EDE6ABB37208CC(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNI::NewStringFromStr(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewStringFromStr_m2FA0D93FE6ABFD5D1B3546B797EDE6ABB37208CC (String_t* ___chars0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_NewStringFromStr_m2FA0D93FE6ABFD5D1B3546B797EDE6ABB37208CC_ftn) (String_t*);
	static AndroidJNI_NewStringFromStr_m2FA0D93FE6ABFD5D1B3546B797EDE6ABB37208CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewStringFromStr_m2FA0D93FE6ABFD5D1B3546B797EDE6ABB37208CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewStringFromStr(System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___chars0);
	return icallRetVal;
}
// System.String UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringChars_m95FBBCDB48D425FBDC19710D92C7D6D175041778 (intptr_t ___str0, const RuntimeMethod* method)
{
	typedef String_t* (*AndroidJNI_GetStringChars_m95FBBCDB48D425FBDC19710D92C7D6D175041778_ftn) (intptr_t);
	static AndroidJNI_GetStringChars_m95FBBCDB48D425FBDC19710D92C7D6D175041778_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStringChars_m95FBBCDB48D425FBDC19710D92C7D6D175041778_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)");
	String_t* icallRetVal = _il2cpp_icall_func(___str0);
	return icallRetVal;
}
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m8D44F815C76333C22FF73753CF8289089E633261 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef String_t* (*AndroidJNI_CallStringMethod_m8D44F815C76333C22FF73753CF8289089E633261_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStringMethod_m8D44F815C76333C22FF73753CF8289089E633261_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStringMethod_m8D44F815C76333C22FF73753CF8289089E633261_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	String_t* icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethod_m29CAA840E7ECD2A6B835EAF9E119F8E3E5B99495 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_CallObjectMethod_m29CAA840E7ECD2A6B835EAF9E119F8E3E5B99495_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallObjectMethod_m29CAA840E7ECD2A6B835EAF9E119F8E3E5B99495_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallObjectMethod_m29CAA840E7ECD2A6B835EAF9E119F8E3E5B99495_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethod_m3A49D0808C1D0C3EAF25B3F2DC7890B483B00CDF (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef int32_t (*AndroidJNI_CallIntMethod_m3A49D0808C1D0C3EAF25B3F2DC7890B483B00CDF_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallIntMethod_m3A49D0808C1D0C3EAF25B3F2DC7890B483B00CDF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallIntMethod_m3A49D0808C1D0C3EAF25B3F2DC7890B483B00CDF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int32_t icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallBooleanMethod_mCC2BF562D42946CC90BB9E5489C9311DB38A6F8A (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef bool (*AndroidJNI_CallBooleanMethod_mCC2BF562D42946CC90BB9E5489C9311DB38A6F8A_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallBooleanMethod_mCC2BF562D42946CC90BB9E5489C9311DB38A6F8A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallBooleanMethod_mCC2BF562D42946CC90BB9E5489C9311DB38A6F8A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	bool icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallShortMethod_m719565EF3E0DB80078F924283F72E3492BCED486 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef int16_t (*AndroidJNI_CallShortMethod_m719565EF3E0DB80078F924283F72E3492BCED486_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallShortMethod_m719565EF3E0DB80078F924283F72E3492BCED486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallShortMethod_m719565EF3E0DB80078F924283F72E3492BCED486_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int16_t icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.SByte UnityEngine.AndroidJNI::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallSByteMethod_mD99C2871A4ED3D2228B6F9EA97484D71E529C5EA (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef int8_t (*AndroidJNI_CallSByteMethod_mD99C2871A4ED3D2228B6F9EA97484D71E529C5EA_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallSByteMethod_mD99C2871A4ED3D2228B6F9EA97484D71E529C5EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallSByteMethod_mD99C2871A4ED3D2228B6F9EA97484D71E529C5EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int8_t icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallCharMethod_m6D9AB75BB4E6E6F40C12654EADB9CB3AC441F257 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef Il2CppChar (*AndroidJNI_CallCharMethod_m6D9AB75BB4E6E6F40C12654EADB9CB3AC441F257_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallCharMethod_m6D9AB75BB4E6E6F40C12654EADB9CB3AC441F257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallCharMethod_m6D9AB75BB4E6E6F40C12654EADB9CB3AC441F257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallFloatMethod_mB40ADB8EFB34D674AF586B65E3B443AF51B62CD9 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef float (*AndroidJNI_CallFloatMethod_mB40ADB8EFB34D674AF586B65E3B443AF51B62CD9_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallFloatMethod_mB40ADB8EFB34D674AF586B65E3B443AF51B62CD9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallFloatMethod_mB40ADB8EFB34D674AF586B65E3B443AF51B62CD9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	float icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethod_mC6B84A261650B29C19C304F07D1080B38ABC7186 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef double (*AndroidJNI_CallDoubleMethod_mC6B84A261650B29C19C304F07D1080B38ABC7186_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallDoubleMethod_mC6B84A261650B29C19C304F07D1080B38ABC7186_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallDoubleMethod_mC6B84A261650B29C19C304F07D1080B38ABC7186_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	double icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallLongMethod_m566FBCF6E3D1B11ECBA4DBB51E3712F2EE9A7FE9 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef int64_t (*AndroidJNI_CallLongMethod_m566FBCF6E3D1B11ECBA4DBB51E3712F2EE9A7FE9_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallLongMethod_m566FBCF6E3D1B11ECBA4DBB51E3712F2EE9A7FE9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallLongMethod_m566FBCF6E3D1B11ECBA4DBB51E3712F2EE9A7FE9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int64_t icallRetVal = _il2cpp_icall_func(___obj0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m4089540DF5B52F735C6C70988D73FE69463B7B44 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef String_t* (*AndroidJNI_CallStaticStringMethod_m4089540DF5B52F735C6C70988D73FE69463B7B44_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStaticStringMethod_m4089540DF5B52F735C6C70988D73FE69463B7B44_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticStringMethod_m4089540DF5B52F735C6C70988D73FE69463B7B44_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	String_t* icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallStaticObjectMethod_m41962AB7EBBC53ACB5ACD5D7CC175EC8CFF22B13 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_CallStaticObjectMethod_m41962AB7EBBC53ACB5ACD5D7CC175EC8CFF22B13_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStaticObjectMethod_m41962AB7EBBC53ACB5ACD5D7CC175EC8CFF22B13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticObjectMethod_m41962AB7EBBC53ACB5ACD5D7CC175EC8CFF22B13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallStaticIntMethod_mE05BBCE19901EED01DB88DCE7775D2EC75266F6F (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef int32_t (*AndroidJNI_CallStaticIntMethod_mE05BBCE19901EED01DB88DCE7775D2EC75266F6F_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStaticIntMethod_mE05BBCE19901EED01DB88DCE7775D2EC75266F6F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticIntMethod_mE05BBCE19901EED01DB88DCE7775D2EC75266F6F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int32_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallStaticBooleanMethod_mA658B97E472490DCEF41A9C9BE9E2808FD4D8649 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef bool (*AndroidJNI_CallStaticBooleanMethod_mA658B97E472490DCEF41A9C9BE9E2808FD4D8649_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStaticBooleanMethod_mA658B97E472490DCEF41A9C9BE9E2808FD4D8649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticBooleanMethod_mA658B97E472490DCEF41A9C9BE9E2808FD4D8649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	bool icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallStaticShortMethod_m06B921F4634800E6E42691920E9DD1697491061A (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef int16_t (*AndroidJNI_CallStaticShortMethod_m06B921F4634800E6E42691920E9DD1697491061A_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStaticShortMethod_m06B921F4634800E6E42691920E9DD1697491061A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticShortMethod_m06B921F4634800E6E42691920E9DD1697491061A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int16_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.SByte UnityEngine.AndroidJNI::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallStaticSByteMethod_m5E1FBD3B228299120E15BC39A97BB98BFD8CEA68 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef int8_t (*AndroidJNI_CallStaticSByteMethod_m5E1FBD3B228299120E15BC39A97BB98BFD8CEA68_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStaticSByteMethod_m5E1FBD3B228299120E15BC39A97BB98BFD8CEA68_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticSByteMethod_m5E1FBD3B228299120E15BC39A97BB98BFD8CEA68_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int8_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallStaticCharMethod_mA3E1C0CA79C37C0E8CA480305C0195D87C4EBBF7 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef Il2CppChar (*AndroidJNI_CallStaticCharMethod_mA3E1C0CA79C37C0E8CA480305C0195D87C4EBBF7_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStaticCharMethod_mA3E1C0CA79C37C0E8CA480305C0195D87C4EBBF7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticCharMethod_mA3E1C0CA79C37C0E8CA480305C0195D87C4EBBF7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallStaticFloatMethod_m0DA71B5E200550A66C4880BFF404225B063ACDFE (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef float (*AndroidJNI_CallStaticFloatMethod_m0DA71B5E200550A66C4880BFF404225B063ACDFE_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStaticFloatMethod_m0DA71B5E200550A66C4880BFF404225B063ACDFE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticFloatMethod_m0DA71B5E200550A66C4880BFF404225B063ACDFE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	float icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallStaticDoubleMethod_m705917C9F0238B4C0E040C9156424FB1BD2FC4DA (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef double (*AndroidJNI_CallStaticDoubleMethod_m705917C9F0238B4C0E040C9156424FB1BD2FC4DA_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStaticDoubleMethod_m705917C9F0238B4C0E040C9156424FB1BD2FC4DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticDoubleMethod_m705917C9F0238B4C0E040C9156424FB1BD2FC4DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	double icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethod_mA9AAA7D40F0F6D5BB9EB183ED5E9ADD05714648B (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef int64_t (*AndroidJNI_CallStaticLongMethod_mA9AAA7D40F0F6D5BB9EB183ED5E9ADD05714648B_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStaticLongMethod_mA9AAA7D40F0F6D5BB9EB183ED5E9ADD05714648B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticLongMethod_mA9AAA7D40F0F6D5BB9EB183ED5E9ADD05714648B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	int64_t icallRetVal = _il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallStaticVoidMethod_mE35981047575D7C0028FC4EF205B05909911F0E3 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	typedef void (*AndroidJNI_CallStaticVoidMethod_mE35981047575D7C0028FC4EF205B05909911F0E3_ftn) (intptr_t, intptr_t, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*);
	static AndroidJNI_CallStaticVoidMethod_mE35981047575D7C0028FC4EF205B05909911F0E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticVoidMethod_mE35981047575D7C0028FC4EF205B05909911F0E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])");
	_il2cpp_icall_func(___clazz0, ___methodID1, ___args2);
}
// System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToBooleanArray_m105D3745D21CE3B0780C3861BB455A9E29B0B9F6 (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___array0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_ToBooleanArray_m105D3745D21CE3B0780C3861BB455A9E29B0B9F6_ftn) (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*);
	static AndroidJNI_ToBooleanArray_m105D3745D21CE3B0780C3861BB455A9E29B0B9F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToBooleanArray_m105D3745D21CE3B0780C3861BB455A9E29B0B9F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToByteArray_m099C6F143979F050C4A6AECF70854153CE8B58CC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_ToByteArray_m099C6F143979F050C4A6AECF70854153CE8B58CC_ftn) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*);
	static AndroidJNI_ToByteArray_m099C6F143979F050C4A6AECF70854153CE8B58CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToByteArray_m099C6F143979F050C4A6AECF70854153CE8B58CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToByteArray(System.Byte[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToSByteArray_m91EBEA7CBDBCCDF759D77AB5BD1AE8BF00030B5F (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___array0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_ToSByteArray_m91EBEA7CBDBCCDF759D77AB5BD1AE8BF00030B5F_ftn) (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*);
	static AndroidJNI_ToSByteArray_m91EBEA7CBDBCCDF759D77AB5BD1AE8BF00030B5F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToSByteArray_m91EBEA7CBDBCCDF759D77AB5BD1AE8BF00030B5F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToSByteArray(System.SByte[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToCharArray_mC48F010177FFBC2F0CCAAE1B675B6C4882EBA257 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_ToCharArray_mC48F010177FFBC2F0CCAAE1B675B6C4882EBA257_ftn) (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*);
	static AndroidJNI_ToCharArray_mC48F010177FFBC2F0CCAAE1B675B6C4882EBA257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToCharArray_mC48F010177FFBC2F0CCAAE1B675B6C4882EBA257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToCharArray(System.Char[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToShortArray_m37FFD5AD4C5CC07127F2E64598FCD5A0924B246F (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___array0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_ToShortArray_m37FFD5AD4C5CC07127F2E64598FCD5A0924B246F_ftn) (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*);
	static AndroidJNI_ToShortArray_m37FFD5AD4C5CC07127F2E64598FCD5A0924B246F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToShortArray_m37FFD5AD4C5CC07127F2E64598FCD5A0924B246F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToShortArray(System.Int16[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToIntArray_mB2B766977213FA271EE9044B5B781112CA274317 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_ToIntArray_mB2B766977213FA271EE9044B5B781112CA274317_ftn) (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*);
	static AndroidJNI_ToIntArray_mB2B766977213FA271EE9044B5B781112CA274317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToIntArray_mB2B766977213FA271EE9044B5B781112CA274317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToIntArray(System.Int32[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToLongArray_m784C3156DDD9D0D74E21F394CDFEB3C87538355F (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___array0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_ToLongArray_m784C3156DDD9D0D74E21F394CDFEB3C87538355F_ftn) (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*);
	static AndroidJNI_ToLongArray_m784C3156DDD9D0D74E21F394CDFEB3C87538355F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToLongArray_m784C3156DDD9D0D74E21F394CDFEB3C87538355F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToLongArray(System.Int64[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToFloatArray_m197E51BD1D14272F35DA0FF57B9C158E3DC5DA8D (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_ToFloatArray_m197E51BD1D14272F35DA0FF57B9C158E3DC5DA8D_ftn) (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*);
	static AndroidJNI_ToFloatArray_m197E51BD1D14272F35DA0FF57B9C158E3DC5DA8D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToFloatArray_m197E51BD1D14272F35DA0FF57B9C158E3DC5DA8D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToFloatArray(System.Single[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToDoubleArray_m00242343670C4CC0103A07CB766D80F53E36130D (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___array0, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_ToDoubleArray_m00242343670C4CC0103A07CB766D80F53E36130D_ftn) (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*);
	static AndroidJNI_ToDoubleArray_m00242343670C4CC0103A07CB766D80F53E36130D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToDoubleArray_m00242343670C4CC0103A07CB766D80F53E36130D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToObjectArray_m1C7B8259B04AC6D68F56BF5F108026882B039F24 (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___array0, intptr_t ___arrayClass1, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_ToObjectArray_m1C7B8259B04AC6D68F56BF5F108026882B039F24_ftn) (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*, intptr_t);
	static AndroidJNI_ToObjectArray_m1C7B8259B04AC6D68F56BF5F108026882B039F24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToObjectArray_m1C7B8259B04AC6D68F56BF5F108026882B039F24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0, ___arrayClass1);
	return icallRetVal;
}
// System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* AndroidJNI_FromBooleanArray_m082FF870EE916B9603686E35776D5369B95D207E (intptr_t ___array0, const RuntimeMethod* method)
{
	typedef BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* (*AndroidJNI_FromBooleanArray_m082FF870EE916B9603686E35776D5369B95D207E_ftn) (intptr_t);
	static AndroidJNI_FromBooleanArray_m082FF870EE916B9603686E35776D5369B95D207E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromBooleanArray_m082FF870EE916B9603686E35776D5369B95D207E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)");
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AndroidJNI_FromByteArray_m8EC58D6AE31ADD634490F84A4F4E36831DB2EC87 (intptr_t ___array0, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*AndroidJNI_FromByteArray_m8EC58D6AE31ADD634490F84A4F4E36831DB2EC87_ftn) (intptr_t);
	static AndroidJNI_FromByteArray_m8EC58D6AE31ADD634490F84A4F4E36831DB2EC87_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromByteArray_m8EC58D6AE31ADD634490F84A4F4E36831DB2EC87_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)");
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.SByte[] UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* AndroidJNI_FromSByteArray_m5372FB70B8027721C47BE0359F538A90128288CD (intptr_t ___array0, const RuntimeMethod* method)
{
	typedef SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* (*AndroidJNI_FromSByteArray_m5372FB70B8027721C47BE0359F538A90128288CD_ftn) (intptr_t);
	static AndroidJNI_FromSByteArray_m5372FB70B8027721C47BE0359F538A90128288CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromSByteArray_m5372FB70B8027721C47BE0359F538A90128288CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)");
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* AndroidJNI_FromCharArray_mCDE27061131471E18F064241982F7C58921B4BCE (intptr_t ___array0, const RuntimeMethod* method)
{
	typedef CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* (*AndroidJNI_FromCharArray_mCDE27061131471E18F064241982F7C58921B4BCE_ftn) (intptr_t);
	static AndroidJNI_FromCharArray_mCDE27061131471E18F064241982F7C58921B4BCE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromCharArray_mCDE27061131471E18F064241982F7C58921B4BCE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)");
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* AndroidJNI_FromShortArray_mAD7FEF4EEAEC6A3DEF148C02EF4E00002A70542E (intptr_t ___array0, const RuntimeMethod* method)
{
	typedef Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* (*AndroidJNI_FromShortArray_mAD7FEF4EEAEC6A3DEF148C02EF4E00002A70542E_ftn) (intptr_t);
	static AndroidJNI_FromShortArray_mAD7FEF4EEAEC6A3DEF148C02EF4E00002A70542E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromShortArray_mAD7FEF4EEAEC6A3DEF148C02EF4E00002A70542E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)");
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* AndroidJNI_FromIntArray_mA60A708BA57B6F520260D4DC6B10E07C54E29C1F (intptr_t ___array0, const RuntimeMethod* method)
{
	typedef Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*AndroidJNI_FromIntArray_mA60A708BA57B6F520260D4DC6B10E07C54E29C1F_ftn) (intptr_t);
	static AndroidJNI_FromIntArray_mA60A708BA57B6F520260D4DC6B10E07C54E29C1F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromIntArray_mA60A708BA57B6F520260D4DC6B10E07C54E29C1F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)");
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidJNI_FromLongArray_m62518A89509FAD6404628618EA05A63911DB0941 (intptr_t ___array0, const RuntimeMethod* method)
{
	typedef Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* (*AndroidJNI_FromLongArray_m62518A89509FAD6404628618EA05A63911DB0941_ftn) (intptr_t);
	static AndroidJNI_FromLongArray_m62518A89509FAD6404628618EA05A63911DB0941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromLongArray_m62518A89509FAD6404628618EA05A63911DB0941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)");
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* AndroidJNI_FromFloatArray_m01E10AC1773DE0878B8875994E74B205E42EE2E4 (intptr_t ___array0, const RuntimeMethod* method)
{
	typedef SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*AndroidJNI_FromFloatArray_m01E10AC1773DE0878B8875994E74B205E42EE2E4_ftn) (intptr_t);
	static AndroidJNI_FromFloatArray_m01E10AC1773DE0878B8875994E74B205E42EE2E4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromFloatArray_m01E10AC1773DE0878B8875994E74B205E42EE2E4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)");
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* AndroidJNI_FromDoubleArray_mB8DA303F2DC6FB96E45D6C2DEC2B1C7AF9A7D9BE (intptr_t ___array0, const RuntimeMethod* method)
{
	typedef DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* (*AndroidJNI_FromDoubleArray_mB8DA303F2DC6FB96E45D6C2DEC2B1C7AF9A7D9BE_ftn) (intptr_t);
	static AndroidJNI_FromDoubleArray_mB8DA303F2DC6FB96E45D6C2DEC2B1C7AF9A7D9BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromDoubleArray_mB8DA303F2DC6FB96E45D6C2DEC2B1C7AF9A7D9BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)");
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetArrayLength_m48A34992E6BF0EF5510037EA38EB2D348634C9DE (intptr_t ___array0, const RuntimeMethod* method)
{
	typedef int32_t (*AndroidJNI_GetArrayLength_m48A34992E6BF0EF5510037EA38EB2D348634C9DE_ftn) (intptr_t);
	static AndroidJNI_GetArrayLength_m48A34992E6BF0EF5510037EA38EB2D348634C9DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetArrayLength_m48A34992E6BF0EF5510037EA38EB2D348634C9DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___array0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObjectArray_m40592BC65B199B1AAE32F2682D8E9236E07929EE (int32_t ___size0, intptr_t ___clazz1, intptr_t ___obj2, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_NewObjectArray_m40592BC65B199B1AAE32F2682D8E9236E07929EE_ftn) (int32_t, intptr_t, intptr_t);
	static AndroidJNI_NewObjectArray_m40592BC65B199B1AAE32F2682D8E9236E07929EE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewObjectArray_m40592BC65B199B1AAE32F2682D8E9236E07929EE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___size0, ___clazz1, ___obj2);
	return icallRetVal;
}
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (*AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18_ftn) (intptr_t, int32_t);
	static AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___array0, ___index1);
	return icallRetVal;
}
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetObjectArrayElement_m1C6E498550EF9FCA24DBD3E6D4F2BF6764FB315D (intptr_t ___array0, int32_t ___index1, intptr_t ___obj2, const RuntimeMethod* method)
{
	typedef void (*AndroidJNI_SetObjectArrayElement_m1C6E498550EF9FCA24DBD3E6D4F2BF6764FB315D_ftn) (intptr_t, int32_t, intptr_t);
	static AndroidJNI_SetObjectArrayElement_m1C6E498550EF9FCA24DBD3E6D4F2BF6764FB315D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetObjectArrayElement_m1C6E498550EF9FCA24DBD3E6D4F2BF6764FB315D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)");
	_il2cpp_icall_func(___array0, ___index1, ___obj2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m22710C39375F8A965C70F995413D4B3C62E85E30 (intptr_t ___javaClass0, String_t* ___signature1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___javaClass0;
		String_t* L_1 = ___signature1;
		intptr_t L_2;
		L_2 = _AndroidJNIHelper_GetConstructorID_m0802B71B149170217E6FE75A7864A4BE7315215F((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		intptr_t L_3 = V_0;
		return (intptr_t)L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___javaClass0;
		String_t* L_1 = ___methodName1;
		String_t* L_2 = ___signature2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_m74B615C2438AF4A05F5FDA31F871AA641799CC9C((intptr_t)L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return (intptr_t)L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaRunnable_m789E333B57BE23010719477567A818C88A529153 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * ___jrunnable0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_0 = ___jrunnable0;
		intptr_t L_1;
		L_1 = _AndroidJNIHelper_CreateJavaRunnable_m9FEEC38F8F25D8A5E6DBD8329094C3C24D73EC52(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaProxy(UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaProxy_mF3E9256AF65CC078B82DD0E1DC65306AA79DBBEC (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * ___proxy0, const RuntimeMethod* method)
{
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * L_0 = ___proxy0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_2 = V_0;
		intptr_t L_3;
		L_3 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_2, /*hidden argument*/NULL);
		AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * L_4 = ___proxy0;
		intptr_t L_5;
		L_5 = _AndroidJNIHelper_CreateJavaProxy_mCE38F0AE360145E8ECD9B15364CF570EE1D57D5D((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_5;
		goto IL_0024;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.Object)
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJNIHelper_CreateJavaProxy_mF3E9256AF65CC078B82DD0E1DC65306AA79DBBEC_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0024:
	{
		intptr_t L_6 = V_1;
		return (intptr_t)L_6;
	}
}
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* AndroidJNIHelper_CreateJNIArgArray_m3B928C14D5B3E86B38331427E0605478402DFDCE (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args0;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_1;
		L_1 = _AndroidJNIHelper_CreateJNIArgArray_m6CAC58535CA8F9F1A7A4458BA1BC855CB46609E2(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_mF43CDD1F690C9E843FE622B9A5F7B21F7556408A (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___jniArgs1, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args0;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_1 = ___jniArgs1;
		_AndroidJNIHelper_DeleteJNIArgArray_m1ECC70D98768BD3E5C6C6EABC1162F43B297AD85(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_mDC08F55A8FFF5D4E2B6CB5FB6808935EC8211007 (intptr_t ___jclass0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___args1;
		intptr_t L_2;
		L_2 = _AndroidJNIHelper_GetConstructorID_m59BD3F866A86FC0FFDB26FFB820124E830CDB3E7((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		intptr_t L_3 = V_0;
		return (intptr_t)L_3;
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
// System.Void UnityEngine.AndroidJNISafe::CheckException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* V_7 = NULL;
	String_t* V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		intptr_t L_0;
		L_0 = AndroidJNI_ExceptionOccurred_m347473FDF70118E17D092961232E7EAF0BCF2991(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		intptr_t L_1 = V_0;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00af;
		}
	}
	{
		AndroidJNI_ExceptionClear_mE1961C9BD4984AF52712BFF181B6B95F435531B7(/*hidden argument*/NULL);
		intptr_t L_4;
		L_4 = AndroidJNI_FindClass_m9271648050957874E8489952E493156991C511F5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C)), /*hidden argument*/NULL);
		V_2 = (intptr_t)L_4;
		intptr_t L_5;
		L_5 = AndroidJNI_FindClass_m9271648050957874E8489952E493156991C511F5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E)), /*hidden argument*/NULL);
		V_3 = (intptr_t)L_5;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		intptr_t L_6 = V_2;
		intptr_t L_7;
		L_7 = AndroidJNI_GetMethodID_m4A0DBC91C300B8F342333561BA237258E12D0A3B((intptr_t)L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56)), /*hidden argument*/NULL);
		V_4 = (intptr_t)L_7;
		intptr_t L_8 = V_3;
		intptr_t L_9;
		L_9 = AndroidJNI_GetStaticMethodID_mB2C04328A527EB6EAC74F048CC10DEB3099C4826((intptr_t)L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB)), /*hidden argument*/NULL);
		V_5 = (intptr_t)L_9;
		intptr_t L_10 = V_0;
		intptr_t L_11 = V_4;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_12 = (jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var)), (uint32_t)0);
		String_t* L_13;
		L_13 = AndroidJNI_CallStringMethod_m8D44F815C76333C22FF73753CF8289089E633261((intptr_t)L_10, (intptr_t)L_11, L_12, /*hidden argument*/NULL);
		V_6 = L_13;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_14 = (jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var)), (uint32_t)1);
		V_7 = L_14;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_15 = V_7;
		NullCheck(L_15);
		intptr_t L_16 = V_0;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_l_8((intptr_t)L_16);
		intptr_t L_17 = V_3;
		intptr_t L_18 = V_5;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_19 = V_7;
		String_t* L_20;
		L_20 = AndroidJNI_CallStaticStringMethod_m4089540DF5B52F735C6C70988D73FE69463B7B44((intptr_t)L_17, (intptr_t)L_18, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		String_t* L_21 = V_6;
		String_t* L_22 = V_8;
		AndroidJavaException_tA371556A4C19FBFA201DD4939DFA781D109B243D * L_23 = (AndroidJavaException_tA371556A4C19FBFA201DD4939DFA781D109B243D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_tA371556A4C19FBFA201DD4939DFA781D109B243D_il2cpp_TypeInfo_var)));
		AndroidJavaException__ctor_mD451AB9B54A333C79F0F0650DD4DC2B173CAA910(L_23, L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249_RuntimeMethod_var)));
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0097;
	}

FINALLY_0097:
	{ // begin finally (depth: 1)
		intptr_t L_24 = V_0;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_24, /*hidden argument*/NULL);
		intptr_t L_25 = V_2;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_25, /*hidden argument*/NULL);
		intptr_t L_26 = V_3;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_26, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(151)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00af:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteGlobalRef_m7651FA0BAEE0F4D660393C5CC6914F21270B0288 (intptr_t ___globalref0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___globalref0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_3 = ___globalref0;
		AndroidJNI_DeleteGlobalRef_m0B4945EEFFCA6F7CC0808310DD6FA8BFB58A4F53((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::DeleteWeakGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteWeakGlobalRef_m0FC9348DE2D937798DB6D6A5461021AFEBC7506D (intptr_t ___globalref0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___globalref0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_3 = ___globalref0;
		AndroidJNI_DeleteWeakGlobalRef_m972079D94C174FA5F427AC16C92B2B3179175F46((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39 (intptr_t ___localref0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___localref0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_3 = ___localref0;
		AndroidJNI_DeleteLocalRef_m5EEFE4C0CA9F65208C117ECE9D893A993A477DB4((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::NewString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewString_m5F5B2B700BDE2D0D1D105687D4ACC9567CEE7A23 (String_t* ___chars0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		String_t* L_0 = ___chars0;
		intptr_t L_1;
		L_1 = AndroidJNI_NewString_m39B9E7C930BE075D93850E925F808720BEB5C673(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8 (intptr_t ___str0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
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
		intptr_t L_0 = ___str0;
		String_t* L_1;
		L_1 = AndroidJNI_GetStringChars_m95FBBCDB48D425FBDC19710D92C7D6D175041778((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectClass(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectClass_m6FD726927BEAAA70778766E29215A6CA63A93DC3 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		intptr_t L_0 = ___ptr0;
		intptr_t L_1;
		L_1 = AndroidJNI_GetObjectClass_m38B1858A3F6F7336FBEC67F36E998D61DE93988A((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticMethodID_m883F40A297071B64F8DE3572FDBB8B9834EF1163 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		intptr_t L_0 = ___clazz0;
		String_t* L_1 = ___name1;
		String_t* L_2 = ___sig2;
		intptr_t L_3;
		L_3 = AndroidJNI_GetStaticMethodID_mB2C04328A527EB6EAC74F048CC10DEB3099C4826((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetMethodID_mB6545767927E1F859540D99EBD39E464811E5F8F (intptr_t ___obj0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		intptr_t L_0 = ___obj0;
		String_t* L_1 = ___name1;
		String_t* L_2 = ___sig2;
		intptr_t L_3;
		L_3 = AndroidJNI_GetMethodID_m4A0DBC91C300B8F342333561BA237258E12D0A3B((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FromReflectedMethod_m21A25975498B872199E7B9708AF0AD6E1248E3A7 (intptr_t ___refMethod0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		intptr_t L_0 = ___refMethod0;
		intptr_t L_1;
		L_1 = AndroidJNI_FromReflectedMethod_mBF204982142E2EA82F66F562F5661F2A459F34F5((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FindClass_mD96E72414A78F50B07019D26B87A93799D85BB0A (String_t* ___name0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = AndroidJNI_FindClass_m9271648050957874E8489952E493156991C511F5(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewObject_m8B3CE344FE9144B92096F0A36CF75DA56C380BF7 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		intptr_t L_3;
		L_3 = AndroidJNI_NewObject_m8D445E11DAFC786997C16BF296C0BB844F6E7D60((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.Void UnityEngine.AndroidJNISafe::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CallStaticVoidMethod_m6D6C21C3489E19241A6856D7642CDC56752D7128 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		AndroidJNI_CallStaticVoidMethod_mE35981047575D7C0028FC4EF205B05909911F0E3((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_000e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000e;
	}

FINALLY_000e:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(14)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(14)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_mE83D4A0C1BF62925F8B9D4B49040A90CBA1B8860 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		intptr_t L_3;
		L_3 = AndroidJNI_CallStaticObjectMethod_m41962AB7EBBC53ACB5ACD5D7CC175EC8CFF22B13((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.String UnityEngine.AndroidJNISafe::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m07A63C912305DF8135F004AAD0D4CB1C5581B759 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		String_t* L_3;
		L_3 = AndroidJNI_CallStaticStringMethod_m4089540DF5B52F735C6C70988D73FE69463B7B44((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Char UnityEngine.AndroidJNISafe::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallStaticCharMethod_m88B2D927CACB988E16F44DD2A8AC987474401B5F (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		Il2CppChar L_3;
		L_3 = AndroidJNI_CallStaticCharMethod_mA3E1C0CA79C37C0E8CA480305C0195D87C4EBBF7((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		Il2CppChar L_4 = V_0;
		return L_4;
	}
}
// System.Double UnityEngine.AndroidJNISafe::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallStaticDoubleMethod_m689EC57B2A63DA127AEF67654FC9DE7CB1663475 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	double V_0 = 0.0;
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		double L_3;
		L_3 = AndroidJNI_CallStaticDoubleMethod_m705917C9F0238B4C0E040C9156424FB1BD2FC4DA((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		double L_4 = V_0;
		return L_4;
	}
}
// System.Single UnityEngine.AndroidJNISafe::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallStaticFloatMethod_mD83AA80C049145FF339EEEF1D8EE4FF9A49DB75F (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		float L_3;
		L_3 = AndroidJNI_CallStaticFloatMethod_m0DA71B5E200550A66C4880BFF404225B063ACDFE((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Int64 UnityEngine.AndroidJNISafe::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallStaticLongMethod_mC9068CBB054C422BBC4D20AE922D192C0F1207FA (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		int64_t L_3;
		L_3 = AndroidJNI_CallStaticLongMethod_mA9AAA7D40F0F6D5BB9EB183ED5E9ADD05714648B((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Int16 UnityEngine.AndroidJNISafe::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallStaticShortMethod_mDD995D10C2A525A86D1CF2E3BD5470B9ADC75FAD (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	int16_t V_0 = 0;
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		int16_t L_3;
		L_3 = AndroidJNI_CallStaticShortMethod_m06B921F4634800E6E42691920E9DD1697491061A((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		int16_t L_4 = V_0;
		return L_4;
	}
}
// System.SByte UnityEngine.AndroidJNISafe::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallStaticSByteMethod_mF88F61AA2AB1756827141DA8933761D56335619B (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	int8_t V_0 = 0x0;
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		int8_t L_3;
		L_3 = AndroidJNI_CallStaticSByteMethod_m5E1FBD3B228299120E15BC39A97BB98BFD8CEA68((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		int8_t L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.AndroidJNISafe::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallStaticBooleanMethod_mD860E0894BD76E4F2D3EB07511162C5AB31098F3 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		bool L_3;
		L_3 = AndroidJNI_CallStaticBooleanMethod_mA658B97E472490DCEF41A9C9BE9E2808FD4D8649((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_mA8298D893A80C85FA91F7B49FB158EEAAFBD9E8B (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
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
		intptr_t L_0 = ___clazz0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		int32_t L_3;
		L_3 = AndroidJNI_CallStaticIntMethod_mE05BBCE19901EED01DB88DCE7775D2EC75266F6F((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_m4460C901E09ABB037442FB973BAC678C70687875 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		intptr_t L_0 = ___obj0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		intptr_t L_3;
		L_3 = AndroidJNI_CallObjectMethod_m29CAA840E7ECD2A6B835EAF9E119F8E3E5B99495((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.String UnityEngine.AndroidJNISafe::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStringMethod_m09F6D302969373907F07432407FAA64F33FDD941 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
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
		intptr_t L_0 = ___obj0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		String_t* L_3;
		L_3 = AndroidJNI_CallStringMethod_m8D44F815C76333C22FF73753CF8289089E633261((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Char UnityEngine.AndroidJNISafe::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallCharMethod_m84323BEB15D11EE402FB095AE4F936CE8DEDF233 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
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
		intptr_t L_0 = ___obj0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		Il2CppChar L_3;
		L_3 = AndroidJNI_CallCharMethod_m6D9AB75BB4E6E6F40C12654EADB9CB3AC441F257((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		Il2CppChar L_4 = V_0;
		return L_4;
	}
}
// System.Double UnityEngine.AndroidJNISafe::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallDoubleMethod_mF204165E66900998B64E8F66B47903C4DECD95E0 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	double V_0 = 0.0;
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
		intptr_t L_0 = ___obj0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		double L_3;
		L_3 = AndroidJNI_CallDoubleMethod_mC6B84A261650B29C19C304F07D1080B38ABC7186((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		double L_4 = V_0;
		return L_4;
	}
}
// System.Single UnityEngine.AndroidJNISafe::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallFloatMethod_m74BA67E88AF91520E756C51B6CB4A5C74A34D5B4 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
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
		intptr_t L_0 = ___obj0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		float L_3;
		L_3 = AndroidJNI_CallFloatMethod_mB40ADB8EFB34D674AF586B65E3B443AF51B62CD9((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Int64 UnityEngine.AndroidJNISafe::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallLongMethod_m1FA0BF14125D8B346FDD85251F2D27A0BF6C0D07 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
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
		intptr_t L_0 = ___obj0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		int64_t L_3;
		L_3 = AndroidJNI_CallLongMethod_m566FBCF6E3D1B11ECBA4DBB51E3712F2EE9A7FE9((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Int16 UnityEngine.AndroidJNISafe::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallShortMethod_mCD55A084D3F33698BB673E23DCDE909B12A9F706 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	int16_t V_0 = 0;
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
		intptr_t L_0 = ___obj0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		int16_t L_3;
		L_3 = AndroidJNI_CallShortMethod_m719565EF3E0DB80078F924283F72E3492BCED486((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		int16_t L_4 = V_0;
		return L_4;
	}
}
// System.SByte UnityEngine.AndroidJNISafe::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallSByteMethod_mA8EBD62443BBEF0F2152F2CDF0C505EA6A954F02 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	int8_t V_0 = 0x0;
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
		intptr_t L_0 = ___obj0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		int8_t L_3;
		L_3 = AndroidJNI_CallSByteMethod_mD99C2871A4ED3D2228B6F9EA97484D71E529C5EA((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		int8_t L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.AndroidJNISafe::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallBooleanMethod_m4D26DBA1123583C6C53D88116871073A8B3A9C70 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
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
		intptr_t L_0 = ___obj0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		bool L_3;
		L_3 = AndroidJNI_CallBooleanMethod_mCC2BF562D42946CC90BB9E5489C9311DB38A6F8A((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallIntMethod_m2F86750DC70184A72557E555BE389E6B8C99F9F9 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___args2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
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
		intptr_t L_0 = ___obj0;
		intptr_t L_1 = ___methodID1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = ___args2;
		int32_t L_3;
		L_3 = AndroidJNI_CallIntMethod_m3A49D0808C1D0C3EAF25B3F2DC7890B483B00CDF((intptr_t)L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_LEAVE(0x16, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305 (intptr_t ___array0, const RuntimeMethod* method)
{
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
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
		intptr_t L_0 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1;
		L_1 = AndroidJNI_FromCharArray_mCDE27061131471E18F064241982F7C58921B4BCE((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = V_0;
		return L_2;
	}
}
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8 (intptr_t ___array0, const RuntimeMethod* method)
{
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_0 = NULL;
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
		intptr_t L_0 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1;
		L_1 = AndroidJNI_FromDoubleArray_mB8DA303F2DC6FB96E45D6C2DEC2B1C7AF9A7D9BE((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = V_0;
		return L_2;
	}
}
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D (intptr_t ___array0, const RuntimeMethod* method)
{
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
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
		intptr_t L_0 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1;
		L_1 = AndroidJNI_FromFloatArray_m01E10AC1773DE0878B8875994E74B205E42EE2E4((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = V_0;
		return L_2;
	}
}
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA (intptr_t ___array0, const RuntimeMethod* method)
{
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_0 = NULL;
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
		intptr_t L_0 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1;
		L_1 = AndroidJNI_FromLongArray_m62518A89509FAD6404628618EA05A63911DB0941((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_2 = V_0;
		return L_2;
	}
}
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD (intptr_t ___array0, const RuntimeMethod* method)
{
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
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
		intptr_t L_0 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1;
		L_1 = AndroidJNI_FromShortArray_mAD7FEF4EEAEC6A3DEF148C02EF4E00002A70542E((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8 (intptr_t ___array0, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
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
		intptr_t L_0 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = AndroidJNI_FromByteArray_m8EC58D6AE31ADD634490F84A4F4E36831DB2EC87((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		return L_2;
	}
}
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D (intptr_t ___array0, const RuntimeMethod* method)
{
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* V_0 = NULL;
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
		intptr_t L_0 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_1;
		L_1 = AndroidJNI_FromSByteArray_m5372FB70B8027721C47BE0359F538A90128288CD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF (intptr_t ___array0, const RuntimeMethod* method)
{
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* V_0 = NULL;
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
		intptr_t L_0 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_1;
		L_1 = AndroidJNI_FromBooleanArray_m082FF870EE916B9603686E35776D5369B95D207E((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_2 = V_0;
		return L_2;
	}
}
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703 (intptr_t ___array0, const RuntimeMethod* method)
{
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
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
		intptr_t L_0 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1;
		L_1 = AndroidJNI_FromIntArray_mA60A708BA57B6F520260D4DC6B10E07C54E29C1F((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToObjectArray(System.IntPtr[],System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToObjectArray_m669E5441604094D8A20E3C1F1F5407AE985F82B8 (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___array0, intptr_t ___type1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_0 = ___array0;
		intptr_t L_1 = ___type1;
		intptr_t L_2;
		L_2 = AndroidJNI_ToObjectArray_m1C7B8259B04AC6D68F56BF5F108026882B039F24(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		IL2CPP_LEAVE(0x15, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x15, IL_0015)
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return (intptr_t)L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToCharArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToCharArray_mC1083C57846830CFA1A7CFFE5BE92F3B826FAC1D (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___array0;
		intptr_t L_1;
		L_1 = AndroidJNI_ToCharArray_mC48F010177FFBC2F0CCAAE1B675B6C4882EBA257(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToDoubleArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToDoubleArray_m0273BA7E9FBD2216215EBD176C8F329973BA53E0 (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___array0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___array0;
		intptr_t L_1;
		L_1 = AndroidJNI_ToDoubleArray_m00242343670C4CC0103A07CB766D80F53E36130D(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToFloatArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToFloatArray_m28D93667CB9E86FE20D0FC8B372BE26CEE9D8A19 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___array0;
		intptr_t L_1;
		L_1 = AndroidJNI_ToFloatArray_m197E51BD1D14272F35DA0FF57B9C158E3DC5DA8D(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToLongArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToLongArray_m0C3D6AD8D2D116C3F11AECD5317AC01EABE16727 (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___array0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_0 = ___array0;
		intptr_t L_1;
		L_1 = AndroidJNI_ToLongArray_m784C3156DDD9D0D74E21F394CDFEB3C87538355F(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToShortArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToShortArray_m52204D9DB65374293E9D6954A2C9C4D47B4396D1 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___array0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___array0;
		intptr_t L_1;
		L_1 = AndroidJNI_ToShortArray_m37FFD5AD4C5CC07127F2E64598FCD5A0924B246F(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToByteArray_mCA96D852C39F79F57A8B68B8B03AF9EC795EA6D9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		intptr_t L_1;
		L_1 = AndroidJNI_ToByteArray_m099C6F143979F050C4A6AECF70854153CE8B58CC(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToSByteArray(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToSByteArray_m6C05420E192FBA37D7B168EC98BE04F56492087B (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___array0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_0 = ___array0;
		intptr_t L_1;
		L_1 = AndroidJNI_ToSByteArray_m91EBEA7CBDBCCDF759D77AB5BD1AE8BF00030B5F(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToBooleanArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToBooleanArray_m2298F4521FD7F175F15B30FF7887D365BD1543BB (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___array0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = ___array0;
		intptr_t L_1;
		L_1 = AndroidJNI_ToBooleanArray_m105D3745D21CE3B0780C3861BB455A9E29B0B9F6(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::ToIntArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToIntArray_mD2FB6E5F31F6FD8A12DD3E86E1022EC14AFF5D0C (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___array0;
		intptr_t L_1;
		L_1 = AndroidJNI_ToIntArray_mB2B766977213FA271EE9044B5B781112CA274317(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectArrayElement_m3219215297449FA1854927E80F1B74EF7413EF73 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		intptr_t L_0 = ___array0;
		int32_t L_1 = ___index1;
		intptr_t L_2;
		L_2 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		IL2CPP_LEAVE(0x15, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x15, IL_0015)
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return (intptr_t)L_3;
	}
}
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56 (intptr_t ___array0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
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
		intptr_t L_0 = ___array0;
		int32_t L_1;
		L_1 = AndroidJNI_GetArrayLength_m48A34992E6BF0EF5510037EA38EB2D348634C9DE((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x14, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		AndroidJNISafe_CheckException_m3F9EF56511586B0A605D2706DB0E0D225D14C249(/*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		return L_2;
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
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m76D62BEE18E830EBCDE4B6860AC3C8A5979C9F18(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___className0;
		AndroidJavaClass__AndroidJavaClass_mD69A3836B7DD13F6514499FFE167BCB136A5BBAB(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaClass::_AndroidJavaClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__AndroidJavaClass_mD69A3836B7DD13F6514499FFE167BCB136A5BBAB (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___className0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A, L_0, /*hidden argument*/NULL);
		AndroidJavaObject_DebugPrint_m4F2A8B6447F29A548C6AE6F74CBD3AF51B587F7D(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___className0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_2, ((int32_t)46), ((int32_t)47), /*hidden argument*/NULL);
		intptr_t L_4;
		L_4 = AndroidJNISafe_FindClass_mD96E72414A78F50B07019D26B87A93799D85BB0A(L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		intptr_t L_5 = V_0;
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_6 = (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)il2cpp_codegen_object_new(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
		((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)__this)->set_m_jclass_2(L_6);
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_7 = (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)il2cpp_codegen_object_new(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D(L_7, (intptr_t)(0), /*hidden argument*/NULL);
		((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)__this)->set_m_jobject_1(L_7);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_m61AE95F9D20CA648AEFC18AE922FE70F0B90786F (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, intptr_t ___jclass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m76D62BEE18E830EBCDE4B6860AC3C8A5979C9F18(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___jclass0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral65572413F78A98D745AF7C2CCAF152BD2C90FF88)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaClass__ctor_m61AE95F9D20CA648AEFC18AE922FE70F0B90786F_RuntimeMethod_var)));
	}

IL_0023:
	{
		intptr_t L_4 = ___jclass0;
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_5 = (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)il2cpp_codegen_object_new(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D(L_5, (intptr_t)L_4, /*hidden argument*/NULL);
		((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)__this)->set_m_jclass_2(L_5);
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_6 = (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)il2cpp_codegen_object_new(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D(L_6, (intptr_t)(0), /*hidden argument*/NULL);
		((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)__this)->set_m_jobject_1(L_6);
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
// System.Void UnityEngine.AndroidJavaException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaException__ctor_mD451AB9B54A333C79F0F0650DD4DC2B173CAA910 (AndroidJavaException_tA371556A4C19FBFA201DD4939DFA781D109B243D * __this, String_t* ___message0, String_t* ___javaStackTrace1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___javaStackTrace1;
		__this->set_mJavaStackTrace_17(L_1);
		return;
	}
}
// System.String UnityEngine.AndroidJavaException::get_StackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJavaException_get_StackTrace_m3A87C920F33472028A05370C7C320C0196B209E9 (AndroidJavaException_tA371556A4C19FBFA201DD4939DFA781D109B243D * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_mJavaStackTrace_17();
		String_t* L_1;
		L_1 = Exception_get_StackTrace_m66E7EFBB3658852BCB2960743DC9352D90C9EE48(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	{
		AndroidJavaObject__ctor_m76D62BEE18E830EBCDE4B6860AC3C8A5979C9F18(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___className0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___args1;
		AndroidJavaObject__AndroidJavaObject_m54584F0F147ECA1A0B7DEB875742B3331CC1666A(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.AndroidJavaObject::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m09E30F9AF9DD2AE07D34CE3915BDA557E206271D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = AndroidJavaObject__GetRawObject_mD52629909E16A092896CD884BB710F876BE14975(__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return (intptr_t)L_1;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_m051337FD2D7C0E765641B192D86FF4A06257836B (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = AndroidJavaObject__GetRawClass_mCEFEDEA158099706B9B2F1CB40C843D2E899932C(__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return (intptr_t)L_1;
	}
}
// System.Void UnityEngine.AndroidJavaObject::DebugPrint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_DebugPrint_m4F2A8B6447F29A548C6AE6F74CBD3AF51B587F7D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		bool L_0 = ((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var))->get_enableDebugPrints_0();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0016;
	}

IL_000f:
	{
		String_t* L_2 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::_AndroidJavaObject(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__AndroidJavaObject_m54584F0F147ECA1A0B7DEB875742B3331CC1666A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* V_1 = NULL;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___className0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D, L_0, /*hidden argument*/NULL);
		AndroidJavaObject_DebugPrint_m4F2A8B6447F29A548C6AE6F74CBD3AF51B587F7D(__this, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_4;
	}

IL_0023:
	{
		String_t* L_5 = ___className0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_5, ((int32_t)46), ((int32_t)47), /*hidden argument*/NULL);
		intptr_t L_7;
		L_7 = AndroidJNISafe_FindClass_mD96E72414A78F50B07019D26B87A93799D85BB0A(L_6, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_7;
		intptr_t L_8 = V_0;
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_9 = (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)il2cpp_codegen_object_new(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D(L_9, (intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_m_jclass_2(L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = ___args1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_11;
		L_11 = AndroidJNIHelper_CreateJNIArgArray_m3B928C14D5B3E86B38331427E0605478402DFDCE(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_12 = __this->get_m_jclass_2();
		intptr_t L_13;
		L_13 = GlobalJavaObjectRef_op_Implicit_m7A992ACF399BAD3EFC96D88CE00B235D8B669B33(L_12, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = ___args1;
		intptr_t L_15;
		L_15 = AndroidJNIHelper_GetConstructorID_mDC08F55A8FFF5D4E2B6CB5FB6808935EC8211007((intptr_t)L_13, L_14, /*hidden argument*/NULL);
		V_3 = (intptr_t)L_15;
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_16 = __this->get_m_jclass_2();
		intptr_t L_17;
		L_17 = GlobalJavaObjectRef_op_Implicit_m7A992ACF399BAD3EFC96D88CE00B235D8B669B33(L_16, /*hidden argument*/NULL);
		intptr_t L_18 = V_3;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_19 = V_1;
		intptr_t L_20;
		L_20 = AndroidJNISafe_NewObject_m8B3CE344FE9144B92096F0A36CF75DA56C380BF7((intptr_t)L_17, (intptr_t)L_18, L_19, /*hidden argument*/NULL);
		V_4 = (intptr_t)L_20;
		intptr_t L_21 = V_4;
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_22 = (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)il2cpp_codegen_object_new(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D(L_22, (intptr_t)L_21, /*hidden argument*/NULL);
		__this->set_m_jobject_1(L_22);
		intptr_t L_23 = V_4;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_23, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x90, FINALLY_0085);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = ___args1;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_25 = V_1;
		AndroidJNIHelper_DeleteJNIArgArray_mF43CDD1F690C9E843FE622B9A5F7B21F7556408A(L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(133)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x90, IL_0090)
	}

IL_0090:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, intptr_t ___jobject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		AndroidJavaObject__ctor_m76D62BEE18E830EBCDE4B6860AC3C8A5979C9F18(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___jobject0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA39614FE650CC59501DA62392479CBAD5E59947A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3_RuntimeMethod_var)));
	}

IL_0023:
	{
		intptr_t L_4 = ___jobject0;
		intptr_t L_5;
		L_5 = AndroidJNISafe_GetObjectClass_m6FD726927BEAAA70778766E29215A6CA63A93DC3((intptr_t)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		intptr_t L_6 = ___jobject0;
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_7 = (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)il2cpp_codegen_object_new(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_m_jobject_1(L_7);
		intptr_t L_8 = V_0;
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_9 = (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)il2cpp_codegen_object_new(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D(L_9, (intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_m_jclass_2(L_9);
		intptr_t L_10 = V_0;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m76D62BEE18E830EBCDE4B6860AC3C8A5979C9F18 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Finalize_mE74A8B42EE112C9889752419D2AA209CD08704A2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method)
{
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
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.AndroidJavaObject::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m881D1EC65C5FE625E9F84D81308E966CAC607AFC (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, bool ___disposing0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_0 = __this->get_m_jobject_1();
		V_0 = (bool)((!(((RuntimeObject*)(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_2 = __this->get_m_jobject_1();
		NullCheck(L_2);
		GlobalJavaObjectRef_Dispose_mDAF2DE01EBD608E63CB661954D0B50015D08FF28(L_2, /*hidden argument*/NULL);
		__this->set_m_jobject_1((GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)NULL);
	}

IL_0023:
	{
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_3 = __this->get_m_jclass_2();
		V_1 = (bool)((!(((RuntimeObject*)(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_5 = __this->get_m_jclass_2();
		NullCheck(L_5);
		GlobalJavaObjectRef_Dispose_mDAF2DE01EBD608E63CB661954D0B50015D08FF28(L_5, /*hidden argument*/NULL);
		__this->set_m_jclass_2((GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)NULL);
	}

IL_0045:
	{
		return;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaObject::AndroidJavaObjectDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB977696EA6F6BB6369A8F783EFB5D99C445C11FD (intptr_t ___jobject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
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
		intptr_t L_0 = ___jobject0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x15, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		intptr_t L_2 = ___jobject0;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_2, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x15, IL_0015)
	}

IL_0015:
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::AndroidJavaClassDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * AndroidJavaObject_AndroidJavaClassDeleteLocalRef_mE5C858ECFE81960EA260B3F112FD8A30C4097842 (intptr_t ___jclass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
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
		intptr_t L_0 = ___jclass0;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m61AE95F9D20CA648AEFC18AE922FE70F0B90786F(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_LEAVE(0x15, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		intptr_t L_2 = ___jclass0;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_2, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x15, IL_0015)
	}

IL_0015:
	{
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawObject_mD52629909E16A092896CD884BB710F876BE14975 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_0 = __this->get_m_jobject_1();
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m7A992ACF399BAD3EFC96D88CE00B235D8B669B33(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJavaObject::_GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawClass_mCEFEDEA158099706B9B2F1CB40C843D2E899932C (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_0 = __this->get_m_jclass_2();
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m7A992ACF399BAD3EFC96D88CE00B235D8B669B33(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.Void UnityEngine.AndroidJavaObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__cctor_mF33A7478608B7668DB4EF3D610695E2828A492CE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var))->set_enableDebugPrints_0((bool)0);
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
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___javaInterface0;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, L_0, /*hidden argument*/NULL);
		AndroidJavaProxy__ctor_m17BDD42A24CEBD07722B68A25CAD6DEAF64241E1(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaProxy::.ctor(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m17BDD42A24CEBD07722B68A25CAD6DEAF64241E1 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_proxyObject_1((intptr_t)(0));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ___javaInterface0;
		__this->set_javaInterface_0(L_0);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaProxy::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy_Finalize_m7F5D1C533F2D1A4A1A286D00E14282E48A55F96F (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, const RuntimeMethod* method)
{
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
		intptr_t L_0 = __this->get_proxyObject_1();
		AndroidJNISafe_DeleteWeakGlobalRef_m0FC9348DE2D937798DB6D6A5461021AFEBC7506D((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x18, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x18, IL_0018)
	}

IL_0018:
	{
		return;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaProxy_Invoke_m0908B96EF03FC0465EAC584963213D227A3048D0 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	int32_t V_1 = 0;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	MethodInfo_t * V_6 = NULL;
	bool V_7 = false;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_8 = NULL;
	TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * V_9 = NULL;
	Exception_t * V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B2_1 = NULL;
	Type_t * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B4_2 = NULL;
	Type_t * G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	Type_t * G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	String_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	Type_t * G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_3 = NULL;
	intptr_t G_B22_4;
	memset((&G_B22_4), 0, sizeof(G_B22_4));
	Type_t * G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_3 = NULL;
	intptr_t G_B21_4;
	memset((&G_B21_4), 0, sizeof(G_B21_4));
	String_t* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_3 = NULL;
	intptr_t G_B23_4;
	memset((&G_B23_4), 0, sizeof(G_B23_4));
	{
		V_0 = (Exception_t *)NULL;
		V_1 = ((int32_t)60);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args1;
		NullCheck(L_0);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_2 = L_1;
		V_4 = 0;
		goto IL_0039;
	}

IL_0014:
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = V_2;
		int32_t L_3 = V_4;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___args1;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		G_B2_0 = L_3;
		G_B2_1 = L_2;
		if (!L_7)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_2;
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = ___args1;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Type_t * L_12;
		L_12 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_11, /*hidden argument*/NULL);
		G_B4_0 = L_12;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0032;
	}

IL_0028:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0032:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (Type_t *)G_B4_0);
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_16 = V_4;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = ___args1;
		NullCheck(L_17);
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0014;
		}
	}
	{
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_19;
			L_19 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
			String_t* L_20 = ___methodName0;
			int32_t L_21 = V_1;
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_22 = V_2;
			NullCheck(L_19);
			MethodInfo_t * L_23;
			L_23 = Type_GetMethod_m69EE86B5A87244C925333CCF1B6D6B9BCFED8A89(L_19, L_20, L_21, (Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 *)NULL, L_22, (ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)(ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)NULL, /*hidden argument*/NULL);
			V_6 = L_23;
			MethodInfo_t * L_24 = V_6;
			V_7 = (bool)((!(((RuntimeObject*)(MethodInfo_t *)L_24) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_25 = V_7;
			if (!L_25)
			{
				goto IL_007a;
			}
		}

IL_0065:
		{
			MethodInfo_t * L_26 = V_6;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = ___args1;
			NullCheck(L_26);
			RuntimeObject * L_28;
			L_28 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_26, __this, L_27, /*hidden argument*/NULL);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_29;
			L_29 = _AndroidJNIHelper_Box_m36D8F62AEE89925F24BEB84DD91A5FF771255E28(L_28, /*hidden argument*/NULL);
			V_8 = L_29;
			goto IL_0186;
		}

IL_007a:
		{
			goto IL_0094;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_007d;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_008b;
		throw e;
	}

CATCH_007d:
	{ // begin catch(System.Reflection.TargetInvocationException)
		V_9 = ((TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *)__exception_local);
		TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_30 = V_9;
		NullCheck(L_30);
		Exception_t * L_31;
		L_31 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		goto IL_0094;
	} // end catch (depth: 1)

CATCH_008b:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)__exception_local);
		Exception_t * L_32 = V_10;
		V_0 = L_32;
		goto IL_0094;
	} // end catch (depth: 1)

IL_0094:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = ___args1;
		NullCheck(L_33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))));
		V_3 = L_34;
		V_11 = 0;
		goto IL_00b5;
	}

IL_00a2:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = V_3;
		int32_t L_36 = V_11;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_37 = V_2;
		int32_t L_38 = V_11;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Type_t * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_41);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (String_t*)L_41);
		int32_t L_42 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00b5:
	{
		int32_t L_43 = V_11;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_44 = V_2;
		NullCheck(L_44);
		V_12 = (bool)((((int32_t)L_43) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))? 1 : 0);
		bool L_45 = V_12;
		if (L_45)
		{
			goto IL_00a2;
		}
	}
	{
		Exception_t * L_46 = V_0;
		V_13 = (bool)((!(((RuntimeObject*)(Exception_t *)L_46) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_47 = V_13;
		if (!L_47)
		{
			goto IL_011d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_48;
		Type_t * L_50;
		L_50 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		Type_t * L_51 = L_50;
		G_B17_0 = L_51;
		G_B17_1 = 0;
		G_B17_2 = L_49;
		G_B17_3 = L_49;
		if (L_51)
		{
			G_B18_0 = L_51;
			G_B18_1 = 0;
			G_B18_2 = L_49;
			G_B18_3 = L_49;
			goto IL_00e1;
		}
	}
	{
		G_B19_0 = ((String_t*)(NULL));
		G_B19_1 = G_B17_1;
		G_B19_2 = G_B17_2;
		G_B19_3 = G_B17_3;
		goto IL_00e6;
	}

IL_00e1:
	{
		NullCheck(G_B18_0);
		String_t* L_52;
		L_52 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B18_0);
		G_B19_0 = L_52;
		G_B19_1 = G_B18_1;
		G_B19_2 = G_B18_2;
		G_B19_3 = G_B18_3;
	}

IL_00e6:
	{
		NullCheck(G_B19_2);
		ArrayElementTypeCheck (G_B19_2, G_B19_0);
		(G_B19_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B19_1), (String_t*)G_B19_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = G_B19_3;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_54 = L_53;
		String_t* L_55 = ___methodName0;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_55);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_54;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73)));
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_56;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = V_3;
		String_t* L_59;
		L_59 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB)), L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_59);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_59);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_57;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)));
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)));
		String_t* L_61;
		L_61 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_60, /*hidden argument*/NULL);
		Exception_t * L_62 = V_0;
		TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_63 = (TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var)));
		TargetInvocationException__ctor_m5436E5EE63CBC376FADE4422FDC24067402E42A9(L_63, L_61, L_62, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaProxy_Invoke_m0908B96EF03FC0465EAC584963213D227A3048D0_RuntimeMethod_var)));
	}

IL_011d:
	{
		intptr_t L_64;
		L_64 = AndroidJavaProxy_GetRawProxy_m125686B87104A00FD20DEB87F24074A3AD68D354(__this, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_66 = L_65;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_66;
		Type_t * L_68;
		L_68 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		Type_t * L_69 = L_68;
		G_B21_0 = L_69;
		G_B21_1 = 1;
		G_B21_2 = L_67;
		G_B21_3 = L_67;
		G_B21_4 = L_64;
		if (L_69)
		{
			G_B22_0 = L_69;
			G_B22_1 = 1;
			G_B22_2 = L_67;
			G_B22_3 = L_67;
			G_B22_4 = L_64;
			goto IL_0140;
		}
	}
	{
		G_B23_0 = ((String_t*)(NULL));
		G_B23_1 = G_B21_1;
		G_B23_2 = G_B21_2;
		G_B23_3 = G_B21_3;
		G_B23_4 = G_B21_4;
		goto IL_0145;
	}

IL_0140:
	{
		NullCheck(G_B22_0);
		String_t* L_70;
		L_70 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B22_0);
		G_B23_0 = L_70;
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
		G_B23_3 = G_B22_3;
		G_B23_4 = G_B22_4;
	}

IL_0145:
	{
		NullCheck(G_B23_2);
		ArrayElementTypeCheck (G_B23_2, G_B23_0);
		(G_B23_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B23_1), (String_t*)G_B23_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = G_B23_3;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_72 = L_71;
		String_t* L_73 = ___methodName0;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_73);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_74 = L_72;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_75 = L_74;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76 = V_3;
		String_t* L_77;
		L_77 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_76, /*hidden argument*/NULL);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_77);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_78 = L_75;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_79;
		L_79 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_78, /*hidden argument*/NULL);
		Exception_t * L_80 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_80, L_79, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		AndroidReflection_SetNativeExceptionOnProxy_m3156C711782C12CDE0E994C37630F762C0FE0808((intptr_t)G_B23_4, L_80, (bool)1, /*hidden argument*/NULL);
		V_8 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)NULL;
		goto IL_0186;
	}

IL_0186:
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_81 = V_8;
		return L_81;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,UnityEngine.AndroidJavaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaProxy_Invoke_m7DD1AD609B664D23BB571F86B0EFCA65DBEF0561 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___methodName0, AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ___javaArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_5 = NULL;
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_0 = ___javaArgs1;
		NullCheck(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0046;
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		int32_t L_3 = V_1;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_4 = ___javaArgs1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject * L_8;
		L_8 = _AndroidJNIHelper_Unbox_mE00F4AED2AAAACF5C617820A41A4F28F1D501708(L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = (bool)((((int32_t)((!(((RuntimeObject*)(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)IsInstClass((RuntimeObject*)L_12, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0041;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_14 = ___javaArgs1;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0040;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_19 = ___javaArgs1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_22, /*hidden argument*/NULL);
	}

IL_0040:
	{
	}

IL_0041:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_24 = V_1;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_25 = ___javaArgs1;
		NullCheck(L_25);
		V_4 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_27 = ___methodName0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = V_0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_29;
		L_29 = VirtFuncInvoker2< AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,System.Object[]) */, __this, L_27, L_28);
		V_5 = L_29;
		goto IL_005e;
	}

IL_005e:
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_30 = V_5;
		return L_30;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::GetProxyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaProxy_GetProxyObject_mEDC1D96AAE0A4FC2B4E57E1FC3AE5C47C27FDC6A (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		intptr_t L_0;
		L_0 = AndroidJavaProxy_GetRawProxy_m125686B87104A00FD20DEB87F24074A3AD68D354(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB977696EA6F6BB6369A8F783EFB5D99C445C11FD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.AndroidJavaProxy::GetRawProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_GetRawProxy_m125686B87104A00FD20DEB87F24074A3AD68D354 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		V_0 = (intptr_t)(0);
		intptr_t L_0 = __this->get_proxyObject_1();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		intptr_t L_3 = __this->get_proxyObject_1();
		intptr_t L_4;
		L_4 = AndroidJNI_NewLocalRef_m9309F714C7C9C3C47EA48218FB6B0BE810E42EAE((intptr_t)L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		intptr_t L_5 = V_0;
		bool L_6;
		L_6 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		intptr_t L_8 = __this->get_proxyObject_1();
		AndroidJNI_DeleteWeakGlobalRef_m972079D94C174FA5F427AC16C92B2B3179175F46((intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_proxyObject_1((intptr_t)(0));
	}

IL_0050:
	{
	}

IL_0051:
	{
		intptr_t L_9 = V_0;
		bool L_10;
		L_10 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_9, (intptr_t)(0), /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		intptr_t L_12;
		L_12 = AndroidJNIHelper_CreateJavaProxy_mF3E9256AF65CC078B82DD0E1DC65306AA79DBBEC(__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_12;
		intptr_t L_13 = V_0;
		intptr_t L_14;
		L_14 = AndroidJNI_NewWeakGlobalRef_mB62AFFE361315D8C045F6EF4D961C5501839E295((intptr_t)L_13, /*hidden argument*/NULL);
		__this->set_proxyObject_1((intptr_t)L_14);
	}

IL_0075:
	{
		intptr_t L_15 = V_0;
		V_4 = (intptr_t)L_15;
		goto IL_007a;
	}

IL_007a:
	{
		intptr_t L_16 = V_4;
		return (intptr_t)L_16;
	}
}
// System.Void UnityEngine.AndroidJavaProxy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__cctor_mB21449F424E38624821E1F87653DA4810F2809D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = AndroidJNISafe_FindClass_mD96E72414A78F50B07019D26B87A93799D85BB0A(_stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077, /*hidden argument*/NULL);
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_1 = (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)il2cpp_codegen_object_new(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var))->set_s_JavaLangSystemClass_2(L_1);
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_2 = ((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var))->get_s_JavaLangSystemClass_2();
		intptr_t L_3;
		L_3 = GlobalJavaObjectRef_op_Implicit_m7A992ACF399BAD3EFC96D88CE00B235D8B669B33(L_2, /*hidden argument*/NULL);
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_3, _stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B, _stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82, (bool)1, /*hidden argument*/NULL);
		((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var))->set_s_HashCodeMethodID_3((intptr_t)L_4);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AndroidJavaRunnable::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable_Invoke_m014FD2895FDB86ADBD97D9CEC201592673D9593B (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * __this, const RuntimeMethod* method)
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
// System.IAsyncResult UnityEngine.AndroidJavaRunnable::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaRunnable_BeginInvoke_mC5CE46E7743D650AFC705153AEACED181B1FC15C (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.AndroidJavaRunnable::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable_EndInvoke_m5ED563F2A458EB2F5A614815B85EF79ACB60BFAF (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.AndroidJavaRunnableProxy::.ctor(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnableProxy__ctor_mDF1B01EBE4C312B67A43B452B440303855973A89 (AndroidJavaRunnableProxy_t17D14B64AF448BEC13E64E394A2626B261ED3BEB * __this, AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * ___runnable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B, /*hidden argument*/NULL);
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_0 = ___runnable0;
		__this->set_mRunnable_4(L_0);
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
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D (Type_t * ___t0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.AndroidReflection::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_m7B46715954FFFBDFA63B681FAF87AEB2ECF0E47C (Type_t * ___t0, Type_t * ___from1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___t0;
		Type_t * L_1 = ___from1;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(111 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetStaticMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetStaticMethodID_m36025A22F483A7C1D53BFAA0505DC59A7B503EA1 (String_t* ___clazz0, String_t* ___methodName1, String_t* ___signature2, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___clazz0;
		intptr_t L_1;
		L_1 = AndroidJNISafe_FindClass_mD96E72414A78F50B07019D26B87A93799D85BB0A(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		intptr_t L_2 = V_0;
		String_t* L_3 = ___methodName1;
		String_t* L_4 = ___signature2;
		intptr_t L_5;
		L_5 = AndroidJNISafe_GetStaticMethodID_m883F40A297071B64F8DE3572FDBB8B9834EF1163((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_5;
		IL2CPP_LEAVE(0x1E, FINALLY_0014);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0014;
	}

FINALLY_0014:
	{ // begin finally (depth: 1)
		intptr_t L_6 = V_0;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(20)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(20)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
	}

IL_001e:
	{
		intptr_t L_7 = V_1;
		return (intptr_t)L_7;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetMethodID(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodID_m99B37E6A752683D8F77DA7319D9956E03BAC322E (String_t* ___clazz0, String_t* ___methodName1, String_t* ___signature2, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___clazz0;
		intptr_t L_1;
		L_1 = AndroidJNISafe_FindClass_mD96E72414A78F50B07019D26B87A93799D85BB0A(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		intptr_t L_2 = V_0;
		String_t* L_3 = ___methodName1;
		String_t* L_4 = ___signature2;
		intptr_t L_5;
		L_5 = AndroidJNISafe_GetMethodID_mB6545767927E1F859540D99EBD39E464811E5F8F((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_5;
		IL2CPP_LEAVE(0x1E, FINALLY_0014);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0014;
	}

FINALLY_0014:
	{ // begin finally (depth: 1)
		intptr_t L_6 = V_0;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(20)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(20)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
	}

IL_001e:
	{
		intptr_t L_7 = V_1;
		return (intptr_t)L_7;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetConstructorMember(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetConstructorMember_m4E88C8F6F83DB80D3313835CE760D8E7DC533C02 (intptr_t ___jclass0, String_t* ___signature1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_0 = (jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)SZArrayNew(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_1 = V_0;
		NullCheck(L_1);
		intptr_t L_2 = ___jclass0;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_l_8((intptr_t)L_2);
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = ___signature1;
		intptr_t L_5;
		L_5 = AndroidJNISafe_NewString_m5F5B2B700BDE2D0D1D105687D4ACC9567CEE7A23(L_4, /*hidden argument*/NULL);
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_l_8((intptr_t)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_6 = ((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->get_s_ReflectionHelperClass_0();
		intptr_t L_7;
		L_7 = GlobalJavaObjectRef_op_Implicit_m7A992ACF399BAD3EFC96D88CE00B235D8B669B33(L_6, /*hidden argument*/NULL);
		intptr_t L_8 = ((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->get_s_ReflectionHelperGetConstructorID_1();
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_9 = V_0;
		intptr_t L_10;
		L_10 = AndroidJNISafe_CallStaticObjectMethod_mE83D4A0C1BF62925F8B9D4B49040A90CBA1B8860((intptr_t)L_7, (intptr_t)L_8, L_9, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_10;
		IL2CPP_LEAVE(0x55, FINALLY_0040);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_11 = V_0;
		NullCheck(L_11);
		intptr_t L_12 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_l_8();
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		intptr_t L_13 = V_1;
		return (intptr_t)L_13;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::GetMethodMember(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodMember_m2959FEB7888CE8740DE1CF88C0CCB8A72F9F017B (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_0 = (jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)SZArrayNew(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_1 = V_0;
		NullCheck(L_1);
		intptr_t L_2 = ___jclass0;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_l_8((intptr_t)L_2);
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = ___methodName1;
		intptr_t L_5;
		L_5 = AndroidJNISafe_NewString_m5F5B2B700BDE2D0D1D105687D4ACC9567CEE7A23(L_4, /*hidden argument*/NULL);
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_l_8((intptr_t)L_5);
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = ___signature2;
		intptr_t L_8;
		L_8 = AndroidJNISafe_NewString_m5F5B2B700BDE2D0D1D105687D4ACC9567CEE7A23(L_7, /*hidden argument*/NULL);
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_l_8((intptr_t)L_8);
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = ___isStatic3;
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->set_z_0(L_10);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_11 = ((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->get_s_ReflectionHelperClass_0();
		intptr_t L_12;
		L_12 = GlobalJavaObjectRef_op_Implicit_m7A992ACF399BAD3EFC96D88CE00B235D8B669B33(L_11, /*hidden argument*/NULL);
		intptr_t L_13 = ((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->get_s_ReflectionHelperGetMethodID_2();
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_14 = V_0;
		intptr_t L_15;
		L_15 = AndroidJNISafe_CallStaticObjectMethod_mE83D4A0C1BF62925F8B9D4B49040A90CBA1B8860((intptr_t)L_12, (intptr_t)L_13, L_14, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_15;
		IL2CPP_LEAVE(0x86, FINALLY_005f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_16 = V_0;
		NullCheck(L_16);
		intptr_t L_17 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_l_8();
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_17, /*hidden argument*/NULL);
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_18 = V_0;
		NullCheck(L_18);
		intptr_t L_19 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->get_l_8();
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_19, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x86, IL_0086)
	}

IL_0086:
	{
		intptr_t L_20 = V_1;
		return (intptr_t)L_20;
	}
}
// System.IntPtr UnityEngine.AndroidReflection::NewProxyInstance(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_NewProxyInstance_m53695E04979F0C45768004C5CC36A95A684C847C (intptr_t ___delegateHandle0, intptr_t ___interfaze1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_0 = (jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)SZArrayNew(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_1 = V_0;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A((intptr_t*)(&___delegateHandle0), /*hidden argument*/NULL);
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_j_5(L_2);
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_3 = V_0;
		NullCheck(L_3);
		intptr_t L_4 = ___interfaze1;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_l_8((intptr_t)L_4);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_5 = ((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->get_s_ReflectionHelperClass_0();
		intptr_t L_6;
		L_6 = GlobalJavaObjectRef_op_Implicit_m7A992ACF399BAD3EFC96D88CE00B235D8B669B33(L_5, /*hidden argument*/NULL);
		intptr_t L_7 = ((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->get_s_ReflectionHelperNewProxyInstance_5();
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_8 = V_0;
		intptr_t L_9;
		L_9 = AndroidJNISafe_CallStaticObjectMethod_mE83D4A0C1BF62925F8B9D4B49040A90CBA1B8860((intptr_t)L_6, (intptr_t)L_7, L_8, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_9;
		goto IL_0040;
	}

IL_0040:
	{
		intptr_t L_10 = V_1;
		return (intptr_t)L_10;
	}
}
// System.Void UnityEngine.AndroidReflection::SetNativeExceptionOnProxy(System.IntPtr,System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReflection_SetNativeExceptionOnProxy_m3156C711782C12CDE0E994C37630F762C0FE0808 (intptr_t ___proxy0, Exception_t * ___e1, bool ___methodNotFound2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_0 = (jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)SZArrayNew(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_0;
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_1 = V_0;
		NullCheck(L_1);
		intptr_t L_2 = ___proxy0;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_l_8((intptr_t)L_2);
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_3 = V_0;
		NullCheck(L_3);
		Exception_t * L_4 = ___e1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_5;
		L_5 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_5, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_6;
		int64_t L_7;
		L_7 = IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A((intptr_t*)(&V_1), /*hidden argument*/NULL);
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_j_5(L_7);
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = ___methodNotFound2;
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_z_0(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_10 = ((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->get_s_ReflectionHelperClass_0();
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m7A992ACF399BAD3EFC96D88CE00B235D8B669B33(L_10, /*hidden argument*/NULL);
		intptr_t L_12 = ((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->get_s_ReflectionHelperSetNativeExceptionOnProxy_6();
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_13 = V_0;
		AndroidJNISafe_CallStaticVoidMethod_m6D6C21C3489E19241A6856D7642CDC56752D7128((intptr_t)L_11, (intptr_t)L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AndroidReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReflection__cctor_m2B0369515D9A19D15703B34BD174D7CA683F1546 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29533AC1D363321ECFB96B50441B9418763D4176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral997CC228CD49CB51A21F3301055CBEE380042055);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2267B1424757597EAEC3CB1B8269FF078CC487C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE42F595933CDB601C52327F32C83017C908C430);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE46DFB424F1D16B497976AB817F603BF3B170AF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF76791D0FE1272AD994E3611223AB6D219F5FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = AndroidJNISafe_FindClass_mD96E72414A78F50B07019D26B87A93799D85BB0A(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, /*hidden argument*/NULL);
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_1 = (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 *)il2cpp_codegen_object_new(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->set_s_ReflectionHelperClass_0(L_1);
		intptr_t L_2;
		L_2 = AndroidReflection_GetStaticMethodID_m36025A22F483A7C1D53BFAA0505DC59A7B503EA1(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198, _stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2, /*hidden argument*/NULL);
		((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->set_s_ReflectionHelperGetConstructorID_1((intptr_t)L_2);
		intptr_t L_3;
		L_3 = AndroidReflection_GetStaticMethodID_m36025A22F483A7C1D53BFAA0505DC59A7B503EA1(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552, _stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156, /*hidden argument*/NULL);
		((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->set_s_ReflectionHelperGetMethodID_2((intptr_t)L_3);
		intptr_t L_4;
		L_4 = AndroidReflection_GetStaticMethodID_m36025A22F483A7C1D53BFAA0505DC59A7B503EA1(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F, _stringLiteralCE42F595933CDB601C52327F32C83017C908C430, /*hidden argument*/NULL);
		((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->set_s_ReflectionHelperGetFieldID_3((intptr_t)L_4);
		intptr_t L_5;
		L_5 = AndroidReflection_GetStaticMethodID_m36025A22F483A7C1D53BFAA0505DC59A7B503EA1(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral997CC228CD49CB51A21F3301055CBEE380042055, _stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF, /*hidden argument*/NULL);
		((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->set_s_ReflectionHelperGetFieldSignature_4((intptr_t)L_5);
		intptr_t L_6;
		L_6 = AndroidReflection_GetStaticMethodID_m36025A22F483A7C1D53BFAA0505DC59A7B503EA1(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05, _stringLiteralA2267B1424757597EAEC3CB1B8269FF078CC487C, /*hidden argument*/NULL);
		((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->set_s_ReflectionHelperNewProxyInstance_5((intptr_t)L_6);
		intptr_t L_7;
		L_7 = AndroidReflection_GetStaticMethodID_m36025A22F483A7C1D53BFAA0505DC59A7B503EA1(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteralE46DFB424F1D16B497976AB817F603BF3B170AF9, _stringLiteralFFF76791D0FE1272AD994E3611223AB6D219F5FC, /*hidden argument*/NULL);
		((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->set_s_ReflectionHelperSetNativeExceptionOnProxy_6((intptr_t)L_7);
		intptr_t L_8;
		L_8 = AndroidReflection_GetMethodID_m99B37E6A752683D8F77DA7319D9956E03BAC322E(_stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9, _stringLiteral29533AC1D363321ECFB96B50441B9418763D4176, _stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE, /*hidden argument*/NULL);
		((AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var))->set_s_FieldGetDeclaringClass_7((intptr_t)L_8);
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
// System.Void UnityEngine.GlobalJavaObjectRef::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef__ctor_mC4872ABD6EDA3531D1012C2FB7B73EE2B1652C5D (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * __this, intptr_t ___jobject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * G_B2_0 = NULL;
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * G_B1_0 = NULL;
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * G_B3_1 = NULL;
	{
		__this->set_m_disposed_0((bool)0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___jobject0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		intptr_t L_2 = ___jobject0;
		intptr_t L_3;
		L_3 = AndroidJNI_NewGlobalRef_m34740B5AECF82CE97986D6E67F5E1D8CBF7DB837((intptr_t)L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = (0);
		G_B3_1 = G_B2_0;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_jobject_1((intptr_t)G_B3_0);
		return;
	}
}
// System.Void UnityEngine.GlobalJavaObjectRef::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Finalize_m455E5786F72D4A0DBBA209EE67AE763130FBCE3A (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * __this, const RuntimeMethod* method)
{
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
		GlobalJavaObjectRef_Dispose_mDAF2DE01EBD608E63CB661954D0B50015D08FF28(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.IntPtr UnityEngine.GlobalJavaObjectRef::op_Implicit(UnityEngine.GlobalJavaObjectRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m7A992ACF399BAD3EFC96D88CE00B235D8B669B33 (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___obj0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * L_0 = ___obj0;
		NullCheck(L_0);
		intptr_t L_1 = L_0->get_m_jobject_1();
		V_0 = (intptr_t)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.Void UnityEngine.GlobalJavaObjectRef::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Dispose_mDAF2DE01EBD608E63CB661954D0B50015D08FF28 (GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->get_m_disposed_0();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0036;
	}

IL_000d:
	{
		__this->set_m_disposed_0((bool)1);
		intptr_t L_2 = __this->get_m_jobject_1();
		bool L_3;
		L_3 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		intptr_t L_5 = __this->get_m_jobject_1();
		AndroidJNISafe_DeleteGlobalRef_m7651FA0BAEE0F4D660393C5CC6914F21270B0288((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0036:
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
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaProxy(System.IntPtr,UnityEngine.AndroidJavaProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaProxy_mCE38F0AE360145E8ECD9B15364CF570EE1D57D5D (intptr_t ___delegateHandle0, AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * ___proxy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___delegateHandle0;
		AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * L_1 = ___proxy1;
		NullCheck(L_1);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = L_1->get_javaInterface_0();
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = AndroidJavaObject_GetRawClass_m051337FD2D7C0E765641B192D86FF4A06257836B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = AndroidReflection_NewProxyInstance_m53695E04979F0C45768004C5CC36A95A684C847C((intptr_t)L_0, (intptr_t)L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		goto IL_0015;
	}

IL_0015:
	{
		intptr_t L_5 = V_0;
		return (intptr_t)L_5;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaRunnable_m9FEEC38F8F25D8A5E6DBD8329094C3C24D73EC52 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * ___jrunnable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnableProxy_t17D14B64AF448BEC13E64E394A2626B261ED3BEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_0 = ___jrunnable0;
		AndroidJavaRunnableProxy_t17D14B64AF448BEC13E64E394A2626B261ED3BEB * L_1 = (AndroidJavaRunnableProxy_t17D14B64AF448BEC13E64E394A2626B261ED3BEB *)il2cpp_codegen_object_new(AndroidJavaRunnableProxy_t17D14B64AF448BEC13E64E394A2626B261ED3BEB_il2cpp_TypeInfo_var);
		AndroidJavaRunnableProxy__ctor_mDF1B01EBE4C312B67A43B452B440303855973A89(L_1, L_0, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = AndroidJNIHelper_CreateJavaProxy_mF3E9256AF65CC078B82DD0E1DC65306AA79DBBEC(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_3 = V_0;
		return (intptr_t)L_3;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::InvokeJavaProxyMethod(UnityEngine.AndroidJavaProxy,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_InvokeJavaProxyMethod_mEDA5EBF45CEDDBB775BD601270633625DE31CC25 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * ___proxy0, intptr_t ___jmethodName1, intptr_t ___jargs2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_6 = NULL;
	bool V_7 = false;
	intptr_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B6_0 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* G_B5_1 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* G_B7_2 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			V_0 = 0;
			intptr_t L_0 = ___jargs2;
			bool L_1;
			L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			V_2 = L_1;
			bool L_2 = V_2;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0013:
		{
			intptr_t L_3 = ___jargs2;
			int32_t L_4;
			L_4 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_3, /*hidden argument*/NULL);
			V_0 = L_4;
		}

IL_001c:
		{
			int32_t L_5 = V_0;
			AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_6 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_5);
			V_1 = L_6;
			V_3 = 0;
			goto IL_0051;
		}

IL_0027:
		{
			intptr_t L_7 = ___jargs2;
			int32_t L_8 = V_3;
			intptr_t L_9;
			L_9 = AndroidJNISafe_GetObjectArrayElement_m3219215297449FA1854927E80F1B74EF7413EF73((intptr_t)L_7, L_8, /*hidden argument*/NULL);
			V_4 = (intptr_t)L_9;
			AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_10 = V_1;
			int32_t L_11 = V_3;
			intptr_t L_12 = V_4;
			bool L_13;
			L_13 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_12, (intptr_t)(0), /*hidden argument*/NULL);
			G_B5_0 = L_11;
			G_B5_1 = L_10;
			if (L_13)
			{
				G_B6_0 = L_11;
				G_B6_1 = L_10;
				goto IL_0044;
			}
		}

IL_0041:
		{
			G_B7_0 = ((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)(NULL));
			G_B7_1 = G_B5_0;
			G_B7_2 = G_B5_1;
			goto IL_004b;
		}

IL_0044:
		{
			intptr_t L_14 = V_4;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_15 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
			AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_15, (intptr_t)L_14, /*hidden argument*/NULL);
			G_B7_0 = L_15;
			G_B7_1 = G_B6_0;
			G_B7_2 = G_B6_1;
		}

IL_004b:
		{
			NullCheck(G_B7_2);
			ArrayElementTypeCheck (G_B7_2, G_B7_0);
			(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)G_B7_0);
			int32_t L_16 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		}

IL_0051:
		{
			int32_t L_17 = V_3;
			int32_t L_18 = V_0;
			V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
			bool L_19 = V_5;
			if (L_19)
			{
				goto IL_0027;
			}
		}

IL_005b:
		{
			AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * L_20 = ___proxy0;
			intptr_t L_21 = ___jmethodName1;
			String_t* L_22;
			L_22 = AndroidJNI_GetStringChars_m95FBBCDB48D425FBDC19710D92C7D6D175041778((intptr_t)L_21, /*hidden argument*/NULL);
			AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_23 = V_1;
			NullCheck(L_20);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_24;
			L_24 = VirtFuncInvoker2< AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* >::Invoke(5 /* UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,UnityEngine.AndroidJavaObject[]) */, L_20, L_22, L_23);
			V_6 = L_24;
		}

IL_006a:
		try
		{ // begin try (depth: 2)
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_25 = V_6;
				V_7 = (bool)((((RuntimeObject*)(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_25) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
				bool L_26 = V_7;
				if (!L_26)
				{
					goto IL_007f;
				}
			}

IL_0076:
			{
				V_8 = (intptr_t)(0);
				IL2CPP_LEAVE(0xB7, FINALLY_008f);
			}

IL_007f:
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_27 = V_6;
				NullCheck(L_27);
				intptr_t L_28;
				L_28 = AndroidJavaObject_GetRawObject_m09E30F9AF9DD2AE07D34CE3915BDA557E206271D(L_27, /*hidden argument*/NULL);
				intptr_t L_29;
				L_29 = AndroidJNI_NewLocalRef_m9309F714C7C9C3C47EA48218FB6B0BE810E42EAE((intptr_t)L_28, /*hidden argument*/NULL);
				V_8 = (intptr_t)L_29;
				IL2CPP_LEAVE(0xB7, FINALLY_008f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_008f;
		}

FINALLY_008f:
		{ // begin finally (depth: 2)
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_30 = V_6;
				if (!L_30)
				{
					goto IL_009b;
				}
			}

IL_0093:
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_31 = V_6;
				NullCheck(L_31);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_31);
			}

IL_009b:
			{
				IL2CPP_END_FINALLY(143)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(143)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009c;
		throw e;
	}

CATCH_009c:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)__exception_local);
		AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * L_32 = ___proxy0;
		NullCheck(L_32);
		intptr_t L_33;
		L_33 = AndroidJavaProxy_GetRawProxy_m125686B87104A00FD20DEB87F24074A3AD68D354(L_32, /*hidden argument*/NULL);
		Exception_t * L_34 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var)));
		AndroidReflection_SetNativeExceptionOnProxy_m3156C711782C12CDE0E994C37630F762C0FE0808((intptr_t)L_33, L_34, (bool)0, /*hidden argument*/NULL);
		V_8 = (intptr_t)(0);
		goto IL_00b7;
	} // end catch (depth: 1)

IL_00b7:
	{
		intptr_t L_35 = V_8;
		return (intptr_t)L_35;
	}
}
// UnityEngine.jvalue[] UnityEngine._AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* _AndroidJNIHelper_CreateJNIArgArray_m6CAC58535CA8F9F1A7A4458BA1BC855CB46609E2 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject * V_4 = NULL;
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
	bool V_21 = false;
	jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* V_22 = NULL;
	Type_t * G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	Type_t * G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	String_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_0, 0, /*hidden argument*/NULL);
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_2 = (jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99*)SZArrayNew(jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_030b;
	}

IL_001a:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		RuntimeObject * L_8 = V_4;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_l_8((intptr_t)(0));
		goto IL_0302;
	}

IL_0041:
	{
		RuntimeObject * L_12 = V_4;
		NullCheck(L_12);
		Type_t * L_13;
		L_13 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_01c5;
		}
	}
	{
		RuntimeObject * L_16 = V_4;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		RuntimeObject * L_20 = V_4;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->set_i_4(((*(int32_t*)((int32_t*)UnBox(L_20, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		goto IL_01bf;
	}

IL_007f:
	{
		RuntimeObject * L_21 = V_4;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_21, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00a7;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		RuntimeObject * L_25 = V_4;
		((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->set_z_0(((*(bool*)((bool*)UnBox(L_25, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		goto IL_01bf;
	}

IL_00a7:
	{
		RuntimeObject * L_26 = V_4;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_26, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_27 = V_9;
		if (!L_27)
		{
			goto IL_00dd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614, /*hidden argument*/NULL);
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		RuntimeObject * L_30 = V_4;
		((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->set_b_1(((int8_t)((int8_t)((*(uint8_t*)((uint8_t*)UnBox(L_30, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))))));
		goto IL_01bf;
	}

IL_00dd:
	{
		RuntimeObject * L_31 = V_4;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_31, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_0105;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_33 = V_0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		RuntimeObject * L_35 = V_4;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->set_b_1(((*(int8_t*)((int8_t*)UnBox(L_35, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))));
		goto IL_01bf;
	}

IL_0105:
	{
		RuntimeObject * L_36 = V_4;
		V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_36, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_37 = V_11;
		if (!L_37)
		{
			goto IL_012d;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_38 = V_0;
		int32_t L_39 = V_1;
		NullCheck(L_38);
		RuntimeObject * L_40 = V_4;
		((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->set_s_3(((*(int16_t*)((int16_t*)UnBox(L_40, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))));
		goto IL_01bf;
	}

IL_012d:
	{
		RuntimeObject * L_41 = V_4;
		V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_41, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_42 = V_12;
		if (!L_42)
		{
			goto IL_0152;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		RuntimeObject * L_45 = V_4;
		((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->set_j_5(((*(int64_t*)((int64_t*)UnBox(L_45, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))));
		goto IL_01bf;
	}

IL_0152:
	{
		RuntimeObject * L_46 = V_4;
		V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_46, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_47 = V_13;
		if (!L_47)
		{
			goto IL_0177;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_48 = V_0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		RuntimeObject * L_50 = V_4;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->set_f_6(((*(float*)((float*)UnBox(L_50, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))));
		goto IL_01bf;
	}

IL_0177:
	{
		RuntimeObject * L_51 = V_4;
		V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_51, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_019c;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_53 = V_0;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		RuntimeObject * L_55 = V_4;
		((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->set_d_7(((*(double*)((double*)UnBox(L_55, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))));
		goto IL_01bf;
	}

IL_019c:
	{
		RuntimeObject * L_56 = V_4;
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_56, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_57 = V_15;
		if (!L_57)
		{
			goto IL_01bf;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_58 = V_0;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		RuntimeObject * L_60 = V_4;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->set_c_2(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_60, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))));
	}

IL_01bf:
	{
		goto IL_0302;
	}

IL_01c5:
	{
		RuntimeObject * L_61 = V_4;
		V_16 = (bool)((!(((RuntimeObject*)(String_t*)((String_t*)IsInstSealed((RuntimeObject*)L_61, String_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_62 = V_16;
		if (!L_62)
		{
			goto IL_01f4;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_63 = V_0;
		int32_t L_64 = V_1;
		NullCheck(L_63);
		RuntimeObject * L_65 = V_4;
		intptr_t L_66;
		L_66 = AndroidJNISafe_NewString_m5F5B2B700BDE2D0D1D105687D4ACC9567CEE7A23(((String_t*)CastclassSealed((RuntimeObject*)L_65, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->set_l_8((intptr_t)L_66);
		goto IL_0302;
	}

IL_01f4:
	{
		RuntimeObject * L_67 = V_4;
		V_17 = (bool)((!(((RuntimeObject*)(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)((AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)IsInstClass((RuntimeObject*)L_67, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_0223;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_69 = V_0;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		RuntimeObject * L_71 = V_4;
		NullCheck(((AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var)));
		intptr_t L_72;
		L_72 = AndroidJavaObject_GetRawClass_m051337FD2D7C0E765641B192D86FF4A06257836B(((AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->set_l_8((intptr_t)L_72);
		goto IL_0302;
	}

IL_0223:
	{
		RuntimeObject * L_73 = V_4;
		V_18 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)IsInstClass((RuntimeObject*)L_73, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_74 = V_18;
		if (!L_74)
		{
			goto IL_0252;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_75 = V_0;
		int32_t L_76 = V_1;
		NullCheck(L_75);
		RuntimeObject * L_77 = V_4;
		NullCheck(((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)CastclassClass((RuntimeObject*)L_77, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var)));
		intptr_t L_78;
		L_78 = AndroidJavaObject_GetRawObject_m09E30F9AF9DD2AE07D34CE3915BDA557E206271D(((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)CastclassClass((RuntimeObject*)L_77, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->set_l_8((intptr_t)L_78);
		goto IL_0302;
	}

IL_0252:
	{
		RuntimeObject * L_79 = V_4;
		V_19 = (bool)((!(((RuntimeObject*)(RuntimeArray *)((RuntimeArray *)IsInstClass((RuntimeObject*)L_79, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_80 = V_19;
		if (!L_80)
		{
			goto IL_0281;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_81 = V_0;
		int32_t L_82 = V_1;
		NullCheck(L_81);
		RuntimeObject * L_83 = V_4;
		intptr_t L_84;
		L_84 = _AndroidJNIHelper_ConvertToJNIArray_m8254063CFA125088D840280AEF8C2ACF1B1ED4D9(((RuntimeArray *)CastclassClass((RuntimeObject*)L_83, RuntimeArray_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_82)))->set_l_8((intptr_t)L_84);
		goto IL_0302;
	}

IL_0281:
	{
		RuntimeObject * L_85 = V_4;
		V_20 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)IsInstClass((RuntimeObject*)L_85, AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_86 = V_20;
		if (!L_86)
		{
			goto IL_02ad;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_87 = V_0;
		int32_t L_88 = V_1;
		NullCheck(L_87);
		RuntimeObject * L_89 = V_4;
		NullCheck(((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)CastclassClass((RuntimeObject*)L_89, AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var)));
		intptr_t L_90;
		L_90 = AndroidJavaProxy_GetRawProxy_m125686B87104A00FD20DEB87F24074A3AD68D354(((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)CastclassClass((RuntimeObject*)L_89, AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88)))->set_l_8((intptr_t)L_90);
		goto IL_0302;
	}

IL_02ad:
	{
		RuntimeObject * L_91 = V_4;
		V_21 = (bool)((!(((RuntimeObject*)(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)((AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)IsInstSealed((RuntimeObject*)L_91, AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_92 = V_21;
		if (!L_92)
		{
			goto IL_02d9;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_93 = V_0;
		int32_t L_94 = V_1;
		NullCheck(L_93);
		RuntimeObject * L_95 = V_4;
		intptr_t L_96;
		L_96 = AndroidJNIHelper_CreateJavaRunnable_m789E333B57BE23010719477567A818C88A529153(((AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)CastclassSealed((RuntimeObject*)L_95, AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)))->set_l_8((intptr_t)L_96);
		goto IL_0302;
	}

IL_02d9:
	{
		RuntimeObject * L_97 = V_4;
		NullCheck(L_97);
		Type_t * L_98;
		L_98 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_97, /*hidden argument*/NULL);
		Type_t * L_99 = L_98;
		G_B36_0 = L_99;
		G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
		if (L_99)
		{
			G_B37_0 = L_99;
			G_B37_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_02ed;
		}
	}
	{
		G_B38_0 = ((String_t*)(NULL));
		G_B38_1 = G_B36_1;
		goto IL_02f2;
	}

IL_02ed:
	{
		NullCheck(G_B37_0);
		String_t* L_100;
		L_100 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B37_0);
		G_B38_0 = L_100;
		G_B38_1 = G_B37_1;
	}

IL_02f2:
	{
		String_t* L_101;
		L_101 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B38_1, G_B38_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_102 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_102, L_101, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_102, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_CreateJNIArgArray_m6CAC58535CA8F9F1A7A4458BA1BC855CB46609E2_RuntimeMethod_var)));
	}

IL_0302:
	{
		int32_t L_103 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
		int32_t L_104 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
	}

IL_030b:
	{
		int32_t L_105 = V_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_106 = V_2;
		NullCheck(L_106);
		if ((((int32_t)L_105) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_107 = V_0;
		V_22 = L_107;
		goto IL_0319;
	}

IL_0319:
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_108 = V_22;
		return L_108;
	}
}
// System.Object UnityEngine._AndroidJNIHelper::UnboxArray(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_UnboxArray_m6287C810F0A8190BA7A7D2B104437F28B785FE7F (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeArray * V_5 = NULL;
	bool V_6 = false;
	RuntimeObject * V_7 = NULL;
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
	int32_t V_19 = 0;
	bool V_20 = false;
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___obj0;
		V_6 = (bool)((((RuntimeObject*)(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_7 = NULL;
		goto IL_021e;
	}

IL_0013:
	{
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_2, _stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035, /*hidden argument*/NULL);
		V_0 = L_2;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ___obj0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_3);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_3, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_4, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_1 = L_5;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_6);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_6, _stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF, L_7, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_2 = L_8;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_9);
		String_t* L_11;
		L_11 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_9, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_10, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		V_3 = L_11;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_12 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_15 = ___obj0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		NullCheck(L_12);
		int32_t L_16;
		L_16 = AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63(L_12, _stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1, L_14, /*hidden argument*/AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var);
		V_4 = L_16;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_17 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_17);
		bool L_19;
		L_19 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_17, _stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2, L_18, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		V_8 = L_19;
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_018b;
		}
	}
	{
		String_t* L_21 = V_3;
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, L_21, /*hidden argument*/NULL);
		V_9 = L_22;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_24 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_24);
		V_5 = (RuntimeArray *)L_25;
		goto IL_0188;
	}

IL_00a5:
	{
		String_t* L_26 = V_3;
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490, L_26, /*hidden argument*/NULL);
		V_10 = L_27;
		bool L_28 = V_10;
		if (!L_28)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_29 = V_4;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_30 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)L_29);
		V_5 = (RuntimeArray *)L_30;
		goto IL_0188;
	}

IL_00c4:
	{
		String_t* L_31 = V_3;
		bool L_32;
		L_32 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, L_31, /*hidden argument*/NULL);
		V_11 = L_32;
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_34 = V_4;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_35 = (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)SZArrayNew(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_5 = (RuntimeArray *)L_35;
		goto IL_0188;
	}

IL_00e3:
	{
		String_t* L_36 = V_3;
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, L_36, /*hidden argument*/NULL);
		V_12 = L_37;
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_39 = V_4;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_40 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)L_39);
		V_5 = (RuntimeArray *)L_40;
		goto IL_0188;
	}

IL_0102:
	{
		String_t* L_41 = V_3;
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, L_41, /*hidden argument*/NULL);
		V_13 = L_42;
		bool L_43 = V_13;
		if (!L_43)
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_44 = V_4;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_45 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, (uint32_t)L_44);
		V_5 = (RuntimeArray *)L_45;
		goto IL_0188;
	}

IL_011e:
	{
		String_t* L_46 = V_3;
		bool L_47;
		L_47 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, L_46, /*hidden argument*/NULL);
		V_14 = L_47;
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_49 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_49);
		V_5 = (RuntimeArray *)L_50;
		goto IL_0188;
	}

IL_013a:
	{
		String_t* L_51 = V_3;
		bool L_52;
		L_52 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, L_51, /*hidden argument*/NULL);
		V_15 = L_52;
		bool L_53 = V_15;
		if (!L_53)
		{
			goto IL_0156;
		}
	}
	{
		int32_t L_54 = V_4;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_55 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)L_54);
		V_5 = (RuntimeArray *)L_55;
		goto IL_0188;
	}

IL_0156:
	{
		String_t* L_56 = V_3;
		bool L_57;
		L_57 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, L_56, /*hidden argument*/NULL);
		V_16 = L_57;
		bool L_58 = V_16;
		if (!L_58)
		{
			goto IL_0172;
		}
	}
	{
		int32_t L_59 = V_4;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_60 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_59);
		V_5 = (RuntimeArray *)L_60;
		goto IL_0188;
	}

IL_0172:
	{
		String_t* L_61 = V_3;
		String_t* L_62;
		L_62 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B)), L_61, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_63 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_63, L_62, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_UnboxArray_m6287C810F0A8190BA7A7D2B104437F28B785FE7F_RuntimeMethod_var)));
	}

IL_0188:
	{
		goto IL_01cc;
	}

IL_018b:
	{
		String_t* L_64 = V_3;
		bool L_65;
		L_65 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_64, /*hidden argument*/NULL);
		V_17 = L_65;
		bool L_66 = V_17;
		if (!L_66)
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_67 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_67);
		V_5 = (RuntimeArray *)L_68;
		goto IL_01cc;
	}

IL_01a7:
	{
		String_t* L_69 = V_3;
		bool L_70;
		L_70 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10, L_69, /*hidden argument*/NULL);
		V_18 = L_70;
		bool L_71 = V_18;
		if (!L_71)
		{
			goto IL_01c3;
		}
	}
	{
		int32_t L_72 = V_4;
		AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB* L_73 = (AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB*)(AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB*)SZArrayNew(AndroidJavaClassU5BU5D_t5344E3EB36AE15926FAFC0383431B20ADC393BCB_il2cpp_TypeInfo_var, (uint32_t)L_72);
		V_5 = (RuntimeArray *)L_73;
		goto IL_01cc;
	}

IL_01c3:
	{
		int32_t L_74 = V_4;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_75 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_74);
		V_5 = (RuntimeArray *)L_75;
	}

IL_01cc:
	{
		V_19 = 0;
		goto IL_0205;
	}

IL_01d1:
	{
		RuntimeArray * L_76 = V_5;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_77 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_78 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_79 = L_78;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_80 = ___obj0;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_80);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_81 = L_79;
		int32_t L_82 = V_19;
		int32_t L_83 = L_82;
		RuntimeObject * L_84 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_83);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_84);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_84);
		NullCheck(L_77);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_85;
		L_85 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_77, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_81, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		RuntimeObject * L_86;
		L_86 = _AndroidJNIHelper_Unbox_mE00F4AED2AAAACF5C617820A41A4F28F1D501708(L_85, /*hidden argument*/NULL);
		int32_t L_87 = V_19;
		NullCheck(L_76);
		Array_SetValue_mD28884941182C5B7118CFBA3D55DB9CEA8797455(L_76, L_86, L_87, /*hidden argument*/NULL);
		int32_t L_88 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
	}

IL_0205:
	{
		int32_t L_89 = V_19;
		int32_t L_90 = V_4;
		V_20 = (bool)((((int32_t)L_89) < ((int32_t)L_90))? 1 : 0);
		bool L_91 = V_20;
		if (L_91)
		{
			goto IL_01d1;
		}
	}
	{
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_92 = V_0;
		NullCheck(L_92);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_92, /*hidden argument*/NULL);
		RuntimeArray * L_93 = V_5;
		V_7 = L_93;
		goto IL_021e;
	}

IL_021e:
	{
		RuntimeObject * L_94 = V_7;
		return L_94;
	}
}
// System.Object UnityEngine._AndroidJNIHelper::Unbox(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_Unbox_mE00F4AED2AAAACF5C617820A41A4F28F1D501708 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m5E5A9D2A5C78D0EC058BBE4A6EFDE1F1C042D19B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mC771B88EC17F0B174134EC1218654F42A807A3B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m01DA767827B3724380256A9F20BE680EE56B1C36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m0E0C93662AE6147907838FA7BAC5DFFF12DA8CD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_2 = NULL;
	String_t* V_3 = NULL;
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
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 12);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = NULL;
		goto IL_020d;
	}

IL_0010:
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = ___obj0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4;
		L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_2, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_3, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = V_2;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_5);
			String_t* L_7;
			L_7 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_5, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_6, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
			V_3 = L_7;
			String_t* L_8 = V_3;
			bool L_9;
			L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E, L_8, /*hidden argument*/NULL);
			V_4 = L_9;
			bool L_10 = V_4;
			if (!L_10)
			{
				goto IL_0062;
			}
		}

IL_0046:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11 = ___obj0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_11);
			int32_t L_13;
			L_13 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_11, _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A, L_12, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
			int32_t L_14 = L_13;
			RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
			V_1 = L_15;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}

IL_0062:
		{
			String_t* L_16 = V_3;
			bool L_17;
			L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_16, /*hidden argument*/NULL);
			V_5 = L_17;
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_008f;
			}
		}

IL_0073:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_19 = ___obj0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_19);
			bool L_21;
			L_21 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_19, _stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66, L_20, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
			bool L_22 = L_21;
			RuntimeObject * L_23 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_22);
			V_1 = L_23;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}

IL_008f:
		{
			String_t* L_24 = V_3;
			bool L_25;
			L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_24, /*hidden argument*/NULL);
			V_6 = L_25;
			bool L_26 = V_6;
			if (!L_26)
			{
				goto IL_00bc;
			}
		}

IL_00a0:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_27 = ___obj0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_27);
			int8_t L_29;
			L_29 = AndroidJavaObject_Call_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m0E0C93662AE6147907838FA7BAC5DFFF12DA8CD2(L_27, _stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E, L_28, /*hidden argument*/AndroidJavaObject_Call_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m0E0C93662AE6147907838FA7BAC5DFFF12DA8CD2_RuntimeMethod_var);
			int8_t L_30 = L_29;
			RuntimeObject * L_31 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_30);
			V_1 = L_31;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}

IL_00bc:
		{
			String_t* L_32 = V_3;
			bool L_33;
			L_33 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845, L_32, /*hidden argument*/NULL);
			V_7 = L_33;
			bool L_34 = V_7;
			if (!L_34)
			{
				goto IL_00e9;
			}
		}

IL_00cd:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_35 = ___obj0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_35);
			int16_t L_37;
			L_37 = AndroidJavaObject_Call_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m01DA767827B3724380256A9F20BE680EE56B1C36(L_35, _stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC, L_36, /*hidden argument*/AndroidJavaObject_Call_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m01DA767827B3724380256A9F20BE680EE56B1C36_RuntimeMethod_var);
			int16_t L_38 = L_37;
			RuntimeObject * L_39 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_38);
			V_1 = L_39;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}

IL_00e9:
		{
			String_t* L_40 = V_3;
			bool L_41;
			L_41 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_40, /*hidden argument*/NULL);
			V_8 = L_41;
			bool L_42 = V_8;
			if (!L_42)
			{
				goto IL_0116;
			}
		}

IL_00fa:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_43 = ___obj0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_43);
			int64_t L_45;
			L_45 = AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787(L_43, _stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68, L_44, /*hidden argument*/AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var);
			int64_t L_46 = L_45;
			RuntimeObject * L_47 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_46);
			V_1 = L_47;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}

IL_0116:
		{
			String_t* L_48 = V_3;
			bool L_49;
			L_49 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4, L_48, /*hidden argument*/NULL);
			V_9 = L_49;
			bool L_50 = V_9;
			if (!L_50)
			{
				goto IL_0143;
			}
		}

IL_0127:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_51 = ___obj0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_52 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_51);
			float L_53;
			L_53 = AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061(L_51, _stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293, L_52, /*hidden argument*/AndroidJavaObject_Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m068E70BCBA9EACF8129B1C9F711D3132EB6C9061_RuntimeMethod_var);
			float L_54 = L_53;
			RuntimeObject * L_55 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_54);
			V_1 = L_55;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}

IL_0143:
		{
			String_t* L_56 = V_3;
			bool L_57;
			L_57 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C, L_56, /*hidden argument*/NULL);
			V_10 = L_57;
			bool L_58 = V_10;
			if (!L_58)
			{
				goto IL_0170;
			}
		}

IL_0154:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_59 = ___obj0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_59);
			double L_61;
			L_61 = AndroidJavaObject_Call_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mC771B88EC17F0B174134EC1218654F42A807A3B5(L_59, _stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C, L_60, /*hidden argument*/AndroidJavaObject_Call_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mC771B88EC17F0B174134EC1218654F42A807A3B5_RuntimeMethod_var);
			double L_62 = L_61;
			RuntimeObject * L_63 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_62);
			V_1 = L_63;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}

IL_0170:
		{
			String_t* L_64 = V_3;
			bool L_65;
			L_65 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95, L_64, /*hidden argument*/NULL);
			V_11 = L_65;
			bool L_66 = V_11;
			if (!L_66)
			{
				goto IL_019a;
			}
		}

IL_0181:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_67 = ___obj0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_68 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_67);
			Il2CppChar L_69;
			L_69 = AndroidJavaObject_Call_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m5E5A9D2A5C78D0EC058BBE4A6EFDE1F1C042D19B(L_67, _stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3, L_68, /*hidden argument*/AndroidJavaObject_Call_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m5E5A9D2A5C78D0EC058BBE4A6EFDE1F1C042D19B_RuntimeMethod_var);
			Il2CppChar L_70 = L_69;
			RuntimeObject * L_71 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_70);
			V_1 = L_71;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}

IL_019a:
		{
			String_t* L_72 = V_3;
			bool L_73;
			L_73 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_72, /*hidden argument*/NULL);
			V_12 = L_73;
			bool L_74 = V_12;
			if (!L_74)
			{
				goto IL_01bf;
			}
		}

IL_01ab:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_75 = ___obj0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_76 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_75);
			String_t* L_77;
			L_77 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_75, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_76, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
			V_1 = L_77;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}

IL_01bf:
		{
			String_t* L_78 = V_3;
			bool L_79;
			L_79 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10, L_78, /*hidden argument*/NULL);
			V_13 = L_79;
			bool L_80 = V_13;
			if (!L_80)
			{
				goto IL_01de;
			}
		}

IL_01d0:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_81 = ___obj0;
			NullCheck(L_81);
			intptr_t L_82;
			L_82 = AndroidJavaObject_GetRawObject_m09E30F9AF9DD2AE07D34CE3915BDA557E206271D(L_81, /*hidden argument*/NULL);
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_83 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
			AndroidJavaClass__ctor_m61AE95F9D20CA648AEFC18AE922FE70F0B90786F(L_83, (intptr_t)L_82, /*hidden argument*/NULL);
			V_1 = L_83;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}

IL_01de:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_84 = V_2;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_85 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_84);
			bool L_86;
			L_86 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_84, _stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983, L_85, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
			V_14 = L_86;
			bool L_87 = V_14;
			if (!L_87)
			{
				goto IL_01fe;
			}
		}

IL_01f5:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_88 = ___obj0;
			RuntimeObject * L_89;
			L_89 = _AndroidJNIHelper_UnboxArray_m6287C810F0A8190BA7A7D2B104437F28B785FE7F(L_88, /*hidden argument*/NULL);
			V_1 = L_89;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}

IL_01fe:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_90 = ___obj0;
			V_1 = L_90;
			IL2CPP_LEAVE(0x20D, FINALLY_0202);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0202;
	}

FINALLY_0202:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_91 = V_2;
			if (!L_91)
			{
				goto IL_020c;
			}
		}

IL_0205:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_92 = V_2;
			NullCheck(L_92);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_92);
		}

IL_020c:
		{
			IL2CPP_END_FINALLY(514)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(514)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x20D, IL_020d)
	}

IL_020d:
	{
		RuntimeObject * L_93 = V_1;
		return L_93;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine._AndroidJNIHelper::Box(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * _AndroidJNIHelper_Box_m36D8F62AEE89925F24BEB84DD91A5FF771255E28 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
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
	Type_t * G_B23_0 = NULL;
	String_t* G_B23_1 = NULL;
	Type_t * G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	String_t* G_B24_0 = NULL;
	String_t* G_B24_1 = NULL;
	Type_t * G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t * G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)NULL;
		goto IL_0310;
	}

IL_0010:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0213;
		}
	}
	{
		RuntimeObject * L_6 = ___obj0;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		RuntimeObject * L_10 = ___obj0;
		int32_t L_11 = ((*(int32_t*)((int32_t*)UnBox(L_10, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_13, _stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E, L_9, /*hidden argument*/NULL);
		V_1 = L_13;
		goto IL_0310;
	}

IL_0054:
	{
		RuntimeObject * L_14 = ___obj0;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_16;
		RuntimeObject * L_18 = ___obj0;
		bool L_19 = ((*(bool*)((bool*)UnBox(L_18, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
		RuntimeObject * L_20 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_21 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_21, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_17, /*hidden argument*/NULL);
		V_1 = L_21;
		goto IL_0310;
	}

IL_0087:
	{
		RuntimeObject * L_22 = ___obj0;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_22, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_24;
		RuntimeObject * L_26 = ___obj0;
		int8_t L_27 = ((*(int8_t*)((int8_t*)UnBox(L_26, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))));
		RuntimeObject * L_28 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_29 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_29, _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_25, /*hidden argument*/NULL);
		V_1 = L_29;
		goto IL_0310;
	}

IL_00ba:
	{
		RuntimeObject * L_30 = ___obj0;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_30, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_32;
		RuntimeObject * L_34 = ___obj0;
		int8_t L_35 = ((*(int8_t*)((int8_t*)UnBox(L_34, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))));
		RuntimeObject * L_36 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_36);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_37 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_37, _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_33, /*hidden argument*/NULL);
		V_1 = L_37;
		goto IL_0310;
	}

IL_00ed:
	{
		RuntimeObject * L_38 = ___obj0;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_38, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_0120;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = L_40;
		RuntimeObject * L_42 = ___obj0;
		int16_t L_43 = ((*(int16_t*)((int16_t*)UnBox(L_42, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))));
		RuntimeObject * L_44 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_44);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_45 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_45, _stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845, L_41, /*hidden argument*/NULL);
		V_1 = L_45;
		goto IL_0310;
	}

IL_0120:
	{
		RuntimeObject * L_46 = ___obj0;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_46, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0153;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_48 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_49 = L_48;
		RuntimeObject * L_50 = ___obj0;
		int64_t L_51 = ((*(int64_t*)((int64_t*)UnBox(L_50, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))));
		RuntimeObject * L_52 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_52);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_53 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_53, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_49, /*hidden argument*/NULL);
		V_1 = L_53;
		goto IL_0310;
	}

IL_0153:
	{
		RuntimeObject * L_54 = ___obj0;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_54, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_55 = V_9;
		if (!L_55)
		{
			goto IL_0186;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_56 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_57 = L_56;
		RuntimeObject * L_58 = ___obj0;
		float L_59 = ((*(float*)((float*)UnBox(L_58, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		RuntimeObject * L_60 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_60);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_61 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_61, _stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4, L_57, /*hidden argument*/NULL);
		V_1 = L_61;
		goto IL_0310;
	}

IL_0186:
	{
		RuntimeObject * L_62 = ___obj0;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_62, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_63 = V_10;
		if (!L_63)
		{
			goto IL_01b9;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_64 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_65 = L_64;
		RuntimeObject * L_66 = ___obj0;
		double L_67 = ((*(double*)((double*)UnBox(L_66, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))));
		RuntimeObject * L_68 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_68);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_69 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_69, _stringLiteralBB8F0908585792018E468F1010A23CFD167A686C, L_65, /*hidden argument*/NULL);
		V_1 = L_69;
		goto IL_0310;
	}

IL_01b9:
	{
		RuntimeObject * L_70 = ___obj0;
		V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_70, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_71 = V_11;
		if (!L_71)
		{
			goto IL_01ec;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_72 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_73 = L_72;
		RuntimeObject * L_74 = ___obj0;
		Il2CppChar L_75 = ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_74, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))));
		RuntimeObject * L_76 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_76);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_76);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_77 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_77, _stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95, L_73, /*hidden argument*/NULL);
		V_1 = L_77;
		goto IL_0310;
	}

IL_01ec:
	{
		RuntimeObject * L_78 = ___obj0;
		NullCheck(L_78);
		Type_t * L_79;
		L_79 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_78, /*hidden argument*/NULL);
		Type_t * L_80 = L_79;
		G_B22_0 = L_80;
		G_B22_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
		if (L_80)
		{
			G_B23_0 = L_80;
			G_B23_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_01fe;
		}
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = G_B22_1;
		goto IL_0203;
	}

IL_01fe:
	{
		NullCheck(G_B23_0);
		String_t* L_81;
		L_81 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B23_0);
		G_B24_0 = L_81;
		G_B24_1 = G_B23_1;
	}

IL_0203:
	{
		String_t* L_82;
		L_82 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B24_1, G_B24_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_83 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_83, L_82, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_Box_m36D8F62AEE89925F24BEB84DD91A5FF771255E28_RuntimeMethod_var)));
	}

IL_0213:
	{
		RuntimeObject * L_84 = ___obj0;
		V_12 = (bool)((!(((RuntimeObject*)(String_t*)((String_t*)IsInstSealed((RuntimeObject*)L_84, String_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_85 = V_12;
		if (!L_85)
		{
			goto IL_0242;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_86 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_87 = L_86;
		RuntimeObject * L_88 = ___obj0;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)));
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_89 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_89, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_87, /*hidden argument*/NULL);
		V_1 = L_89;
		goto IL_0310;
	}

IL_0242:
	{
		RuntimeObject * L_90 = ___obj0;
		V_13 = (bool)((!(((RuntimeObject*)(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)((AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)IsInstClass((RuntimeObject*)L_90, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_91 = V_13;
		if (!L_91)
		{
			goto IL_0268;
		}
	}
	{
		RuntimeObject * L_92 = ___obj0;
		NullCheck(((AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)CastclassClass((RuntimeObject*)L_92, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var)));
		intptr_t L_93;
		L_93 = AndroidJavaObject_GetRawClass_m051337FD2D7C0E765641B192D86FF4A06257836B(((AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)CastclassClass((RuntimeObject*)L_92, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_94 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_94, (intptr_t)L_93, /*hidden argument*/NULL);
		V_1 = L_94;
		goto IL_0310;
	}

IL_0268:
	{
		RuntimeObject * L_95 = ___obj0;
		V_14 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)IsInstClass((RuntimeObject*)L_95, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_96 = V_14;
		if (!L_96)
		{
			goto IL_0284;
		}
	}
	{
		RuntimeObject * L_97 = ___obj0;
		V_1 = ((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)CastclassClass((RuntimeObject*)L_97, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var));
		goto IL_0310;
	}

IL_0284:
	{
		RuntimeObject * L_98 = ___obj0;
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeArray *)((RuntimeArray *)IsInstClass((RuntimeObject*)L_98, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_99 = V_15;
		if (!L_99)
		{
			goto IL_02a7;
		}
	}
	{
		RuntimeObject * L_100 = ___obj0;
		intptr_t L_101;
		L_101 = _AndroidJNIHelper_ConvertToJNIArray_m8254063CFA125088D840280AEF8C2ACF1B1ED4D9(((RuntimeArray *)CastclassClass((RuntimeObject*)L_100, RuntimeArray_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_102;
		L_102 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB977696EA6F6BB6369A8F783EFB5D99C445C11FD((intptr_t)L_101, /*hidden argument*/NULL);
		V_1 = L_102;
		goto IL_0310;
	}

IL_02a7:
	{
		RuntimeObject * L_103 = ___obj0;
		V_16 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)IsInstClass((RuntimeObject*)L_103, AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_104 = V_16;
		if (!L_104)
		{
			goto IL_02c5;
		}
	}
	{
		RuntimeObject * L_105 = ___obj0;
		NullCheck(((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)CastclassClass((RuntimeObject*)L_105, AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var)));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_106;
		L_106 = AndroidJavaProxy_GetProxyObject_mEDC1D96AAE0A4FC2B4E57E1FC3AE5C47C27FDC6A(((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)CastclassClass((RuntimeObject*)L_105, AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_106;
		goto IL_0310;
	}

IL_02c5:
	{
		RuntimeObject * L_107 = ___obj0;
		V_17 = (bool)((!(((RuntimeObject*)(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)((AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)IsInstSealed((RuntimeObject*)L_107, AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_108 = V_17;
		if (!L_108)
		{
			goto IL_02e8;
		}
	}
	{
		RuntimeObject * L_109 = ___obj0;
		intptr_t L_110;
		L_110 = AndroidJNIHelper_CreateJavaRunnable_m789E333B57BE23010719477567A818C88A529153(((AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)CastclassSealed((RuntimeObject*)L_109, AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_111;
		L_111 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_mB977696EA6F6BB6369A8F783EFB5D99C445C11FD((intptr_t)L_110, /*hidden argument*/NULL);
		V_1 = L_111;
		goto IL_0310;
	}

IL_02e8:
	{
		RuntimeObject * L_112 = ___obj0;
		NullCheck(L_112);
		Type_t * L_113;
		L_113 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_112, /*hidden argument*/NULL);
		Type_t * L_114 = L_113;
		G_B38_0 = L_114;
		G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
		if (L_114)
		{
			G_B39_0 = L_114;
			G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_02fb;
		}
	}
	{
		G_B40_0 = ((String_t*)(NULL));
		G_B40_1 = G_B38_1;
		goto IL_0300;
	}

IL_02fb:
	{
		NullCheck(G_B39_0);
		String_t* L_115;
		L_115 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B39_0);
		G_B40_0 = L_115;
		G_B40_1 = G_B39_1;
	}

IL_0300:
	{
		String_t* L_116;
		L_116 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_117 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_117, L_116, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_Box_m36D8F62AEE89925F24BEB84DD91A5FF771255E28_RuntimeMethod_var)));
	}

IL_0310:
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_118 = V_1;
		return L_118;
	}
}
// System.Void UnityEngine._AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_DeleteJNIArgArray_m1ECC70D98768BD3E5C6C6EABC1162F43B297AD85 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* ___jniArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args0;
		V_1 = L_0;
		V_2 = 0;
		goto IL_004c;
	}

IL_000a:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		RuntimeObject * L_5 = V_3;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_6 = V_3;
		if (((AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)IsInstSealed((RuntimeObject*)L_6, AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_7 = V_3;
		G_B5_0 = ((!(((RuntimeObject*)(RuntimeArray *)((RuntimeArray *)IsInstClass((RuntimeObject*)L_7, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 1;
	}

IL_002b:
	{
		V_4 = (bool)G_B5_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99* L_9 = ___jniArgs1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		intptr_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_l_8();
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004c:
	{
		int32_t L_14 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_ConvertToJNIArray_m8254063CFA125088D840280AEF8C2ACF1B1ED4D9 (RuntimeArray * ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_13 = NULL;
	int32_t V_14 = 0;
	intptr_t V_15;
	memset((&V_15), 0, sizeof(V_15));
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	bool V_20 = false;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_21 = NULL;
	int32_t V_22 = 0;
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* V_23 = NULL;
	intptr_t V_24;
	memset((&V_24), 0, sizeof(V_24));
	intptr_t V_25;
	memset((&V_25), 0, sizeof(V_25));
	intptr_t V_26;
	memset((&V_26), 0, sizeof(V_26));
	int32_t V_27 = 0;
	bool V_28 = false;
	intptr_t V_29;
	memset((&V_29), 0, sizeof(V_29));
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	Type_t * G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t * G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		RuntimeArray * L_0 = ___array0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(99 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_016f;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeArray * L_10 = ___array0;
		intptr_t L_11;
		L_11 = AndroidJNISafe_ToIntArray_mD2FB6E5F31F6FD8A12DD3E86E1022EC14AFF5D0C(((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = (intptr_t)L_11;
		goto IL_0303;
	}

IL_003d:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeArray * L_16 = ___array0;
		intptr_t L_17;
		L_17 = AndroidJNISafe_ToBooleanArray_m2298F4521FD7F175F15B30FF7887D365BD1543BB(((BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)Castclass((RuntimeObject*)L_16, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = (intptr_t)L_17;
		goto IL_0303;
	}

IL_0061:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3, /*hidden argument*/NULL);
		RuntimeArray * L_22 = ___array0;
		intptr_t L_23;
		L_23 = AndroidJNISafe_ToByteArray_mCA96D852C39F79F57A8B68B8B03AF9EC795EA6D9(((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_22, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = (intptr_t)L_23;
		goto IL_0303;
	}

IL_0091:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b5;
		}
	}
	{
		RuntimeArray * L_28 = ___array0;
		intptr_t L_29;
		L_29 = AndroidJNISafe_ToSByteArray_m6C05420E192FBA37D7B168EC98BE04F56492087B(((SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)Castclass((RuntimeObject*)L_28, SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = (intptr_t)L_29;
		goto IL_0303;
	}

IL_00b5:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		RuntimeArray * L_34 = ___array0;
		intptr_t L_35;
		L_35 = AndroidJNISafe_ToShortArray_m52204D9DB65374293E9D6954A2C9C4D47B4396D1(((Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)Castclass((RuntimeObject*)L_34, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = (intptr_t)L_35;
		goto IL_0303;
	}

IL_00d9:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_00fd;
		}
	}
	{
		RuntimeArray * L_40 = ___array0;
		intptr_t L_41;
		L_41 = AndroidJNISafe_ToLongArray_m0C3D6AD8D2D116C3F11AECD5317AC01EABE16727(((Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)Castclass((RuntimeObject*)L_40, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = (intptr_t)L_41;
		goto IL_0303;
	}

IL_00fd:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		RuntimeArray * L_46 = ___array0;
		intptr_t L_47;
		L_47 = AndroidJNISafe_ToFloatArray_m28D93667CB9E86FE20D0FC8B372BE26CEE9D8A19(((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)Castclass((RuntimeObject*)L_46, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = (intptr_t)L_47;
		goto IL_0303;
	}

IL_0121:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0145;
		}
	}
	{
		RuntimeArray * L_52 = ___array0;
		intptr_t L_53;
		L_53 = AndroidJNISafe_ToDoubleArray_m0273BA7E9FBD2216215EBD176C8F329973BA53E0(((DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)Castclass((RuntimeObject*)L_52, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = (intptr_t)L_53;
		goto IL_0303;
	}

IL_0145:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0169;
		}
	}
	{
		RuntimeArray * L_58 = ___array0;
		intptr_t L_59;
		L_59 = AndroidJNISafe_ToCharArray_mC1083C57846830CFA1A7CFFE5BE92F3B826FAC1D(((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)Castclass((RuntimeObject*)L_58, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = (intptr_t)L_59;
		goto IL_0303;
	}

IL_0169:
	{
		goto IL_02fb;
	}

IL_016f:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01f9;
		}
	}
	{
		RuntimeArray * L_64 = ___array0;
		V_13 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_64, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		RuntimeArray * L_65 = ___array0;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB(L_65, 0, /*hidden argument*/NULL);
		V_14 = L_66;
		intptr_t L_67;
		L_67 = AndroidJNISafe_FindClass_mD96E72414A78F50B07019D26B87A93799D85BB0A(_stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185, /*hidden argument*/NULL);
		V_15 = (intptr_t)L_67;
		int32_t L_68 = V_14;
		intptr_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_NewObjectArray_m40592BC65B199B1AAE32F2682D8E9236E07929EE(L_68, (intptr_t)L_69, (intptr_t)(0), /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		V_17 = 0;
		goto IL_01dd;
	}

IL_01b5:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_13;
		int32_t L_72 = V_17;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		String_t* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		intptr_t L_75;
		L_75 = AndroidJNISafe_NewString_m5F5B2B700BDE2D0D1D105687D4ACC9567CEE7A23(L_74, /*hidden argument*/NULL);
		V_18 = (intptr_t)L_75;
		intptr_t L_76 = V_16;
		int32_t L_77 = V_17;
		intptr_t L_78 = V_18;
		AndroidJNI_SetObjectArrayElement_m1C6E498550EF9FCA24DBD3E6D4F2BF6764FB315D((intptr_t)L_76, L_77, (intptr_t)L_78, /*hidden argument*/NULL);
		intptr_t L_79 = V_18;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_79, /*hidden argument*/NULL);
		int32_t L_80 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
	}

IL_01dd:
	{
		int32_t L_81 = V_17;
		int32_t L_82 = V_14;
		V_19 = (bool)((((int32_t)L_81) < ((int32_t)L_82))? 1 : 0);
		bool L_83 = V_19;
		if (L_83)
		{
			goto IL_01b5;
		}
	}
	{
		intptr_t L_84 = V_15;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_84, /*hidden argument*/NULL);
		intptr_t L_85 = V_16;
		V_3 = (intptr_t)L_85;
		goto IL_0303;
	}

IL_01f9:
	{
		Type_t * L_86 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_87 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_88;
		L_88 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_87, /*hidden argument*/NULL);
		V_20 = (bool)((((RuntimeObject*)(Type_t *)L_86) == ((RuntimeObject*)(Type_t *)L_88))? 1 : 0);
		bool L_89 = V_20;
		if (!L_89)
		{
			goto IL_02d8;
		}
	}
	{
		RuntimeArray * L_90 = ___array0;
		V_21 = ((AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)Castclass((RuntimeObject*)L_90, AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var));
		RuntimeArray * L_91 = ___array0;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB(L_91, 0, /*hidden argument*/NULL);
		V_22 = L_92;
		int32_t L_93 = V_22;
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_94 = (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)SZArrayNew(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var, (uint32_t)L_93);
		V_23 = L_94;
		intptr_t L_95;
		L_95 = AndroidJNISafe_FindClass_mD96E72414A78F50B07019D26B87A93799D85BB0A(_stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E, /*hidden argument*/NULL);
		V_24 = (intptr_t)L_95;
		V_25 = (intptr_t)(0);
		V_27 = 0;
		goto IL_02b4;
	}

IL_0242:
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_96 = V_21;
		int32_t L_97 = V_27;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_28 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_99) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_100 = V_28;
		if (!L_100)
		{
			goto IL_02a1;
		}
	}
	{
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_101 = V_23;
		int32_t L_102 = V_27;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_103 = V_21;
		int32_t L_104 = V_27;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		intptr_t L_107;
		L_107 = AndroidJavaObject_GetRawObject_m09E30F9AF9DD2AE07D34CE3915BDA557E206271D(L_106, /*hidden argument*/NULL);
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (intptr_t)L_107);
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_108 = V_21;
		int32_t L_109 = V_27;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		intptr_t L_112;
		L_112 = AndroidJavaObject_GetRawClass_m051337FD2D7C0E765641B192D86FF4A06257836B(L_111, /*hidden argument*/NULL);
		V_29 = (intptr_t)L_112;
		intptr_t L_113 = V_25;
		intptr_t L_114 = V_29;
		bool L_115;
		L_115 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_113, (intptr_t)L_114, /*hidden argument*/NULL);
		V_30 = L_115;
		bool L_116 = V_30;
		if (!L_116)
		{
			goto IL_029e;
		}
	}
	{
		intptr_t L_117 = V_25;
		bool L_118;
		L_118 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_117, (intptr_t)(0), /*hidden argument*/NULL);
		V_31 = L_118;
		bool L_119 = V_31;
		if (!L_119)
		{
			goto IL_0297;
		}
	}
	{
		intptr_t L_120 = V_29;
		V_25 = (intptr_t)L_120;
		goto IL_029d;
	}

IL_0297:
	{
		intptr_t L_121 = V_24;
		V_25 = (intptr_t)L_121;
	}

IL_029d:
	{
	}

IL_029e:
	{
		goto IL_02ad;
	}

IL_02a1:
	{
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_122 = V_23;
		int32_t L_123 = V_27;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (intptr_t)(0));
	}

IL_02ad:
	{
		int32_t L_124 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1));
	}

IL_02b4:
	{
		int32_t L_125 = V_27;
		int32_t L_126 = V_22;
		V_32 = (bool)((((int32_t)L_125) < ((int32_t)L_126))? 1 : 0);
		bool L_127 = V_32;
		if (L_127)
		{
			goto IL_0242;
		}
	}
	{
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_128 = V_23;
		intptr_t L_129 = V_25;
		intptr_t L_130;
		L_130 = AndroidJNISafe_ToObjectArray_m669E5441604094D8A20E3C1F1F5407AE985F82B8(L_128, (intptr_t)L_129, /*hidden argument*/NULL);
		V_26 = (intptr_t)L_130;
		intptr_t L_131 = V_24;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_131, /*hidden argument*/NULL);
		intptr_t L_132 = V_26;
		V_3 = (intptr_t)L_132;
		goto IL_0303;
	}

IL_02d8:
	{
		Type_t * L_133 = V_0;
		Type_t * L_134 = L_133;
		G_B39_0 = L_134;
		G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA));
		if (L_134)
		{
			G_B40_0 = L_134;
			G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA));
			goto IL_02e6;
		}
	}
	{
		G_B41_0 = ((String_t*)(NULL));
		G_B41_1 = G_B39_1;
		goto IL_02eb;
	}

IL_02e6:
	{
		NullCheck(G_B40_0);
		String_t* L_135;
		L_135 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B40_0);
		G_B41_0 = L_135;
		G_B41_1 = G_B40_1;
	}

IL_02eb:
	{
		String_t* L_136;
		L_136 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_137 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_137, L_136, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_137, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertToJNIArray_m8254063CFA125088D840280AEF8C2ACF1B1ED4D9_RuntimeMethod_var)));
	}

IL_02fb:
	{
		V_3 = (intptr_t)(0);
		goto IL_0303;
	}

IL_0303:
	{
		intptr_t L_138 = V_3;
		return (intptr_t)L_138;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m59BD3F866A86FC0FFDB26FFB820124E830CDB3E7 (intptr_t ___jclass0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___args1;
		String_t* L_2;
		L_2 = _AndroidJNIHelper_GetSignature_m7621549E54EFD6362170628549B996BF5C52FBB7(L_1, /*hidden argument*/NULL);
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetConstructorID_m22710C39375F8A965C70F995413D4B3C62E85E30((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		goto IL_0010;
	}

IL_0010:
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m0802B71B149170217E6FE75A7864A4BE7315215F (intptr_t ___jclass0, String_t* ___signature1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (intptr_t)(0);
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			intptr_t L_0 = ___jclass0;
			String_t* L_1 = ___signature1;
			IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
			intptr_t L_2;
			L_2 = AndroidReflection_GetConstructorMember_m4E88C8F6F83DB80D3313835CE760D8E7DC533C02((intptr_t)L_0, L_1, /*hidden argument*/NULL);
			V_0 = (intptr_t)L_2;
			intptr_t L_3 = V_0;
			intptr_t L_4;
			L_4 = AndroidJNISafe_FromReflectedMethod_m21A25975498B872199E7B9708AF0AD6E1248E3A7((intptr_t)L_3, /*hidden argument*/NULL);
			V_1 = (intptr_t)L_4;
			IL2CPP_LEAVE(0x49, FINALLY_003f);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0019;
			throw e;
		}

CATCH_0019:
		{ // begin catch(System.Exception)
			{
				V_2 = ((Exception_t *)__exception_local);
				intptr_t L_5 = ___jclass0;
				String_t* L_6 = ___signature1;
				intptr_t L_7;
				L_7 = AndroidJNISafe_GetMethodID_mB6545767927E1F859540D99EBD39E464811E5F8F((intptr_t)L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1AC4D20161E303D304EC6B1002667BE658488EE)), L_6, /*hidden argument*/NULL);
				V_3 = (intptr_t)L_7;
				intptr_t L_8 = V_3;
				bool L_9;
				L_9 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_8, (intptr_t)(0), /*hidden argument*/NULL);
				V_4 = L_9;
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_003d;
				}
			}

IL_0039:
			{
				intptr_t L_11 = V_3;
				V_1 = (intptr_t)L_11;
				IL2CPP_LEAVE(0x49, FINALLY_003f);
			}

IL_003d:
			{
				Exception_t * L_12 = V_2;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetConstructorID_m0802B71B149170217E6FE75A7864A4BE7315215F_RuntimeMethod_var)));
			}
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		intptr_t L_13 = V_0;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		intptr_t L_14 = V_1;
		return (intptr_t)L_14;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_m74B615C2438AF4A05F5FDA31F871AA641799CC9C (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (intptr_t)(0);
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			intptr_t L_0 = ___jclass0;
			String_t* L_1 = ___methodName1;
			String_t* L_2 = ___signature2;
			bool L_3 = ___isStatic3;
			IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
			intptr_t L_4;
			L_4 = AndroidReflection_GetMethodMember_m2959FEB7888CE8740DE1CF88C0CCB8A72F9F017B((intptr_t)L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
			V_0 = (intptr_t)L_4;
			intptr_t L_5 = V_0;
			intptr_t L_6;
			L_6 = AndroidJNISafe_FromReflectedMethod_m21A25975498B872199E7B9708AF0AD6E1248E3A7((intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = (intptr_t)L_6;
			IL2CPP_LEAVE(0x48, FINALLY_003e);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_001b;
			throw e;
		}

CATCH_001b:
		{ // begin catch(System.Exception)
			{
				V_2 = ((Exception_t *)__exception_local);
				intptr_t L_7 = ___jclass0;
				String_t* L_8 = ___methodName1;
				String_t* L_9 = ___signature2;
				bool L_10 = ___isStatic3;
				intptr_t L_11;
				L_11 = _AndroidJNIHelper_GetMethodIDFallback_mCAB1BB814895547718E10BA70AEA126CE98AD48C((intptr_t)L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
				V_3 = (intptr_t)L_11;
				intptr_t L_12 = V_3;
				bool L_13;
				L_13 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_12, (intptr_t)(0), /*hidden argument*/NULL);
				V_4 = L_13;
				bool L_14 = V_4;
				if (!L_14)
				{
					goto IL_003c;
				}
			}

IL_0038:
			{
				intptr_t L_15 = V_3;
				V_1 = (intptr_t)L_15;
				IL2CPP_LEAVE(0x48, FINALLY_003e);
			}

IL_003c:
			{
				Exception_t * L_16 = V_2;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetMethodID_m74B615C2438AF4A05F5FDA31F871AA641799CC9C_RuntimeMethod_var)));
			}
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		intptr_t L_17 = V_0;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_17, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x48, IL_0048)
	}

IL_0048:
	{
		intptr_t L_18 = V_1;
		return (intptr_t)L_18;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodIDFallback(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodIDFallback_mCAB1BB814895547718E10BA70AEA126CE98AD48C (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = ___isStatic3;
			if (L_0)
			{
				goto IL_000f;
			}
		}

IL_0005:
		{
			intptr_t L_1 = ___jclass0;
			String_t* L_2 = ___methodName1;
			String_t* L_3 = ___signature2;
			intptr_t L_4;
			L_4 = AndroidJNISafe_GetMethodID_mB6545767927E1F859540D99EBD39E464811E5F8F((intptr_t)L_1, L_2, L_3, /*hidden argument*/NULL);
			G_B4_0 = L_4;
			goto IL_0017;
		}

IL_000f:
		{
			intptr_t L_5 = ___jclass0;
			String_t* L_6 = ___methodName1;
			String_t* L_7 = ___signature2;
			intptr_t L_8;
			L_8 = AndroidJNISafe_GetStaticMethodID_m883F40A297071B64F8DE3572FDBB8B9834EF1163((intptr_t)L_5, L_6, L_7, /*hidden argument*/NULL);
			G_B4_0 = L_8;
		}

IL_0017:
		{
			V_0 = (intptr_t)G_B4_0;
			goto IL_0027;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001a;
		throw e;
	}

CATCH_001a:
	{ // begin catch(System.Exception)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		V_0 = (intptr_t)(0);
		goto IL_0027;
	}

IL_0027:
	{
		intptr_t L_9 = V_0;
		return (intptr_t)L_9;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
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
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_19 = NULL;
	bool V_20 = false;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_21 = NULL;
	bool V_22 = false;
	StringBuilder_t * V_23 = NULL;
	bool V_24 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Type_t * G_B5_0 = NULL;
	Type_t * G_B51_0 = NULL;
	int32_t G_B51_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B51_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B51_3 = NULL;
	Type_t * G_B50_0 = NULL;
	int32_t G_B50_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B50_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B50_3 = NULL;
	String_t* G_B52_0 = NULL;
	int32_t G_B52_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B52_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B52_3 = NULL;
	int32_t G_B54_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B54_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B54_2 = NULL;
	int32_t G_B53_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B53_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B53_2 = NULL;
	String_t* G_B55_0 = NULL;
	int32_t G_B55_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B55_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B55_3 = NULL;
	int32_t G_B57_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B57_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B57_2 = NULL;
	int32_t G_B56_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B56_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B56_2 = NULL;
	String_t* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B58_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B58_3 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
		goto IL_037b;
	}

IL_0014:
	{
		RuntimeObject * L_2 = ___obj0;
		if (((Type_t *)IsInstClass((RuntimeObject*)L_2, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		NullCheck(L_3);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_3, /*hidden argument*/NULL);
		G_B5_0 = L_4;
		goto IL_002a;
	}

IL_0024:
	{
		RuntimeObject * L_5 = ___obj0;
		G_B5_0 = ((Type_t *)CastclassClass((RuntimeObject*)L_5, Type_t_il2cpp_TypeInfo_var));
	}

IL_002a:
	{
		V_0 = G_B5_0;
		Type_t * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0174;
		}
	}
	{
		Type_t * L_9 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_9, L_11);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		V_2 = _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD;
		goto IL_037b;
	}

IL_005a:
	{
		Type_t * L_14 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_14, L_16);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		V_2 = _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
		goto IL_037b;
	}

IL_007b:
	{
		Type_t * L_19 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_19, L_21);
		V_6 = L_22;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E, /*hidden argument*/NULL);
		V_2 = _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
		goto IL_037b;
	}

IL_00a8:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_27;
		L_27 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_24, L_26);
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
		goto IL_037b;
	}

IL_00c9:
	{
		Type_t * L_29 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_30 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_31;
		L_31 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_32;
		L_32 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_29, L_31);
		V_8 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00ea;
		}
	}
	{
		V_2 = _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
		goto IL_037b;
	}

IL_00ea:
	{
		Type_t * L_34 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_35 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36;
		L_36 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		bool L_37;
		L_37 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_34, L_36);
		V_9 = L_37;
		bool L_38 = V_9;
		if (!L_38)
		{
			goto IL_010b;
		}
	}
	{
		V_2 = _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC;
		goto IL_037b;
	}

IL_010b:
	{
		Type_t * L_39 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_40 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41;
		L_41 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_39, L_41);
		V_10 = L_42;
		bool L_43 = V_10;
		if (!L_43)
		{
			goto IL_012c;
		}
	}
	{
		V_2 = _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
		goto IL_037b;
	}

IL_012c:
	{
		Type_t * L_44 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		bool L_47;
		L_47 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_44, L_46);
		V_11 = L_47;
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_014d;
		}
	}
	{
		V_2 = _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
		goto IL_037b;
	}

IL_014d:
	{
		Type_t * L_49 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_50 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_51;
		L_51 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_49, L_51);
		V_12 = L_52;
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_016e;
		}
	}
	{
		V_2 = _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
		goto IL_037b;
	}

IL_016e:
	{
		goto IL_0373;
	}

IL_0174:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		bool L_57;
		L_57 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_54, L_56);
		V_13 = L_57;
		bool L_58 = V_13;
		if (!L_58)
		{
			goto IL_0196;
		}
	}
	{
		V_2 = _stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39;
		goto IL_037b;
	}

IL_0196:
	{
		RuntimeObject * L_59 = ___obj0;
		V_14 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)IsInstClass((RuntimeObject*)L_59, AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_60 = V_14;
		if (!L_60)
		{
			goto IL_01f2;
		}
	}
	{
		RuntimeObject * L_61 = ___obj0;
		NullCheck(((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)CastclassClass((RuntimeObject*)L_61, AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var)));
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_62 = ((AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF *)CastclassClass((RuntimeObject*)L_61, AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var))->get_javaInterface_0();
		NullCheck(L_62);
		intptr_t L_63;
		L_63 = AndroidJavaObject_GetRawClass_m051337FD2D7C0E765641B192D86FF4A06257836B(L_62, /*hidden argument*/NULL);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_64 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_64, (intptr_t)L_63, /*hidden argument*/NULL);
		V_15 = L_64;
	}

IL_01bd:
	try
	{ // begin try (depth: 1)
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_65 = V_15;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_66 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_65);
		String_t* L_67;
		L_67 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_65, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_66, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		String_t* L_68;
		L_68 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, L_67, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, /*hidden argument*/NULL);
		V_2 = L_68;
		IL2CPP_LEAVE(0x37B, FINALLY_01e5);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01e5;
	}

FINALLY_01e5:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_69 = V_15;
			if (!L_69)
			{
				goto IL_01f1;
			}
		}

IL_01e9:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_70 = V_15;
			NullCheck(L_70);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_70);
		}

IL_01f1:
		{
			IL2CPP_END_FINALLY(485)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(485)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x37B, IL_037b)
	}

IL_01f2:
	{
		Type_t * L_71 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_72 = { reinterpret_cast<intptr_t> (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_73;
		L_73 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_72, /*hidden argument*/NULL);
		NullCheck(L_71);
		bool L_74;
		L_74 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_71, L_73);
		V_16 = L_74;
		bool L_75 = V_16;
		if (!L_75)
		{
			goto IL_0214;
		}
	}
	{
		V_2 = _stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A;
		goto IL_037b;
	}

IL_0214:
	{
		Type_t * L_76 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_77 = { reinterpret_cast<intptr_t> (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_78;
		L_78 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_77, /*hidden argument*/NULL);
		NullCheck(L_76);
		bool L_79;
		L_79 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_76, L_78);
		V_17 = L_79;
		bool L_80 = V_17;
		if (!L_80)
		{
			goto IL_0236;
		}
	}
	{
		V_2 = _stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827;
		goto IL_037b;
	}

IL_0236:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_82, /*hidden argument*/NULL);
		NullCheck(L_81);
		bool L_84;
		L_84 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::Equals(System.Type) */, L_81, L_83);
		V_18 = L_84;
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_02b4;
		}
	}
	{
		RuntimeObject * L_86 = ___obj0;
		Type_t * L_87 = V_0;
		V_20 = (bool)((((RuntimeObject*)(RuntimeObject *)L_86) == ((RuntimeObject*)(Type_t *)L_87))? 1 : 0);
		bool L_88 = V_20;
		if (!L_88)
		{
			goto IL_0263;
		}
	}
	{
		V_2 = _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
		goto IL_037b;
	}

IL_0263:
	{
		RuntimeObject * L_89 = ___obj0;
		V_19 = ((AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)CastclassClass((RuntimeObject*)L_89, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_90 = V_19;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_91 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_90);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_92;
		L_92 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_90, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_91, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_21 = L_92;
	}

IL_027f:
	try
	{ // begin try (depth: 1)
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_93 = V_21;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_94 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_93);
		String_t* L_95;
		L_95 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_93, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_94, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		String_t* L_96;
		L_96 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, L_95, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, /*hidden argument*/NULL);
		V_2 = L_96;
		IL2CPP_LEAVE(0x37B, FINALLY_02a7);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02a7;
	}

FINALLY_02a7:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_97 = V_21;
			if (!L_97)
			{
				goto IL_02b3;
			}
		}

IL_02ab:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_98 = V_21;
			NullCheck(L_98);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_98);
		}

IL_02b3:
		{
			IL2CPP_END_FINALLY(679)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(679)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x37B, IL_037b)
	}

IL_02b4:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_99 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_100;
		L_100 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_99, /*hidden argument*/NULL);
		Type_t * L_101 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = AndroidReflection_IsAssignableFrom_m7B46715954FFFBDFA63B681FAF87AEB2ECF0E47C(L_100, L_101, /*hidden argument*/NULL);
		V_22 = L_102;
		bool L_103 = V_22;
		if (!L_103)
		{
			goto IL_0317;
		}
	}
	{
		Type_t * L_104 = V_0;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.Type::GetArrayRank() */, L_104);
		V_24 = (bool)((((int32_t)((((int32_t)L_105) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_106 = V_24;
		if (!L_106)
		{
			goto IL_02e9;
		}
	}
	{
		Exception_t * L_107 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F9959D6967BF0405610B0041D446B892A631997)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C_RuntimeMethod_var)));
	}

IL_02e9:
	{
		StringBuilder_t * L_108 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_108, /*hidden argument*/NULL);
		V_23 = L_108;
		StringBuilder_t * L_109 = V_23;
		NullCheck(L_109);
		StringBuilder_t * L_110;
		L_110 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_109, ((int32_t)91), /*hidden argument*/NULL);
		StringBuilder_t * L_111 = V_23;
		Type_t * L_112 = V_0;
		NullCheck(L_112);
		Type_t * L_113;
		L_113 = VirtFuncInvoker0< Type_t * >::Invoke(99 /* System.Type System.Type::GetElementType() */, L_112);
		String_t* L_114;
		L_114 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C(L_113, /*hidden argument*/NULL);
		NullCheck(L_111);
		StringBuilder_t * L_115;
		L_115 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_111, L_114, /*hidden argument*/NULL);
		StringBuilder_t * L_116 = V_23;
		NullCheck(L_116);
		String_t* L_117;
		L_117 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_116);
		V_2 = L_117;
		goto IL_037b;
	}

IL_0317:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_118 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_119 = L_118;
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, _stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_120 = L_119;
		Type_t * L_121 = V_0;
		Type_t * L_122 = L_121;
		G_B50_0 = L_122;
		G_B50_1 = 1;
		G_B50_2 = L_120;
		G_B50_3 = L_120;
		if (L_122)
		{
			G_B51_0 = L_122;
			G_B51_1 = 1;
			G_B51_2 = L_120;
			G_B51_3 = L_120;
			goto IL_0330;
		}
	}
	{
		G_B52_0 = ((String_t*)(NULL));
		G_B52_1 = G_B50_1;
		G_B52_2 = G_B50_2;
		G_B52_3 = G_B50_3;
		goto IL_0335;
	}

IL_0330:
	{
		NullCheck(G_B51_0);
		String_t* L_123;
		L_123 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B51_0);
		G_B52_0 = L_123;
		G_B52_1 = G_B51_1;
		G_B52_2 = G_B51_2;
		G_B52_3 = G_B51_3;
	}

IL_0335:
	{
		NullCheck(G_B52_2);
		ArrayElementTypeCheck (G_B52_2, G_B52_0);
		(G_B52_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B52_1), (String_t*)G_B52_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_124 = G_B52_3;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5BEC2753A5201D97F16E51BDAFBB18987ECD93B)));
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5BEC2753A5201D97F16E51BDAFBB18987ECD93B)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_125 = L_124;
		RuntimeObject * L_126 = ___obj0;
		G_B53_0 = 3;
		G_B53_1 = L_125;
		G_B53_2 = L_125;
		if (L_126)
		{
			G_B54_0 = 3;
			G_B54_1 = L_125;
			G_B54_2 = L_125;
			goto IL_0346;
		}
	}
	{
		G_B55_0 = ((String_t*)(NULL));
		G_B55_1 = G_B53_0;
		G_B55_2 = G_B53_1;
		G_B55_3 = G_B53_2;
		goto IL_034c;
	}

IL_0346:
	{
		RuntimeObject * L_127 = ___obj0;
		NullCheck(L_127);
		String_t* L_128;
		L_128 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_127);
		G_B55_0 = L_128;
		G_B55_1 = G_B54_0;
		G_B55_2 = G_B54_1;
		G_B55_3 = G_B54_2;
	}

IL_034c:
	{
		NullCheck(G_B55_2);
		ArrayElementTypeCheck (G_B55_2, G_B55_0);
		(G_B55_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B55_1), (String_t*)G_B55_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_129 = G_B55_3;
		NullCheck(L_129);
		ArrayElementTypeCheck (L_129, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924)));
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_130 = L_129;
		Type_t * L_131 = V_0;
		RuntimeObject * L_132 = ___obj0;
		G_B56_0 = 5;
		G_B56_1 = L_130;
		G_B56_2 = L_130;
		if ((((RuntimeObject*)(Type_t *)L_131) == ((RuntimeObject*)(RuntimeObject *)L_132)))
		{
			G_B57_0 = 5;
			G_B57_1 = L_130;
			G_B57_2 = L_130;
			goto IL_0362;
		}
	}
	{
		G_B58_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D));
		G_B58_1 = G_B56_0;
		G_B58_2 = G_B56_1;
		G_B58_3 = G_B56_2;
		goto IL_0367;
	}

IL_0362:
	{
		G_B58_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE771679CD1C7D2C1D9B577D342220161AD2D3D));
		G_B58_1 = G_B57_0;
		G_B58_2 = G_B57_1;
		G_B58_3 = G_B57_2;
	}

IL_0367:
	{
		NullCheck(G_B58_2);
		ArrayElementTypeCheck (G_B58_2, G_B58_0);
		(G_B58_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B58_1), (String_t*)G_B58_0);
		String_t* L_133;
		L_133 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B58_3, /*hidden argument*/NULL);
		Exception_t * L_134 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_134, L_133, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_134, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C_RuntimeMethod_var)));
	}

IL_0373:
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_037b;
	}

IL_037b:
	{
		String_t* L_135 = V_2;
		return L_135;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m7621549E54EFD6362170628549B996BF5C52FBB7 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, ((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_8, L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08, /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		V_4 = L_18;
		goto IL_004a;
	}

IL_004a:
	{
		String_t* L_19 = V_4;
		return L_19;
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
// Conversion methods for marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_pinvoke(const jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587& unmarshaled, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_pinvoke& marshaled)
{
	marshaled.___z_0 = static_cast<int32_t>(unmarshaled.get_z_0());
	marshaled.___b_1 = unmarshaled.get_b_1();
	marshaled.___c_2 = static_cast<uint8_t>(unmarshaled.get_c_2());
	marshaled.___s_3 = unmarshaled.get_s_3();
	marshaled.___i_4 = unmarshaled.get_i_4();
	marshaled.___j_5 = unmarshaled.get_j_5();
	marshaled.___f_6 = unmarshaled.get_f_6();
	marshaled.___d_7 = unmarshaled.get_d_7();
	marshaled.___l_8 = unmarshaled.get_l_8();
}
IL2CPP_EXTERN_C void jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_pinvoke_back(const jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_pinvoke& marshaled, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587& unmarshaled)
{
	bool unmarshaled_z_temp_0 = false;
	unmarshaled_z_temp_0 = static_cast<bool>(marshaled.___z_0);
	unmarshaled.set_z_0(unmarshaled_z_temp_0);
	int8_t unmarshaled_b_temp_1 = 0x0;
	unmarshaled_b_temp_1 = marshaled.___b_1;
	unmarshaled.set_b_1(unmarshaled_b_temp_1);
	Il2CppChar unmarshaled_c_temp_2 = 0x0;
	unmarshaled_c_temp_2 = static_cast<Il2CppChar>(marshaled.___c_2);
	unmarshaled.set_c_2(unmarshaled_c_temp_2);
	int16_t unmarshaled_s_temp_3 = 0;
	unmarshaled_s_temp_3 = marshaled.___s_3;
	unmarshaled.set_s_3(unmarshaled_s_temp_3);
	int32_t unmarshaled_i_temp_4 = 0;
	unmarshaled_i_temp_4 = marshaled.___i_4;
	unmarshaled.set_i_4(unmarshaled_i_temp_4);
	int64_t unmarshaled_j_temp_5 = 0;
	unmarshaled_j_temp_5 = marshaled.___j_5;
	unmarshaled.set_j_5(unmarshaled_j_temp_5);
	float unmarshaled_f_temp_6 = 0.0f;
	unmarshaled_f_temp_6 = marshaled.___f_6;
	unmarshaled.set_f_6(unmarshaled_f_temp_6);
	double unmarshaled_d_temp_7 = 0.0;
	unmarshaled_d_temp_7 = marshaled.___d_7;
	unmarshaled.set_d_7(unmarshaled_d_temp_7);
	intptr_t unmarshaled_l_temp_8;
	memset((&unmarshaled_l_temp_8), 0, sizeof(unmarshaled_l_temp_8));
	unmarshaled_l_temp_8 = marshaled.___l_8;
	unmarshaled.set_l_8(unmarshaled_l_temp_8);
}
// Conversion method for clean up from marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_pinvoke_cleanup(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_com(const jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587& unmarshaled, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_com& marshaled)
{
	marshaled.___z_0 = static_cast<int32_t>(unmarshaled.get_z_0());
	marshaled.___b_1 = unmarshaled.get_b_1();
	marshaled.___c_2 = static_cast<uint8_t>(unmarshaled.get_c_2());
	marshaled.___s_3 = unmarshaled.get_s_3();
	marshaled.___i_4 = unmarshaled.get_i_4();
	marshaled.___j_5 = unmarshaled.get_j_5();
	marshaled.___f_6 = unmarshaled.get_f_6();
	marshaled.___d_7 = unmarshaled.get_d_7();
	marshaled.___l_8 = unmarshaled.get_l_8();
}
IL2CPP_EXTERN_C void jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_com_back(const jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_com& marshaled, jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587& unmarshaled)
{
	bool unmarshaled_z_temp_0 = false;
	unmarshaled_z_temp_0 = static_cast<bool>(marshaled.___z_0);
	unmarshaled.set_z_0(unmarshaled_z_temp_0);
	int8_t unmarshaled_b_temp_1 = 0x0;
	unmarshaled_b_temp_1 = marshaled.___b_1;
	unmarshaled.set_b_1(unmarshaled_b_temp_1);
	Il2CppChar unmarshaled_c_temp_2 = 0x0;
	unmarshaled_c_temp_2 = static_cast<Il2CppChar>(marshaled.___c_2);
	unmarshaled.set_c_2(unmarshaled_c_temp_2);
	int16_t unmarshaled_s_temp_3 = 0;
	unmarshaled_s_temp_3 = marshaled.___s_3;
	unmarshaled.set_s_3(unmarshaled_s_temp_3);
	int32_t unmarshaled_i_temp_4 = 0;
	unmarshaled_i_temp_4 = marshaled.___i_4;
	unmarshaled.set_i_4(unmarshaled_i_temp_4);
	int64_t unmarshaled_j_temp_5 = 0;
	unmarshaled_j_temp_5 = marshaled.___j_5;
	unmarshaled.set_j_5(unmarshaled_j_temp_5);
	float unmarshaled_f_temp_6 = 0.0f;
	unmarshaled_f_temp_6 = marshaled.___f_6;
	unmarshaled.set_f_6(unmarshaled_f_temp_6);
	double unmarshaled_d_temp_7 = 0.0;
	unmarshaled_d_temp_7 = marshaled.___d_7;
	unmarshaled.set_d_7(unmarshaled_d_temp_7);
	intptr_t unmarshaled_l_temp_8;
	memset((&unmarshaled_l_temp_8), 0, sizeof(unmarshaled_l_temp_8));
	unmarshaled_l_temp_8 = marshaled.___l_8;
	unmarshaled.set_l_8(unmarshaled_l_temp_8);
}
// Conversion method for clean up from marshalling of: UnityEngine.jvalue
IL2CPP_EXTERN_C void jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshal_com_cleanup(jvalue_t220BECEE73180D6A4DE0F66CB6BA852EC6A5B587_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get__innerException_4();
		return L_0;
	}
}
