#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>>
struct ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>
struct ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>
struct Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Threading.ManualResetEvent>
struct Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.IEqualityComparer`1<System.Reflection.MethodInfo>
struct IEqualityComparer_1_tD41599604E7D2EEFDD1C9D964713638F0711E61C;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey>
struct IEqualityComparer_1_t7FD4D28EE8E68A776ACE85DC12D74EBC02363A6B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>
struct KeyCollection_t93F2D1A04DC51685953BDB647A4B46AE6634AC8C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct KeyCollection_t6F870BF5CEDDFEB13959730E1D35AF53F95D1153;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct KeyCollection_t8A6797C18AFB007283841345EA5ECC3CE2E6E3CB;
// System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9;
// System.Collections.Generic.List`1<System.Diagnostics.Tracing.FieldMetadata>
struct List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Threading.Timer>
struct List_1_t537143C180C9FB69517B6C26205D2AA824591563;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>
struct ValueCollection_tDF9F4C17321815AB3E97B0CF08B95643B761CC5F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct ValueCollection_tEA48E4B6DFB033F98ED189470457D6134F7C7AA9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct ValueCollection_tDA9C3CF0F1B2413AABEC563511728419196CDD32;
// System.Collections.Generic.Dictionary`2/Entry<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>[]
struct EntryU5BU5D_t152D41DBA215611A49D5E7D94440C711AF4A33D8;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>[]
struct EntryU5BU5D_t8D607320BF96B9AF7102AD17E8A0C7173DB1AF85;
// System.Collections.Generic.Dictionary`2/Entry<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>[]
struct EntryU5BU5D_t8C83EA6B264039F97035A8B2701A644D21D4D1DF;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8;
// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken[]
struct EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B;
// System.Diagnostics.Tracing.FieldMetadata[]
struct FieldMetadataU5BU5D_t35DE5E5DAE246E2D5C8321E0CC2DAB610906608D;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Threading.Timer[]
struct TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B;
// System.Text.DecoderNLS
struct DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0;
// System.Text.EncoderNLS
struct EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Diagnostics.Tracing.FieldMetadata
struct FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A;
// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Collections.SortedList
struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.TypeName
struct TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F;
// System.Text.UTF32Encoding
struct UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014;
// System.Text.UTF7Encoding
struct UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// System.Collections.SortedList/KeyList
struct KeyList_t90FF026A62D56329DEFC1B768358977E70839881;
// System.Collections.SortedList/ValueList
struct ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Threading.Timer/Scheduler
struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8;
// System.Threading.Timer/TimerComparer
struct TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B;
// System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl
struct Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55;
// System.TypeIdentifiers/Display
struct Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E;
// System.TypeNames/ATypeName
struct ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861;
// System.Text.UTF32Encoding/UTF32Decoder
struct UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7;
// System.Text.UTF7Encoding/Decoder
struct Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9;
// System.Text.UTF7Encoding/DecoderUTF7Fallback
struct DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8;
// System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
struct DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A;
// System.Text.UTF7Encoding/Encoder
struct Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4;
// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65;
// System.Text.UTF8Encoding/UTF8Encoder
struct UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3;
// System.Text.UnicodeEncoding/Decoder
struct Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109;
// Microsoft.Win32.Win32Native/WIN32_FIND_DATA
struct WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7;
// System.Console/WindowsConsole/WindowsCancelHandler
struct WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF;
// System.IO.Stream/SynchronousAsyncResult/<>c
struct U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB;
// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
struct EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKeyEqualityComparer
struct EventCacheKeyEqualityComparer_tEF90055C112EAE4D591A1BCF368738AAE742D267;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount
struct EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock
struct MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/ReaderWriterLockTimedOutException
struct ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount
struct TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCacheKeyEqualityComparer_tEF90055C112EAE4D591A1BCF368738AAE742D267_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t537143C180C9FB69517B6C26205D2AA824591563_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4;
IL2CPP_EXTERN_C String_t* _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226;
IL2CPP_EXTERN_C String_t* _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30;
IL2CPP_EXTERN_C String_t* _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD;
IL2CPP_EXTERN_C String_t* _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128;
IL2CPP_EXTERN_C String_t* _stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4;
IL2CPP_EXTERN_C String_t* _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58;
IL2CPP_EXTERN_C String_t* _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
IL2CPP_EXTERN_C String_t* _stringLiteral494836B9EFC41FFD5CB7E6CA5BA325833F323668;
IL2CPP_EXTERN_C String_t* _stringLiteral49D64DCFE768AFB45BCA7F089DBB249FA1DA859C;
IL2CPP_EXTERN_C String_t* _stringLiteral510ADF31D1E152C6A920A7E699AA2011696CB788;
IL2CPP_EXTERN_C String_t* _stringLiteral67A8B307108B776E449960AB72201F944EB0EAAA;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7ED71F768C05670E3698EF09100E41C9E3AC8113;
IL2CPP_EXTERN_C String_t* _stringLiteral8994D295B1EC3F358FB1CDEB6465D3A478A7F949;
IL2CPP_EXTERN_C String_t* _stringLiteral9C4034C5C6F417782BE8DF6DD6771CA6B67948DF;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5411972E9968E9978EF95EF84FB5F5FE4F0F734;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5;
IL2CPP_EXTERN_C String_t* _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030;
IL2CPP_EXTERN_C String_t* _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5;
IL2CPP_EXTERN_C String_t* _stringLiteralD3EDB56B30B60F6E6107AB89FE5358A528045F13;
IL2CPP_EXTERN_C String_t* _stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_m0551D1CCD60B0475B582EBAA8361A70B4E7B6C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_mA9765288CD2998D56E994962E442DD75000910AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2__ctor_m1E9F5FE1A13473964C511F8D95EBEF189DCD2E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2__ctor_m601D3139411A67E8BD272B9F74D9E96D700864CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m39CFB38833568CC7622743D57EE9AF8B284C8CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB400B84012C61777C194CFE7E99321AB4018F5CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m16CF0B1A3BAF60BEB727EC4901096F8034A3E469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD07E3FD173466A7752076035D895506ED1984C46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1535F001EADDA8F2EB4E29E7C49B798D2817E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m91F814885C154732EF09B1FE9212DC37ED6E1278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC94B847A4D9A38CC2A74CC5564F14BF46CB63016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFA0454B40F3E8ACB8A9E3BBBF9903AB74495DA89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m39CC882527DAE6FEB8DF8B325824BD935F61C5C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6C76939016FC9D85E72CCA56241C1A241BA4312D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Impl_AddNonscalar_m545AA477978D51CDF7D221093DFE3EE4EF16810C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Impl_AddScalar_m50332653D9BBFDEC404A15E299A0F467ED87F6E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1DE97F7A9186F5F2514E61E27556B63619978BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2CB7D6B4CFC315F1197DAE15867E8FD56039920E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mF9A7A06A7EA9E7D812A1BBA95A8D62824437CDD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1659C794A53D7BB661944EB117B296260FE4D3FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6EBDDD4002DC42EC1CD75D81C2AFCD1B41573693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF2CB3D49AE42647D38FDC61E299623F08ACAE1AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m35903D896081A6BB024566CDF4DDEFB5AF3E0D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionResult_SetFailure_m6895BDEA769E4AE334A7D031C9AAC9C3D900C37F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YieldAwaiter_RunAction_mBBA702DC1D80A6DF9715E898DD994F965E946759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>>
struct  ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject * ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC, ___data_4)); }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* get_data_4() const { return ___data_4; }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of__lock_5() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC, ____lock_5)); }
	inline RuntimeObject * get__lock_5() const { return ____lock_5; }
	inline RuntimeObject ** get_address_of__lock_5() { return &____lock_5; }
	inline void set__lock_5(RuntimeObject * value)
	{
		____lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC, ___size_6)); }
	inline int32_t get_size_6() const { return ___size_6; }
	inline int32_t* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(int32_t value)
	{
		___size_6 = value;
	}
};


// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>
struct  ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject * ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229, ___data_4)); }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* get_data_4() const { return ___data_4; }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of__lock_5() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229, ____lock_5)); }
	inline RuntimeObject * get__lock_5() const { return ____lock_5; }
	inline RuntimeObject ** get_address_of__lock_5() { return &____lock_5; }
	inline void set__lock_5(RuntimeObject * value)
	{
		____lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229, ___size_6)); }
	inline int32_t get_size_6() const { return ___size_6; }
	inline int32_t* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(int32_t value)
	{
		___size_6 = value;
	}
};


// System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>
struct  Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t152D41DBA215611A49D5E7D94440C711AF4A33D8* ___entries_1;
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
	KeyCollection_t93F2D1A04DC51685953BDB647A4B46AE6634AC8C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDF9F4C17321815AB3E97B0CF08B95643B761CC5F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40, ___entries_1)); }
	inline EntryU5BU5D_t152D41DBA215611A49D5E7D94440C711AF4A33D8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t152D41DBA215611A49D5E7D94440C711AF4A33D8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t152D41DBA215611A49D5E7D94440C711AF4A33D8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40, ___keys_7)); }
	inline KeyCollection_t93F2D1A04DC51685953BDB647A4B46AE6634AC8C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t93F2D1A04DC51685953BDB647A4B46AE6634AC8C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t93F2D1A04DC51685953BDB647A4B46AE6634AC8C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40, ___values_8)); }
	inline ValueCollection_tDF9F4C17321815AB3E97B0CF08B95643B761CC5F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDF9F4C17321815AB3E97B0CF08B95643B761CC5F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDF9F4C17321815AB3E97B0CF08B95643B761CC5F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct  Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8D607320BF96B9AF7102AD17E8A0C7173DB1AF85* ___entries_1;
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
	KeyCollection_t6F870BF5CEDDFEB13959730E1D35AF53F95D1153 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tEA48E4B6DFB033F98ED189470457D6134F7C7AA9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___entries_1)); }
	inline EntryU5BU5D_t8D607320BF96B9AF7102AD17E8A0C7173DB1AF85* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8D607320BF96B9AF7102AD17E8A0C7173DB1AF85** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8D607320BF96B9AF7102AD17E8A0C7173DB1AF85* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___keys_7)); }
	inline KeyCollection_t6F870BF5CEDDFEB13959730E1D35AF53F95D1153 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6F870BF5CEDDFEB13959730E1D35AF53F95D1153 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6F870BF5CEDDFEB13959730E1D35AF53F95D1153 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___values_8)); }
	inline ValueCollection_tEA48E4B6DFB033F98ED189470457D6134F7C7AA9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tEA48E4B6DFB033F98ED189470457D6134F7C7AA9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tEA48E4B6DFB033F98ED189470457D6134F7C7AA9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct  Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8C83EA6B264039F97035A8B2701A644D21D4D1DF* ___entries_1;
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
	KeyCollection_t8A6797C18AFB007283841345EA5ECC3CE2E6E3CB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDA9C3CF0F1B2413AABEC563511728419196CDD32 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___entries_1)); }
	inline EntryU5BU5D_t8C83EA6B264039F97035A8B2701A644D21D4D1DF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8C83EA6B264039F97035A8B2701A644D21D4D1DF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8C83EA6B264039F97035A8B2701A644D21D4D1DF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___keys_7)); }
	inline KeyCollection_t8A6797C18AFB007283841345EA5ECC3CE2E6E3CB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8A6797C18AFB007283841345EA5ECC3CE2E6E3CB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8A6797C18AFB007283841345EA5ECC3CE2E6E3CB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___values_8)); }
	inline ValueCollection_tDA9C3CF0F1B2413AABEC563511728419196CDD32 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDA9C3CF0F1B2413AABEC563511728419196CDD32 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDA9C3CF0F1B2413AABEC563511728419196CDD32 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct  List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9, ____items_1)); }
	inline EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B* get__items_1() const { return ____items_1; }
	inline EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9_StaticFields, ____emptyArray_5)); }
	inline EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Diagnostics.Tracing.FieldMetadata>
struct  List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FieldMetadataU5BU5D_t35DE5E5DAE246E2D5C8321E0CC2DAB610906608D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2, ____items_1)); }
	inline FieldMetadataU5BU5D_t35DE5E5DAE246E2D5C8321E0CC2DAB610906608D* get__items_1() const { return ____items_1; }
	inline FieldMetadataU5BU5D_t35DE5E5DAE246E2D5C8321E0CC2DAB610906608D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FieldMetadataU5BU5D_t35DE5E5DAE246E2D5C8321E0CC2DAB610906608D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FieldMetadataU5BU5D_t35DE5E5DAE246E2D5C8321E0CC2DAB610906608D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2_StaticFields, ____emptyArray_5)); }
	inline FieldMetadataU5BU5D_t35DE5E5DAE246E2D5C8321E0CC2DAB610906608D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FieldMetadataU5BU5D_t35DE5E5DAE246E2D5C8321E0CC2DAB610906608D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FieldMetadataU5BU5D_t35DE5E5DAE246E2D5C8321E0CC2DAB610906608D* value)
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


// System.Collections.Generic.List`1<System.Threading.Timer>
struct  List_1_t537143C180C9FB69517B6C26205D2AA824591563  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____items_1)); }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* get__items_1() const { return ____items_1; }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t537143C180C9FB69517B6C26205D2AA824591563_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563_StaticFields, ____emptyArray_5)); }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Decoder
struct  Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallback_0)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.DecoderFallback
struct  DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B  : public RuntimeObject
{
public:
	// System.Byte* System.Text.DecoderFallbackBuffer::byteStart
	uint8_t* ___byteStart_0;
	// System.Char* System.Text.DecoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;

public:
	inline static int32_t get_offset_of_byteStart_0() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B, ___byteStart_0)); }
	inline uint8_t* get_byteStart_0() const { return ___byteStart_0; }
	inline uint8_t** get_address_of_byteStart_0() { return &___byteStart_0; }
	inline void set_byteStart_0(uint8_t* value)
	{
		___byteStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}
};


// System.Text.Encoder
struct  Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::m_fallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___m_fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::m_fallbackBuffer
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallback_0)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallbackBuffer_1)); }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.EncoderFallback
struct  EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0  : public RuntimeObject
{
public:
	// System.Char* System.Text.EncoderFallbackBuffer::charStart
	Il2CppChar* ___charStart_0;
	// System.Char* System.Text.EncoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;
	// System.Text.EncoderNLS System.Text.EncoderFallbackBuffer::encoder
	EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * ___encoder_2;
	// System.Boolean System.Text.EncoderFallbackBuffer::setEncoder
	bool ___setEncoder_3;
	// System.Boolean System.Text.EncoderFallbackBuffer::bUsedEncoder
	bool ___bUsedEncoder_4;
	// System.Boolean System.Text.EncoderFallbackBuffer::bFallingBack
	bool ___bFallingBack_5;
	// System.Int32 System.Text.EncoderFallbackBuffer::iRecursionCount
	int32_t ___iRecursionCount_6;

public:
	inline static int32_t get_offset_of_charStart_0() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charStart_0)); }
	inline Il2CppChar* get_charStart_0() const { return ___charStart_0; }
	inline Il2CppChar** get_address_of_charStart_0() { return &___charStart_0; }
	inline void set_charStart_0(Il2CppChar* value)
	{
		___charStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}

	inline static int32_t get_offset_of_encoder_2() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___encoder_2)); }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * get_encoder_2() const { return ___encoder_2; }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 ** get_address_of_encoder_2() { return &___encoder_2; }
	inline void set_encoder_2(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * value)
	{
		___encoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_setEncoder_3() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___setEncoder_3)); }
	inline bool get_setEncoder_3() const { return ___setEncoder_3; }
	inline bool* get_address_of_setEncoder_3() { return &___setEncoder_3; }
	inline void set_setEncoder_3(bool value)
	{
		___setEncoder_3 = value;
	}

	inline static int32_t get_offset_of_bUsedEncoder_4() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bUsedEncoder_4)); }
	inline bool get_bUsedEncoder_4() const { return ___bUsedEncoder_4; }
	inline bool* get_address_of_bUsedEncoder_4() { return &___bUsedEncoder_4; }
	inline void set_bUsedEncoder_4(bool value)
	{
		___bUsedEncoder_4 = value;
	}

	inline static int32_t get_offset_of_bFallingBack_5() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bFallingBack_5)); }
	inline bool get_bFallingBack_5() const { return ___bFallingBack_5; }
	inline bool* get_address_of_bFallingBack_5() { return &___bFallingBack_5; }
	inline void set_bFallingBack_5(bool value)
	{
		___bFallingBack_5 = value;
	}

	inline static int32_t get_offset_of_iRecursionCount_6() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___iRecursionCount_6)); }
	inline int32_t get_iRecursionCount_6() const { return ___iRecursionCount_6; }
	inline int32_t* get_address_of_iRecursionCount_6() { return &___iRecursionCount_6; }
	inline void set_iRecursionCount_6(int32_t value)
	{
		___iRecursionCount_6 = value;
	}
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
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

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};


// System.Collections.SortedList
struct  SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/KeyList System.Collections.SortedList::keyList
	KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * ___keyList_5;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * ___valueList_6;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___keys_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___values_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___keyList_5)); }
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyList_5), (void*)value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___valueList_6)); }
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueList_6), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};

struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_9;

public:
	inline static int32_t get_offset_of_emptyArray_9() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields, ___emptyArray_9)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_9() const { return ___emptyArray_9; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_9() { return &___emptyArray_9; }
	inline void set_emptyArray_9(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_9), (void*)value);
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

// System.Version
struct  Version_tBDAEDED25425A1D09910468B8BD1759115646E3C  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// System.Threading.Timer/Scheduler
struct  Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Threading.Timer/Scheduler::list
	SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * ___list_1;
	// System.Threading.ManualResetEvent System.Threading.Timer/Scheduler::changed
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___changed_2;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8, ___list_1)); }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * get_list_1() const { return ___list_1; }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_1), (void*)value);
	}

	inline static int32_t get_offset_of_changed_2() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8, ___changed_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_changed_2() const { return ___changed_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_changed_2() { return &___changed_2; }
	inline void set_changed_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___changed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changed_2), (void*)value);
	}
};

struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::instance
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields, ___instance_0)); }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * get_instance_0() const { return ___instance_0; }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// System.Threading.Timer/TimerComparer
struct  TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B  : public RuntimeObject
{
public:

public:
};


// System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl
struct  Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Diagnostics.Tracing.FieldMetadata> System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::fields
	List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 * ___fields_0;
	// System.Int16 System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::scratchSize
	int16_t ___scratchSize_1;
	// System.SByte System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::dataCount
	int8_t ___dataCount_2;
	// System.SByte System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::pinCount
	int8_t ___pinCount_3;
	// System.Int32 System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::bufferNesting
	int32_t ___bufferNesting_4;
	// System.Boolean System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::scalar
	bool ___scalar_5;

public:
	inline static int32_t get_offset_of_fields_0() { return static_cast<int32_t>(offsetof(Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55, ___fields_0)); }
	inline List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 * get_fields_0() const { return ___fields_0; }
	inline List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 ** get_address_of_fields_0() { return &___fields_0; }
	inline void set_fields_0(List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 * value)
	{
		___fields_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fields_0), (void*)value);
	}

	inline static int32_t get_offset_of_scratchSize_1() { return static_cast<int32_t>(offsetof(Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55, ___scratchSize_1)); }
	inline int16_t get_scratchSize_1() const { return ___scratchSize_1; }
	inline int16_t* get_address_of_scratchSize_1() { return &___scratchSize_1; }
	inline void set_scratchSize_1(int16_t value)
	{
		___scratchSize_1 = value;
	}

	inline static int32_t get_offset_of_dataCount_2() { return static_cast<int32_t>(offsetof(Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55, ___dataCount_2)); }
	inline int8_t get_dataCount_2() const { return ___dataCount_2; }
	inline int8_t* get_address_of_dataCount_2() { return &___dataCount_2; }
	inline void set_dataCount_2(int8_t value)
	{
		___dataCount_2 = value;
	}

	inline static int32_t get_offset_of_pinCount_3() { return static_cast<int32_t>(offsetof(Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55, ___pinCount_3)); }
	inline int8_t get_pinCount_3() const { return ___pinCount_3; }
	inline int8_t* get_address_of_pinCount_3() { return &___pinCount_3; }
	inline void set_pinCount_3(int8_t value)
	{
		___pinCount_3 = value;
	}

	inline static int32_t get_offset_of_bufferNesting_4() { return static_cast<int32_t>(offsetof(Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55, ___bufferNesting_4)); }
	inline int32_t get_bufferNesting_4() const { return ___bufferNesting_4; }
	inline int32_t* get_address_of_bufferNesting_4() { return &___bufferNesting_4; }
	inline void set_bufferNesting_4(int32_t value)
	{
		___bufferNesting_4 = value;
	}

	inline static int32_t get_offset_of_scalar_5() { return static_cast<int32_t>(offsetof(Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55, ___scalar_5)); }
	inline bool get_scalar_5() const { return ___scalar_5; }
	inline bool* get_address_of_scalar_5() { return &___scalar_5; }
	inline void set_scalar_5(bool value)
	{
		___scalar_5 = value;
	}
};


// System.TypeNames/ATypeName
struct  ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861  : public RuntimeObject
{
public:

public:
};


// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
struct  ManifestEtw_t322C155BA2103DFABA9DEB357AAA17C3D7107AFA  : public RuntimeObject
{
public:

public:
};


// Microsoft.Win32.Win32Native/WIN32_FIND_DATA
struct  WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::dwFileAttributes
	int32_t ___dwFileAttributes_0;
	// System.String Microsoft.Win32.Win32Native/WIN32_FIND_DATA::cFileName
	String_t* ___cFileName_1;

public:
	inline static int32_t get_offset_of_dwFileAttributes_0() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7, ___dwFileAttributes_0)); }
	inline int32_t get_dwFileAttributes_0() const { return ___dwFileAttributes_0; }
	inline int32_t* get_address_of_dwFileAttributes_0() { return &___dwFileAttributes_0; }
	inline void set_dwFileAttributes_0(int32_t value)
	{
		___dwFileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_cFileName_1() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7, ___cFileName_1)); }
	inline String_t* get_cFileName_1() const { return ___cFileName_1; }
	inline String_t** get_address_of_cFileName_1() { return &___cFileName_1; }
	inline void set_cFileName_1(String_t* value)
	{
		___cFileName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cFileName_1), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl
struct  ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB  : public RuntimeObject
{
public:

public:
};

struct ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl::s_eventRegistrations
	ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * ___s_eventRegistrations_0;

public:
	inline static int32_t get_offset_of_s_eventRegistrations_0() { return static_cast<int32_t>(offsetof(ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_StaticFields, ___s_eventRegistrations_0)); }
	inline ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * get_s_eventRegistrations_0() const { return ___s_eventRegistrations_0; }
	inline ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC ** get_address_of_s_eventRegistrations_0() { return &___s_eventRegistrations_0; }
	inline void set_s_eventRegistrations_0(ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * value)
	{
		___s_eventRegistrations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_eventRegistrations_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl
struct  NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4  : public RuntimeObject
{
public:

public:
};

struct NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry> modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::s_eventRegistrations
	Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * ___s_eventRegistrations_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::s_eventCacheRWLock
	MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * ___s_eventCacheRWLock_1;

public:
	inline static int32_t get_offset_of_s_eventRegistrations_0() { return static_cast<int32_t>(offsetof(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields, ___s_eventRegistrations_0)); }
	inline Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * get_s_eventRegistrations_0() const { return ___s_eventRegistrations_0; }
	inline Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 ** get_address_of_s_eventRegistrations_0() { return &___s_eventRegistrations_0; }
	inline void set_s_eventRegistrations_0(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * value)
	{
		___s_eventRegistrations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_eventRegistrations_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_eventCacheRWLock_1() { return static_cast<int32_t>(offsetof(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields, ___s_eventCacheRWLock_1)); }
	inline MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * get_s_eventCacheRWLock_1() const { return ___s_eventCacheRWLock_1; }
	inline MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD ** get_address_of_s_eventCacheRWLock_1() { return &___s_eventCacheRWLock_1; }
	inline void set_s_eventCacheRWLock_1(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * value)
	{
		___s_eventCacheRWLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_eventCacheRWLock_1), (void*)value);
	}
};


// System.IO.Stream/SynchronousAsyncResult/<>c
struct  U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields
{
public:
	// System.IO.Stream/SynchronousAsyncResult/<>c System.IO.Stream/SynchronousAsyncResult/<>c::<>9
	U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * ___U3CU3E9_0;
	// System.Func`1<System.Threading.ManualResetEvent> System.IO.Stream/SynchronousAsyncResult/<>c::<>9__12_0
	Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKeyEqualityComparer
struct  EventCacheKeyEqualityComparer_tEF90055C112EAE4D591A1BCF368738AAE742D267  : public RuntimeObject
{
public:

public:
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock
struct  MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::myLock
	int32_t ___myLock_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::owners
	int32_t ___owners_1;
	// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::numWriteWaiters
	uint32_t ___numWriteWaiters_2;
	// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::numReadWaiters
	uint32_t ___numReadWaiters_3;
	// System.Threading.EventWaitHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::writeEvent
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___writeEvent_4;
	// System.Threading.EventWaitHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::readEvent
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___readEvent_5;

public:
	inline static int32_t get_offset_of_myLock_0() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___myLock_0)); }
	inline int32_t get_myLock_0() const { return ___myLock_0; }
	inline int32_t* get_address_of_myLock_0() { return &___myLock_0; }
	inline void set_myLock_0(int32_t value)
	{
		___myLock_0 = value;
	}

	inline static int32_t get_offset_of_owners_1() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___owners_1)); }
	inline int32_t get_owners_1() const { return ___owners_1; }
	inline int32_t* get_address_of_owners_1() { return &___owners_1; }
	inline void set_owners_1(int32_t value)
	{
		___owners_1 = value;
	}

	inline static int32_t get_offset_of_numWriteWaiters_2() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___numWriteWaiters_2)); }
	inline uint32_t get_numWriteWaiters_2() const { return ___numWriteWaiters_2; }
	inline uint32_t* get_address_of_numWriteWaiters_2() { return &___numWriteWaiters_2; }
	inline void set_numWriteWaiters_2(uint32_t value)
	{
		___numWriteWaiters_2 = value;
	}

	inline static int32_t get_offset_of_numReadWaiters_3() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___numReadWaiters_3)); }
	inline uint32_t get_numReadWaiters_3() const { return ___numReadWaiters_3; }
	inline uint32_t* get_address_of_numReadWaiters_3() { return &___numReadWaiters_3; }
	inline void set_numReadWaiters_3(uint32_t value)
	{
		___numReadWaiters_3 = value;
	}

	inline static int32_t get_offset_of_writeEvent_4() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___writeEvent_4)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get_writeEvent_4() const { return ___writeEvent_4; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of_writeEvent_4() { return &___writeEvent_4; }
	inline void set_writeEvent_4(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		___writeEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_readEvent_5() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___readEvent_5)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get_readEvent_5() const { return ___readEvent_5; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of_readEvent_5() { return &___readEvent_5; }
	inline void set_readEvent_5(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		___readEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readEvent_5), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Diagnostics.Tracing.FieldMetadata>
struct  Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675, ___list_0)); }
	inline List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 * get_list_0() const { return ___list_0; }
	inline List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675, ___current_3)); }
	inline FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A * get_current_3() const { return ___current_3; }
	inline FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A * value)
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


// System.Threading.CancellationToken
struct  CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
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


// System.Text.DecoderNLS
struct  DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A  : public Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370
{
public:
	// System.Text.Encoding System.Text.DecoderNLS::m_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___m_encoding_2;
	// System.Boolean System.Text.DecoderNLS::m_mustFlush
	bool ___m_mustFlush_3;
	// System.Boolean System.Text.DecoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_4;
	// System.Int32 System.Text.DecoderNLS::m_bytesUsed
	int32_t ___m_bytesUsed_5;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_encoding_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_mustFlush_3() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_mustFlush_3)); }
	inline bool get_m_mustFlush_3() const { return ___m_mustFlush_3; }
	inline bool* get_address_of_m_mustFlush_3() { return &___m_mustFlush_3; }
	inline void set_m_mustFlush_3(bool value)
	{
		___m_mustFlush_3 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_4() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_throwOnOverflow_4)); }
	inline bool get_m_throwOnOverflow_4() const { return ___m_throwOnOverflow_4; }
	inline bool* get_address_of_m_throwOnOverflow_4() { return &___m_throwOnOverflow_4; }
	inline void set_m_throwOnOverflow_4(bool value)
	{
		___m_throwOnOverflow_4 = value;
	}

	inline static int32_t get_offset_of_m_bytesUsed_5() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_bytesUsed_5)); }
	inline int32_t get_m_bytesUsed_5() const { return ___m_bytesUsed_5; }
	inline int32_t* get_address_of_m_bytesUsed_5() { return &___m_bytesUsed_5; }
	inline void set_m_bytesUsed_5(int32_t value)
	{
		___m_bytesUsed_5 = value;
	}
};


// System.Text.EncoderNLS
struct  EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712  : public Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A
{
public:
	// System.Char System.Text.EncoderNLS::charLeftOver
	Il2CppChar ___charLeftOver_2;
	// System.Text.Encoding System.Text.EncoderNLS::m_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___m_encoding_3;
	// System.Boolean System.Text.EncoderNLS::m_mustFlush
	bool ___m_mustFlush_4;
	// System.Boolean System.Text.EncoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_5;
	// System.Int32 System.Text.EncoderNLS::m_charsUsed
	int32_t ___m_charsUsed_6;

public:
	inline static int32_t get_offset_of_charLeftOver_2() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___charLeftOver_2)); }
	inline Il2CppChar get_charLeftOver_2() const { return ___charLeftOver_2; }
	inline Il2CppChar* get_address_of_charLeftOver_2() { return &___charLeftOver_2; }
	inline void set_charLeftOver_2(Il2CppChar value)
	{
		___charLeftOver_2 = value;
	}

	inline static int32_t get_offset_of_m_encoding_3() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_m_encoding_3() const { return ___m_encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_m_encoding_3() { return &___m_encoding_3; }
	inline void set_m_encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___m_encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_mustFlush_4() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_mustFlush_4)); }
	inline bool get_m_mustFlush_4() const { return ___m_mustFlush_4; }
	inline bool* get_address_of_m_mustFlush_4() { return &___m_mustFlush_4; }
	inline void set_m_mustFlush_4(bool value)
	{
		___m_mustFlush_4 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_5() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_throwOnOverflow_5)); }
	inline bool get_m_throwOnOverflow_5() const { return ___m_throwOnOverflow_5; }
	inline bool* get_address_of_m_throwOnOverflow_5() { return &___m_throwOnOverflow_5; }
	inline void set_m_throwOnOverflow_5(bool value)
	{
		___m_throwOnOverflow_5 = value;
	}

	inline static int32_t get_offset_of_m_charsUsed_6() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_charsUsed_6)); }
	inline int32_t get_m_charsUsed_6() const { return ___m_charsUsed_6; }
	inline int32_t* get_address_of_m_charsUsed_6() { return &___m_charsUsed_6; }
	inline void set_m_charsUsed_6(int32_t value)
	{
		___m_charsUsed_6 = value;
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

// System.Diagnostics.Tracing.EventDescriptor
struct  EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 System.Diagnostics.Tracing.EventDescriptor::m_traceloggingId
					int32_t ___m_traceloggingId_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___m_traceloggingId_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.UInt16 System.Diagnostics.Tracing.EventDescriptor::m_id
					uint16_t ___m_id_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___m_id_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_version_2_OffsetPadding[2];
					// System.Byte System.Diagnostics.Tracing.EventDescriptor::m_version
					uint8_t ___m_version_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_version_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___m_version_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_channel_3_OffsetPadding[3];
					// System.Byte System.Diagnostics.Tracing.EventDescriptor::m_channel
					uint8_t ___m_channel_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_channel_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___m_channel_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_level_4_OffsetPadding[4];
					// System.Byte System.Diagnostics.Tracing.EventDescriptor::m_level
					uint8_t ___m_level_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_level_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___m_level_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_opcode_5_OffsetPadding[5];
					// System.Byte System.Diagnostics.Tracing.EventDescriptor::m_opcode
					uint8_t ___m_opcode_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_opcode_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___m_opcode_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_task_6_OffsetPadding[6];
					// System.UInt16 System.Diagnostics.Tracing.EventDescriptor::m_task
					uint16_t ___m_task_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_task_6_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___m_task_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_keywords_7_OffsetPadding[8];
					// System.Int64 System.Diagnostics.Tracing.EventDescriptor::m_keywords
					int64_t ___m_keywords_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_keywords_7_OffsetPadding_forAlignmentOnly[8];
					int64_t ___m_keywords_7_forAlignmentOnly;
				};
			};
		};
		uint8_t EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F__padding[16];
	};

public:
	inline static int32_t get_offset_of_m_traceloggingId_0() { return static_cast<int32_t>(offsetof(EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F, ___m_traceloggingId_0)); }
	inline int32_t get_m_traceloggingId_0() const { return ___m_traceloggingId_0; }
	inline int32_t* get_address_of_m_traceloggingId_0() { return &___m_traceloggingId_0; }
	inline void set_m_traceloggingId_0(int32_t value)
	{
		___m_traceloggingId_0 = value;
	}

	inline static int32_t get_offset_of_m_id_1() { return static_cast<int32_t>(offsetof(EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F, ___m_id_1)); }
	inline uint16_t get_m_id_1() const { return ___m_id_1; }
	inline uint16_t* get_address_of_m_id_1() { return &___m_id_1; }
	inline void set_m_id_1(uint16_t value)
	{
		___m_id_1 = value;
	}

	inline static int32_t get_offset_of_m_version_2() { return static_cast<int32_t>(offsetof(EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F, ___m_version_2)); }
	inline uint8_t get_m_version_2() const { return ___m_version_2; }
	inline uint8_t* get_address_of_m_version_2() { return &___m_version_2; }
	inline void set_m_version_2(uint8_t value)
	{
		___m_version_2 = value;
	}

	inline static int32_t get_offset_of_m_channel_3() { return static_cast<int32_t>(offsetof(EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F, ___m_channel_3)); }
	inline uint8_t get_m_channel_3() const { return ___m_channel_3; }
	inline uint8_t* get_address_of_m_channel_3() { return &___m_channel_3; }
	inline void set_m_channel_3(uint8_t value)
	{
		___m_channel_3 = value;
	}

	inline static int32_t get_offset_of_m_level_4() { return static_cast<int32_t>(offsetof(EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F, ___m_level_4)); }
	inline uint8_t get_m_level_4() const { return ___m_level_4; }
	inline uint8_t* get_address_of_m_level_4() { return &___m_level_4; }
	inline void set_m_level_4(uint8_t value)
	{
		___m_level_4 = value;
	}

	inline static int32_t get_offset_of_m_opcode_5() { return static_cast<int32_t>(offsetof(EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F, ___m_opcode_5)); }
	inline uint8_t get_m_opcode_5() const { return ___m_opcode_5; }
	inline uint8_t* get_address_of_m_opcode_5() { return &___m_opcode_5; }
	inline void set_m_opcode_5(uint8_t value)
	{
		___m_opcode_5 = value;
	}

	inline static int32_t get_offset_of_m_task_6() { return static_cast<int32_t>(offsetof(EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F, ___m_task_6)); }
	inline uint16_t get_m_task_6() const { return ___m_task_6; }
	inline uint16_t* get_address_of_m_task_6() { return &___m_task_6; }
	inline void set_m_task_6(uint16_t value)
	{
		___m_task_6 = value;
	}

	inline static int32_t get_offset_of_m_keywords_7() { return static_cast<int32_t>(offsetof(EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F, ___m_keywords_7)); }
	inline int64_t get_m_keywords_7() const { return ___m_keywords_7; }
	inline int64_t* get_address_of_m_keywords_7() { return &___m_keywords_7; }
	inline void set_m_keywords_7(int64_t value)
	{
		___m_keywords_7 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct  EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
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


// System.Threading.Thread
struct  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.Threading.Timer
struct  Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___callback_2;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___callback_2)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_3), (void*)value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields, ___scheduler_1)); }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheduler_1), (void*)value);
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


// System.Text.UTF32Encoding
struct  UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF32Encoding::emitUTF32ByteOrderMark
	bool ___emitUTF32ByteOrderMark_16;
	// System.Boolean System.Text.UTF32Encoding::isThrowException
	bool ___isThrowException_17;
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_18;

public:
	inline static int32_t get_offset_of_emitUTF32ByteOrderMark_16() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___emitUTF32ByteOrderMark_16)); }
	inline bool get_emitUTF32ByteOrderMark_16() const { return ___emitUTF32ByteOrderMark_16; }
	inline bool* get_address_of_emitUTF32ByteOrderMark_16() { return &___emitUTF32ByteOrderMark_16; }
	inline void set_emitUTF32ByteOrderMark_16(bool value)
	{
		___emitUTF32ByteOrderMark_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}

	inline static int32_t get_offset_of_bigEndian_18() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___bigEndian_18)); }
	inline bool get_bigEndian_18() const { return ___bigEndian_18; }
	inline bool* get_address_of_bigEndian_18() { return &___bigEndian_18; }
	inline void set_bigEndian_18(bool value)
	{
		___bigEndian_18 = value;
	}
};


// System.Text.UTF7Encoding
struct  UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Byte[] System.Text.UTF7Encoding::base64Bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___base64Bytes_16;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___base64Values_17;
	// System.Boolean[] System.Text.UTF7Encoding::directEncode
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___directEncode_18;
	// System.Boolean System.Text.UTF7Encoding::m_allowOptionals
	bool ___m_allowOptionals_19;

public:
	inline static int32_t get_offset_of_base64Bytes_16() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___base64Bytes_16)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_base64Bytes_16() const { return ___base64Bytes_16; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_base64Bytes_16() { return &___base64Bytes_16; }
	inline void set_base64Bytes_16(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___base64Bytes_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Bytes_16), (void*)value);
	}

	inline static int32_t get_offset_of_base64Values_17() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___base64Values_17)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_base64Values_17() const { return ___base64Values_17; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_base64Values_17() { return &___base64Values_17; }
	inline void set_base64Values_17(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___base64Values_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Values_17), (void*)value);
	}

	inline static int32_t get_offset_of_directEncode_18() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___directEncode_18)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_directEncode_18() const { return ___directEncode_18; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_directEncode_18() { return &___directEncode_18; }
	inline void set_directEncode_18(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___directEncode_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___directEncode_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_allowOptionals_19() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___m_allowOptionals_19)); }
	inline bool get_m_allowOptionals_19() const { return ___m_allowOptionals_19; }
	inline bool* get_address_of_m_allowOptionals_19() { return &___m_allowOptionals_19; }
	inline void set_m_allowOptionals_19(bool value)
	{
		___m_allowOptionals_19 = value;
	}
};


// System.Text.UTF8Encoding
struct  UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}
};


// System.Text.UnicodeEncoding
struct  UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UnicodeEncoding::isThrowException
	bool ___isThrowException_16;
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_17;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_18;

public:
	inline static int32_t get_offset_of_isThrowException_16() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___isThrowException_16)); }
	inline bool get_isThrowException_16() const { return ___isThrowException_16; }
	inline bool* get_address_of_isThrowException_16() { return &___isThrowException_16; }
	inline void set_isThrowException_16(bool value)
	{
		___isThrowException_16 = value;
	}

	inline static int32_t get_offset_of_bigEndian_17() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___bigEndian_17)); }
	inline bool get_bigEndian_17() const { return ___bigEndian_17; }
	inline bool* get_address_of_bigEndian_17() { return &___bigEndian_17; }
	inline void set_bigEndian_17(bool value)
	{
		___bigEndian_17 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_18() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___byteOrderMark_18)); }
	inline bool get_byteOrderMark_18() const { return ___byteOrderMark_18; }
	inline bool* get_address_of_byteOrderMark_18() { return &___byteOrderMark_18; }
	inline void set_byteOrderMark_18(bool value)
	{
		___byteOrderMark_18 = value;
	}
};

struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields
{
public:
	// System.UInt64 System.Text.UnicodeEncoding::highLowPatternMask
	uint64_t ___highLowPatternMask_19;

public:
	inline static int32_t get_offset_of_highLowPatternMask_19() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields, ___highLowPatternMask_19)); }
	inline uint64_t get_highLowPatternMask_19() const { return ___highLowPatternMask_19; }
	inline uint64_t* get_address_of_highLowPatternMask_19() { return &___highLowPatternMask_19; }
	inline void set_highLowPatternMask_19(uint64_t value)
	{
		___highLowPatternMask_19 = value;
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


// System.Diagnostics.Tracing.EventProvider/EventData
struct  EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 
{
public:
	// System.UInt64 System.Diagnostics.Tracing.EventProvider/EventData::Ptr
	uint64_t ___Ptr_0;
	// System.UInt32 System.Diagnostics.Tracing.EventProvider/EventData::Size
	uint32_t ___Size_1;
	// System.UInt32 System.Diagnostics.Tracing.EventProvider/EventData::Reserved
	uint32_t ___Reserved_2;

public:
	inline static int32_t get_offset_of_Ptr_0() { return static_cast<int32_t>(offsetof(EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06, ___Ptr_0)); }
	inline uint64_t get_Ptr_0() const { return ___Ptr_0; }
	inline uint64_t* get_address_of_Ptr_0() { return &___Ptr_0; }
	inline void set_Ptr_0(uint64_t value)
	{
		___Ptr_0 = value;
	}

	inline static int32_t get_offset_of_Size_1() { return static_cast<int32_t>(offsetof(EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06, ___Size_1)); }
	inline uint32_t get_Size_1() const { return ___Size_1; }
	inline uint32_t* get_address_of_Size_1() { return &___Size_1; }
	inline void set_Size_1(uint32_t value)
	{
		___Size_1 = value;
	}

	inline static int32_t get_offset_of_Reserved_2() { return static_cast<int32_t>(offsetof(EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06, ___Reserved_2)); }
	inline uint32_t get_Reserved_2() const { return ___Reserved_2; }
	inline uint32_t* get_address_of_Reserved_2() { return &___Reserved_2; }
	inline void set_Reserved_2(uint32_t value)
	{
		___Reserved_2 = value;
	}
};


// System.TypeIdentifiers/Display
struct  Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E  : public ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861
{
public:
	// System.String System.TypeIdentifiers/Display::displayName
	String_t* ___displayName_0;
	// System.String System.TypeIdentifiers/Display::internal_name
	String_t* ___internal_name_1;

public:
	inline static int32_t get_offset_of_displayName_0() { return static_cast<int32_t>(offsetof(Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E, ___displayName_0)); }
	inline String_t* get_displayName_0() const { return ___displayName_0; }
	inline String_t** get_address_of_displayName_0() { return &___displayName_0; }
	inline void set_displayName_0(String_t* value)
	{
		___displayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_internal_name_1() { return static_cast<int32_t>(offsetof(Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E, ___internal_name_1)); }
	inline String_t* get_internal_name_1() const { return ___internal_name_1; }
	inline String_t** get_address_of_internal_name_1() { return &___internal_name_1; }
	inline void set_internal_name_1(String_t* value)
	{
		___internal_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_name_1), (void*)value);
	}
};


// System.Text.UTF7Encoding/DecoderUTF7Fallback
struct  DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8  : public DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D
{
public:

public:
};


// System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
struct  DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A  : public DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B
{
public:
	// System.Char System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::cFallback
	Il2CppChar ___cFallback_2;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iCount
	int32_t ___iCount_3;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iSize
	int32_t ___iSize_4;

public:
	inline static int32_t get_offset_of_cFallback_2() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___cFallback_2)); }
	inline Il2CppChar get_cFallback_2() const { return ___cFallback_2; }
	inline Il2CppChar* get_address_of_cFallback_2() { return &___cFallback_2; }
	inline void set_cFallback_2(Il2CppChar value)
	{
		___cFallback_2 = value;
	}

	inline static int32_t get_offset_of_iCount_3() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___iCount_3)); }
	inline int32_t get_iCount_3() const { return ___iCount_3; }
	inline int32_t* get_address_of_iCount_3() { return &___iCount_3; }
	inline void set_iCount_3(int32_t value)
	{
		___iCount_3 = value;
	}

	inline static int32_t get_offset_of_iSize_4() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___iSize_4)); }
	inline int32_t get_iSize_4() const { return ___iSize_4; }
	inline int32_t* get_address_of_iSize_4() { return &___iSize_4; }
	inline void set_iSize_4(int32_t value)
	{
		___iSize_4 = value;
	}
};


// Mono.Security.Uri/UriScheme
struct  UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB 
{
public:
	// System.String Mono.Security.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String Mono.Security.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 Mono.Security.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheme_0), (void*)value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delimiter_1), (void*)value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mono.Security.Uri/UriScheme
struct UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of Mono.Security.Uri/UriScheme
struct UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct  YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE__padding[1];
	};

public:
};

struct YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields
{
public:
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___s_sendOrPostCallbackRunAction_1;

public:
	inline static int32_t get_offset_of_s_waitCallbackRunAction_0() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_waitCallbackRunAction_0)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_s_waitCallbackRunAction_0() const { return ___s_waitCallbackRunAction_0; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_s_waitCallbackRunAction_0() { return &___s_waitCallbackRunAction_0; }
	inline void set_s_waitCallbackRunAction_0(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___s_waitCallbackRunAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_waitCallbackRunAction_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_sendOrPostCallbackRunAction_1() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_sendOrPostCallbackRunAction_1)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_s_sendOrPostCallbackRunAction_1() const { return ___s_sendOrPostCallbackRunAction_1; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_s_sendOrPostCallbackRunAction_1() { return &___s_sendOrPostCallbackRunAction_1; }
	inline void set_s_sendOrPostCallbackRunAction_1(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___s_sendOrPostCallbackRunAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_sendOrPostCallbackRunAction_1), (void*)value);
	}
};


// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR
struct  EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B 
{
public:
	// System.Int64 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR::Ptr
	int64_t ___Ptr_0;
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR::Size
	int32_t ___Size_1;
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR::Type
	int32_t ___Type_2;

public:
	inline static int32_t get_offset_of_Ptr_0() { return static_cast<int32_t>(offsetof(EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B, ___Ptr_0)); }
	inline int64_t get_Ptr_0() const { return ___Ptr_0; }
	inline int64_t* get_address_of_Ptr_0() { return &___Ptr_0; }
	inline void set_Ptr_0(int64_t value)
	{
		___Ptr_0 = value;
	}

	inline static int32_t get_offset_of_Size_1() { return static_cast<int32_t>(offsetof(EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B, ___Size_1)); }
	inline int32_t get_Size_1() const { return ___Size_1; }
	inline int32_t* get_address_of_Size_1() { return &___Size_1; }
	inline void set_Size_1(int32_t value)
	{
		___Size_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}
};


// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO
struct  TRACE_ENABLE_INFO_t8C42BFBE42A6F4B843DBA7FB38CCE4DD91671673 
{
public:
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO::IsEnabled
	int32_t ___IsEnabled_0;
	// System.Byte Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO::Level
	uint8_t ___Level_1;
	// System.Byte Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO::Reserved1
	uint8_t ___Reserved1_2;
	// System.UInt16 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO::LoggerId
	uint16_t ___LoggerId_3;
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO::EnableProperty
	int32_t ___EnableProperty_4;
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO::Reserved2
	int32_t ___Reserved2_5;
	// System.Int64 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO::MatchAnyKeyword
	int64_t ___MatchAnyKeyword_6;
	// System.Int64 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO::MatchAllKeyword
	int64_t ___MatchAllKeyword_7;

public:
	inline static int32_t get_offset_of_IsEnabled_0() { return static_cast<int32_t>(offsetof(TRACE_ENABLE_INFO_t8C42BFBE42A6F4B843DBA7FB38CCE4DD91671673, ___IsEnabled_0)); }
	inline int32_t get_IsEnabled_0() const { return ___IsEnabled_0; }
	inline int32_t* get_address_of_IsEnabled_0() { return &___IsEnabled_0; }
	inline void set_IsEnabled_0(int32_t value)
	{
		___IsEnabled_0 = value;
	}

	inline static int32_t get_offset_of_Level_1() { return static_cast<int32_t>(offsetof(TRACE_ENABLE_INFO_t8C42BFBE42A6F4B843DBA7FB38CCE4DD91671673, ___Level_1)); }
	inline uint8_t get_Level_1() const { return ___Level_1; }
	inline uint8_t* get_address_of_Level_1() { return &___Level_1; }
	inline void set_Level_1(uint8_t value)
	{
		___Level_1 = value;
	}

	inline static int32_t get_offset_of_Reserved1_2() { return static_cast<int32_t>(offsetof(TRACE_ENABLE_INFO_t8C42BFBE42A6F4B843DBA7FB38CCE4DD91671673, ___Reserved1_2)); }
	inline uint8_t get_Reserved1_2() const { return ___Reserved1_2; }
	inline uint8_t* get_address_of_Reserved1_2() { return &___Reserved1_2; }
	inline void set_Reserved1_2(uint8_t value)
	{
		___Reserved1_2 = value;
	}

	inline static int32_t get_offset_of_LoggerId_3() { return static_cast<int32_t>(offsetof(TRACE_ENABLE_INFO_t8C42BFBE42A6F4B843DBA7FB38CCE4DD91671673, ___LoggerId_3)); }
	inline uint16_t get_LoggerId_3() const { return ___LoggerId_3; }
	inline uint16_t* get_address_of_LoggerId_3() { return &___LoggerId_3; }
	inline void set_LoggerId_3(uint16_t value)
	{
		___LoggerId_3 = value;
	}

	inline static int32_t get_offset_of_EnableProperty_4() { return static_cast<int32_t>(offsetof(TRACE_ENABLE_INFO_t8C42BFBE42A6F4B843DBA7FB38CCE4DD91671673, ___EnableProperty_4)); }
	inline int32_t get_EnableProperty_4() const { return ___EnableProperty_4; }
	inline int32_t* get_address_of_EnableProperty_4() { return &___EnableProperty_4; }
	inline void set_EnableProperty_4(int32_t value)
	{
		___EnableProperty_4 = value;
	}

	inline static int32_t get_offset_of_Reserved2_5() { return static_cast<int32_t>(offsetof(TRACE_ENABLE_INFO_t8C42BFBE42A6F4B843DBA7FB38CCE4DD91671673, ___Reserved2_5)); }
	inline int32_t get_Reserved2_5() const { return ___Reserved2_5; }
	inline int32_t* get_address_of_Reserved2_5() { return &___Reserved2_5; }
	inline void set_Reserved2_5(int32_t value)
	{
		___Reserved2_5 = value;
	}

	inline static int32_t get_offset_of_MatchAnyKeyword_6() { return static_cast<int32_t>(offsetof(TRACE_ENABLE_INFO_t8C42BFBE42A6F4B843DBA7FB38CCE4DD91671673, ___MatchAnyKeyword_6)); }
	inline int64_t get_MatchAnyKeyword_6() const { return ___MatchAnyKeyword_6; }
	inline int64_t* get_address_of_MatchAnyKeyword_6() { return &___MatchAnyKeyword_6; }
	inline void set_MatchAnyKeyword_6(int64_t value)
	{
		___MatchAnyKeyword_6 = value;
	}

	inline static int32_t get_offset_of_MatchAllKeyword_7() { return static_cast<int32_t>(offsetof(TRACE_ENABLE_INFO_t8C42BFBE42A6F4B843DBA7FB38CCE4DD91671673, ___MatchAllKeyword_7)); }
	inline int64_t get_MatchAllKeyword_7() const { return ___MatchAllKeyword_7; }
	inline int64_t* get_address_of_MatchAllKeyword_7() { return &___MatchAllKeyword_7; }
	inline void set_MatchAllKeyword_7(int64_t value)
	{
		___MatchAllKeyword_7 = value;
	}
};


// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO
struct  TRACE_GUID_INFO_t55BC9F419C2A81BBB57F19B336E003C710D676DE 
{
public:
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO::InstanceCount
	int32_t ___InstanceCount_0;
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO::Reserved
	int32_t ___Reserved_1;

public:
	inline static int32_t get_offset_of_InstanceCount_0() { return static_cast<int32_t>(offsetof(TRACE_GUID_INFO_t55BC9F419C2A81BBB57F19B336E003C710D676DE, ___InstanceCount_0)); }
	inline int32_t get_InstanceCount_0() const { return ___InstanceCount_0; }
	inline int32_t* get_address_of_InstanceCount_0() { return &___InstanceCount_0; }
	inline void set_InstanceCount_0(int32_t value)
	{
		___InstanceCount_0 = value;
	}

	inline static int32_t get_offset_of_Reserved_1() { return static_cast<int32_t>(offsetof(TRACE_GUID_INFO_t55BC9F419C2A81BBB57F19B336E003C710D676DE, ___Reserved_1)); }
	inline int32_t get_Reserved_1() const { return ___Reserved_1; }
	inline int32_t* get_address_of_Reserved_1() { return &___Reserved_1; }
	inline void set_Reserved_1(int32_t value)
	{
		___Reserved_1 = value;
	}
};


// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_PROVIDER_INSTANCE_INFO
struct  TRACE_PROVIDER_INSTANCE_INFO_t2DE237ED6584B893B37347D3126774F1F6BBC46F 
{
public:
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_PROVIDER_INSTANCE_INFO::NextOffset
	int32_t ___NextOffset_0;
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_PROVIDER_INSTANCE_INFO::EnableCount
	int32_t ___EnableCount_1;
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_PROVIDER_INSTANCE_INFO::Pid
	int32_t ___Pid_2;
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_PROVIDER_INSTANCE_INFO::Flags
	int32_t ___Flags_3;

public:
	inline static int32_t get_offset_of_NextOffset_0() { return static_cast<int32_t>(offsetof(TRACE_PROVIDER_INSTANCE_INFO_t2DE237ED6584B893B37347D3126774F1F6BBC46F, ___NextOffset_0)); }
	inline int32_t get_NextOffset_0() const { return ___NextOffset_0; }
	inline int32_t* get_address_of_NextOffset_0() { return &___NextOffset_0; }
	inline void set_NextOffset_0(int32_t value)
	{
		___NextOffset_0 = value;
	}

	inline static int32_t get_offset_of_EnableCount_1() { return static_cast<int32_t>(offsetof(TRACE_PROVIDER_INSTANCE_INFO_t2DE237ED6584B893B37347D3126774F1F6BBC46F, ___EnableCount_1)); }
	inline int32_t get_EnableCount_1() const { return ___EnableCount_1; }
	inline int32_t* get_address_of_EnableCount_1() { return &___EnableCount_1; }
	inline void set_EnableCount_1(int32_t value)
	{
		___EnableCount_1 = value;
	}

	inline static int32_t get_offset_of_Pid_2() { return static_cast<int32_t>(offsetof(TRACE_PROVIDER_INSTANCE_INFO_t2DE237ED6584B893B37347D3126774F1F6BBC46F, ___Pid_2)); }
	inline int32_t get_Pid_2() const { return ___Pid_2; }
	inline int32_t* get_address_of_Pid_2() { return &___Pid_2; }
	inline void set_Pid_2(int32_t value)
	{
		___Pid_2 = value;
	}

	inline static int32_t get_offset_of_Flags_3() { return static_cast<int32_t>(offsetof(TRACE_PROVIDER_INSTANCE_INFO_t2DE237ED6584B893B37347D3126774F1F6BBC46F, ___Flags_3)); }
	inline int32_t get_Flags_3() const { return ___Flags_3; }
	inline int32_t* get_address_of_Flags_3() { return &___Flags_3; }
	inline void set_Flags_3(int32_t value)
	{
		___Flags_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry
struct  EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86 
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry::registrationTable
	ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * ___registrationTable_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry::tokenListCount
	TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ___tokenListCount_1;

public:
	inline static int32_t get_offset_of_registrationTable_0() { return static_cast<int32_t>(offsetof(EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86, ___registrationTable_0)); }
	inline ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * get_registrationTable_0() const { return ___registrationTable_0; }
	inline ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 ** get_address_of_registrationTable_0() { return &___registrationTable_0; }
	inline void set_registrationTable_0(ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * value)
	{
		___registrationTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registrationTable_0), (void*)value);
	}

	inline static int32_t get_offset_of_tokenListCount_1() { return static_cast<int32_t>(offsetof(EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86, ___tokenListCount_1)); }
	inline TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * get_tokenListCount_1() const { return ___tokenListCount_1; }
	inline TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** get_address_of_tokenListCount_1() { return &___tokenListCount_1; }
	inline void set_tokenListCount_1(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * value)
	{
		___tokenListCount_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenListCount_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry
struct EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshaled_pinvoke
{
	ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * ___registrationTable_0;
	TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ___tokenListCount_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry
struct EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshaled_com
{
	ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * ___registrationTable_0;
	TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ___tokenListCount_1;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
struct  EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 
{
public:
	// System.Object System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey::target
	RuntimeObject * ___target_0;
	// System.Reflection.MethodInfo System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey::method
	MethodInfo_t * ___method_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639, ___target_0)); }
	inline RuntimeObject * get_target_0() const { return ___target_0; }
	inline RuntimeObject ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RuntimeObject * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
struct EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_pinvoke
{
	Il2CppIUnknown* ___target_0;
	MethodInfo_t * ___method_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
struct EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_com
{
	Il2CppIUnknown* ___target_0;
	MethodInfo_t * ___method_1;
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

// System.Diagnostics.Tracing.EventFieldTags
struct  EventFieldTags_t3FF2F9415AFC8C23D9194D3758EAE94557FD1F15 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventFieldTags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventFieldTags_t3FF2F9415AFC8C23D9194D3758EAE94557FD1F15, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventKeywords
struct  EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC 
{
public:
	// System.Int64 System.Diagnostics.Tracing.EventKeywords::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
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


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.SynchronizationContextProperties
struct  SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A 
{
public:
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct  TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
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

// System.TypeSpec/DisplayNameFormat
struct  DisplayNameFormat_tF42BE9AF429E47348F6DF90A17947869EF4D0077 
{
public:
	// System.Int32 System.TypeSpec/DisplayNameFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayNameFormat_tF42BE9AF429E47348F6DF90A17947869EF4D0077, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::iChar
	int32_t ___iChar_6;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::readByteCount
	int32_t ___readByteCount_7;

public:
	inline static int32_t get_offset_of_iChar_6() { return static_cast<int32_t>(offsetof(UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7, ___iChar_6)); }
	inline int32_t get_iChar_6() const { return ___iChar_6; }
	inline int32_t* get_address_of_iChar_6() { return &___iChar_6; }
	inline void set_iChar_6(int32_t value)
	{
		___iChar_6 = value;
	}

	inline static int32_t get_offset_of_readByteCount_7() { return static_cast<int32_t>(offsetof(UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7, ___readByteCount_7)); }
	inline int32_t get_readByteCount_7() const { return ___readByteCount_7; }
	inline int32_t* get_address_of_readByteCount_7() { return &___readByteCount_7; }
	inline void set_readByteCount_7(int32_t value)
	{
		___readByteCount_7 = value;
	}
};


// System.Text.UTF7Encoding/Decoder
struct  Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF7Encoding/Decoder::bits
	int32_t ___bits_6;
	// System.Int32 System.Text.UTF7Encoding/Decoder::bitCount
	int32_t ___bitCount_7;
	// System.Boolean System.Text.UTF7Encoding/Decoder::firstByte
	bool ___firstByte_8;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}

	inline static int32_t get_offset_of_bitCount_7() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___bitCount_7)); }
	inline int32_t get_bitCount_7() const { return ___bitCount_7; }
	inline int32_t* get_address_of_bitCount_7() { return &___bitCount_7; }
	inline void set_bitCount_7(int32_t value)
	{
		___bitCount_7 = value;
	}

	inline static int32_t get_offset_of_firstByte_8() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___firstByte_8)); }
	inline bool get_firstByte_8() const { return ___firstByte_8; }
	inline bool* get_address_of_firstByte_8() { return &___firstByte_8; }
	inline void set_firstByte_8(bool value)
	{
		___firstByte_8 = value;
	}
};


// System.Text.UTF7Encoding/Encoder
struct  Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4  : public EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712
{
public:
	// System.Int32 System.Text.UTF7Encoding/Encoder::bits
	int32_t ___bits_7;
	// System.Int32 System.Text.UTF7Encoding/Encoder::bitCount
	int32_t ___bitCount_8;

public:
	inline static int32_t get_offset_of_bits_7() { return static_cast<int32_t>(offsetof(Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4, ___bits_7)); }
	inline int32_t get_bits_7() const { return ___bits_7; }
	inline int32_t* get_address_of_bits_7() { return &___bits_7; }
	inline void set_bits_7(int32_t value)
	{
		___bits_7 = value;
	}

	inline static int32_t get_offset_of_bitCount_8() { return static_cast<int32_t>(offsetof(Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4, ___bitCount_8)); }
	inline int32_t get_bitCount_8() const { return ___bitCount_8; }
	inline int32_t* get_address_of_bitCount_8() { return &___bitCount_8; }
	inline void set_bitCount_8(int32_t value)
	{
		___bitCount_8 = value;
	}
};


// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::bits
	int32_t ___bits_6;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}
};


// System.Text.UTF8Encoding/UTF8Encoder
struct  UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3  : public EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Encoder::surrogateChar
	int32_t ___surrogateChar_7;

public:
	inline static int32_t get_offset_of_surrogateChar_7() { return static_cast<int32_t>(offsetof(UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3, ___surrogateChar_7)); }
	inline int32_t get_surrogateChar_7() const { return ___surrogateChar_7; }
	inline int32_t* get_address_of_surrogateChar_7() { return &___surrogateChar_7; }
	inline void set_surrogateChar_7(int32_t value)
	{
		___surrogateChar_7 = value;
	}
};


// System.Text.UnicodeEncoding/Decoder
struct  Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UnicodeEncoding/Decoder::lastByte
	int32_t ___lastByte_6;
	// System.Char System.Text.UnicodeEncoding/Decoder::lastChar
	Il2CppChar ___lastChar_7;

public:
	inline static int32_t get_offset_of_lastByte_6() { return static_cast<int32_t>(offsetof(Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109, ___lastByte_6)); }
	inline int32_t get_lastByte_6() const { return ___lastByte_6; }
	inline int32_t* get_address_of_lastByte_6() { return &___lastByte_6; }
	inline void set_lastByte_6(int32_t value)
	{
		___lastByte_6 = value;
	}

	inline static int32_t get_offset_of_lastChar_7() { return static_cast<int32_t>(offsetof(Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109, ___lastChar_7)); }
	inline Il2CppChar get_lastChar_7() const { return ___lastChar_7; }
	inline Il2CppChar* get_address_of_lastChar_7() { return &___lastChar_7; }
	inline void set_lastChar_7(Il2CppChar value)
	{
		___lastChar_7 = value;
	}
};


// System.Version/ParseFailureKind
struct  ParseFailureKind_tDB04F2E59F00F35722F3829D3D74EEC486FC1FA4 
{
public:
	// System.Int32 System.Version/ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_tDB04F2E59F00F35722F3829D3D74EEC486FC1FA4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
struct  EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::firstToken
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___firstToken_0;
	// System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::restTokens
	List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * ___restTokens_1;

public:
	inline static int32_t get_offset_of_firstToken_0() { return static_cast<int32_t>(offsetof(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128, ___firstToken_0)); }
	inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  get_firstToken_0() const { return ___firstToken_0; }
	inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * get_address_of_firstToken_0() { return &___firstToken_0; }
	inline void set_firstToken_0(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  value)
	{
		___firstToken_0 = value;
	}

	inline static int32_t get_offset_of_restTokens_1() { return static_cast<int32_t>(offsetof(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128, ___restTokens_1)); }
	inline List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * get_restTokens_1() const { return ___restTokens_1; }
	inline List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 ** get_address_of_restTokens_1() { return &___restTokens_1; }
	inline void set_restTokens_1(List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * value)
	{
		___restTokens_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___restTokens_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
struct EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_pinvoke
{
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___firstToken_0;
	List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * ___restTokens_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
struct EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_com
{
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___firstToken_0;
	List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * ___restTokens_1;
};

// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/ActivityControl
struct  ActivityControl_t4BC2BF2458EFCDFDE6155D921D9C7B63B639DDB6 
{
public:
	// System.UInt32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/ActivityControl::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActivityControl_t4BC2BF2458EFCDFDE6155D921D9C7B63B639DDB6, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS
struct  EVENT_INFO_CLASS_tB7198334510D61FE706F38E892CC6983707D5309 
{
public:
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EVENT_INFO_CLASS_tB7198334510D61FE706F38E892CC6983707D5309, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS
struct  TRACE_QUERY_INFO_CLASS_t8E509BDBCE48C5601C8B984876DBEF2CEB08F653 
{
public:
	// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TRACE_QUERY_INFO_CLASS_t8E509BDBCE48C5601C8B984876DBEF2CEB08F653, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount
struct  TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::_count
	int32_t ____count_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::_key
	EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ____key_1;

public:
	inline static int32_t get_offset_of__count_0() { return static_cast<int32_t>(offsetof(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC, ____count_0)); }
	inline int32_t get__count_0() const { return ____count_0; }
	inline int32_t* get_address_of__count_0() { return &____count_0; }
	inline void set__count_0(int32_t value)
	{
		____count_0 = value;
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC, ____key_1)); }
	inline EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  get__key_1() const { return ____key_1; }
	inline EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 * get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  value)
	{
		____key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____key_1))->___target_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____key_1))->___method_1), (void*)NULL);
		#endif
	}
};


// System.ApplicationException
struct  ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.Diagnostics.Tracing.FieldMetadata
struct  FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.Tracing.FieldMetadata::name
	String_t* ___name_0;
	// System.Int32 System.Diagnostics.Tracing.FieldMetadata::nameSize
	int32_t ___nameSize_1;
	// System.Diagnostics.Tracing.EventFieldTags System.Diagnostics.Tracing.FieldMetadata::tags
	int32_t ___tags_2;
	// System.Byte[] System.Diagnostics.Tracing.FieldMetadata::custom
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___custom_3;
	// System.UInt16 System.Diagnostics.Tracing.FieldMetadata::fixedCount
	uint16_t ___fixedCount_4;
	// System.Byte System.Diagnostics.Tracing.FieldMetadata::inType
	uint8_t ___inType_5;
	// System.Byte System.Diagnostics.Tracing.FieldMetadata::outType
	uint8_t ___outType_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_nameSize_1() { return static_cast<int32_t>(offsetof(FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A, ___nameSize_1)); }
	inline int32_t get_nameSize_1() const { return ___nameSize_1; }
	inline int32_t* get_address_of_nameSize_1() { return &___nameSize_1; }
	inline void set_nameSize_1(int32_t value)
	{
		___nameSize_1 = value;
	}

	inline static int32_t get_offset_of_tags_2() { return static_cast<int32_t>(offsetof(FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A, ___tags_2)); }
	inline int32_t get_tags_2() const { return ___tags_2; }
	inline int32_t* get_address_of_tags_2() { return &___tags_2; }
	inline void set_tags_2(int32_t value)
	{
		___tags_2 = value;
	}

	inline static int32_t get_offset_of_custom_3() { return static_cast<int32_t>(offsetof(FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A, ___custom_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_custom_3() const { return ___custom_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_custom_3() { return &___custom_3; }
	inline void set_custom_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___custom_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_3), (void*)value);
	}

	inline static int32_t get_offset_of_fixedCount_4() { return static_cast<int32_t>(offsetof(FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A, ___fixedCount_4)); }
	inline uint16_t get_fixedCount_4() const { return ___fixedCount_4; }
	inline uint16_t* get_address_of_fixedCount_4() { return &___fixedCount_4; }
	inline void set_fixedCount_4(uint16_t value)
	{
		___fixedCount_4 = value;
	}

	inline static int32_t get_offset_of_inType_5() { return static_cast<int32_t>(offsetof(FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A, ___inType_5)); }
	inline uint8_t get_inType_5() const { return ___inType_5; }
	inline uint8_t* get_address_of_inType_5() { return &___inType_5; }
	inline void set_inType_5(uint8_t value)
	{
		___inType_5 = value;
	}

	inline static int32_t get_offset_of_outType_6() { return static_cast<int32_t>(offsetof(FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A, ___outType_6)); }
	inline uint8_t get_outType_6() const { return ___outType_6; }
	inline uint8_t* get_address_of_outType_6() { return &___outType_6; }
	inline void set_outType_6(uint8_t value)
	{
		___outType_6 = value;
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

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;

public:
	inline static int32_t get_offset_of__props_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069, ____props_0)); }
	inline int32_t get__props_0() const { return ____props_0; }
	inline int32_t* get_address_of__props_0() { return &____props_0; }
	inline void set__props_0(int32_t value)
	{
		____props_0 = value;
	}
};

struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields
{
public:
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t * ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t * ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t * ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t * ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t * ___s_cachedPreparedType5_5;

public:
	inline static int32_t get_offset_of_s_cachedPreparedType1_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType1_1)); }
	inline Type_t * get_s_cachedPreparedType1_1() const { return ___s_cachedPreparedType1_1; }
	inline Type_t ** get_address_of_s_cachedPreparedType1_1() { return &___s_cachedPreparedType1_1; }
	inline void set_s_cachedPreparedType1_1(Type_t * value)
	{
		___s_cachedPreparedType1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType1_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType2_2() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType2_2)); }
	inline Type_t * get_s_cachedPreparedType2_2() const { return ___s_cachedPreparedType2_2; }
	inline Type_t ** get_address_of_s_cachedPreparedType2_2() { return &___s_cachedPreparedType2_2; }
	inline void set_s_cachedPreparedType2_2(Type_t * value)
	{
		___s_cachedPreparedType2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType2_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType3_3() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType3_3)); }
	inline Type_t * get_s_cachedPreparedType3_3() const { return ___s_cachedPreparedType3_3; }
	inline Type_t ** get_address_of_s_cachedPreparedType3_3() { return &___s_cachedPreparedType3_3; }
	inline void set_s_cachedPreparedType3_3(Type_t * value)
	{
		___s_cachedPreparedType3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType3_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType4_4() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType4_4)); }
	inline Type_t * get_s_cachedPreparedType4_4() const { return ___s_cachedPreparedType4_4; }
	inline Type_t ** get_address_of_s_cachedPreparedType4_4() { return &___s_cachedPreparedType4_4; }
	inline void set_s_cachedPreparedType4_4(Type_t * value)
	{
		___s_cachedPreparedType4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType4_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType5_5() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType5_5)); }
	inline Type_t * get_s_cachedPreparedType5_5() const { return ___s_cachedPreparedType5_5; }
	inline Type_t ** get_address_of_s_cachedPreparedType5_5() { return &___s_cachedPreparedType5_5; }
	inline void set_s_cachedPreparedType5_5(Type_t * value)
	{
		___s_cachedPreparedType5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType5_5), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.TaskFactory
struct  TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
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


// System.Diagnostics.Tracing.TplEtwProvider/Keywords
struct  Keywords_t6F5218958261173D4A00DBCE718A5BEEB38C7922  : public RuntimeObject
{
public:

public:
};


// System.Version/VersionResult
struct  VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 
{
public:
	// System.Version System.Version/VersionResult::m_parsedVersion
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___m_parsedVersion_0;
	// System.Version/ParseFailureKind System.Version/VersionResult::m_failure
	int32_t ___m_failure_1;
	// System.String System.Version/VersionResult::m_exceptionArgument
	String_t* ___m_exceptionArgument_2;
	// System.String System.Version/VersionResult::m_argumentName
	String_t* ___m_argumentName_3;
	// System.Boolean System.Version/VersionResult::m_canThrow
	bool ___m_canThrow_4;

public:
	inline static int32_t get_offset_of_m_parsedVersion_0() { return static_cast<int32_t>(offsetof(VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1, ___m_parsedVersion_0)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_m_parsedVersion_0() const { return ___m_parsedVersion_0; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_m_parsedVersion_0() { return &___m_parsedVersion_0; }
	inline void set_m_parsedVersion_0(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___m_parsedVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parsedVersion_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_failure_1() { return static_cast<int32_t>(offsetof(VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1, ___m_failure_1)); }
	inline int32_t get_m_failure_1() const { return ___m_failure_1; }
	inline int32_t* get_address_of_m_failure_1() { return &___m_failure_1; }
	inline void set_m_failure_1(int32_t value)
	{
		___m_failure_1 = value;
	}

	inline static int32_t get_offset_of_m_exceptionArgument_2() { return static_cast<int32_t>(offsetof(VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1, ___m_exceptionArgument_2)); }
	inline String_t* get_m_exceptionArgument_2() const { return ___m_exceptionArgument_2; }
	inline String_t** get_address_of_m_exceptionArgument_2() { return &___m_exceptionArgument_2; }
	inline void set_m_exceptionArgument_2(String_t* value)
	{
		___m_exceptionArgument_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_exceptionArgument_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_argumentName_3() { return static_cast<int32_t>(offsetof(VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1, ___m_argumentName_3)); }
	inline String_t* get_m_argumentName_3() const { return ___m_argumentName_3; }
	inline String_t** get_address_of_m_argumentName_3() { return &___m_argumentName_3; }
	inline void set_m_argumentName_3(String_t* value)
	{
		___m_argumentName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_argumentName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_canThrow_4() { return static_cast<int32_t>(offsetof(VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1, ___m_canThrow_4)); }
	inline bool get_m_canThrow_4() const { return ___m_canThrow_4; }
	inline bool* get_address_of_m_canThrow_4() { return &___m_canThrow_4; }
	inline void set_m_canThrow_4(bool value)
	{
		___m_canThrow_4 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Version/VersionResult
struct VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshaled_pinvoke
{
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	char* ___m_exceptionArgument_2;
	char* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};
// Native definition for COM marshalling of System.Version/VersionResult
struct VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshaled_com
{
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	Il2CppChar* ___m_exceptionArgument_2;
	Il2CppChar* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount
struct  EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::_tokenListCount
	TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ____tokenListCount_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::_tokenList
	EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  ____tokenList_1;

public:
	inline static int32_t get_offset_of__tokenListCount_0() { return static_cast<int32_t>(offsetof(EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6, ____tokenListCount_0)); }
	inline TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * get__tokenListCount_0() const { return ____tokenListCount_0; }
	inline TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** get_address_of__tokenListCount_0() { return &____tokenListCount_0; }
	inline void set__tokenListCount_0(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * value)
	{
		____tokenListCount_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenListCount_0), (void*)value);
	}

	inline static int32_t get_offset_of__tokenList_1() { return static_cast<int32_t>(offsetof(EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6, ____tokenList_1)); }
	inline EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  get__tokenList_1() const { return ____tokenList_1; }
	inline EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * get_address_of__tokenList_1() { return &____tokenList_1; }
	inline void set__tokenList_1(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  value)
	{
		____tokenList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____tokenList_1))->___restTokens_1), (void*)NULL);
	}
};


// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct  Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3  : public MulticastDelegate_t
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


// System.ArithmeticException
struct  ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.Threading.AutoResetEvent
struct  AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.FormatException
struct  FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ManualResetEvent
struct  ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.Serialization.SerializationException
struct  SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

struct SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_StaticFields
{
public:
	// System.String System.Runtime.Serialization.SerializationException::_nullMessage
	String_t* ____nullMessage_17;

public:
	inline static int32_t get_offset_of__nullMessage_17() { return static_cast<int32_t>(offsetof(SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_StaticFields, ____nullMessage_17)); }
	inline String_t* get__nullMessage_17() const { return ____nullMessage_17; }
	inline String_t** get_address_of__nullMessage_17() { return &____nullMessage_17; }
	inline void set__nullMessage_17(String_t* value)
	{
		____nullMessage_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullMessage_17), (void*)value);
	}
};


// System.Threading.ThreadStart
struct  ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.TimerCallback
struct  TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.WaitCallback
struct  WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319  : public MulticastDelegate_t
{
public:

public:
};


// System.Console/WindowsConsole/WindowsCancelHandler
struct  WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
struct  EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/ReaderWriterLockTimedOutException
struct  ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.OverflowException
struct  OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken[]
struct EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  m_Items[1];

public:
	inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6EBDDD4002DC42EC1CD75D81C2AFCD1B41573693_gshared (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m1DE97F7A9186F5F2514E61E27556B63619978BD1_gshared (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF2CB3D49AE42647D38FDC61E299623F08ACAE1AB_gshared_inline (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  List_1_get_Item_m35903D896081A6BB024566CDF4DDEFB5AF3E0D16_gshared_inline (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF9A7A06A7EA9E7D812A1BBA95A8D62824437CDD6_gshared (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA862158C8AFAC8C13E7929EBC6C2377B77749884_gshared (ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365 * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_m92A993D020EA2EE92A0C05D9AA35E65E043E7805_gshared (ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m91F814885C154732EF09B1FE9212DC37ED6E1278_gshared (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2__ctor_m8E40E9007C1DDFA6CBFECFEB3DB8B073A935C874_gshared (ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m16CF0B1A3BAF60BEB727EC4901096F8034A3E469_gshared (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86 * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39CFB38833568CC7622743D57EE9AF8B284C8CFB_gshared (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1535F001EADDA8F2EB4E29E7C49B798D2817E491_gshared (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8_gshared (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, const RuntimeMethod* method);

// System.Void System.Threading.Timer/Scheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Threading.Timer/TimerComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4 (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, const RuntimeMethod* method);
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList__ctor_m0E1B0737647DC8D8B3E9FAD5F81168878E92E9F4 (SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * __this, RuntimeObject* ___comparer0, int32_t ___capacity1, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Timer/Scheduler::FindByDueTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, int64_t ___nr0, const RuntimeMethod* method);
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerCallback_Invoke_m1318C110BA930390E8F61C8BAAAC8F1CA8776CFD (TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * __this, RuntimeObject * ___state0, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::.ctor(System.Int32)
inline void List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000 (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Int64 System.Threading.Timer::GetTimeMonotonic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298 (const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::UnsafeQueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___callBack0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::Add(T)
inline void List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Threading.Timer>::get_Count()
inline int32_t List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Threading.Timer>::get_Item(System.Int32)
inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_inline (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::Clear()
inline void List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0 (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.Generic.List`1<System.Threading.Timer>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, List_1_t537143C180C9FB69517B6C26205D2AA824591563 * ___list0, int32_t ___initial1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Threading.Timer>::get_Capacity()
inline int32_t List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared)(__this, ___value0, method);
}
// System.Void System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::AddNonscalar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl_AddNonscalar_m545AA477978D51CDF7D221093DFE3EE4EF16810C (Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Diagnostics.Tracing.FieldMetadata>::GetEnumerator()
inline Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675  List_1_GetEnumerator_m2CB7D6B4CFC315F1197DAE15867E8FD56039920E (List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675  (*) (List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Diagnostics.Tracing.FieldMetadata>::get_Current()
inline FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A * Enumerator_get_Current_m6C76939016FC9D85E72CCA56241C1A241BA4312D_inline (Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675 * __this, const RuntimeMethod* method)
{
	return ((  FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A * (*) (Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Diagnostics.Tracing.FieldMetadata::Encode(System.Int32&,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldMetadata_Encode_mA0E76F69079E72FB9244E437D88831EB9A8FA109 (FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A * __this, int32_t* ___pos0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___metadata1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Diagnostics.Tracing.FieldMetadata>::MoveNext()
inline bool Enumerator_MoveNext_m39CC882527DAE6FEB8DF8B325824BD935F61C5C8 (Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Diagnostics.Tracing.FieldMetadata>::Dispose()
inline void Enumerator_Dispose_mFA0454B40F3E8ACB8A9E3BBBF9903AB74495DA89 (Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Diagnostics.Tracing.FieldMetadata>::.ctor()
inline void List_1__ctor_m1659C794A53D7BB661944EB117B296260FE4D3FC (List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.TypeNames/ATypeName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method);
// System.String System.TypeIdentifiers/Display::GetInternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method);
// System.String System.TypeSpec::UnescapeInternalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSpec_UnescapeInternalName_mA948D42382EE159391CEFB85748A7EFF37CE53A9 (String_t* ___displayName0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.TypeNames/ATypeName::Equals(System.TypeName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject* ___other0, const RuntimeMethod* method);
// System.Void System.Text.DecoderNLS::.ctor(System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046 (DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A * __this, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, const RuntimeMethod* method);
// System.Void System.Text.DecoderNLS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D (DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void System.Text.DecoderFallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderFallback__ctor_m748C2C19AD4595C13154F9EEDF89AC2A2C10727E (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * __this, const RuntimeMethod* method);
// System.Void System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::.ctor(System.Text.UTF7Encoding/DecoderUTF7Fallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * ___fallback0, const RuntimeMethod* method);
// System.Void System.Text.DecoderFallbackBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderFallbackBuffer__ctor_m4944ABFBCC6CDED8F244EC1E5EA6B1F229C3495C (DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * __this, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Text.EncoderNLS::.ctor(System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513 (EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * __this, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, const RuntimeMethod* method);
// System.Void System.Text.EncoderNLS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF (EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * __this, const RuntimeMethod* method);
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeEncoding__ctor_mE077368843CAFC47B2C4AFC3C771F5B51F3B8DD0 (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * __this, bool ___bigEndian0, bool ___byteOrderMark1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m7B2342989B501DBA05C63C0D6E4FBD63541D4C38 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw::EventWriteTransfer(System.Int64,System.Diagnostics.Tracing.EventDescriptor&,System.Guid*,System.Guid*,System.Int32,System.Diagnostics.Tracing.EventProvider/EventData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestEtw_EventWriteTransfer_mA6183F1BF6BA1D4DC04A71FF22579589B26FA7A4 (int64_t ___registrationHandle0, EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F * ___eventDescriptor1, Guid_t * ___activityId2, Guid_t * ___relatedActivityId3, int32_t ___userDataCount4, EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 * ___userData5, const RuntimeMethod* method);
// System.Void Mono.Security.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriScheme__ctor_m6343DEE07E2D8205507451AF5595A883EFC6E4A2 (UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB * __this, String_t* ___s0, String_t* ___d1, int32_t ___p2, const RuntimeMethod* method);
// System.Void System.Version/VersionResult::Init(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_Init_m18FD38CFDBD92D0B2AD21F7E9168AF39A5ACFFD9 (VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * __this, String_t* ___argumentName0, bool ___canThrow1, const RuntimeMethod* method);
// System.Void System.Version/VersionResult::SetFailure(System.Version/ParseFailureKind,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_SetFailure_m6895BDEA769E4AE334A7D031C9AAC9C3D900C37F (VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * __this, int32_t ___failure0, String_t* ___argument1, const RuntimeMethod* method);
// System.Void System.Version/VersionResult::SetFailure(System.Version/ParseFailureKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_SetFailure_m7D886BC14C5BE040B0BA5E1F810FDD2393D0FB0C (VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * __this, int32_t ___failure0, const RuntimeMethod* method);
// System.Exception System.Version/VersionResult::GetVersionParseException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * VersionResult_GetVersionParseException_mCC37A95A0174077777354679E10DA6F36E600990 (VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::.ctor(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenList__ctor_m06470FB422418EBC781CFC09992EE7D2F4EF9772 (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor()
inline void List_1__ctor_m6EBDDD4002DC42EC1CD75D81C2AFCD1B41573693 (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 *, const RuntimeMethod*))List_1__ctor_m6EBDDD4002DC42EC1CD75D81C2AFCD1B41573693_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::Add(T)
inline void List_1_Add_m1DE97F7A9186F5F2514E61E27556B63619978BD1 (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 *, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 , const RuntimeMethod*))List_1_Add_m1DE97F7A9186F5F2514E61E27556B63619978BD1_gshared)(__this, ___item0, method);
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::Push(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenList_Push_mA05262483205E888368D766263A039078C98D8E8 (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::get_Count()
inline int32_t List_1_get_Count_mF2CB3D49AE42647D38FDC61E299623F08ACAE1AB_inline (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 *, const RuntimeMethod*))List_1_get_Count_mF2CB3D49AE42647D38FDC61E299623F08ACAE1AB_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::get_Item(System.Int32)
inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  List_1_get_Item_m35903D896081A6BB024566CDF4DDEFB5AF3E0D16_inline (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  (*) (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 *, int32_t, const RuntimeMethod*))List_1_get_Item_m35903D896081A6BB024566CDF4DDEFB5AF3E0D16_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mF9A7A06A7EA9E7D812A1BBA95A8D62824437CDD6 (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF9A7A06A7EA9E7D812A1BBA95A8D62824437CDD6_gshared)(__this, ___index0, method);
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::Pop(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenList_Pop_mEDB55C6642FBEE0B03BDC2C06E84FBEFAE96FCDB (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * ___token0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>>::TryGetValue(TKey,TValue&)
inline bool ConditionalWeakTable_2_TryGetValue_mA9765288CD2998D56E994962E442DD75000910AA (ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * __this, RuntimeObject * ___key0, Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC *, RuntimeObject *, Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 **, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA862158C8AFAC8C13E7929EBC6C2377B77749884_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>::.ctor()
inline void Dictionary_2__ctor_mC94B847A4D9A38CC2A74CC5564F14BF46CB63016 (Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_m0551D1CCD60B0475B582EBAA8361A70B4E7B6C44 (ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * __this, RuntimeObject * ___key0, Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC *, RuntimeObject *, Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 *, const RuntimeMethod*))ConditionalWeakTable_2_Add_m92A993D020EA2EE92A0C05D9AA35E65E043E7805_gshared)(__this, ___key0, ___value1, method);
}
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD07E3FD173466A7752076035D895506ED1984C46 (Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 * __this, MethodInfo_t * ___key0, Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 *, MethodInfo_t *, Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::.ctor()
inline void Dictionary_2__ctor_m91F814885C154732EF09B1FE9212DC37ED6E1278 (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *, const RuntimeMethod*))Dictionary_2__ctor_m91F814885C154732EF09B1FE9212DC37ED6E1278_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB400B84012C61777C194CFE7E99321AB4018F5CB (Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 * __this, MethodInfo_t * ___key0, Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 *, MethodInfo_t *, Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>>::.ctor()
inline void ConditionalWeakTable_2__ctor_m601D3139411A67E8BD272B9F74D9E96D700864CF (ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC *, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m8E40E9007C1DDFA6CBFECFEB3DB8B073A935C874_gshared)(__this, method);
}
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetRawIUnknownForComObjectNoAddRef(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetRawIUnknownForComObjectNoAddRef_m59F8F230B551B6694197C53CE19DE8E2E49C96C2 (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::GetEventRegistrationTokenTableInternal(System.Object,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * NativeOrStaticEventRegistrationImpl_GetEventRegistrationTokenTableInternal_m6064989801142C582D1A73F99005F96F73A3A396 (RuntimeObject * ___instance0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** ___tokenListCount2, bool ___createIfNotFound3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m16CF0B1A3BAF60BEB727EC4901096F8034A3E469 (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 *, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 , EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m16CF0B1A3BAF60BEB727EC4901096F8034A3E469_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>::.ctor()
inline void ConditionalWeakTable_2__ctor_m1E9F5FE1A13473964C511F8D95EBEF189DCD2E87 (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m8E40E9007C1DDFA6CBFECFEB3DB8B073A935C874_gshared)(__this, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::.ctor(System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount__ctor_m9E1063961516A2BB5595CA94A909CF9768000652 (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::Add(TKey,TValue)
inline void Dictionary_2_Add_m39CFB38833568CC7622743D57EE9AF8B284C8CFB (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 *, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 , EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86 , const RuntimeMethod*))Dictionary_2_Add_m39CFB38833568CC7622743D57EE9AF8B284C8CFB_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKeyEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCacheKeyEqualityComparer__ctor_m20598F19ACD128C7A2C80DF66C357DFF5918B070 (EventCacheKeyEqualityComparer_tEF90055C112EAE4D591A1BCF368738AAE742D267 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m1535F001EADDA8F2EB4E29E7C49B798D2817E491 (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m1535F001EADDA8F2EB4E29E7C49B798D2817E491_gshared)(__this, ___comparer0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock__ctor_m616FE6AB300A5E702B39CBCDAD942EA9930F9A87 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::QueueContinuation(System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, bool ___flowContext1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_OnCompleted_m7F0FBDFB78A15C9946F187FC4485799CFA273D73 (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_UnsafeOnCompleted_mFDE8CFD013E3825F11C68314E8957E6DAF79C6A5 (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_CurrentNoFlow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SynchronizationContext_get_CurrentNoFlow_mF134FBE4BA52932C990D3824A9CF960FCA9F44AD (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01 (const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline (const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_mA55899F403EAC69AE3C72A4F3E5FD207C131616C (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___callBack0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline (const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::StartNew(System.Action,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TaskFactory_StartNew_m5617E5F6A6D949C2E21A7E525FAC899E4B871904 (TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, int32_t ___creationOptions2, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler3, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.IO.Stream/SynchronousAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235 (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventCacheKey_ToString_m066D135162AD1226E74B5BAE680444BCE5456204 (EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 * __this, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::Inc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_Inc_m9360F7545D9ED25559DD8CF8D6096C2320F824B8 (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::Dec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_Dec_m3316C5B76EA893ADDEB8D5517B2B3627213B2EAD (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::EnterMyLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_LazyCreateEvent_m328FBB8853141441D96D58F4047B68C5ABB4CA65 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** ___waitEvent0, bool ___makeAutoResetEvent1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___waitEvent0, uint32_t* ___numWaiters1, int32_t ___millisecondsTimeout2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ExitMyLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ExitAndWakeUpAppropriateWaiters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ExitAndWakeUpAppropriateWaiters_mC475D42EA67351F7E655E3B7A6D05C5747313BE3 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_m72D2A390415B58E10CA21E260881C88E50D9F35C (AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/ReaderWriterLockTimedOutException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockTimedOutException__ctor_m82674256AA412F68F255EAF75EF13A7684B3CB48 (ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497 * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::EnterMyLockSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_EnterMyLockSpin_m5157FDCF62CE06480C3A0B1EA512698954D0059E (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_ProcessorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_ProcessorCount_m32354B9724A21AE041AC75C0E470687E33B93D33 (const RuntimeMethod* method);
// System.Void System.Threading.Thread::SpinWait(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_SpinWait_m6276C02E66DD83A83D5F39E2B20411B8CBA33673 (int32_t ___iterations0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m722F09DA49F9522A33650808D0B173351BEF82FD (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::AcquireWriterLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_AcquireWriterLock_mFE4A81BB90B00469143E80C143329CDEC962D8C6 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::CleanupCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_CleanupCache_mEF77F97501522C1D53A496EA05E38F9B4CFED4AA (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ReleaseWriterLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ReleaseWriterLock_m919CAFF21CB0B2FE1E8DB9FA84E2B20C5782377C (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::Remove(TKey)
inline bool Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8 (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 *, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 , const RuntimeMethod*))Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8_gshared)(__this, ___key0, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL EventRegister(Guid_t *, Il2CppMethodPointer, void*, int64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL EventUnregister(int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL EventWriteTransfer(int64_t, EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F *, Guid_t *, Guid_t *, int32_t, EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL EventActivityIdControl(uint32_t, Guid_t *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL EventSetInformation(int64_t, int32_t, void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL EnumerateTraceGuidsEx(int32_t, void*, int32_t, void*, int32_t, int32_t*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Timer/Scheduler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__cctor_m36805653C9D55766CEE82413432DFBC5B5DBFB29 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 *)il2cpp_codegen_object_new(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82(L_0, /*hidden argument*/NULL);
		((Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var))->set_instance_0(L_0);
		return;
	}
}
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * Scheduler_get_Instance_mEB15B6A61E0B259CFC8BABE4376A8DEC2962BC86 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = ((Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void System.Threading.Timer/Scheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_0, (bool)0, /*hidden argument*/NULL);
		__this->set_changed_2(L_0);
		TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * L_1 = (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B *)il2cpp_codegen_object_new(TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B_il2cpp_TypeInfo_var);
		TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4(L_1, /*hidden argument*/NULL);
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_2 = (SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 *)il2cpp_codegen_object_new(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_il2cpp_TypeInfo_var);
		SortedList__ctor_m0E1B0737647DC8D8B3E9FAD5F81168878E92E9F4(L_2, L_1, ((int32_t)1024), /*hidden argument*/NULL);
		__this->set_list_1(L_2);
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_3 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_3, __this, (intptr_t)((intptr_t)Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_4, L_3, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_5 = L_4;
		NullCheck(L_5);
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_5, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_5);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Remove_m34454A4F7A6AC0E05564A423140D7923771904D5 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_0 = ___timer0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_next_run_6();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_2 = ___timer0;
		NullCheck(L_2);
		int64_t L_3 = L_2->get_next_run_6();
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		return;
	}

IL_001a:
	{
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_4 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_5 = ___timer0;
		int32_t L_6;
		L_6 = Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538(__this, L_5, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3A, FINALLY_0030);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Change_mB9519A7BE09D1CB449D40E231F43C97F8019685D (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, int64_t ___new_next_run1, const RuntimeMethod* method)
{
	bool V_0 = false;
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (bool)0;
		V_1 = __this;
		V_2 = (bool)0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_2), /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = ___timer0;
			int32_t L_2;
			L_2 = Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538(__this, L_1, /*hidden argument*/NULL);
			int64_t L_3 = ___new_next_run1;
			if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_002b;
			}
		}

IL_0022:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = ___timer0;
			int64_t L_5 = ___new_next_run1;
			NullCheck(L_4);
			L_4->set_next_run_6(L_5);
			IL2CPP_LEAVE(0x6C, FINALLY_0053);
		}

IL_002b:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_6 = ___timer0;
			NullCheck(L_6);
			bool L_7 = L_6->get_disposed_7();
			if (L_7)
			{
				goto IL_0051;
			}
		}

IL_0033:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_8 = ___timer0;
			int64_t L_9 = ___new_next_run1;
			NullCheck(L_8);
			L_8->set_next_run_6(L_9);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_10 = ___timer0;
			Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981(__this, L_10, /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_11 = __this->get_list_1();
			NullCheck(L_11);
			RuntimeObject * L_12;
			L_12 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(23 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_11, 0);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_13 = ___timer0;
			V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_12) == ((RuntimeObject*)(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)L_13))? 1 : 0);
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_005c;
			}
		}

IL_0056:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_15 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_15, /*hidden argument*/NULL);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(83)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_006c;
		}
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_17 = __this->get_changed_2();
		NullCheck(L_17);
		bool L_18;
		L_18 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_17, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Int32 System.Threading.Timer/Scheduler::FindByDueTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, int64_t ___nr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_2 = NULL;
	int32_t V_3 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_4 = NULL;
	{
		V_0 = 0;
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_0 = __this->get_list_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.SortedList::get_Count() */, L_0);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)20))))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0049;
	}

IL_001d:
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_4 = __this->get_list_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(23 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_4, L_5);
		V_2 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_6, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_7 = V_2;
		NullCheck(L_7);
		int64_t L_8 = L_7->get_next_run_6();
		int64_t L_9 = ___nr0;
		if ((!(((uint64_t)L_8) == ((uint64_t)L_9))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}

IL_003a:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = V_2;
		NullCheck(L_11);
		int64_t L_12 = L_11->get_next_run_6();
		int64_t L_13 = ___nr0;
		if ((((int64_t)L_12) <= ((int64_t)L_13)))
		{
			goto IL_0045;
		}
	}
	{
		return (-1);
	}

IL_0045:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_004f:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19))>>(int32_t)1))));
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_20 = __this->get_list_1();
		int32_t L_21 = V_3;
		NullCheck(L_20);
		RuntimeObject * L_22;
		L_22 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(23 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_20, L_21);
		V_4 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_22, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		int64_t L_23 = ___nr0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_24 = V_4;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_next_run_6();
		if ((!(((uint64_t)L_23) == ((uint64_t)L_25))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_26 = V_3;
		return L_26;
	}

IL_0076:
	{
		int64_t L_27 = ___nr0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_28 = V_4;
		NullCheck(L_28);
		int64_t L_29 = L_28->get_next_run_6();
		if ((((int64_t)L_27) <= ((int64_t)L_29)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_30 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		goto IL_008a;
	}

IL_0086:
	{
		int32_t L_31 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
	}

IL_008a:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_004f;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_0 = ___timer0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_next_run_6();
		int32_t L_2;
		L_2 = Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0081;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = ___timer0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_next_run_6();
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)(std::numeric_limits<int64_t>::max)()), (int64_t)L_5))) > ((int64_t)((int64_t)((int64_t)((int32_t)20000))))))
		{
			goto IL_002c;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 1;
	}

IL_002d:
	{
		V_1 = (bool)G_B4_0;
	}

IL_002e:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_8 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_9 = L_8;
		NullCheck(L_9);
		int64_t L_10 = L_9->get_next_run_6();
		NullCheck(L_9);
		L_9->set_next_run_6(((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((int64_t)((int64_t)1)))));
		goto IL_0055;
	}

IL_0046:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_12 = L_11;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_next_run_6();
		NullCheck(L_12);
		L_12->set_next_run_6(((int64_t)il2cpp_codegen_subtract((int64_t)L_13, (int64_t)((int64_t)((int64_t)1)))));
	}

IL_0055:
	{
		int32_t L_14 = V_0;
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_15 = __this->get_list_1();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.SortedList::get_Count() */, L_15);
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_0081;
		}
	}
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_17 = __this->get_list_1();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		RuntimeObject * L_19;
		L_19 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(23 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_17, L_18);
		NullCheck(((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_19, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var)));
		int64_t L_20 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_19, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var))->get_next_run_6();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_21 = ___timer0;
		NullCheck(L_21);
		int64_t L_22 = L_21->get_next_run_6();
		if ((((int64_t)L_20) == ((int64_t)L_22)))
		{
			goto IL_002e;
		}
	}

IL_0081:
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_23 = __this->get_list_1();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_24 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_25 = ___timer0;
		NullCheck(L_23);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(14 /* System.Void System.Collections.SortedList::Add(System.Object,System.Object) */, L_23, L_24, L_25);
		return;
	}
}
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_0 = __this->get_list_1();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = ___timer0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(28 /* System.Int32 System.Collections.SortedList::IndexOfKey(System.Object) */, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_4 = __this->get_list_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(29 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_4, L_5);
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void System.Threading.Timer/Scheduler::TimerCB(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6 (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___o0;
		V_0 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_0, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = V_0;
		NullCheck(L_1);
		TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * L_2 = L_1->get_callback_2();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_state_3();
		NullCheck(L_2);
		TimerCallback_Invoke_m1318C110BA930390E8F61C8BAAAC8F1CA8776CFD(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t537143C180C9FB69517B6C26205D2AA824591563_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral494836B9EFC41FFD5CB7E6CA5BA325833F323668);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t537143C180C9FB69517B6C26205D2AA824591563 * V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int64_t V_8 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_9 = NULL;
	int64_t V_10 = 0;
	int64_t V_11 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_12 = NULL;
	int64_t V_13 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B10_0 = 0;
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0;
		L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_0);
		Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE(L_0, _stringLiteral494836B9EFC41FFD5CB7E6CA5BA325833F323668, /*hidden argument*/NULL);
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_1 = (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *)il2cpp_codegen_object_new(List_1_t537143C180C9FB69517B6C26205D2AA824591563_il2cpp_TypeInfo_var);
		List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000(L_1, ((int32_t)512), /*hidden argument*/List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_001a:
	{
		V_1 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
		V_2 = L_2;
		V_3 = __this;
		V_4 = (bool)0;
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_3 = V_3;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_4), /*hidden argument*/NULL);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_4 = __this->get_changed_2();
			NullCheck(L_4);
			bool L_5;
			L_5 = EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_4, /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_6 = __this->get_list_1();
			NullCheck(L_6);
			int32_t L_7;
			L_7 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.SortedList::get_Count() */, L_6);
			V_6 = L_7;
			V_5 = 0;
			goto IL_010c;
		}

IL_0050:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_8 = __this->get_list_1();
			int32_t L_9 = V_5;
			NullCheck(L_8);
			RuntimeObject * L_10;
			L_10 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(23 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_8, L_9);
			V_9 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_10, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = V_9;
			NullCheck(L_11);
			int64_t L_12 = L_11->get_next_run_6();
			int64_t L_13 = V_2;
			if ((((int64_t)L_12) > ((int64_t)L_13)))
			{
				goto IL_0115;
			}
		}

IL_0071:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_14 = __this->get_list_1();
			int32_t L_15 = V_5;
			NullCheck(L_14);
			VirtActionInvoker1< int32_t >::Invoke(29 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_14, L_15);
			int32_t L_16 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
			int32_t L_17 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
			WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_18 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)il2cpp_codegen_object_new(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
			WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5(L_18, NULL, (intptr_t)((intptr_t)Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_RuntimeMethod_var), /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_19 = V_9;
			bool L_20;
			L_20 = ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6(L_18, L_19, /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_21 = V_9;
			NullCheck(L_21);
			int64_t L_22 = L_21->get_period_ms_5();
			V_10 = L_22;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_23 = V_9;
			NullCheck(L_23);
			int64_t L_24 = L_23->get_due_time_ms_4();
			V_11 = L_24;
			int64_t L_25 = V_10;
			if ((((int64_t)L_25) == ((int64_t)((int64_t)((int64_t)(-1))))))
			{
				goto IL_00ce;
			}
		}

IL_00b6:
		{
			int64_t L_26 = V_10;
			if (!L_26)
			{
				goto IL_00c0;
			}
		}

IL_00ba:
		{
			int64_t L_27 = V_10;
			if ((!(((uint64_t)L_27) == ((uint64_t)((int64_t)((int64_t)(-1)))))))
			{
				goto IL_00cb;
			}
		}

IL_00c0:
		{
			int64_t L_28 = V_11;
			G_B10_0 = ((((int32_t)((((int64_t)L_28) == ((int64_t)((int64_t)((int64_t)(-1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_00cf;
		}

IL_00cb:
		{
			G_B10_0 = 0;
			goto IL_00cf;
		}

IL_00ce:
		{
			G_B10_0 = 1;
		}

IL_00cf:
		{
			if (!G_B10_0)
			{
				goto IL_00e3;
			}
		}

IL_00d1:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_29 = V_9;
			NullCheck(L_29);
			L_29->set_next_run_6(((int64_t)(std::numeric_limits<int64_t>::max)()));
			goto IL_0106;
		}

IL_00e3:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_30 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
			int64_t L_31;
			L_31 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_32 = V_9;
			NullCheck(L_32);
			int64_t L_33 = L_32->get_period_ms_5();
			NullCheck(L_30);
			L_30->set_next_run_6(((int64_t)il2cpp_codegen_add((int64_t)L_31, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)((int32_t)10000))), (int64_t)L_33)))));
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_34 = V_0;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_35 = V_9;
			NullCheck(L_34);
			List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C(L_34, L_35, /*hidden argument*/List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C_RuntimeMethod_var);
		}

IL_0106:
		{
			int32_t L_36 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		}

IL_010c:
		{
			int32_t L_37 = V_5;
			int32_t L_38 = V_6;
			if ((((int32_t)L_37) < ((int32_t)L_38)))
			{
				goto IL_0050;
			}
		}

IL_0115:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_39 = V_0;
			NullCheck(L_39);
			int32_t L_40;
			L_40 = List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline(L_39, /*hidden argument*/List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
			V_6 = L_40;
			V_5 = 0;
			goto IL_013a;
		}

IL_0122:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_41 = V_0;
			int32_t L_42 = V_5;
			NullCheck(L_41);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_43;
			L_43 = List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_inline(L_41, L_42, /*hidden argument*/List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_RuntimeMethod_var);
			V_12 = L_43;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_44 = V_12;
			Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981(__this, L_44, /*hidden argument*/NULL);
			int32_t L_45 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		}

IL_013a:
		{
			int32_t L_46 = V_5;
			int32_t L_47 = V_6;
			if ((((int32_t)L_46) < ((int32_t)L_47)))
			{
				goto IL_0122;
			}
		}

IL_0140:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_48 = V_0;
			NullCheck(L_48);
			List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0(L_48, /*hidden argument*/List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0_RuntimeMethod_var);
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_49 = V_0;
			Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C(__this, L_49, ((int32_t)512), /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_50 = __this->get_list_1();
			NullCheck(L_50);
			int32_t L_51;
			L_51 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Collections.SortedList::get_Capacity() */, L_50);
			V_7 = L_51;
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_52 = __this->get_list_1();
			NullCheck(L_52);
			int32_t L_53;
			L_53 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.SortedList::get_Count() */, L_52);
			V_6 = L_53;
			int32_t L_54 = V_7;
			if ((((int32_t)L_54) <= ((int32_t)((int32_t)1024))))
			{
				goto IL_0191;
			}
		}

IL_0175:
		{
			int32_t L_55 = V_6;
			if ((((int32_t)L_55) <= ((int32_t)0)))
			{
				goto IL_0191;
			}
		}

IL_017a:
		{
			int32_t L_56 = V_7;
			int32_t L_57 = V_6;
			if ((((int32_t)((int32_t)((int32_t)L_56/(int32_t)L_57))) <= ((int32_t)3)))
			{
				goto IL_0191;
			}
		}

IL_0182:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_58 = __this->get_list_1();
			int32_t L_59 = V_6;
			NullCheck(L_58);
			VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.Collections.SortedList::set_Capacity(System.Int32) */, L_58, ((int32_t)il2cpp_codegen_multiply((int32_t)L_59, (int32_t)2)));
		}

IL_0191:
		{
			V_8 = ((int64_t)(std::numeric_limits<int64_t>::max)());
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_60 = __this->get_list_1();
			NullCheck(L_60);
			int32_t L_61;
			L_61 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.SortedList::get_Count() */, L_60);
			if ((((int32_t)L_61) <= ((int32_t)0)))
			{
				goto IL_01c2;
			}
		}

IL_01aa:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_62 = __this->get_list_1();
			NullCheck(L_62);
			RuntimeObject * L_63;
			L_63 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(23 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_62, 0);
			NullCheck(((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_63, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var)));
			int64_t L_64 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_63, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var))->get_next_run_6();
			V_8 = L_64;
		}

IL_01c2:
		{
			V_1 = (-1);
			int64_t L_65 = V_8;
			if ((((int64_t)L_65) == ((int64_t)((int64_t)(std::numeric_limits<int64_t>::max)()))))
			{
				goto IL_01fe;
			}
		}

IL_01d1:
		{
			int64_t L_66 = V_8;
			IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
			int64_t L_67;
			L_67 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
			V_13 = ((int64_t)((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_66, (int64_t)L_67))/(int64_t)((int64_t)((int64_t)((int32_t)10000)))));
			int64_t L_68 = V_13;
			if ((((int64_t)L_68) <= ((int64_t)((int64_t)((int64_t)((int32_t)2147483647LL))))))
			{
				goto IL_01f4;
			}
		}

IL_01ec:
		{
			V_1 = ((int32_t)2147483646);
			IL2CPP_LEAVE(0x20B, FINALLY_0200);
		}

IL_01f4:
		{
			int64_t L_69 = V_13;
			V_1 = ((int32_t)((int32_t)L_69));
			int32_t L_70 = V_1;
			if ((((int32_t)L_70) >= ((int32_t)0)))
			{
				goto IL_01fe;
			}
		}

IL_01fc:
		{
			V_1 = 0;
		}

IL_01fe:
		{
			IL2CPP_LEAVE(0x20B, FINALLY_0200);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0200;
	}

FINALLY_0200:
	{ // begin finally (depth: 1)
		{
			bool L_71 = V_4;
			if (!L_71)
			{
				goto IL_020a;
			}
		}

IL_0204:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_72 = V_3;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_72, /*hidden argument*/NULL);
		}

IL_020a:
		{
			IL2CPP_END_FINALLY(512)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(512)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x20B, IL_020b)
	}

IL_020b:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_73 = __this->get_changed_2();
		int32_t L_74 = V_1;
		NullCheck(L_73);
		bool L_75;
		L_75 = VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_73, L_74);
		goto IL_001a;
	}
}
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.Generic.List`1<System.Threading.Timer>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, List_1_t537143C180C9FB69517B6C26205D2AA824591563 * ___list0, int32_t ___initial1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_0 = ___list0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B(L_0, /*hidden argument*/List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_2 = ___list0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline(L_2, /*hidden argument*/List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
		V_1 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = ___initial1;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_7/(int32_t)L_8))) <= ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_9 = ___list0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F(L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)), /*hidden argument*/List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F_RuntimeMethod_var);
	}

IL_0025:
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
// System.Int32 System.Threading.Timer/TimerComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimerComparer_Compare_mC54D4F4F5F33A28C3981BD1D59A071659F9E90DE (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_0 = NULL;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_1 = NULL;
	int64_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___x0;
		V_0 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)IsInstSealed((RuntimeObject*)L_0, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___y1;
		V_1 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)IsInstSealed((RuntimeObject*)L_2, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_3 = V_1;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_next_run_6();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_6 = V_1;
		NullCheck(L_6);
		int64_t L_7 = L_6->get_next_run_6();
		V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_7));
		int64_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject * L_9 = ___x0;
		RuntimeObject * L_10 = ___y1;
		if ((((RuntimeObject*)(RuntimeObject *)L_9) == ((RuntimeObject*)(RuntimeObject *)L_10)))
		{
			goto IL_002f;
		}
	}
	{
		return (-1);
	}

IL_002f:
	{
		return 0;
	}

IL_0031:
	{
		int64_t L_11 = V_2;
		if ((((int64_t)L_11) > ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}

IL_0038:
	{
		return 1;
	}
}
// System.Void System.Threading.Timer/TimerComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4 (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::AddScalar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl_AddScalar_m50332653D9BBFDEC404A15E299A0F467ED87F6E1 (Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_AddScalar_m50332653D9BBFDEC404A15E299A0F467ED87F6E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_bufferNesting_4();
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		bool L_1 = __this->get_scalar_5();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		int8_t L_2 = __this->get_dataCount_2();
		if (((int64_t)L_2 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_2 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Impl_AddScalar_m50332653D9BBFDEC404A15E299A0F467ED87F6E1_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))) > 127LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Impl_AddScalar_m50332653D9BBFDEC404A15E299A0F467ED87F6E1_RuntimeMethod_var);
		__this->set_dataCount_2(((int8_t)((int8_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))));
	}

IL_001f:
	{
		__this->set_scalar_5((bool)1);
		int16_t L_3 = __this->get_scratchSize_1();
		int32_t L_4 = ___size0;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Impl_AddScalar_m50332653D9BBFDEC404A15E299A0F467ED87F6E1_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))) > 32767LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Impl_AddScalar_m50332653D9BBFDEC404A15E299A0F467ED87F6E1_RuntimeMethod_var);
		__this->set_scratchSize_1(((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)))));
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::AddNonscalar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl_AddNonscalar_m545AA477978D51CDF7D221093DFE3EE4EF16810C (Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_AddNonscalar_m545AA477978D51CDF7D221093DFE3EE4EF16810C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_bufferNesting_4();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		__this->set_scalar_5((bool)0);
		int8_t L_1 = __this->get_pinCount_3();
		if (((int64_t)L_1 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_1 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Impl_AddNonscalar_m545AA477978D51CDF7D221093DFE3EE4EF16810C_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))) > 127LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Impl_AddNonscalar_m545AA477978D51CDF7D221093DFE3EE4EF16810C_RuntimeMethod_var);
		__this->set_pinCount_3(((int8_t)((int8_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)))));
		int8_t L_2 = __this->get_dataCount_2();
		if (((int64_t)L_2 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_2 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Impl_AddNonscalar_m545AA477978D51CDF7D221093DFE3EE4EF16810C_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))) > 127LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Impl_AddNonscalar_m545AA477978D51CDF7D221093DFE3EE4EF16810C_RuntimeMethod_var);
		__this->set_dataCount_2(((int8_t)((int8_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))));
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::BeginBuffered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl_BeginBuffered_mB5F2B91D585CFE7B5DDF3BA153D6223259FC7225 (Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bufferNesting_4();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Impl_AddNonscalar_m545AA477978D51CDF7D221093DFE3EE4EF16810C(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->get_bufferNesting_4();
		__this->set_bufferNesting_4(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		return;
	}
}
// System.Void System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::EndBuffered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl_EndBuffered_m7A9DEE7A673984E037DA3C13755EFA5F1E97AFF0 (Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bufferNesting_4();
		__this->set_bufferNesting_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		return;
	}
}
// System.Int32 System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::Encode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Impl_Encode_mEA84313C0E141DBDB4ACBB06FDF0906BF9C5BAC3 (Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___metadata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFA0454B40F3E8ACB8A9E3BBBF9903AB74495DA89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39CC882527DAE6FEB8DF8B325824BD935F61C5C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6C76939016FC9D85E72CCA56241C1A241BA4312D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2CB7D6B4CFC315F1197DAE15867E8FD56039920E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = 0;
		List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 * L_0 = __this->get_fields_0();
		NullCheck(L_0);
		Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675  L_1;
		L_1 = List_1_GetEnumerator_m2CB7D6B4CFC315F1197DAE15867E8FD56039920E(L_0, /*hidden argument*/List_1_GetEnumerator_m2CB7D6B4CFC315F1197DAE15867E8FD56039920E_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0010:
		{
			FieldMetadata_t2E7367B0A1B1168F2B7E8206B5A9C905E5F29A0A * L_2;
			L_2 = Enumerator_get_Current_m6C76939016FC9D85E72CCA56241C1A241BA4312D_inline((Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m6C76939016FC9D85E72CCA56241C1A241BA4312D_RuntimeMethod_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___metadata0;
			NullCheck(L_2);
			FieldMetadata_Encode_mA0E76F69079E72FB9244E437D88831EB9A8FA109(L_2, (int32_t*)(&V_0), L_3, /*hidden argument*/NULL);
		}

IL_001f:
		{
			bool L_4;
			L_4 = Enumerator_MoveNext_m39CC882527DAE6FEB8DF8B325824BD935F61C5C8((Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m39CC882527DAE6FEB8DF8B325824BD935F61C5C8_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0010;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x38, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFA0454B40F3E8ACB8A9E3BBBF9903AB74495DA89((Enumerator_tAD70217434D449C95B14CA6CD477586F56B39675 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mFA0454B40F3E8ACB8A9E3BBBF9903AB74495DA89_RuntimeMethod_var);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl__ctor_mCB39C7A962D77405F7D27169D7F9E6B4D3036472 (Impl_t275DB33AC909F02E92373EFEB69C92B5B4320B55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1659C794A53D7BB661944EB117B296260FE4D3FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 * L_0 = (List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2 *)il2cpp_codegen_object_new(List_1_t6ECB8A93D5750346AC257B0DCC37EF0280200CC2_il2cpp_TypeInfo_var);
		List_1__ctor_m1659C794A53D7BB661944EB117B296260FE4D3FC(L_0, /*hidden argument*/List_1__ctor_m1659C794A53D7BB661944EB117B296260FE4D3FC_RuntimeMethod_var);
		__this->set_fields_0(L_0);
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
// System.Void System.TypeIdentifiers/Display::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display__ctor_m16B5174A55477C5FA7E4BBEEB321BAC49C59EA78 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, String_t* ___displayName0, const RuntimeMethod* method)
{
	{
		ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___displayName0;
		__this->set_displayName_0(L_0);
		__this->set_internal_name_1((String_t*)NULL);
		return;
	}
}
// System.String System.TypeIdentifiers/Display::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_get_DisplayName_m85B2DCE4C4F6F44EAF0BA7BDD82C0D94EA8F5847 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		return L_0;
	}
}
// System.String System.TypeIdentifiers/Display::get_InternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_get_InternalName_m6EAFBB13F110C5A11AC89AB9D74C79B27552EF39 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_internal_name_1();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1;
		L_1 = Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970(__this, /*hidden argument*/NULL);
		__this->set_internal_name_1(L_1);
	}

IL_0014:
	{
		String_t* L_2 = __this->get_internal_name_1();
		return L_2;
	}
}
// System.String System.TypeIdentifiers/Display::GetInternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		String_t* L_1;
		L_1 = TypeSpec_UnescapeInternalName_mA948D42382EE159391CEFB85748A7EFF37CE53A9(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Boolean System.TypeNames/ATypeName::Equals(System.TypeName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		RuntimeObject* L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Int32 System.TypeNames/ATypeName::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ATypeName_GetHashCode_mDC22C27DBC59F89F1A4CDA70985AB201BC879B07 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean System.TypeNames/ATypeName::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m128A844F0CC6E6754CE865684C25F47EEAD342C1 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		bool L_1;
		L_1 = ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.TypeNames/ATypeName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.UTF32Encoding/UTF32Decoder::.ctor(System.Text.UTF32Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF32Decoder__ctor_mC43D242A0AB38688E7F1E68472B18B5CC2F15FF6 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF32Encoding/UTF32Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF32Decoder_Reset_mA255C09536BA93FCAD3F8ED62EADE0B2079E1C27 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, const RuntimeMethod* method)
{
	{
		__this->set_iChar_6(0);
		__this->set_readByteCount_7(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UTF32Decoder_get_HasState_m59BC0A86B483ACC74E659469FFD39997B2646812 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_readByteCount_7();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void System.Text.UTF7Encoding/Decoder::.ctor(System.Text.UTF7Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m3FAA7C0DCE7FBA64EEBD84A4AEBFC9317A92E9B9 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_4, /*hidden argument*/NULL);
		__this->set_bits_6(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_8, /*hidden argument*/NULL);
		__this->set_bitCount_7(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5, L_12, /*hidden argument*/NULL);
		__this->set_firstByte_8(((*(bool*)((bool*)UnBox(L_13, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17;
		L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_16, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_17, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_6();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		int32_t L_7 = __this->get_bitCount_7();
		NullCheck(L_6);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		bool L_9 = __this->get_firstByte_8();
		NullCheck(L_8);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_8, _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Reset_m0D006B1AE70E73B46BF2DF2550498CCF9D433769 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bits_6(0);
		__this->set_bitCount_7((-1));
		__this->set_firstByte_8((bool)0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean System.Text.UTF7Encoding/Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decoder_get_HasState_mF435291CFF368657A42E3D00148A144590652907 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bitCount_7();
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void System.Text.UTF7Encoding/DecoderUTF7Fallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7Fallback__ctor_m97CB6C70F4F4B390E79DA9A6A54F7C15611519F1 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		DecoderFallback__ctor_m748C2C19AD4595C13154F9EEDF89AC2A2C10727E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.DecoderFallbackBuffer System.Text.UTF7Encoding/DecoderUTF7Fallback::CreateFallbackBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * DecoderUTF7Fallback_CreateFallbackBuffer_m2A16D01FA0596522EC75B9424B19FC879714AD1F (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * L_0 = (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A *)il2cpp_codegen_object_new(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A_il2cpp_TypeInfo_var);
		DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Text.UTF7Encoding/DecoderUTF7Fallback::get_MaxCharCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7Fallback_get_MaxCharCount_mEB86DA7E072AE10245BA31204184B137DFB8F8D3 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Text.UTF7Encoding/DecoderUTF7Fallback::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecoderUTF7Fallback_Equals_m8A55122D6E31F8C487AD5AFAA5BE6352C0151656 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (!((DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 *)IsInstSealed((RuntimeObject*)L_0, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// System.Int32 System.Text.UTF7Encoding/DecoderUTF7Fallback::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7Fallback_GetHashCode_m87A146966E49C3DDB5C62ADABE62B84858D48160 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)984);
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
// System.Void System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::.ctor(System.Text.UTF7Encoding/DecoderUTF7Fallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * ___fallback0, const RuntimeMethod* method)
{
	{
		__this->set_iCount_3((-1));
		DecoderFallbackBuffer__ctor_m4944ABFBCC6CDED8F244EC1E5EA6B1F229C3495C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::Fallback(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecoderUTF7FallbackBuffer_Fallback_mBF6952B9A4A595ECF7CB92B8BC1177C726784227 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytesUnknown0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytesUnknown0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		__this->set_cFallback_2(L_2);
		Il2CppChar L_3 = __this->get_cFallback_2();
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_4 = 1;
		V_0 = L_4;
		__this->set_iSize_4(L_4);
		int32_t L_5 = V_0;
		__this->set_iCount_3(L_5);
		return (bool)1;
	}
}
// System.Char System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::GetNextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar DecoderUTF7FallbackBuffer_GetNextChar_mC2FD7150C2027744040DE6BC014598C48141419B (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_iCount_3();
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_iCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		Il2CppChar L_3 = __this->get_cFallback_2();
		return L_3;
	}

IL_001b:
	{
		return 0;
	}
}
// System.Void System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer_Reset_mE18A0A62630252473DE57B453B3C7344CE1077BA (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, const RuntimeMethod* method)
{
	{
		__this->set_iCount_3((-1));
		((DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B *)__this)->set_byteStart_0((uint8_t*)((uintptr_t)0));
		return;
	}
}
// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::InternalFallback(System.Byte[],System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, uint8_t* ___pBytes1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3EDB56B30B60F6E6107AB89FE5358A528045F13)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300_RuntimeMethod_var)));
	}

IL_0016:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		return 1;
	}

IL_001d:
	{
		return 0;
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
// System.Void System.Text.UTF7Encoding/Encoder::.ctor(System.Text.UTF7Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_m2E7349F37D2DEF844A91395DD099D93A6C88F167 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * L_0 = ___encoding0;
		EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Encoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		s_Il2CppMethodInitialized = true;
	}
	{
		EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_4, /*hidden argument*/NULL);
		__this->set_bits_7(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_8, /*hidden argument*/NULL);
		__this->set_bitCount_8(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_12, /*hidden argument*/NULL);
		((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->set_m_encoding_3(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_13, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Encoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->get_m_encoding_3();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_7();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		int32_t L_7 = __this->get_bitCount_8();
		NullCheck(L_6);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Encoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Reset_m8D51317D2A8E22CDF2183DBEFE2538AC3360A9A9 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bitCount_8((-1));
		__this->set_bits_7(0);
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_0 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_1 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Text.EncoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean System.Text.UTF7Encoding/Encoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Encoder_get_HasState_m980799C34CF5CB9BD1FD6B3340E9A19F90DEACE0 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bits_7();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->get_bitCount_8();
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0015:
	{
		return (bool)1;
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
// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Text.UTF8Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder__ctor_m9C1CB47A544EB17F0C9F1837836DB6DB50049B4C (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353 (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_4, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_5, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5, L_8, /*hidden argument*/NULL);
		__this->set_bits_6(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_12, /*hidden argument*/NULL);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0(((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)CastclassClass((RuntimeObject*)L_13, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var)));
		goto IL_0087;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0076;
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		__this->set_bits_6(0);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)NULL);
		goto IL_0087;
	} // end catch (depth: 1)

IL_0087:
	{
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49D64DCFE768AFB45BCA7F089DBB249FA1DA859C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8994D295B1EC3F358FB1CDEB6465D3A478A7F949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C4034C5C6F417782BE8DF6DD6771CA6B67948DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_6();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * L_7 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallback_0();
		NullCheck(L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_6, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		NullCheck(L_8);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_8, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, 0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_9 = ___info0;
		NullCheck(L_9);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_9, _stringLiteral8994D295B1EC3F358FB1CDEB6465D3A478A7F949, 0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteral9C4034C5C6F417782BE8DF6DD6771CA6B67948DF, (bool)0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_11 = ___info0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_11, _stringLiteral49D64DCFE768AFB45BCA7F089DBB249FA1DA859C, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder_Reset_m81E08FB668E8FAA2B75ECB823F9131933E48522A (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bits_6(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Text.UTF8Encoding/UTF8Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UTF8Decoder_get_HasState_mB8A652C38DB6D32A53AE51935F186F7929276381 (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bits_6();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void System.Text.UTF8Encoding/UTF8Encoder::.ctor(System.Text.UTF8Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder__ctor_m29DA8DC0472E7C071894DCB375E8487CFC55B327 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ___encoding0;
		EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Encoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_4, /*hidden argument*/NULL);
		((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->set_m_encoding_3(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_5, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4, L_8, /*hidden argument*/NULL);
		__this->set_surrogateChar_7(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_0054:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_12, /*hidden argument*/NULL);
		((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->set_m_fallback_0(((EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 *)CastclassClass((RuntimeObject*)L_13, EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_il2cpp_TypeInfo_var)));
		goto IL_0080;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0076;
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->set_m_fallback_0((EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 *)NULL);
		goto IL_0080;
	} // end catch (depth: 1)

IL_0080:
	{
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Encoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35FD9409286E50999789090A9930776FD3F2B13E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5411972E9968E9978EF95EF84FB5F5FE4F0F734);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B5_2 = NULL;
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->get_m_encoding_3();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_surrogateChar_7();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_7 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallback_0();
		NullCheck(L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_6, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		int32_t L_9 = __this->get_surrogateChar_7();
		G_B3_0 = _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
		G_B3_1 = L_8;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			G_B4_0 = _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
			G_B4_1 = L_8;
			goto IL_0053;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0054:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(G_B5_2, G_B5_1, (bool)G_B5_0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteralB5411972E9968E9978EF95EF84FB5F5FE4F0F734, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Encoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder_Reset_m5CDF361E7CAE7E9BF5DE6C35348F253A1341030C (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, const RuntimeMethod* method)
{
	{
		__this->set_surrogateChar_7(0);
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_0 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_1 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Text.EncoderFallbackBuffer::Reset() */, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Text.UTF8Encoding/UTF8Encoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UTF8Encoder_get_HasState_m7C0F56B8FA55689B99A5CF2E982143D2F69D8A37 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_surrogateChar_7();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void System.Text.UnicodeEncoding/Decoder::.ctor(System.Text.UnicodeEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m2E2F6F43F63332CC0E59AF2A0ADA80DE2CF0D187 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * ___encoding0, const RuntimeMethod* method)
{
	{
		__this->set_lastByte_6((-1));
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UnicodeEncoding/Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		__this->set_lastByte_6((-1));
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1_RuntimeMethod_var)));
	}

IL_001b:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD, L_4, /*hidden argument*/NULL);
		__this->set_lastByte_6(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30, L_8, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_9, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030, L_12, /*hidden argument*/NULL);
		__this->set_lastChar_7(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_13, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17;
		L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_16, /*hidden argument*/NULL);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0(((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)CastclassClass((RuntimeObject*)L_17, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var)));
		goto IL_00c8;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009d;
		throw e;
	}

CATCH_009d:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_18 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var))) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject * L_21;
		L_21 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2)), L_20, /*hidden argument*/NULL);
		V_0 = ((*(bool*)((bool*)UnBox(L_21, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))))));
		bool L_22 = V_0;
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_23 = (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var)));
		UnicodeEncoding__ctor_mE077368843CAFC47B2C4AFC3C771F5B51F3B8DD0(L_23, L_22, (bool)0, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(L_23);
		goto IL_00c8;
	} // end catch (depth: 1)

IL_00c8:
	{
		return;
	}
}
// System.Void System.Text.UnicodeEncoding/Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * L_5 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallback_0();
		NullCheck(L_4);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_4, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		Il2CppChar L_7 = __this->get_lastChar_7();
		NullCheck(L_6);
		SerializationInfo_AddValue_m7B2342989B501DBA05C63C0D6E4FBD63541D4C38(L_6, _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		int32_t L_9 = __this->get_lastByte_6();
		NullCheck(L_8);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_8, _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD, L_9, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_11 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(((UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)CastclassClass((RuntimeObject*)L_11, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var)));
		bool L_12 = ((UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)CastclassClass((RuntimeObject*)L_11, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var))->get_bigEndian_17();
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UnicodeEncoding/Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Reset_mFE13742F618EE4CB1C7E680B93CD2EAF0DD2A588 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lastByte_6((-1));
		__this->set_lastChar_7(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean System.Text.UnicodeEncoding/Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decoder_get_HasState_m77EB54613A273C583568810DC48F8ADFAA450190 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_lastByte_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_1 = __this->get_lastChar_7();
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
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
// System.UInt32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw::EventRegister(System.Guid&,Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback,System.Void*,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ManifestEtw_EventRegister_m6461022F920328F98665145A59DDC9C91D6D9ED0 (Guid_t * ___providerId0, EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * ___enableCallback1, void* ___callbackContext2, int64_t* ___registrationHandle3, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (Guid_t *, Il2CppMethodPointer, void*, int64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_advapi32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Guid_t *) + sizeof(void*) + sizeof(void*) + sizeof(int64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("advapi32.dll"), "EventRegister", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___enableCallback1' to native representation
	Il2CppMethodPointer ____enableCallback1_marshaled = NULL;
	____enableCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___enableCallback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(EventRegister)(___providerId0, ____enableCallback1_marshaled, ___callbackContext2, ___registrationHandle3);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___providerId0, ____enableCallback1_marshaled, ___callbackContext2, ___registrationHandle3);
	#endif

	return returnValue;
}
// System.UInt32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw::EventUnregister(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ManifestEtw_EventUnregister_m2B137EB3A28EADAA6BB8D149594C04992D3A264C (int64_t ___registrationHandle0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_advapi32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("advapi32.dll"), "EventUnregister", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(EventUnregister)(___registrationHandle0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___registrationHandle0);
	#endif

	return returnValue;
}
// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw::EventWriteTransferWrapper(System.Int64,System.Diagnostics.Tracing.EventDescriptor&,System.Guid*,System.Guid*,System.Int32,System.Diagnostics.Tracing.EventProvider/EventData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestEtw_EventWriteTransferWrapper_m0727EE35231CE9220FE99FAC23A92117A5B542BD (int64_t ___registrationHandle0, EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F * ___eventDescriptor1, Guid_t * ___activityId2, Guid_t * ___relatedActivityId3, int32_t ___userDataCount4, EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 * ___userData5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Guid_t  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int64_t L_0 = ___registrationHandle0;
		EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F * L_1 = ___eventDescriptor1;
		Guid_t * L_2 = ___activityId2;
		Guid_t * L_3 = ___relatedActivityId3;
		int32_t L_4 = ___userDataCount4;
		EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 * L_5 = ___userData5;
		int32_t L_6;
		L_6 = ManifestEtw_EventWriteTransfer_mA6183F1BF6BA1D4DC04A71FF22579589B26FA7A4(L_0, (EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F *)L_1, (Guid_t *)(Guid_t *)L_2, (Guid_t *)(Guid_t *)L_3, L_4, (EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 *)(EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 *)L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)87)))))
		{
			goto IL_002e;
		}
	}
	{
		Guid_t * L_8 = ___relatedActivityId3;
		if ((!(((uintptr_t)L_8) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_9 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		V_1 = L_9;
		int64_t L_10 = ___registrationHandle0;
		EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F * L_11 = ___eventDescriptor1;
		Guid_t * L_12 = ___activityId2;
		int32_t L_13 = ___userDataCount4;
		EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 * L_14 = ___userData5;
		int32_t L_15;
		L_15 = ManifestEtw_EventWriteTransfer_mA6183F1BF6BA1D4DC04A71FF22579589B26FA7A4(L_10, (EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F *)L_11, (Guid_t *)(Guid_t *)L_12, (Guid_t *)(Guid_t *)((uintptr_t)(&V_1)), L_13, (EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 *)(EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 *)L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_002e:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw::EventWriteTransfer(System.Int64,System.Diagnostics.Tracing.EventDescriptor&,System.Guid*,System.Guid*,System.Int32,System.Diagnostics.Tracing.EventProvider/EventData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestEtw_EventWriteTransfer_mA6183F1BF6BA1D4DC04A71FF22579589B26FA7A4 (int64_t ___registrationHandle0, EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F * ___eventDescriptor1, Guid_t * ___activityId2, Guid_t * ___relatedActivityId3, int32_t ___userDataCount4, EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 * ___userData5, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int64_t, EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F *, Guid_t *, Guid_t *, int32_t, EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_advapi32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(EventDescriptor_t932B329BA6E7F55510AC22858B583AADFC42E19F *) + sizeof(Guid_t *) + sizeof(Guid_t *) + sizeof(int32_t) + sizeof(EventData_t1934217B690805C7D2EBAF744C62E7B803A07D06 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("advapi32.dll"), "EventWriteTransfer", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(EventWriteTransfer)(___registrationHandle0, ___eventDescriptor1, ___activityId2, ___relatedActivityId3, ___userDataCount4, ___userData5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___registrationHandle0, ___eventDescriptor1, ___activityId2, ___relatedActivityId3, ___userDataCount4, ___userData5);
	#endif

	return returnValue;
}
// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw::EventActivityIdControl(Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/ActivityControl,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestEtw_EventActivityIdControl_mB200B22D9C1AA9A0912B1C705B63FD1D7C0582DE (uint32_t ___ControlCode0, Guid_t * ___ActivityId1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, Guid_t *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_advapi32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(Guid_t *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("advapi32.dll"), "EventActivityIdControl", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(EventActivityIdControl)(___ControlCode0, ___ActivityId1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ControlCode0, ___ActivityId1);
	#endif

	return returnValue;
}
// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw::EventSetInformation(System.Int64,Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestEtw_EventSetInformation_m83FF3AC000F04DECED549E38184786EAD73A0D0C (int64_t ___registrationHandle0, int32_t ___informationClass1, void* ___eventInformation2, int32_t ___informationLength3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int64_t, int32_t, void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_advapi32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("advapi32.dll"), "EventSetInformation", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(EventSetInformation)(___registrationHandle0, ___informationClass1, ___eventInformation2, ___informationLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___registrationHandle0, ___informationClass1, ___eventInformation2, ___informationLength3);
	#endif

	return returnValue;
}
// System.Int32 Microsoft.Win32.UnsafeNativeMethods/ManifestEtw::EnumerateTraceGuidsEx(Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS,System.Void*,System.Int32,System.Void*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestEtw_EnumerateTraceGuidsEx_m9E9E26909AAA5238788AEA4DB1352A48B9967EE7 (int32_t ___TraceQueryInfoClass0, void* ___InBuffer1, int32_t ___InBufferSize2, void* ___OutBuffer3, int32_t ___OutBufferSize4, int32_t* ___ReturnLength5, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, void*, int32_t, void*, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_advapi32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("advapi32.dll"), "EnumerateTraceGuidsEx", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_advapi32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(EnumerateTraceGuidsEx)(___TraceQueryInfoClass0, ___InBuffer1, ___InBufferSize2, ___OutBuffer3, ___OutBufferSize4, ___ReturnLength5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___TraceQueryInfoClass0, ___InBuffer1, ___InBufferSize2, ___OutBuffer3, ___OutBufferSize4, ___ReturnLength5);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Mono.Security.Uri/UriScheme
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke(const UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB& unmarshaled, UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_pinvoke& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_string(unmarshaled.get_scheme_0());
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_string(unmarshaled.get_delimiter_1());
	marshaled.___defaultPort_2 = unmarshaled.get_defaultPort_2();
}
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke_back(const UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_pinvoke& marshaled, UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB& unmarshaled)
{
	unmarshaled.set_scheme_0(il2cpp_codegen_marshal_string_result(marshaled.___scheme_0));
	unmarshaled.set_delimiter_1(il2cpp_codegen_marshal_string_result(marshaled.___delimiter_1));
	int32_t unmarshaled_defaultPort_temp_2 = 0;
	unmarshaled_defaultPort_temp_2 = marshaled.___defaultPort_2;
	unmarshaled.set_defaultPort_2(unmarshaled_defaultPort_temp_2);
}
// Conversion method for clean up from marshalling of: Mono.Security.Uri/UriScheme
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_pinvoke_cleanup(UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
// Conversion methods for marshalling of: Mono.Security.Uri/UriScheme
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_com(const UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB& unmarshaled, UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_com& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_scheme_0());
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_delimiter_1());
	marshaled.___defaultPort_2 = unmarshaled.get_defaultPort_2();
}
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_com_back(const UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_com& marshaled, UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB& unmarshaled)
{
	unmarshaled.set_scheme_0(il2cpp_codegen_marshal_bstring_result(marshaled.___scheme_0));
	unmarshaled.set_delimiter_1(il2cpp_codegen_marshal_bstring_result(marshaled.___delimiter_1));
	int32_t unmarshaled_defaultPort_temp_2 = 0;
	unmarshaled_defaultPort_temp_2 = marshaled.___defaultPort_2;
	unmarshaled.set_defaultPort_2(unmarshaled_defaultPort_temp_2);
}
// Conversion method for clean up from marshalling of: Mono.Security.Uri/UriScheme
IL2CPP_EXTERN_C void UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshal_com_cleanup(UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
// System.Void Mono.Security.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriScheme__ctor_m6343DEE07E2D8205507451AF5595A883EFC6E4A2 (UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB * __this, String_t* ___s0, String_t* ___d1, int32_t ___p2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		__this->set_scheme_0(L_0);
		String_t* L_1 = ___d1;
		__this->set_delimiter_1(L_1);
		int32_t L_2 = ___p2;
		__this->set_defaultPort_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void UriScheme__ctor_m6343DEE07E2D8205507451AF5595A883EFC6E4A2_AdjustorThunk (RuntimeObject * __this, String_t* ___s0, String_t* ___d1, int32_t ___p2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB * _thisAdjusted = reinterpret_cast<UriScheme_t3B7BA17407A0502944A677BEEE38787879AD8CFB *>(__this + _offset);
	UriScheme__ctor_m6343DEE07E2D8205507451AF5595A883EFC6E4A2(_thisAdjusted, ___s0, ___d1, ___p2, method);
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
// Conversion methods for marshalling of: System.Version/VersionResult
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke(const VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1& unmarshaled, VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception, NULL);
}
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke_back(const VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshaled_pinvoke& marshaled, VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1& unmarshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Version/VersionResult
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_pinvoke_cleanup(VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Version/VersionResult
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_com(const VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1& unmarshaled, VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshaled_com& marshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception, NULL);
}
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_com_back(const VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshaled_com& marshaled, VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1& unmarshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Version/VersionResult
IL2CPP_EXTERN_C void VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshal_com_cleanup(VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1_marshaled_com& marshaled)
{
}
// System.Void System.Version/VersionResult::Init(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_Init_m18FD38CFDBD92D0B2AD21F7E9168AF39A5ACFFD9 (VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * __this, String_t* ___argumentName0, bool ___canThrow1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___canThrow1;
		__this->set_m_canThrow_4(L_0);
		String_t* L_1 = ___argumentName0;
		__this->set_m_argumentName_3(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void VersionResult_Init_m18FD38CFDBD92D0B2AD21F7E9168AF39A5ACFFD9_AdjustorThunk (RuntimeObject * __this, String_t* ___argumentName0, bool ___canThrow1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * _thisAdjusted = reinterpret_cast<VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 *>(__this + _offset);
	VersionResult_Init_m18FD38CFDBD92D0B2AD21F7E9168AF39A5ACFFD9(_thisAdjusted, ___argumentName0, ___canThrow1, method);
}
// System.Void System.Version/VersionResult::SetFailure(System.Version/ParseFailureKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_SetFailure_m7D886BC14C5BE040B0BA5E1F810FDD2393D0FB0C (VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * __this, int32_t ___failure0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___failure0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		VersionResult_SetFailure_m6895BDEA769E4AE334A7D031C9AAC9C3D900C37F((VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 *)__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void VersionResult_SetFailure_m7D886BC14C5BE040B0BA5E1F810FDD2393D0FB0C_AdjustorThunk (RuntimeObject * __this, int32_t ___failure0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * _thisAdjusted = reinterpret_cast<VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 *>(__this + _offset);
	VersionResult_SetFailure_m7D886BC14C5BE040B0BA5E1F810FDD2393D0FB0C(_thisAdjusted, ___failure0, method);
}
// System.Void System.Version/VersionResult::SetFailure(System.Version/ParseFailureKind,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_SetFailure_m6895BDEA769E4AE334A7D031C9AAC9C3D900C37F (VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * __this, int32_t ___failure0, String_t* ___argument1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___failure0;
		__this->set_m_failure_1(L_0);
		String_t* L_1 = ___argument1;
		__this->set_m_exceptionArgument_2(L_1);
		bool L_2 = __this->get_m_canThrow_4();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_3;
		L_3 = VersionResult_GetVersionParseException_mCC37A95A0174077777354679E10DA6F36E600990((VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 *)__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VersionResult_SetFailure_m6895BDEA769E4AE334A7D031C9AAC9C3D900C37F_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void VersionResult_SetFailure_m6895BDEA769E4AE334A7D031C9AAC9C3D900C37F_AdjustorThunk (RuntimeObject * __this, int32_t ___failure0, String_t* ___argument1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * _thisAdjusted = reinterpret_cast<VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 *>(__this + _offset);
	VersionResult_SetFailure_m6895BDEA769E4AE334A7D031C9AAC9C3D900C37F(_thisAdjusted, ___failure0, ___argument1, method);
}
// System.Exception System.Version/VersionResult::GetVersionParseException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * VersionResult_GetVersionParseException_mCC37A95A0174077777354679E10DA6F36E600990 (VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral510ADF31D1E152C6A920A7E699AA2011696CB788);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67A8B307108B776E449960AB72201F944EB0EAAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ED71F768C05670E3698EF09100E41C9E3AC8113);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_m_failure_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_003b;
			}
			case 3:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_001f:
	{
		String_t* L_2 = __this->get_m_argumentName_3();
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002b:
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteral67A8B307108B776E449960AB72201F944EB0EAAA, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_003b:
	{
		String_t* L_6 = __this->get_m_exceptionArgument_2();
		String_t* L_7;
		L_7 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteral510ADF31D1E152C6A920A7E699AA2011696CB788, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_8, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0051:
	{
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		String_t* L_9 = __this->get_m_exceptionArgument_2();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_9, L_10, /*hidden argument*/NULL);
		goto IL_006b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0068;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.FormatException)
		V_1 = ((FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)__exception_local);
		goto IL_008b;
	} // end catch (depth: 1)

CATCH_0068:
	{ // begin catch(System.OverflowException)
		V_1 = ((OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)__exception_local);
		goto IL_008b;
	} // end catch (depth: 1)

IL_006b:
	{
		String_t* L_12;
		L_12 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteral7ED71F768C05670E3698EF09100E41C9E3AC8113, /*hidden argument*/NULL);
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_13 = (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)il2cpp_codegen_object_new(FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var);
		FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B(L_13, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_007b:
	{
		String_t* L_14;
		L_14 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteral67A8B307108B776E449960AB72201F944EB0EAAA, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_15 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_15, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_008b:
	{
		Exception_t * L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C  Exception_t * VersionResult_GetVersionParseException_mCC37A95A0174077777354679E10DA6F36E600990_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 * _thisAdjusted = reinterpret_cast<VersionResult_tBEB89FF4CFED02E383BC6F59FE5D0CA775DFECC1 *>(__this + _offset);
	Exception_t * _returnValue;
	_returnValue = VersionResult_GetVersionParseException_mCC37A95A0174077777354679E10DA6F36E600990(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Win32.Win32Native/WIN32_FIND_DATA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WIN32_FIND_DATA__ctor_mB7888151C7D80CA45AD0857773E8B1BB1CC003E3 (WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
IL2CPP_EXTERN_C void EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshal_pinvoke(const EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128& unmarshaled, EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_pinvoke& marshaled)
{
	Exception_t* ___restTokens_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'restTokens' of type 'EventRegistrationTokenList'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___restTokens_1Exception, NULL);
}
IL2CPP_EXTERN_C void EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshal_pinvoke_back(const EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_pinvoke& marshaled, EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128& unmarshaled)
{
	Exception_t* ___restTokens_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'restTokens' of type 'EventRegistrationTokenList'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___restTokens_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
IL2CPP_EXTERN_C void EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshal_pinvoke_cleanup(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
IL2CPP_EXTERN_C void EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshal_com(const EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128& unmarshaled, EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_com& marshaled)
{
	Exception_t* ___restTokens_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'restTokens' of type 'EventRegistrationTokenList'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___restTokens_1Exception, NULL);
}
IL2CPP_EXTERN_C void EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshal_com_back(const EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_com& marshaled, EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128& unmarshaled)
{
	Exception_t* ___restTokens_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'restTokens' of type 'EventRegistrationTokenList'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___restTokens_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
IL2CPP_EXTERN_C void EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshal_com_cleanup(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_com& marshaled)
{
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::.ctor(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenList__ctor_m06470FB422418EBC781CFC09992EE7D2F4EF9772 (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method)
{
	{
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_0 = ___token0;
		__this->set_firstToken_0(L_0);
		__this->set_restTokens_1((List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 *)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void EventRegistrationTokenList__ctor_m06470FB422418EBC781CFC09992EE7D2F4EF9772_AdjustorThunk (RuntimeObject * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * _thisAdjusted = reinterpret_cast<EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *>(__this + _offset);
	EventRegistrationTokenList__ctor_m06470FB422418EBC781CFC09992EE7D2F4EF9772(_thisAdjusted, ___token0, method);
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::Push(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenList_Push_mA05262483205E888368D766263A039078C98D8E8 (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1DE97F7A9186F5F2514E61E27556B63619978BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6EBDDD4002DC42EC1CD75D81C2AFCD1B41573693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * L_0 = __this->get_restTokens_1();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * L_1 = (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 *)il2cpp_codegen_object_new(List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9_il2cpp_TypeInfo_var);
		List_1__ctor_m6EBDDD4002DC42EC1CD75D81C2AFCD1B41573693(L_1, /*hidden argument*/List_1__ctor_m6EBDDD4002DC42EC1CD75D81C2AFCD1B41573693_RuntimeMethod_var);
		__this->set_restTokens_1(L_1);
		V_0 = (bool)1;
	}

IL_0017:
	{
		List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * L_2 = __this->get_restTokens_1();
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_3 = ___token0;
		NullCheck(L_2);
		List_1_Add_m1DE97F7A9186F5F2514E61E27556B63619978BD1(L_2, L_3, /*hidden argument*/List_1_Add_m1DE97F7A9186F5F2514E61E27556B63619978BD1_RuntimeMethod_var);
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool EventRegistrationTokenList_Push_mA05262483205E888368D766263A039078C98D8E8_AdjustorThunk (RuntimeObject * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * _thisAdjusted = reinterpret_cast<EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *>(__this + _offset);
	bool _returnValue;
	_returnValue = EventRegistrationTokenList_Push_mA05262483205E888368D766263A039078C98D8E8(_thisAdjusted, ___token0, method);
	return _returnValue;
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::Pop(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenList_Pop_mEDB55C6642FBEE0B03BDC2C06E84FBEFAE96FCDB (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mF9A7A06A7EA9E7D812A1BBA95A8D62824437CDD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF2CB3D49AE42647D38FDC61E299623F08ACAE1AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m35903D896081A6BB024566CDF4DDEFB5AF3E0D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * L_0 = __this->get_restTokens_1();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * L_1 = __this->get_restTokens_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF2CB3D49AE42647D38FDC61E299623F08ACAE1AB_inline(L_1, /*hidden argument*/List_1_get_Count_mF2CB3D49AE42647D38FDC61E299623F08ACAE1AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0023;
		}
	}

IL_0015:
	{
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * L_3 = ___token0;
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_4 = __this->get_firstToken_0();
		*(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 *)L_3 = L_4;
		return (bool)0;
	}

IL_0023:
	{
		List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * L_5 = __this->get_restTokens_1();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mF2CB3D49AE42647D38FDC61E299623F08ACAE1AB_inline(L_5, /*hidden argument*/List_1_get_Count_mF2CB3D49AE42647D38FDC61E299623F08ACAE1AB_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * L_7 = ___token0;
		List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * L_8 = __this->get_restTokens_1();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_10;
		L_10 = List_1_get_Item_m35903D896081A6BB024566CDF4DDEFB5AF3E0D16_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m35903D896081A6BB024566CDF4DDEFB5AF3E0D16_RuntimeMethod_var);
		*(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 *)L_7 = L_10;
		List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * L_11 = __this->get_restTokens_1();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		List_1_RemoveAt_mF9A7A06A7EA9E7D812A1BBA95A8D62824437CDD6(L_11, L_12, /*hidden argument*/List_1_RemoveAt_mF9A7A06A7EA9E7D812A1BBA95A8D62824437CDD6_RuntimeMethod_var);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool EventRegistrationTokenList_Pop_mEDB55C6642FBEE0B03BDC2C06E84FBEFAE96FCDB_AdjustorThunk (RuntimeObject * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * ___token0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * _thisAdjusted = reinterpret_cast<EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *>(__this + _offset);
	bool _returnValue;
	_returnValue = EventRegistrationTokenList_Pop_mEDB55C6642FBEE0B03BDC2C06E84FBEFAE96FCDB(_thisAdjusted, ___token0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl::GetEventRegistrationTokenTable(System.Object,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * ManagedEventRegistrationImpl_GetEventRegistrationTokenTable_m8BBB3CF664BBC6EA31B8469EADEFD8EC1D82B8D3 (RuntimeObject * ___instance0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_m0551D1CCD60B0475B582EBAA8361A70B4E7B6C44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_mA9765288CD2998D56E994962E442DD75000910AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB400B84012C61777C194CFE7E99321AB4018F5CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD07E3FD173466A7752076035D895506ED1984C46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m91F814885C154732EF09B1FE9212DC37ED6E1278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC94B847A4D9A38CC2A74CC5564F14BF46CB63016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * V_0 = NULL;
	bool V_1 = false;
	Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 * V_2 = NULL;
	Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * V_3 = NULL;
	Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * L_0 = ((ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_StaticFields*)il2cpp_codegen_static_fields_for(ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var))->get_s_eventRegistrations_0();
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			V_2 = (Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 *)NULL;
			IL2CPP_RUNTIME_CLASS_INIT(ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var);
			ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * L_2 = ((ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_StaticFields*)il2cpp_codegen_static_fields_for(ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var))->get_s_eventRegistrations_0();
			il2cpp_codegen_memory_barrier();
			RuntimeObject * L_3 = ___instance0;
			NullCheck(L_2);
			bool L_4;
			L_4 = ConditionalWeakTable_2_TryGetValue_mA9765288CD2998D56E994962E442DD75000910AA(L_2, L_3, (Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 **)(&V_2), /*hidden argument*/ConditionalWeakTable_2_TryGetValue_mA9765288CD2998D56E994962E442DD75000910AA_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0039;
			}
		}

IL_0025:
		{
			Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 * L_5 = (Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 *)il2cpp_codegen_object_new(Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mC94B847A4D9A38CC2A74CC5564F14BF46CB63016(L_5, /*hidden argument*/Dictionary_2__ctor_mC94B847A4D9A38CC2A74CC5564F14BF46CB63016_RuntimeMethod_var);
			V_2 = L_5;
			IL2CPP_RUNTIME_CLASS_INIT(ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var);
			ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * L_6 = ((ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_StaticFields*)il2cpp_codegen_static_fields_for(ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var))->get_s_eventRegistrations_0();
			il2cpp_codegen_memory_barrier();
			RuntimeObject * L_7 = ___instance0;
			Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 * L_8 = V_2;
			NullCheck(L_6);
			ConditionalWeakTable_2_Add_m0551D1CCD60B0475B582EBAA8361A70B4E7B6C44(L_6, L_7, L_8, /*hidden argument*/ConditionalWeakTable_2_Add_m0551D1CCD60B0475B582EBAA8361A70B4E7B6C44_RuntimeMethod_var);
		}

IL_0039:
		{
			V_3 = (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)NULL;
			Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 * L_9 = V_2;
			Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_10 = ___removeMethod1;
			NullCheck(L_10);
			MethodInfo_t * L_11;
			L_11 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			bool L_12;
			L_12 = Dictionary_2_TryGetValue_mD07E3FD173466A7752076035D895506ED1984C46(L_9, L_11, (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 **)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_mD07E3FD173466A7752076035D895506ED1984C46_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_005e;
			}
		}

IL_004b:
		{
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_13 = (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)il2cpp_codegen_object_new(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m91F814885C154732EF09B1FE9212DC37ED6E1278(L_13, /*hidden argument*/Dictionary_2__ctor_m91F814885C154732EF09B1FE9212DC37ED6E1278_RuntimeMethod_var);
			V_3 = L_13;
			Dictionary_2_t6C6D04C7C1300F445B3AE7ED8519CB478C0DBE40 * L_14 = V_2;
			Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_15 = ___removeMethod1;
			NullCheck(L_15);
			MethodInfo_t * L_16;
			L_16 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_15, /*hidden argument*/NULL);
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_17 = V_3;
			NullCheck(L_14);
			Dictionary_2_Add_mB400B84012C61777C194CFE7E99321AB4018F5CB(L_14, L_16, L_17, /*hidden argument*/Dictionary_2_Add_mB400B84012C61777C194CFE7E99321AB4018F5CB_RuntimeMethod_var);
		}

IL_005e:
		{
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_18 = V_3;
			V_4 = L_18;
			IL2CPP_LEAVE(0x6D, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			bool L_19 = V_1;
			if (!L_19)
			{
				goto IL_006c;
			}
		}

IL_0066:
		{
			ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * L_20 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_20, /*hidden argument*/NULL);
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
	}

IL_006d:
	{
		Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_21 = V_4;
		return L_21;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedEventRegistrationImpl__cctor_m9D9D3E87A54BD9C1A459323657CC9C99DB63995C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2__ctor_m601D3139411A67E8BD272B9F74D9E96D700864CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * L_0 = (ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC *)il2cpp_codegen_object_new(ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2__ctor_m601D3139411A67E8BD272B9F74D9E96D700864CF(L_0, /*hidden argument*/ConditionalWeakTable_2__ctor_m601D3139411A67E8BD272B9F74D9E96D700864CF_RuntimeMethod_var);
		il2cpp_codegen_memory_barrier();
		((ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_StaticFields*)il2cpp_codegen_static_fields_for(ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var))->set_s_eventRegistrations_0(L_0);
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
// System.Object System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::GetInstanceKey(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NativeOrStaticEventRegistrationImpl_GetInstanceKey_m609103D809620576492B03F7BFB8FC959231E174 (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_0 = ___removeMethod0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_3 = ___removeMethod0;
		NullCheck(L_3);
		MethodInfo_t * L_4;
		L_4 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		return L_5;
	}

IL_0016:
	{
		RuntimeObject * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_7;
		L_7 = Marshal_GetRawIUnknownForComObjectNoAddRef_m59F8F230B551B6694197C53CE19DE8E2E49C96C2(L_6, /*hidden argument*/NULL);
		intptr_t L_8 = L_7;
		RuntimeObject * L_9 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}
}
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::GetEventRegistrationTokenTableNoCreate(System.Object,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * NativeOrStaticEventRegistrationImpl_GetEventRegistrationTokenTableNoCreate_m2FDC87A2509BEB899C090FC0D2C3A5D0888B3250 (RuntimeObject * ___instance0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** ___tokenListCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___instance0;
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_1 = ___removeMethod1;
		TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** L_2 = ___tokenListCount2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_3;
		L_3 = NativeOrStaticEventRegistrationImpl_GetEventRegistrationTokenTableInternal_m6064989801142C582D1A73F99005F96F73A3A396(L_0, L_1, (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC **)L_2, (bool)0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::GetOrCreateEventRegistrationTokenTable(System.Object,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * NativeOrStaticEventRegistrationImpl_GetOrCreateEventRegistrationTokenTable_mE0D26BCAD8501EEF779A9CB54A47E7621638426F (RuntimeObject * ___instance0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** ___tokenListCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___instance0;
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_1 = ___removeMethod1;
		TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** L_2 = ___tokenListCount2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_3;
		L_3 = NativeOrStaticEventRegistrationImpl_GetEventRegistrationTokenTableInternal_m6064989801142C582D1A73F99005F96F73A3A396(L_0, L_1, (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC **)L_2, (bool)1, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::GetEventRegistrationTokenTableInternal(System.Object,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * NativeOrStaticEventRegistrationImpl_GetEventRegistrationTokenTableInternal_m6064989801142C582D1A73F99005F96F73A3A396 (RuntimeObject * ___instance0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** ___tokenListCount2, bool ___createIfNotFound3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2__ctor_m1E9F5FE1A13473964C511F8D95EBEF189DCD2E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m39CFB38833568CC7622743D57EE9AF8B284C8CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m16CF0B1A3BAF60BEB727EC4901096F8034A3E469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * V_1 = NULL;
	bool V_2 = false;
	EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___instance0;
		(&V_0)->set_target_0(L_0);
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_1 = ___removeMethod1;
		NullCheck(L_1);
		MethodInfo_t * L_2;
		L_2 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_1, /*hidden argument*/NULL);
		(&V_0)->set_method_1(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * L_3 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventRegistrations_0();
		il2cpp_codegen_memory_barrier();
		V_1 = L_3;
		V_2 = (bool)0;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * L_4 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_2), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
			Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * L_5 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventRegistrations_0();
			il2cpp_codegen_memory_barrier();
			EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_6 = V_0;
			NullCheck(L_5);
			bool L_7;
			L_7 = Dictionary_2_TryGetValue_m16CF0B1A3BAF60BEB727EC4901096F8034A3E469(L_5, L_6, (EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86 *)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_m16CF0B1A3BAF60BEB727EC4901096F8034A3E469_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0072;
			}
		}

IL_0038:
		{
			bool L_8 = ___createIfNotFound3;
			if (L_8)
			{
				goto IL_0043;
			}
		}

IL_003b:
		{
			TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** L_9 = ___tokenListCount2;
			*((RuntimeObject **)L_9) = (RuntimeObject *)NULL;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)(RuntimeObject *)NULL);
			V_4 = (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)NULL;
			IL2CPP_LEAVE(0x8E, FINALLY_0084);
		}

IL_0043:
		{
			il2cpp_codegen_initobj((&V_3), sizeof(EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86 ));
			ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_10 = (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)il2cpp_codegen_object_new(ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229_il2cpp_TypeInfo_var);
			ConditionalWeakTable_2__ctor_m1E9F5FE1A13473964C511F8D95EBEF189DCD2E87(L_10, /*hidden argument*/ConditionalWeakTable_2__ctor_m1E9F5FE1A13473964C511F8D95EBEF189DCD2E87_RuntimeMethod_var);
			(&V_3)->set_registrationTable_0(L_10);
			EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_11 = V_0;
			TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * L_12 = (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC *)il2cpp_codegen_object_new(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC_il2cpp_TypeInfo_var);
			TokenListCount__ctor_m9E1063961516A2BB5595CA94A909CF9768000652(L_12, L_11, /*hidden argument*/NULL);
			(&V_3)->set_tokenListCount_1(L_12);
			IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
			Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * L_13 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventRegistrations_0();
			il2cpp_codegen_memory_barrier();
			EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_14 = V_0;
			EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  L_15 = V_3;
			NullCheck(L_13);
			Dictionary_2_Add_m39CFB38833568CC7622743D57EE9AF8B284C8CFB(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_Add_m39CFB38833568CC7622743D57EE9AF8B284C8CFB_RuntimeMethod_var);
		}

IL_0072:
		{
			TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** L_16 = ___tokenListCount2;
			EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  L_17 = V_3;
			TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * L_18 = L_17.get_tokenListCount_1();
			*((RuntimeObject **)L_16) = (RuntimeObject *)L_18;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_16, (void*)(RuntimeObject *)L_18);
			EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86  L_19 = V_3;
			ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_20 = L_19.get_registrationTable_0();
			V_4 = L_20;
			IL2CPP_LEAVE(0x8E, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		{
			bool L_21 = V_2;
			if (!L_21)
			{
				goto IL_008d;
			}
		}

IL_0087:
		{
			Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * L_22 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_22, /*hidden argument*/NULL);
		}

IL_008d:
		{
			IL2CPP_END_FINALLY(132)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
	}

IL_008e:
	{
		ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_23 = V_4;
		return L_23;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeOrStaticEventRegistrationImpl__cctor_m9DEB57206FC263D96BA7386316139231DACC29FA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1535F001EADDA8F2EB4E29E7C49B798D2817E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCacheKeyEqualityComparer_tEF90055C112EAE4D591A1BCF368738AAE742D267_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventCacheKeyEqualityComparer_tEF90055C112EAE4D591A1BCF368738AAE742D267 * L_0 = (EventCacheKeyEqualityComparer_tEF90055C112EAE4D591A1BCF368738AAE742D267 *)il2cpp_codegen_object_new(EventCacheKeyEqualityComparer_tEF90055C112EAE4D591A1BCF368738AAE742D267_il2cpp_TypeInfo_var);
		EventCacheKeyEqualityComparer__ctor_m20598F19ACD128C7A2C80DF66C357DFF5918B070(L_0, /*hidden argument*/NULL);
		Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * L_1 = (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 *)il2cpp_codegen_object_new(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1535F001EADDA8F2EB4E29E7C49B798D2817E491(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m1535F001EADDA8F2EB4E29E7C49B798D2817E491_RuntimeMethod_var);
		il2cpp_codegen_memory_barrier();
		((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->set_s_eventRegistrations_0(L_1);
		MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * L_2 = (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD *)il2cpp_codegen_object_new(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD_il2cpp_TypeInfo_var);
		MyReaderWriterLock__ctor_m616FE6AB300A5E702B39CBCDAD942EA9930F9A87(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->set_s_eventCacheRWLock_1(L_2);
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
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * _thisAdjusted = reinterpret_cast<YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *>(__this + _offset);
	bool _returnValue;
	_returnValue = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_OnCompleted_m7F0FBDFB78A15C9946F187FC4485799CFA273D73 (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___continuation0;
		IL2CPP_RUNTIME_CLASS_INIT(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void YieldAwaiter_OnCompleted_m7F0FBDFB78A15C9946F187FC4485799CFA273D73_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * _thisAdjusted = reinterpret_cast<YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *>(__this + _offset);
	YieldAwaiter_OnCompleted_m7F0FBDFB78A15C9946F187FC4485799CFA273D73(_thisAdjusted, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_UnsafeOnCompleted_mFDE8CFD013E3825F11C68314E8957E6DAF79C6A5 (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___continuation0;
		IL2CPP_RUNTIME_CLASS_INIT(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void YieldAwaiter_UnsafeOnCompleted_mFDE8CFD013E3825F11C68314E8957E6DAF79C6A5_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * _thisAdjusted = reinterpret_cast<YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *>(__this + _offset);
	YieldAwaiter_UnsafeOnCompleted_mFDE8CFD013E3825F11C68314E8957E6DAF79C6A5(_thisAdjusted, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::QueueContinuation(System.Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, bool ___flowContext1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * V_0 = NULL;
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * V_1 = NULL;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___continuation0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YieldAwaiter_QueueContinuation_m74F0C35BAB324C9DB810F8F60BA6BDBCAA5E0201_RuntimeMethod_var)));
	}

IL_000e:
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_2;
		L_2 = SynchronizationContext_get_CurrentNoFlow_mF134FBE4BA52932C990D3824A9CF960FCA9F44AD(/*hidden argument*/NULL);
		V_0 = L_2;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_4 = V_0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_10 = ((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields*)il2cpp_codegen_static_fields_for(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var))->get_s_sendOrPostCallbackRunAction_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = ___continuation0;
		NullCheck(L_9);
		VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_9, L_10, L_11);
		return;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_12;
		L_12 = TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01(/*hidden argument*/NULL);
		V_1 = L_12;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_13 = V_1;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_14;
		L_14 = TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_13) == ((RuntimeObject*)(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_14))))
		{
			goto IL_0066;
		}
	}
	{
		bool L_15 = ___flowContext1;
		if (!L_15)
		{
			goto IL_0059;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_16 = ((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields*)il2cpp_codegen_static_fields_for(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var))->get_s_waitCallbackRunAction_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_17 = ___continuation0;
		bool L_18;
		L_18 = ThreadPool_QueueUserWorkItem_mA55899F403EAC69AE3C72A4F3E5FD207C131616C(L_16, L_17, /*hidden argument*/NULL);
		return;
	}

IL_0059:
	{
		IL2CPP_RUNTIME_CLASS_INIT(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_19 = ((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields*)il2cpp_codegen_static_fields_for(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var))->get_s_waitCallbackRunAction_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = ___continuation0;
		bool L_21;
		L_21 = ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6(L_19, L_20, /*hidden argument*/NULL);
		return;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * L_22;
		L_22 = Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline(/*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_23 = ___continuation0;
		il2cpp_codegen_initobj((&V_2), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_24 = V_2;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_25 = V_1;
		NullCheck(L_22);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_26;
		L_26 = TaskFactory_StartNew_m5617E5F6A6D949C2E21A7E525FAC899E4B871904(L_22, L_23, L_24, 1, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::RunAction(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_RunAction_mBBA702DC1D80A6DF9715E898DD994F965E946759 (RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * _thisAdjusted = reinterpret_cast<YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *>(__this + _offset);
	YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD(_thisAdjusted, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter__cctor_m44838E67AAFC9DD73295F66497F7A03FBD4A2C3B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldAwaiter_RunAction_mBBA702DC1D80A6DF9715E898DD994F965E946759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_0 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)il2cpp_codegen_object_new(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5(L_0, NULL, (intptr_t)((intptr_t)YieldAwaiter_RunAction_mBBA702DC1D80A6DF9715E898DD994F965E946759_RuntimeMethod_var), /*hidden argument*/NULL);
		((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields*)il2cpp_codegen_static_fields_for(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var))->set_s_waitCallbackRunAction_0(L_0);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_1 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_1, NULL, (intptr_t)((intptr_t)YieldAwaiter_RunAction_mBBA702DC1D80A6DF9715E898DD994F965E946759_RuntimeMethod_var), /*hidden argument*/NULL);
		((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields*)il2cpp_codegen_static_fields_for(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_il2cpp_TypeInfo_var))->set_s_sendOrPostCallbackRunAction_1(L_1);
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___keyCode0);

	return static_cast<bool>(returnValue);
}
// System.Void System.Console/WindowsConsole/WindowsCancelHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsCancelHandler__ctor_mE4F754395799D3462EE23E39126EE0AF14709B8E (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Console/WindowsConsole/WindowsCancelHandler::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsCancelHandler_Invoke_mC8798AF8C04F477C72E281B924EBE6C738548068 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, const RuntimeMethod* method)
{
	bool result = false;
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
				typedef bool (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___keyCode0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___keyCode0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___keyCode0);
					else
						result = GenericVirtFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___keyCode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___keyCode0);
					else
						result = VirtFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___keyCode0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___keyCode0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Console/WindowsConsole/WindowsCancelHandler::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsCancelHandler_BeginInvoke_m3F4FB809BF25992CAA49781D6C2DAE6B8B967322 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___keyCode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean System.Console/WindowsConsole/WindowsCancelHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsCancelHandler_EndInvoke_m46613D19C0EB5D2A0B5CCB7BDA60906C95908609 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.Stream/SynchronousAsyncResult/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7FB8166A66FF58669CB59F32A9301B483CB8BE4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * L_0 = (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB *)il2cpp_codegen_object_new(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.IO.Stream/SynchronousAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235 (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.ManualResetEvent System.IO.Stream/SynchronousAsyncResult/<>c::<get_AsyncWaitHandle>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * U3CU3Ec_U3Cget_AsyncWaitHandleU3Eb__12_0_m30F2C3EEF4109B825474FF30D6A4A4291DC3848B (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_0, (bool)1, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA (EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * __this, Guid_t * ___sourceId0, int32_t ___isEnabled1, uint8_t ___level2, int64_t ___matchAnyKeywords3, int64_t ___matchAllKeywords4, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B * ___filterData5, void* ___callbackContext6, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Guid_t *, int32_t, uint8_t, int64_t, int64_t, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B *, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___sourceId0, ___isEnabled1, ___level2, ___matchAnyKeywords3, ___matchAllKeywords4, ___filterData5, ___callbackContext6);

}
// System.Void Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EtwEnableCallback__ctor_m19A3169D1429C1B3A5858560492A85CE4019902F (EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback::Invoke(System.Guid&,System.Int32,System.Byte,System.Int64,System.Int64,Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EtwEnableCallback_Invoke_mE76F307477C318E5D8D8CAC3B2304F7D2093008A (EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * __this, Guid_t * ___sourceId0, int32_t ___isEnabled1, uint8_t ___level2, int64_t ___matchAnyKeywords3, int64_t ___matchAllKeywords4, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B * ___filterData5, void* ___callbackContext6, const RuntimeMethod* method)
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
			if (___parameterCount == 7)
			{
				// open
				typedef void (*FunctionPointerType) (Guid_t *, int32_t, uint8_t, int64_t, int64_t, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sourceId0, ___isEnabled1, ___level2, ___matchAnyKeywords3, ___matchAllKeywords4, ___filterData5, ___callbackContext6, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Guid_t *, int32_t, uint8_t, int64_t, int64_t, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sourceId0, ___isEnabled1, ___level2, ___matchAnyKeywords3, ___matchAllKeywords4, ___filterData5, ___callbackContext6, targetMethod);
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
						GenericInterfaceActionInvoker7< Guid_t *, int32_t, uint8_t, int64_t, int64_t, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B *, void* >::Invoke(targetMethod, targetThis, ___sourceId0, ___isEnabled1, ___level2, ___matchAnyKeywords3, ___matchAllKeywords4, ___filterData5, ___callbackContext6);
					else
						GenericVirtActionInvoker7< Guid_t *, int32_t, uint8_t, int64_t, int64_t, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B *, void* >::Invoke(targetMethod, targetThis, ___sourceId0, ___isEnabled1, ___level2, ___matchAnyKeywords3, ___matchAllKeywords4, ___filterData5, ___callbackContext6);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker7< Guid_t *, int32_t, uint8_t, int64_t, int64_t, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B *, void* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sourceId0, ___isEnabled1, ___level2, ___matchAnyKeywords3, ___matchAllKeywords4, ___filterData5, ___callbackContext6);
					else
						VirtActionInvoker7< Guid_t *, int32_t, uint8_t, int64_t, int64_t, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B *, void* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sourceId0, ___isEnabled1, ___level2, ___matchAnyKeywords3, ___matchAllKeywords4, ___filterData5, ___callbackContext6);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint8_t, int64_t, int64_t, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B *, void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(___sourceId0) - 1), ___isEnabled1, ___level2, ___matchAnyKeywords3, ___matchAllKeywords4, ___filterData5, ___callbackContext6, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Guid_t *, int32_t, uint8_t, int64_t, int64_t, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B *, void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sourceId0, ___isEnabled1, ___level2, ___matchAnyKeywords3, ___matchAllKeywords4, ___filterData5, ___callbackContext6, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback::BeginInvoke(System.Guid&,System.Int32,System.Byte,System.Int64,System.Int64,Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EtwEnableCallback_BeginInvoke_mAE1786628A294A8535581BEA921EB9EF6A68BDB1 (EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * __this, Guid_t * ___sourceId0, int32_t ___isEnabled1, uint8_t ___level2, int64_t ___matchAnyKeywords3, int64_t ___matchAllKeywords4, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B * ___filterData5, void* ___callbackContext6, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback7, RuntimeObject * ___object8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[8] = {0};
	__d_args[0] = Box(Guid_t_il2cpp_TypeInfo_var, &*___sourceId0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___isEnabled1);
	__d_args[2] = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &___level2);
	__d_args[3] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___matchAnyKeywords3);
	__d_args[4] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___matchAllKeywords4);
	__d_args[5] = ___filterData5;
	__d_args[6] = ___callbackContext6;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);;
}
// System.Void Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback::EndInvoke(System.Guid&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EtwEnableCallback_EndInvoke_mB587EBC335C363C5C16D30B8CF93E946768391B3 (EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * __this, Guid_t * ___sourceId0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___sourceId0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry
IL2CPP_EXTERN_C void EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshal_pinvoke(const EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86& unmarshaled, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshaled_pinvoke& marshaled)
{
	Exception_t* ___registrationTable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'registrationTable' of type 'EventCacheEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___registrationTable_0Exception, NULL);
}
IL2CPP_EXTERN_C void EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshal_pinvoke_back(const EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshaled_pinvoke& marshaled, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86& unmarshaled)
{
	Exception_t* ___registrationTable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'registrationTable' of type 'EventCacheEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___registrationTable_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry
IL2CPP_EXTERN_C void EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshal_pinvoke_cleanup(EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry
IL2CPP_EXTERN_C void EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshal_com(const EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86& unmarshaled, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshaled_com& marshaled)
{
	Exception_t* ___registrationTable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'registrationTable' of type 'EventCacheEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___registrationTable_0Exception, NULL);
}
IL2CPP_EXTERN_C void EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshal_com_back(const EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshaled_com& marshaled, EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86& unmarshaled)
{
	Exception_t* ___registrationTable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'registrationTable' of type 'EventCacheEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___registrationTable_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry
IL2CPP_EXTERN_C void EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshal_com_cleanup(EventCacheEntry_t0358C3C074463FD01FA32FC97C9FD1215A9BBF86_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
IL2CPP_EXTERN_C void EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshal_pinvoke(const EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639& unmarshaled, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_pinvoke& marshaled)
{
	Exception_t* ___method_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'method' of type 'EventCacheKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___method_1Exception, NULL);
}
IL2CPP_EXTERN_C void EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshal_pinvoke_back(const EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_pinvoke& marshaled, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639& unmarshaled)
{
	Exception_t* ___method_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'method' of type 'EventCacheKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___method_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
IL2CPP_EXTERN_C void EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshal_pinvoke_cleanup(EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
IL2CPP_EXTERN_C void EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshal_com(const EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639& unmarshaled, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_com& marshaled)
{
	Exception_t* ___method_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'method' of type 'EventCacheKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___method_1Exception, NULL);
}
IL2CPP_EXTERN_C void EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshal_com_back(const EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_com& marshaled, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639& unmarshaled)
{
	Exception_t* ___method_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'method' of type 'EventCacheKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___method_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
IL2CPP_EXTERN_C void EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshal_com_cleanup(EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_com& marshaled)
{
}
// System.String System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventCacheKey_ToString_m066D135162AD1226E74B5BAE680444BCE5456204 (EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		RuntimeObject * L_3 = __this->get_target_0();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		MethodInfo_t * L_6 = __this->get_method_1();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_8;
		L_8 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  String_t* EventCacheKey_ToString_m066D135162AD1226E74B5BAE680444BCE5456204_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 * _thisAdjusted = reinterpret_cast<EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EventCacheKey_ToString_m066D135162AD1226E74B5BAE680444BCE5456204(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKeyEqualityComparer::Equals(System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventCacheKeyEqualityComparer_Equals_mA6B739E5C0B4C783803C46B0483CA3D577189A66 (EventCacheKeyEqualityComparer_tEF90055C112EAE4D591A1BCF368738AAE742D267 * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___lhs0, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___rhs1, const RuntimeMethod* method)
{
	{
		EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_0 = ___lhs0;
		RuntimeObject * L_1 = L_0.get_target_0();
		EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_2 = ___rhs1;
		RuntimeObject * L_3 = L_2.get_target_0();
		bool L_4;
		L_4 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_5 = ___lhs0;
		MethodInfo_t * L_6 = L_5.get_method_1();
		EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_7 = ___rhs1;
		MethodInfo_t * L_8 = L_7.get_method_1();
		bool L_9;
		L_9 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKeyEqualityComparer::GetHashCode(System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventCacheKeyEqualityComparer_GetHashCode_m9465D0B3965E8F008A8E545415BE4CF204EDC637 (EventCacheKeyEqualityComparer_tEF90055C112EAE4D591A1BCF368738AAE742D267 * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, const RuntimeMethod* method)
{
	{
		EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_0 = ___key0;
		RuntimeObject * L_1 = L_0.get_target_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_3 = ___key0;
		MethodInfo_t * L_4 = L_3.get_method_1();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		return ((int32_t)((int32_t)L_2^(int32_t)L_5));
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKeyEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCacheKeyEqualityComparer__ctor_m20598F19ACD128C7A2C80DF66C357DFF5918B070 (EventCacheKeyEqualityComparer_tEF90055C112EAE4D591A1BCF368738AAE742D267 * __this, const RuntimeMethod* method)
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
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::.ctor(System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenListWithCount__ctor_m09819A938F29C2DD7D8E2ACCC5249E6B7275E748 (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * __this, TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ___tokenListCount0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * L_0 = ___tokenListCount0;
		__this->set__tokenListCount_0(L_0);
		TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * L_1 = __this->get__tokenListCount_0();
		NullCheck(L_1);
		TokenListCount_Inc_m9360F7545D9ED25559DD8CF8D6096C2320F824B8(L_1, /*hidden argument*/NULL);
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_2 = ___token1;
		EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  L_3;
		memset((&L_3), 0, sizeof(L_3));
		EventRegistrationTokenList__ctor_m06470FB422418EBC781CFC09992EE7D2F4EF9772((&L_3), L_2, /*hidden argument*/NULL);
		__this->set__tokenList_1(L_3);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenListWithCount_Finalize_m359EB074365C03B54E7579947CC3AE0D122BCBD2 (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * L_0 = __this->get__tokenListCount_0();
		NullCheck(L_0);
		TokenListCount_Dec_m3316C5B76EA893ADDEB8D5517B2B3627213B2EAD(L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::Push(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenListWithCount_Push_m966CF9B4B55E54DADA94B9B325053F115B9421F5 (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method)
{
	{
		EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * L_0 = __this->get_address_of__tokenList_1();
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_1 = ___token0;
		bool L_2;
		L_2 = EventRegistrationTokenList_Push_mA05262483205E888368D766263A039078C98D8E8((EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::Pop(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenListWithCount_Pop_mB0D869EA5FC0BB430DB9BCF253396C6B5F7D20FB (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * ___token0, const RuntimeMethod* method)
{
	{
		EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * L_0 = __this->get_address_of__tokenList_1();
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * L_1 = ___token0;
		bool L_2;
		L_2 = EventRegistrationTokenList_Pop_mEDB55C6642FBEE0B03BDC2C06E84FBEFAE96FCDB((EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)L_0, (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 *)L_1, /*hidden argument*/NULL);
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
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock__ctor_m616FE6AB300A5E702B39CBCDAD942EA9930F9A87 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::AcquireReaderLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_AcquireReaderLock_m4C64A27901CB970D8F6FA8A4AE98B8980C8138AD (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	{
		MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
	}

IL_0006:
	{
		int32_t L_0 = __this->get_owners_1();
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		uint32_t L_1 = __this->get_numWriteWaiters_2();
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = __this->get_owners_1();
		__this->set_owners_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		goto IL_0053;
	}

IL_0027:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_3 = __this->get_readEvent_5();
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_4 = __this->get_address_of_readEvent_5();
		MyReaderWriterLock_LazyCreateEvent_m328FBB8853141441D96D58F4047B68C5ABB4CA65(__this, (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C **)L_4, (bool)0, /*hidden argument*/NULL);
		goto IL_0006;
	}

IL_003e:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_5 = __this->get_readEvent_5();
		uint32_t* L_6 = __this->get_address_of_numReadWaiters_3();
		int32_t L_7 = ___millisecondsTimeout0;
		MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84(__this, L_5, (uint32_t*)L_6, L_7, /*hidden argument*/NULL);
		goto IL_0006;
	}

IL_0053:
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::AcquireWriterLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_AcquireWriterLock_mFE4A81BB90B00469143E80C143329CDEC962D8C6 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	{
		MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
	}

IL_0006:
	{
		int32_t L_0 = __this->get_owners_1();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->set_owners_1((-1));
		goto IL_0043;
	}

IL_0017:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_1 = __this->get_writeEvent_4();
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_2 = __this->get_address_of_writeEvent_4();
		MyReaderWriterLock_LazyCreateEvent_m328FBB8853141441D96D58F4047B68C5ABB4CA65(__this, (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C **)L_2, (bool)1, /*hidden argument*/NULL);
		goto IL_0006;
	}

IL_002e:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_3 = __this->get_writeEvent_4();
		uint32_t* L_4 = __this->get_address_of_numWriteWaiters_2();
		int32_t L_5 = ___millisecondsTimeout0;
		MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84(__this, L_3, (uint32_t*)L_4, L_5, /*hidden argument*/NULL);
		goto IL_0006;
	}

IL_0043:
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ReleaseReaderLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ReleaseReaderLock_m9957FB580A0C803C269D10DB3C7B9482FF46A94D (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_owners_1();
		__this->set_owners_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		MyReaderWriterLock_ExitAndWakeUpAppropriateWaiters_mC475D42EA67351F7E655E3B7A6D05C5747313BE3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ReleaseWriterLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ReleaseWriterLock_m919CAFF21CB0B2FE1E8DB9FA84E2B20C5782377C (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_owners_1();
		__this->set_owners_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		MyReaderWriterLock_ExitAndWakeUpAppropriateWaiters_mC475D42EA67351F7E655E3B7A6D05C5747313BE3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_LazyCreateEvent_m328FBB8853141441D96D58F4047B68C5ABB4CA65 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** ___waitEvent0, bool ___makeAutoResetEvent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * V_0 = NULL;
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		bool L_0 = ___makeAutoResetEvent1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * L_1 = (AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D *)il2cpp_codegen_object_new(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m72D2A390415B58E10CA21E260881C88E50D9F35C(L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0019;
	}

IL_0012:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_2 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_2, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0019:
	{
		MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_3 = ___waitEvent0;
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_4 = *((EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C **)L_3);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_5 = ___waitEvent0;
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_6 = V_0;
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_6);
	}

IL_0026:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___waitEvent0, uint32_t* ___numWaiters1, int32_t ___millisecondsTimeout2, const RuntimeMethod* method)
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
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_0 = ___waitEvent0;
		NullCheck(L_0);
		bool L_1;
		L_1 = EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_0, /*hidden argument*/NULL);
		uint32_t* L_2 = ___numWaiters1;
		uint32_t* L_3 = ___numWaiters1;
		int32_t L_4 = *((uint32_t*)L_3);
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		V_0 = (bool)0;
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_5 = ___waitEvent0;
			int32_t L_6 = ___millisecondsTimeout2;
			NullCheck(L_5);
			bool L_7;
			L_7 = VirtFuncInvoker2< bool, int32_t, bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean) */, L_5, L_6, (bool)0);
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497 * L_8 = (ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497_il2cpp_TypeInfo_var)));
			ReaderWriterLockTimedOutException__ctor_m82674256AA412F68F255EAF75EF13A7684B3CB48(L_8, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84_RuntimeMethod_var)));
		}

IL_0025:
		{
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x3F, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
			uint32_t* L_9 = ___numWaiters1;
			uint32_t* L_10 = ___numWaiters1;
			int32_t L_11 = *((uint32_t*)L_10);
			*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
			bool L_12 = V_0;
			if (L_12)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		}

IL_003e:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ExitAndWakeUpAppropriateWaiters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ExitAndWakeUpAppropriateWaiters_mC475D42EA67351F7E655E3B7A6D05C5747313BE3 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_owners_1();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		uint32_t L_1 = __this->get_numWriteWaiters_2();
		if ((!(((uint32_t)L_1) > ((uint32_t)0))))
		{
			goto IL_0024;
		}
	}
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_2 = __this->get_writeEvent_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_2, /*hidden argument*/NULL);
		return;
	}

IL_0024:
	{
		int32_t L_4 = __this->get_owners_1();
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_5 = __this->get_numReadWaiters_3();
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_6 = __this->get_readEvent_5();
		NullCheck(L_6);
		bool L_7;
		L_7 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_6, /*hidden argument*/NULL);
		return;
	}

IL_0048:
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::EnterMyLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of_myLock_0();
		int32_t L_1;
		L_1 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_0, 1, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		MyReaderWriterLock_EnterMyLockSpin_m5157FDCF62CE06480C3A0B1EA512698954D0059E(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::EnterMyLockSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_EnterMyLockSpin_m5157FDCF62CE06480C3A0B1EA512698954D0059E (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1;
		L_1 = Environment_get_ProcessorCount_m32354B9724A21AE041AC75C0E470687E33B93D33(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		Thread_SpinWait_m6276C02E66DD83A83D5F39E2B20411B8CBA33673(((int32_t)20), /*hidden argument*/NULL);
		goto IL_001d;
	}

IL_0017:
	{
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(0, /*hidden argument*/NULL);
	}

IL_001d:
	{
		int32_t* L_2 = __this->get_address_of_myLock_0();
		int32_t L_3;
		L_3 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_2, 1, 0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_002d:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		goto IL_0002;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ExitMyLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		__this->set_myLock_0(0);
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
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/ReaderWriterLockTimedOutException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockTimedOutException__ctor_m82674256AA412F68F255EAF75EF13A7684B3CB48 (ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497 * __this, const RuntimeMethod* method)
{
	{
		ApplicationException__ctor_m722F09DA49F9522A33650808D0B173351BEF82FD(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::.ctor(System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount__ctor_m9E1063961516A2BB5595CA94A909CF9768000652 (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_0 = ___key0;
		__this->set__key_1(L_0);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::Inc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_Inc_m9360F7545D9ED25559DD8CF8D6096C2320F824B8 (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of__count_0();
		int32_t L_1;
		L_1 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::Dec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_Dec_m3316C5B76EA893ADDEB8D5517B2B3627213B2EAD (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * L_0 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventCacheRWLock_1();
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		MyReaderWriterLock_AcquireWriterLock_mFE4A81BB90B00469143E80C143329CDEC962D8C6(L_0, (-1), /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			int32_t* L_1 = __this->get_address_of__count_0();
			int32_t L_2;
			L_2 = Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF((int32_t*)L_1, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0020;
			}
		}

IL_001a:
		{
			TokenListCount_CleanupCache_mEF77F97501522C1D53A496EA05E38F9B4CFED4AA(__this, /*hidden argument*/NULL);
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0022);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * L_3 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventCacheRWLock_1();
		il2cpp_codegen_memory_barrier();
		NullCheck(L_3);
		MyReaderWriterLock_ReleaseWriterLock_m919CAFF21CB0B2FE1E8DB9FA84E2B20C5782377C(L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::CleanupCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_CleanupCache_mEF77F97501522C1D53A496EA05E38F9B4CFED4AA (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * L_0 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventRegistrations_0();
		il2cpp_codegen_memory_barrier();
		EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_1 = __this->get__key_1();
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_0 = ((TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var))->get_s_defaultTaskScheduler_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * L_0 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_factory_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF2CB3D49AE42647D38FDC61E299623F08ACAE1AB_gshared_inline (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  List_1_get_Item_m35903D896081A6BB024566CDF4DDEFB5AF3E0D16_gshared_inline (List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B* L_2 = (EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B*)__this->get__items_1();
		int32_t L_3 = ___index0;
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((EventRegistrationTokenU5BU5D_t6E3683D73C481E44E93CCFF2D67137E40F06322B*)L_2, (int32_t)L_3);
		return (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 )L_4;
	}
}
