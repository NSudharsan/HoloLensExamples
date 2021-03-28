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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
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
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0202811166757AF262261201E48B89F6244FAE6C;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05;
IL2CPP_EXTERN_C String_t* _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90;
IL2CPP_EXTERN_C String_t* _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D;
IL2CPP_EXTERN_C String_t* _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317;
IL2CPP_EXTERN_C String_t* _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86;
IL2CPP_EXTERN_C String_t* _stringLiteral350138951CA76BFC65A77EA2D223A8D476B10BC5;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3D044A7A6F29E9BA262A4F406F47BBD4745F4B4F;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA;
IL2CPP_EXTERN_C String_t* _stringLiteral56B70A227BDF525F3B35BE8F7F19C2510184DC02;
IL2CPP_EXTERN_C String_t* _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
IL2CPP_EXTERN_C String_t* _stringLiteral5AD0071445300544C945A4235FF5EE2237930AF6;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5CE7A1E1E42333BF53E138868B7E6871FD1FC571;
IL2CPP_EXTERN_C String_t* _stringLiteral5E56E678035E4A801BA617E16F57410976493BFB;
IL2CPP_EXTERN_C String_t* _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
IL2CPP_EXTERN_C String_t* _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral7D2659B30CD7065E2E3DAAE5ABDCFE4A0B66782E;
IL2CPP_EXTERN_C String_t* _stringLiteral7D6783AA5E64857D25AFFFBD74CE5D0AF2558309;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral8DA696190A9052B3303D45C87CA50BEDCFA7494C;
IL2CPP_EXTERN_C String_t* _stringLiteral9305B29342F3BC0993F85105BB6141FF30569ED2;
IL2CPP_EXTERN_C String_t* _stringLiteral93CE1F3EEBFA5A5C2C336C37D31A01039231CA39;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D;
IL2CPP_EXTERN_C String_t* _stringLiteralBC3A46521634BE1B34BB2F00154A05110A698F36;
IL2CPP_EXTERN_C String_t* _stringLiteralBCE49DFF590DB2AB94984A5C75EF18BDDD83FE69;
IL2CPP_EXTERN_C String_t* _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50;
IL2CPP_EXTERN_C String_t* _stringLiteralCE02B6F4CAAD9B14B2B4CBB6E5E1A7B2774E4FE2;
IL2CPP_EXTERN_C String_t* _stringLiteralCFD59FD74BD22E570703A8BC6B77F6081661FEEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_certificateHandler_mBB6DDBB83B2639B1D47EFCDDDCC56E1217D139F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke;;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
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
struct  U3CModuleU3E_tC81EA6223B5DC14CA590D1BADEDD82F8EB8B39EF 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte[]>
struct  List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____items_1)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
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


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// UnityEngine.WWWForm
struct  WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___formData_0)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_formData_0() const { return ___formData_0; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_0), (void*)value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fieldNames_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fileNames_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___types_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_types_3() const { return ___types_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___boundary_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_4), (void*)value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};


// UnityEngine.WWWTranscoder
struct  WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771  : public RuntimeObject
{
public:

public:
};

struct WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields
{
public:
	// System.Byte[] UnityEngine.WWWTranscoder::ucHexChars
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ucHexChars_0;
	// System.Byte[] UnityEngine.WWWTranscoder::lcHexChars
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___lcHexChars_1;
	// System.Byte UnityEngine.WWWTranscoder::urlEscapeChar
	uint8_t ___urlEscapeChar_2;
	// System.Byte[] UnityEngine.WWWTranscoder::urlSpace
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___urlSpace_3;
	// System.Byte[] UnityEngine.WWWTranscoder::dataSpace
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataSpace_4;
	// System.Byte[] UnityEngine.WWWTranscoder::urlForbidden
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___urlForbidden_5;
	// System.Byte UnityEngine.WWWTranscoder::qpEscapeChar
	uint8_t ___qpEscapeChar_6;
	// System.Byte[] UnityEngine.WWWTranscoder::qpSpace
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___qpSpace_7;
	// System.Byte[] UnityEngine.WWWTranscoder::qpForbidden
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___qpForbidden_8;

public:
	inline static int32_t get_offset_of_ucHexChars_0() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___ucHexChars_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_ucHexChars_0() const { return ___ucHexChars_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_ucHexChars_0() { return &___ucHexChars_0; }
	inline void set_ucHexChars_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___ucHexChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ucHexChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_lcHexChars_1() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___lcHexChars_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_lcHexChars_1() const { return ___lcHexChars_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_lcHexChars_1() { return &___lcHexChars_1; }
	inline void set_lcHexChars_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___lcHexChars_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lcHexChars_1), (void*)value);
	}

	inline static int32_t get_offset_of_urlEscapeChar_2() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___urlEscapeChar_2)); }
	inline uint8_t get_urlEscapeChar_2() const { return ___urlEscapeChar_2; }
	inline uint8_t* get_address_of_urlEscapeChar_2() { return &___urlEscapeChar_2; }
	inline void set_urlEscapeChar_2(uint8_t value)
	{
		___urlEscapeChar_2 = value;
	}

	inline static int32_t get_offset_of_urlSpace_3() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___urlSpace_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_urlSpace_3() const { return ___urlSpace_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_urlSpace_3() { return &___urlSpace_3; }
	inline void set_urlSpace_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___urlSpace_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___urlSpace_3), (void*)value);
	}

	inline static int32_t get_offset_of_dataSpace_4() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___dataSpace_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_dataSpace_4() const { return ___dataSpace_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_dataSpace_4() { return &___dataSpace_4; }
	inline void set_dataSpace_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___dataSpace_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataSpace_4), (void*)value);
	}

	inline static int32_t get_offset_of_urlForbidden_5() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___urlForbidden_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_urlForbidden_5() const { return ___urlForbidden_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_urlForbidden_5() { return &___urlForbidden_5; }
	inline void set_urlForbidden_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___urlForbidden_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___urlForbidden_5), (void*)value);
	}

	inline static int32_t get_offset_of_qpEscapeChar_6() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___qpEscapeChar_6)); }
	inline uint8_t get_qpEscapeChar_6() const { return ___qpEscapeChar_6; }
	inline uint8_t* get_address_of_qpEscapeChar_6() { return &___qpEscapeChar_6; }
	inline void set_qpEscapeChar_6(uint8_t value)
	{
		___qpEscapeChar_6 = value;
	}

	inline static int32_t get_offset_of_qpSpace_7() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___qpSpace_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_qpSpace_7() const { return ___qpSpace_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_qpSpace_7() { return &___qpSpace_7; }
	inline void set_qpSpace_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___qpSpace_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qpSpace_7), (void*)value);
	}

	inline static int32_t get_offset_of_qpForbidden_8() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___qpForbidden_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_qpForbidden_8() const { return ___qpForbidden_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_qpForbidden_8() { return &___qpForbidden_8; }
	inline void set_qpForbidden_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___qpForbidden_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qpForbidden_8), (void*)value);
	}
};


// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_StaticFields, ___domainRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___domainRegex_0), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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


// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct  StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
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


// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.UriFormat
struct  UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct  UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct  Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
struct  UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod
struct  UnityWebRequestMethod_tF538D9A75B76FFC81710E65697E38C1B12E4F7E5 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityWebRequestMethod_tF538D9A75B76FFC81710E65697E38C1B12E4F7E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct  Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.DownloadHandlerBuffer
struct  DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
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

// System.Text.RegularExpressions.Regex
struct  Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___caps_8;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___capnames_9;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___capslist_10;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_11;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ___runnerref_12;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ___replref_13;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ___code_14;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_15;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___factory_1)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___internalMatchTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_8() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___caps_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_caps_8() const { return ___caps_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_caps_8() { return &___caps_8; }
	inline void set_caps_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___caps_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_8), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_9() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capnames_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_capnames_9() const { return ___capnames_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_capnames_9() { return &___capnames_9; }
	inline void set_capnames_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___capnames_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_9), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_10() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capslist_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_capslist_10() const { return ___capslist_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_capslist_10() { return &___capslist_10; }
	inline void set_capslist_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___capslist_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_10), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_11() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capsize_11)); }
	inline int32_t get_capsize_11() const { return ___capsize_11; }
	inline int32_t* get_address_of_capsize_11() { return &___capsize_11; }
	inline void set_capsize_11(int32_t value)
	{
		___capsize_11 = value;
	}

	inline static int32_t get_offset_of_runnerref_12() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___runnerref_12)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get_runnerref_12() const { return ___runnerref_12; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of_runnerref_12() { return &___runnerref_12; }
	inline void set_runnerref_12(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		___runnerref_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_12), (void*)value);
	}

	inline static int32_t get_offset_of_replref_13() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___replref_13)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get_replref_13() const { return ___replref_13; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of_replref_13() { return &___replref_13; }
	inline void set_replref_13(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		___replref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_13), (void*)value);
	}

	inline static int32_t get_offset_of_code_14() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___code_14)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get_code_14() const { return ___code_14; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of_code_14() { return &___code_14; }
	inline void set_code_14(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		___code_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_14), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_15() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___refsInitialized_15)); }
	inline bool get_refsInitialized_15() const { return ___refsInitialized_15; }
	inline bool* get_address_of_refsInitialized_15() { return &___refsInitialized_15; }
	inline void set_refsInitialized_15(bool value)
	{
		___refsInitialized_15 = value;
	}
};

struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___FallbackDefaultMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultMatchTimeout_7;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * ___livecode_16;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_17;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_6() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___FallbackDefaultMatchTimeout_6)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_FallbackDefaultMatchTimeout_6() const { return ___FallbackDefaultMatchTimeout_6; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_FallbackDefaultMatchTimeout_6() { return &___FallbackDefaultMatchTimeout_6; }
	inline void set_FallbackDefaultMatchTimeout_6(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___FallbackDefaultMatchTimeout_6 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___DefaultMatchTimeout_7)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultMatchTimeout_7() const { return ___DefaultMatchTimeout_7; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultMatchTimeout_7() { return &___DefaultMatchTimeout_7; }
	inline void set_DefaultMatchTimeout_7(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_livecode_16() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___livecode_16)); }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * get_livecode_16() const { return ___livecode_16; }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 ** get_address_of_livecode_16() { return &___livecode_16; }
	inline void set_livecode_16(LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * value)
	{
		___livecode_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_16), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_17() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___cacheSize_17)); }
	inline int32_t get_cacheSize_17() const { return ___cacheSize_17; }
	inline int32_t* get_address_of_cacheSize_17() { return &___cacheSize_17; }
	inline void set_cacheSize_17(int32_t value)
	{
		___cacheSize_17 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct  UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// System.Uri
struct  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.Action`1<UnityEngine.AsyncOperation>
struct  Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31  : public MulticastDelegate_t
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


// System.FormatException
struct  FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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

IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD8CBF904F9521047E6C4EFEB652A8A41E4FFE522_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.CertificateHandler::Create(UnityEngine.Networking.CertificateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CertificateHandler_Create_m164300A4A6F13ED999FADF26635B054A1D3CEE3C (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * DownloadHandler_GetTextEncoder_mEAABE10BCA8FFAADB30C5623A10A9072A21D002D (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mAD7052CB25BA1D60A8F055AA89D09809F61233DB (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_GetEncoding_mD5352F1522341280E9025D16463E63916549F9E3 (String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C (int32_t ___err0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod UnityEngine.Networking.UnityWebRequest::GetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetCustomMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290 (String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.String[] UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mD8CBF904F9521047E6C4EFEB652A8A41E4FFE522_gshared)(__this, ___capacity0, ___comparer1, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uh0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCertificateHandler(UnityEngine.Networking.CertificateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCertificateHandler_m4A4C27BF1D012FF32475E2810EDB6DA0F471F5A2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___ch0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___timeout0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m6F640D6320ABA5A1ED08C3B2A259DB67372DCECB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___downloadHandler2, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uploadHandler3, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetupPost(UnityEngine.Networking.UnityWebRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetupPost_m30E71BB429AFF340853DE991BFD74DE0DACA5C46 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, String_t* ___postData1, const RuntimeMethod* method);
// System.String UnityEngine.WWWTranscoder::DataEncode(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWWTranscoder_DataEncode_mA017B8D70BF88047C155634E2E2FA3CCC11389E7 (String_t* ___toEncode0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___e1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mAECD24AB554541300BD126E01C65329F0A29A328 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetupPost(UnityEngine.Networking.UnityWebRequest,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetupPost_m10DB6A633A5A7E8C7CDDDE2966D7D9A114E6ABB0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * ___formData1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWForm::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWForm_get_data_mCCE0C63DF2E0CA4F831F9AB78D6111BB8C669177 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * WWWForm_get_headers_m9F6A4222926792B110E9821AF5B23FF3FB9BD45A (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_mA225B44A47262BB26B2DB6725A38D9533B3C5736 (String_t* ___s0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___e1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_URLEncode_m9A783433F5DFE48FBECB704557718A145844A53C (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___toEncode0, const RuntimeMethod* method);
// System.Void UnityEngine.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_mFC0E13622A23CD19A631B9ABBA506683B71A2E4A (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::InternalSetContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, String_t* ___newContentType0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * ___self0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_mCC02BEB31C55704C80E1BA05A1129409713C8A6C (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, String_t* ___fieldName0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___contents1, String_t* ___fileName2, String_t* ___mimeType3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
inline void List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689 (const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, int32_t ___capacity0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_mCD4E3A5FA7817A3240AE6E1DA57FEB9C09539DA9 (String_t* ___s0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___e1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWWTranscoder_QPEncode_m9D74D3126E50EE48005E3DCEAD4771F63AF399B4 (String_t* ___toEncode0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___e1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_inline (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
inline int32_t List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_inline (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Byte[] UnityEngine.WWWTranscoder::DataEncode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_DataEncode_m50A486970E8DFF6B99EC71217F626398C2C2C159 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___toEncode0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_Encode_mD7D4534ACBC6CE1F98B223CE466352D976C5E99A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___space2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___forbidden3, bool ___uppercase4, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_mBDB7732AE3F1FD6B9930421075B8D41C4BB7B95B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, uint8_t ___b1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_Byte2Hex_m3EBC331645C3DAF63D0D5E24EB2735BF662AA669 (uint8_t ___b0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___hexChars1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___space2, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___index1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___comperand2, const RuntimeMethod* method);
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, int32_t ___offset1, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_mE19564370D689C62CCE91C79912AB4396EA17A68 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.UriKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, int32_t ___uriKind1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___relativeUri1, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m0B44AFB01F3FEDE9319BA4556288340D16101F9D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Equality_mB322C9CBB45846441BDCA7357E7D28123824ED83 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri10, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri21, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___input0, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsFile_mCFA022C6E4641EBD7285A01056B7E201CEFD2C73 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsLoopback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsLoopback_m6988313CE348064A6A068347D878DDC51594B710 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsolutePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF (String_t* ___encoded0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mE87B9746FC40A7ECC0149A24685BD0713459FAF1 (StringBuilder_t * __this, String_t* ___value0, int32_t ___capacity1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Uri::get_PathAndQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Fragment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Fragment_m1734B2D3F27F38AA342CB65885DE732160501E72 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___toEncode0, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.CertificateHandler::Create(UnityEngine.Networking.CertificateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CertificateHandler_Create_m164300A4A6F13ED999FADF26635B054A1D3CEE3C (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (*CertificateHandler_Create_m164300A4A6F13ED999FADF26635B054A1D3CEE3C_ftn) (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E *);
	static CertificateHandler_Create_m164300A4A6F13ED999FADF26635B054A1D3CEE3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CertificateHandler_Create_m164300A4A6F13ED999FADF26635B054A1D3CEE3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.CertificateHandler::Create(UnityEngine.Networking.CertificateHandler)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.CertificateHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method)
{
	typedef void (*CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495_ftn) (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E *);
	static CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.CertificateHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.CertificateHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler__ctor_mEDF27CA23966C563C5E5AE7F90D423AC8CF634D1 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0;
		L_0 = CertificateHandler_Create_m164300A4A6F13ED999FADF26635B054A1D3CEE3C(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.CertificateHandler::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Finalize_m14B9BDB0233ED0B26AD2ABD0A6D34D8DB8DA8ED4 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method)
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
		CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificate_mE76D686A7A10A86799FBF1F107EF3544D4A9D815 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificateNative_m7AA7136975CEB1635B201B08BB9B04059E7D0D16 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___certificateData0;
		bool L_1;
		L_1 = VirtFuncInvoker1< bool, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(5 /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */, __this, L_0);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
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
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	typedef void (*DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA_ftn) (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *);
	static DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Finalize_m433AE11AD2DCBB21800F0ED5497FD3B762098202 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
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
		DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(5 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.Networking.DownloadHandler::GetText() */, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_GetData_mBBC1BE90737613B3C322E4C1B3E971729924D62B (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = V_0;
		return L_0;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetText_mF8C51EFA7A82C9C198A3207D0FED84EEB8ED373F (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(5 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		NullCheck(L_2);
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_2)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_4;
		L_4 = DownloadHandler_GetTextEncoder_mEAABE10BCA8FFAADB30C5623A10A9072A21D002D(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		NullCheck(L_6);
		NullCheck(L_4);
		String_t* L_7;
		L_7 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		V_2 = L_7;
		goto IL_0034;
	}

IL_002b:
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0034;
	}

IL_0034:
	{
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * DownloadHandler_GetTextEncoder_mEAABE10BCA8FFAADB30C5623A10A9072A21D002D (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CE7A1E1E42333BF53E138868B7E6871FD1FC571);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_9 = NULL;
	ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0;
		L_0 = DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_4, _stringLiteral5CE7A1E1E42333BF53E138868B7E6871FD1FC571, 5, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)(-1)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00c4;
		}
	}
	{
		String_t* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = String_IndexOf_mAD7052CB25BA1D60A8F055AA89D09809F61233DB(L_8, ((int32_t)61), L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		int32_t L_11 = V_4;
		V_5 = (bool)((((int32_t)L_11) > ((int32_t)(-1)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_13 = V_0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_15, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)39));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)34));
		NullCheck(L_16);
		String_t* L_20;
		L_20 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_16, L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		String_t* L_22 = V_6;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_22, ((int32_t)59), /*hidden argument*/NULL);
		V_7 = L_23;
		int32_t L_24 = V_7;
		V_8 = (bool)((((int32_t)L_24) > ((int32_t)(-1)))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		String_t* L_26 = V_6;
		int32_t L_27 = V_7;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_26, 0, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
	}

IL_0096:
	{
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		String_t* L_29 = V_6;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_30;
		L_30 = Encoding_GetEncoding_mD5352F1522341280E9025D16463E63916549F9E3(L_29, /*hidden argument*/NULL);
		V_9 = L_30;
		goto IL_00ce;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a3;
		throw e;
	}

CATCH_00a3:
	{ // begin catch(System.ArgumentException)
		V_10 = ((ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)__exception_local);
		String_t* L_31 = V_6;
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_32 = V_10;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_32);
		String_t* L_34;
		L_34 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DA696190A9052B3303D45C87CA50BEDCFA7494C)), L_31, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_34, /*hidden argument*/NULL);
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00c2:
	{
	}

IL_00c3:
	{
	}

IL_00c4:
	{
	}

IL_00c5:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_35;
		L_35 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		V_9 = L_35;
		goto IL_00ce;
	}

IL_00ce:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_36 = V_9;
		return L_36;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	typedef String_t* (*DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D_ftn) (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *);
	static DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_GetContentType_m3B0EEFBDC91FF18736B3FC0BD7A6319104056A0D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::GetContentType()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC_ftn) (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *);
	static DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)");
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* icallRetVal = _il2cpp_icall_func(___dh0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke_back(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke& marshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke_cleanup(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_com(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_com_back(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com& marshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_com_cleanup(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (*DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA_ftn) (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *);
	static DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0;
		L_0 = DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA(__this, /*hidden argument*/NULL);
		((DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *)__this)->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	{
		DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F(__this, /*hidden argument*/NULL);
		DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandlerBuffer_GetData_mAFE5BF2E12AE24B162769E9B736280A802E1A3AB (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
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






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled)
{
}
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C (int32_t ___err0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C_ftn) (int32_t);
	static UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)");
	String_t* icallRetVal = _il2cpp_icall_func(___err0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED (const RuntimeMethod* method)
{
	typedef intptr_t (*UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED_ftn) ();
	static UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Create()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28(__this, /*hidden argument*/NULL);
		UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_inline(__this, (bool)1, /*hidden argument*/NULL);
		UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_inline(__this, (bool)1, /*hidden argument*/NULL);
		UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0;
		L_0 = UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___method1;
		UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m6F640D6320ABA5A1ED08C3B2A259DB67372DCECB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___downloadHandler2, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uploadHandler3, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0;
		L_0 = UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___method1;
		UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7(__this, L_2, /*hidden argument*/NULL);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_3 = ___downloadHandler2;
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(__this, L_3, /*hidden argument*/NULL);
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_4 = ___uploadHandler3;
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Finalize_m0E1202F2844C73C643D8B8DA23794FC9948A6D92 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
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
		UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x1A, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * V_7 = NULL;
	bool V_8 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_2;
		L_2 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_5 = V_1;
		NullCheck(L_5);
		DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376(L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
	}

IL_0025:
	{
		bool L_6;
		L_6 = UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_inline(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_8;
		L_8 = UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_9 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_11 = V_4;
		NullCheck(L_11);
		UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41(L_11, /*hidden argument*/NULL);
	}

IL_004d:
	{
	}

IL_004e:
	{
		bool L_12;
		L_12 = UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_inline(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_14;
		L_14 = UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D(__this, /*hidden argument*/NULL);
		V_7 = L_14;
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_15 = V_7;
		V_8 = (bool)((!(((RuntimeObject*)(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_17 = V_7;
		NullCheck(L_17);
		CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493(L_17, /*hidden argument*/NULL);
	}

IL_0078:
	{
	}

IL_0079:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * (*UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::BeginWebRequest()");
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * V_0 = NULL;
	bool V_1 = false;
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * V_2 = NULL;
	{
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_0;
		L_0 = UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_3 = V_0;
		NullCheck(L_3);
		UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_inline(L_3, __this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_4 = V_0;
		V_2 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_5 = V_2;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Abort()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, int32_t);
	static UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___methodType0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___methodType0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*);
	static UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___customMethodName0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA_RuntimeMethod_var)));
	}

IL_0019:
	{
		String_t* L_3 = ___customMethodName0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod UnityEngine.Networking.UnityWebRequest::GetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetMethod()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::GetCustomMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetCustomMethod()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::get_method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_method_mDEB685B259E296FAE2484B504108AA384A3E0A4F (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAC516092AE075D549759FBFE57497622D29F15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		int32_t L_0;
		L_0 = UnityWebRequest_GetMethod_m81D9C66D8543CE843703FE0B40C6EFFAD6F23BF1(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_0044;
	}

IL_0024:
	{
		V_3 = _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
		goto IL_004d;
	}

IL_002c:
	{
		V_3 = _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
		goto IL_004d;
	}

IL_0034:
	{
		V_3 = _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
		goto IL_004d;
	}

IL_003c:
	{
		V_3 = _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15;
		goto IL_004d;
	}

IL_0044:
	{
		String_t* L_4;
		L_4 = UnityWebRequest_GetCustomMethod_mE1FFAB6A67658A18CCE1B9C031881A00125C0CC0(__this, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_004d;
	}

IL_004d:
	{
		String_t* L_5 = V_3;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAC516092AE075D549759FBFE57497622D29F15);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D2659B30CD7065E2E3DAAE5ABDCFE4A0B66782E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7_RuntimeMethod_var)));
	}

IL_0017:
	{
		String_t* L_4 = ___value0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		String_t* L_6 = V_2;
		V_1 = L_6;
		String_t* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_8 = V_1;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_12 = V_1;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0081;
	}

IL_0059:
	{
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 0, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0063:
	{
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 1, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_006d:
	{
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 2, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0077:
	{
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 3, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0081:
	{
		String_t* L_16 = ___value0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A(L_16, /*hidden argument*/NULL);
		UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA(__this, L_17, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0090:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE02B6F4CAAD9B14B2B4CBB6E5E1A7B2774E4FE2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteralCE02B6F4CAAD9B14B2B4CBB6E5E1A7B2774E4FE2;
		String_t* L_0 = ___value0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290(L_0, L_1, /*hidden argument*/NULL);
		UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*);
	static UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___url0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AD0071445300544C945A4235FF5EE2237930AF6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25_RuntimeMethod_var)));
	}

IL_0019:
	{
		String_t* L_3 = ___url0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef int64_t (*UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_responseCode()");
	int64_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isModifiable()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_result()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::GetRequestHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetRequestHeader_mF9A1FBF5F39F5701281E4146EE93E83D33FB1240 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetRequestHeader_mF9A1FBF5F39F5701281E4146EE93E83D33FB1240_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*);
	static UnityWebRequest_GetRequestHeader_mF9A1FBF5F39F5701281E4146EE93E83D33FB1240_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetRequestHeader_mF9A1FBF5F39F5701281E4146EE93E83D33FB1240_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetRequestHeader(System.String)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___name0);
	return icallRetVal;
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*, String_t*);
	static UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___name0, ___value1);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral350138951CA76BFC65A77EA2D223A8D476B10BC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = ___value1;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9305B29342F3BC0993F85105BB6141FF30569ED2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0029:
	{
		bool L_7;
		L_7 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCE49DFF590DB2AB94984A5C75EF18BDDD83FE69)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0041:
	{
		String_t* L_10 = ___name0;
		String_t* L_11 = ___value1;
		int32_t L_12;
		L_12 = UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE(__this, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		V_4 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_15 = V_0;
		String_t* L_16;
		L_16 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_15, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_17 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0060:
	{
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*);
	static UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___name0);
	return icallRetVal;
}
// System.String[] UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()");
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_1 = NULL;
	bool V_2 = false;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_0;
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		V_3 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL;
		goto IL_0061;
	}

IL_001c:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_5;
		L_5 = StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline(/*hidden argument*/NULL);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27(L_6, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), L_5, /*hidden argument*/Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27_RuntimeMethod_var);
		V_1 = L_6;
		V_4 = 0;
		goto IL_0050;
	}

IL_002f:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_0;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		String_t* L_11;
		L_11 = UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF(__this, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_12 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		String_t* L_17 = V_5;
		NullCheck(L_12);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_12, L_16, L_17, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_19 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_0;
		NullCheck(L_20);
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))? 1 : 0);
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_002f;
		}
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_22 = V_1;
		V_3 = L_22;
		goto IL_0061;
	}

IL_0061:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_23 = V_3;
		return L_23;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *);
	static UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___uh0);
	return icallRetVal;
}
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * V_0 = NULL;
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_0 = __this->get_m_UploadHandler_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral93CE1F3EEBFA5A5C2C336C37D31A01039231CA39)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA_RuntimeMethod_var)));
	}

IL_0019:
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_3 = ___value0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA_RuntimeMethod_var)));
	}

IL_0035:
	{
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_10 = ___value0;
		__this->set_m_UploadHandler_2(L_10);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *);
	static UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___dh0);
	return icallRetVal;
}
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * V_0 = NULL;
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_0 = __this->get_m_DownloadHandler_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC3A46521634BE1B34BB2F00154A05110A698F36)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2_RuntimeMethod_var)));
	}

IL_0019:
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_3 = ___value0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2_RuntimeMethod_var)));
	}

IL_0035:
	{
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_10 = ___value0;
		__this->set_m_DownloadHandler_1(L_10);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCertificateHandler(UnityEngine.Networking.CertificateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCertificateHandler_m4A4C27BF1D012FF32475E2810EDB6DA0F471F5A2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___ch0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetCertificateHandler_m4A4C27BF1D012FF32475E2810EDB6DA0F471F5A2_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E *);
	static UnityWebRequest_SetCertificateHandler_m4A4C27BF1D012FF32475E2810EDB6DA0F471F5A2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetCertificateHandler_m4A4C27BF1D012FF32475E2810EDB6DA0F471F5A2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetCertificateHandler(UnityEngine.Networking.CertificateHandler)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___ch0);
	return icallRetVal;
}
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * V_0 = NULL;
	{
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_0 = __this->get_m_CertificateHandler_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_certificateHandler(UnityEngine.Networking.CertificateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_certificateHandler_mBB6DDBB83B2639B1D47EFCDDDCC56E1217D139F7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D044A7A6F29E9BA262A4F406F47BBD4745F4B4F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_certificateHandler_mBB6DDBB83B2639B1D47EFCDDDCC56E1217D139F7_RuntimeMethod_var)));
	}

IL_0019:
	{
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_3 = ___value0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetCertificateHandler_m4A4C27BF1D012FF32475E2810EDB6DA0F471F5A2(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_certificateHandler_mBB6DDBB83B2639B1D47EFCDDDCC56E1217D139F7_RuntimeMethod_var)));
	}

IL_0035:
	{
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_10 = ___value0;
		__this->set_m_CertificateHandler_3(L_10);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___timeout0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, int32_t);
	static UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___timeout0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFD59FD74BD22E570703A8BC6B77F6081661FEEB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_3, 0, /*hidden argument*/NULL);
		___value0 = L_4;
		int32_t L_5 = ___value0;
		int32_t L_6;
		L_6 = UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)1000))), /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		V_2 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = V_0;
		String_t* L_10;
		L_10 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_9, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_11 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90_RuntimeMethod_var)));
	}

IL_0044:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_1 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_1, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m6F640D6320ABA5A1ED08C3B2A259DB67372DCECB(L_2, L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, L_1, (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = V_0;
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Delete_m5BC5399C131263E04A677CF8494D15DA7888C7F3 (String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_1, L_0, _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38, /*hidden argument*/NULL);
		V_0 = L_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Put_mA2C337337953404F65F36D8F59747F566E3266A4 (String_t* ___uri0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bodyData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_1 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bodyData1;
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_3 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_3, L_2, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m6F640D6320ABA5A1ED08C3B2A259DB67372DCECB(L_4, L_0, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = V_0;
		V_1 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Put_mA91C5DE79F2D9D04541E48CB218B5CE9CBD02E5F (String_t* ___uri0, String_t* ___bodyData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_1 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_1, /*hidden argument*/NULL);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_3 = ___bodyData1;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_5 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_5, L_4, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m6F640D6320ABA5A1ED08C3B2A259DB67372DCECB(L_6, L_0, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, L_1, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = V_0;
		V_1 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Post_m661DC62ED36C9BA54246F5795DB8866BE2948739 (String_t* ___uri0, String_t* ___postData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_1, L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		V_0 = L_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = V_0;
		String_t* L_3 = ___postData1;
		UnityWebRequest_SetupPost_m30E71BB429AFF340853DE991BFD74DE0DACA5C46(L_2, L_3, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4 = V_0;
		V_1 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetupPost(UnityEngine.Networking.UnityWebRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetupPost_m30E71BB429AFF340853DE991BFD74DE0DACA5C46 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, String_t* ___postData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		String_t* L_0 = ___postData1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_3 = ___postData1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_4;
		L_4 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = WWWTranscoder_DataEncode_mA017B8D70BF88047C155634E2E2FA3CCC11389E7(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_6;
		L_6 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_7 = V_2;
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_7);
		V_0 = L_8;
	}

IL_002a:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = ___request0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_11 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_11, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_9, L_11, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = ___request0;
		NullCheck(L_12);
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_13;
		L_13 = UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		UploadHandler_set_contentType_mAECD24AB554541300BD126E01C65329F0A29A328(L_13, _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = ___request0;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_15 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_14, L_15, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Post_m5F29B83B6FEDEAEAAC938DD26AE484A2750DB646 (String_t* ___uri0, WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * ___formData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_1, L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		V_0 = L_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = V_0;
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_3 = ___formData1;
		UnityWebRequest_SetupPost_m10DB6A633A5A7E8C7CDDDE2966D7D9A114E6ABB0(L_2, L_3, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4 = V_0;
		V_1 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetupPost(UnityEngine.Networking.UnityWebRequest,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetupPost_m10DB6A633A5A7E8C7CDDDE2966D7D9A114E6ABB0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * ___formData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_4 = NULL;
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_0 = ___formData1;
		V_1 = (bool)((!(((RuntimeObject*)(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_2 = ___formData1;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = WWWForm_get_data_mCCE0C63DF2E0CA4F831F9AB78D6111BB8C669177(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		NullCheck(L_4);
		V_2 = (bool)((((int32_t)(((RuntimeArray*)L_4)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_001e:
	{
	}

IL_001f:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = ___request0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_8 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_6, L_8, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = ___request0;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_10 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_9, L_10, /*hidden argument*/NULL);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_11 = ___formData1;
		V_3 = (bool)((!(((RuntimeObject*)(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_13 = ___formData1;
		NullCheck(L_13);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_14;
		L_14 = WWWForm_get_headers_m9F6A4222926792B110E9821AF5B23FF3FB9BD45A(L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_15 = V_4;
		NullCheck(L_15);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_16;
		L_16 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_15, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		V_5 = L_16;
	}

IL_0053:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_0055:
		{
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_17;
			L_17 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_5), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
			V_6 = L_17;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_18 = ___request0;
			String_t* L_19;
			L_19 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			String_t* L_20;
			L_20 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			NullCheck(L_18);
			UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_18, L_19, L_20, /*hidden argument*/NULL);
		}

IL_0073:
		{
			bool L_21;
			L_21 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_5), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0055;
			}
		}

IL_007c:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_5), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(126)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
	}

IL_008d:
	{
	}

IL_008e:
	{
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_mD4A55874FBF817BE5C57E4150CFFC2A78ACCD9A1 (String_t* ___s0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1;
		L_1 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_2;
		L_2 = UnityWebRequest_EscapeURL_mA225B44A47262BB26B2DB6725A38D9533B3C5736(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_mA225B44A47262BB26B2DB6725A38D9533B3C5736 (String_t* ___s0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	{
		String_t* L_0 = ___s0;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_3 = (String_t*)NULL;
		goto IL_004d;
	}

IL_000d:
	{
		String_t* L_2 = ___s0;
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_004d;
	}

IL_0026:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_5 = ___e1;
		V_5 = (bool)((((RuntimeObject*)(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		V_3 = (String_t*)NULL;
		goto IL_004d;
	}

IL_0034:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_7 = ___e1;
		String_t* L_8 = ___s0;
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, L_8);
		V_0 = L_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = WWWTranscoder_URLEncode_m9A783433F5DFE48FBECB704557718A145844A53C(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12 = ___e1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_1;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_12, L_13);
		V_3 = L_14;
		goto IL_004d;
	}

IL_004d:
	{
		String_t* L_15 = V_3;
		return L_15;
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


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke_back(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke& marshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke_cleanup(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_com(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_com_back(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com& marshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_com_cleanup(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3 (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method)
{
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___value0;
		__this->set_U3CwebRequestU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation__ctor_m9A74EA34FBE3BA2B4E4D8FAB3B44301ECEDBCB62 (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, const RuntimeMethod* method)
{
	{
		AsyncOperation__ctor_mFC0E13622A23CD19A631B9ABBA506683B71A2E4A(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UploadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
{
	typedef void (*UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8_ftn) (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *);
	static UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Finalize_mE43816DF1E8AFC6EA32518CE8C30A5EF99F06934 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
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
		UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mAECD24AB554541300BD126E01C65329F0A29A328 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.Networking.UploadHandler::SetContentType(System.String) */, __this, L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::SetContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_SetContentType_m95EBCDCE4E8BF9AB78953B37C89B7F4BB6F75DA7 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, String_t* ___newContentType0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___newContentType0;
		UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::InternalSetContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, String_t* ___newContentType0, const RuntimeMethod* method)
{
	typedef void (*UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F_ftn) (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *, String_t*);
	static UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandler_InternalSetContentType_mD7BDE8CD2F2F06BA9959E478042A040DD015E27F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandler::InternalSetContentType(System.String)");
	_il2cpp_icall_func(__this, ___newContentType0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_pinvoke(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_pinvoke_back(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke& marshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_pinvoke_cleanup(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_com(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_com_back(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com& marshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_com_cleanup(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * ___self0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method)
{
	typedef intptr_t (*UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01_ftn) (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*);
	static UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___self0, ___data1);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E56E678035E4A801BA617E16F57410976493BFB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9_RuntimeMethod_var)));
	}

IL_0022:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___data0;
		intptr_t L_5;
		L_5 = UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01(__this, L_4, /*hidden argument*/NULL);
		((UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *)__this)->set_m_Ptr_0((intptr_t)L_5);
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
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689 (const RuntimeMethod* method)
{
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_0 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		__this->set_containsFiles_5((bool)0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *)il2cpp_codegen_object_new(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05(L_0, /*hidden argument*/List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		__this->set_formData_0(L_0);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_1, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_fieldNames_1(L_1);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_fileNames_2(L_2);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_3, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_types_3(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->set_boundary_4(L_4);
		V_0 = 0;
		goto IL_0080;
	}

IL_004c:
	{
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)48), ((int32_t)110), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) > ((int32_t)((int32_t)57)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)7));
	}

IL_0064:
	{
		int32_t L_9 = V_1;
		V_3 = (bool)((((int32_t)L_9) > ((int32_t)((int32_t)90)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)6));
	}

IL_0071:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_boundary_4();
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)((uint8_t)L_14)));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0080:
	{
		int32_t L_16 = V_0;
		V_4 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)40)))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_m9DB02F0F9C145A880D5489F2FEF04E81404B7E09 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, String_t* ___fieldName0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___contents1, String_t* ___fileName2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___fieldName0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___contents1;
		String_t* L_2 = ___fileName2;
		WWWForm_AddBinaryData_mCC02BEB31C55704C80E1BA05A1129409713C8A6C(__this, L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_mCC02BEB31C55704C80E1BA05A1129409713C8A6C (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, String_t* ___fieldName0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___contents1, String_t* ___fileName2, String_t* ___mimeType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D6783AA5E64857D25AFFFBD74CE5D0AF2558309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B10_0 = 0;
	String_t* G_B13_0 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	{
		__this->set_containsFiles_5((bool)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___contents1;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)8)))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___contents1;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)137)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___contents1;
		NullCheck(L_4);
		int32_t L_5 = 1;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___contents1;
		NullCheck(L_7);
		int32_t L_8 = 2;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)78)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___contents1;
		NullCheck(L_10);
		int32_t L_11 = 3;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)71)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___contents1;
		NullCheck(L_13);
		int32_t L_14 = 4;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___contents1;
		NullCheck(L_16);
		int32_t L_17 = 5;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ___contents1;
		NullCheck(L_19);
		int32_t L_20 = 6;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ___contents1;
		NullCheck(L_22);
		int32_t L_23 = 7;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B10_0 = ((((int32_t)L_24) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B10_0 = 0;
	}

IL_004c:
	{
		V_0 = (bool)G_B10_0;
		String_t* L_25 = ___fileName2;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_25) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_26 = V_1;
		if (!L_26)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_27 = ___fieldName0;
		bool L_28 = V_0;
		G_B12_0 = L_27;
		if (L_28)
		{
			G_B13_0 = L_27;
			goto IL_0061;
		}
	}
	{
		G_B14_0 = _stringLiteral7D6783AA5E64857D25AFFFBD74CE5D0AF2558309;
		G_B14_1 = G_B12_0;
		goto IL_0066;
	}

IL_0061:
	{
		G_B14_0 = _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
		G_B14_1 = G_B13_0;
	}

IL_0066:
	{
		String_t* L_29;
		L_29 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		___fileName2 = L_29;
	}

IL_006e:
	{
		String_t* L_30 = ___mimeType3;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_30) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_31 = V_2;
		if (!L_31)
		{
			goto IL_008e;
		}
	}
	{
		bool L_32 = V_0;
		V_3 = L_32;
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_0086;
		}
	}
	{
		___mimeType3 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_008d;
	}

IL_0086:
	{
		___mimeType3 = _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
	}

IL_008d:
	{
	}

IL_008e:
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_34 = __this->get_fieldNames_1();
		String_t* L_35 = ___fieldName0;
		NullCheck(L_34);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_34, L_35, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_36 = __this->get_fileNames_2();
		String_t* L_37 = ___fileName2;
		NullCheck(L_36);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_36, L_37, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_38 = __this->get_formData_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = ___contents1;
		NullCheck(L_38);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_38, L_39, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_40 = __this->get_types_3();
		String_t* L_41 = ___mimeType3;
		NullCheck(L_40);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_40, L_41, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * WWWForm_get_headers_m9F6A4222926792B110E9821AF5B23FF3FB9BD45A (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56B70A227BDF525F3B35BE8F7F19C2510184DC02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_0 = NULL;
	bool V_1 = false;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_2 = NULL;
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get_containsFiles_5();
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = V_0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_4;
		L_4 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_boundary_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_boundary_4();
		NullCheck(L_6);
		NullCheck(L_4);
		String_t* L_7;
		L_7 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral56B70A227BDF525F3B35BE8F7F19C2510184DC02, L_7, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		NullCheck(L_3);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_3, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_8, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		goto IL_0058;
	}

IL_0047:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = V_0;
		NullCheck(L_9);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_9, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
	}

IL_0058:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_10 = V_0;
		V_2 = L_10;
		goto IL_005c;
	}

IL_005c:
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_11 = V_2;
		return L_11;
	}
}
// System.Byte[] UnityEngine.WWWForm::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWForm_get_data_mCCE0C63DF2E0CA4F831F9AB78D6111BB8C669177 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_7 = NULL;
	int32_t V_8 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_9 = NULL;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_12 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	String_t* V_16 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_20 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_21 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_22 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_23 = NULL;
	int32_t V_24 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_25 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_26 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_27 = NULL;
	bool V_28 = false;
	bool V_29 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	{
		bool L_0 = __this->get_containsFiles_5();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0342;
		}
	}
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		V_1 = L_3;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_4;
		L_4 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		V_2 = L_5;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_6;
		L_6 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		V_3 = L_7;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_8;
		L_8 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		V_4 = L_9;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_10;
		L_10 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		V_5 = L_11;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12;
		L_12 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		V_6 = L_13;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_14 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938(L_14, ((int32_t)1024), /*hidden argument*/NULL);
		V_7 = L_14;
	}

IL_007e:
	try
	{ // begin try (depth: 1)
		{
			V_8 = 0;
			goto IL_02c4;
		}

IL_0087:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_15 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_2;
			NullCheck(L_17);
			NullCheck(L_15);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_18 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = V_1;
			NullCheck(L_20);
			NullCheck(L_18);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_18, L_19, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_21 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_boundary_4();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = __this->get_boundary_4();
			NullCheck(L_23);
			NullCheck(L_21);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_24 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = V_2;
			NullCheck(L_26);
			NullCheck(L_24);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_24, L_25, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_27 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = V_3;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_3;
			NullCheck(L_29);
			NullCheck(L_27);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_27, L_28, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))));
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_30;
			L_30 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_31 = __this->get_types_3();
			int32_t L_32 = V_8;
			NullCheck(L_31);
			String_t* L_33;
			L_33 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_31, L_32, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
			NullCheck(L_30);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34;
			L_34 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_30, L_33);
			V_9 = L_34;
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_35 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = V_9;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_9;
			NullCheck(L_37);
			NullCheck(L_35);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_35, L_36, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_38 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = V_2;
			NullCheck(L_40);
			NullCheck(L_38);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_38, L_39, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_41 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_4;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_4;
			NullCheck(L_43);
			NullCheck(L_41);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_41, L_42, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))));
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_44;
			L_44 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			NullCheck(L_44);
			String_t* L_45;
			L_45 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Text.Encoding::get_HeaderName() */, L_44);
			V_10 = L_45;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_46 = __this->get_fieldNames_1();
			int32_t L_47 = V_8;
			NullCheck(L_46);
			String_t* L_48;
			L_48 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_46, L_47, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
			V_11 = L_48;
			String_t* L_49 = V_11;
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_50;
			L_50 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			bool L_51;
			L_51 = WWWTranscoder_SevenBitClean_mCD4E3A5FA7817A3240AE6E1DA57FEB9C09539DA9(L_49, L_50, /*hidden argument*/NULL);
			if (!L_51)
			{
				goto IL_0151;
			}
		}

IL_0140:
		{
			String_t* L_52 = V_11;
			NullCheck(L_52);
			int32_t L_53;
			L_53 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_52, _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86, /*hidden argument*/NULL);
			G_B6_0 = ((((int32_t)L_53) > ((int32_t)(-1)))? 1 : 0);
			goto IL_0152;
		}

IL_0151:
		{
			G_B6_0 = 1;
		}

IL_0152:
		{
			V_14 = (bool)G_B6_0;
			bool L_54 = V_14;
			if (!L_54)
			{
				goto IL_0193;
			}
		}

IL_0158:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_55;
			NullCheck(L_56);
			ArrayElementTypeCheck (L_56, _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
			(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_56;
			String_t* L_58 = V_10;
			NullCheck(L_57);
			ArrayElementTypeCheck (L_57, L_58);
			(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_58);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = L_57;
			NullCheck(L_59);
			ArrayElementTypeCheck (L_59, _stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
			(L_59)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_59;
			String_t* L_61 = V_11;
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_62;
			L_62 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			String_t* L_63;
			L_63 = WWWTranscoder_QPEncode_m9D74D3126E50EE48005E3DCEAD4771F63AF399B4(L_61, L_62, /*hidden argument*/NULL);
			NullCheck(L_60);
			ArrayElementTypeCheck (L_60, L_63);
			(L_60)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_63);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_60;
			NullCheck(L_64);
			ArrayElementTypeCheck (L_64, _stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
			(L_64)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
			String_t* L_65;
			L_65 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_64, /*hidden argument*/NULL);
			V_11 = L_65;
		}

IL_0193:
		{
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_66;
			L_66 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			String_t* L_67 = V_11;
			NullCheck(L_66);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68;
			L_68 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_66, L_67);
			V_12 = L_68;
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_69 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_70 = V_12;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_71 = V_12;
			NullCheck(L_71);
			NullCheck(L_69);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_69, L_70, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_72 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_73 = V_5;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_74 = V_5;
			NullCheck(L_74);
			NullCheck(L_72);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_72, L_73, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length))));
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_75 = __this->get_fileNames_2();
			int32_t L_76 = V_8;
			NullCheck(L_75);
			String_t* L_77;
			L_77 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_75, L_76, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
			V_15 = (bool)((!(((RuntimeObject*)(String_t*)L_77) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_78 = V_15;
			if (!L_78)
			{
				goto IL_0285;
			}
		}

IL_01d8:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_79 = __this->get_fileNames_2();
			int32_t L_80 = V_8;
			NullCheck(L_79);
			String_t* L_81;
			L_81 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_79, L_80, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
			V_16 = L_81;
			String_t* L_82 = V_16;
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_83;
			L_83 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			bool L_84;
			L_84 = WWWTranscoder_SevenBitClean_mCD4E3A5FA7817A3240AE6E1DA57FEB9C09539DA9(L_82, L_83, /*hidden argument*/NULL);
			if (!L_84)
			{
				goto IL_0207;
			}
		}

IL_01f6:
		{
			String_t* L_85 = V_16;
			NullCheck(L_85);
			int32_t L_86;
			L_86 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_85, _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86, /*hidden argument*/NULL);
			G_B12_0 = ((((int32_t)L_86) > ((int32_t)(-1)))? 1 : 0);
			goto IL_0208;
		}

IL_0207:
		{
			G_B12_0 = 1;
		}

IL_0208:
		{
			V_18 = (bool)G_B12_0;
			bool L_87 = V_18;
			if (!L_87)
			{
				goto IL_0249;
			}
		}

IL_020e:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_88 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_89 = L_88;
			NullCheck(L_89);
			ArrayElementTypeCheck (L_89, _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
			(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_90 = L_89;
			String_t* L_91 = V_10;
			NullCheck(L_90);
			ArrayElementTypeCheck (L_90, L_91);
			(L_90)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_91);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_92 = L_90;
			NullCheck(L_92);
			ArrayElementTypeCheck (L_92, _stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
			(L_92)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_93 = L_92;
			String_t* L_94 = V_16;
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_95;
			L_95 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			String_t* L_96;
			L_96 = WWWTranscoder_QPEncode_m9D74D3126E50EE48005E3DCEAD4771F63AF399B4(L_94, L_95, /*hidden argument*/NULL);
			NullCheck(L_93);
			ArrayElementTypeCheck (L_93, L_96);
			(L_93)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_96);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_97 = L_93;
			NullCheck(L_97);
			ArrayElementTypeCheck (L_97, _stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
			(L_97)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
			String_t* L_98;
			L_98 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_97, /*hidden argument*/NULL);
			V_16 = L_98;
		}

IL_0249:
		{
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_99;
			L_99 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			String_t* L_100 = V_16;
			NullCheck(L_99);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_101;
			L_101 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_99, L_100);
			V_17 = L_101;
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_102 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_103 = V_6;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_104 = V_6;
			NullCheck(L_104);
			NullCheck(L_102);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_102, L_103, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_104)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_105 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_106 = V_17;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_107 = V_17;
			NullCheck(L_107);
			NullCheck(L_105);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_105, L_106, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_107)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_108 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_109 = V_5;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_110 = V_5;
			NullCheck(L_110);
			NullCheck(L_108);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_108, L_109, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_110)->max_length))));
		}

IL_0285:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_111 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_112 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_113 = V_2;
			NullCheck(L_113);
			NullCheck(L_111);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_111, L_112, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_113)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_114 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_115 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_116 = V_2;
			NullCheck(L_116);
			NullCheck(L_114);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_114, L_115, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_116)->max_length))));
			List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_117 = __this->get_formData_0();
			int32_t L_118 = V_8;
			NullCheck(L_117);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_119;
			L_119 = List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_inline(L_117, L_118, /*hidden argument*/List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_RuntimeMethod_var);
			V_13 = L_119;
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_120 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_121 = V_13;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_122 = V_13;
			NullCheck(L_122);
			NullCheck(L_120);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_120, L_121, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_122)->max_length))));
			int32_t L_123 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
		}

IL_02c4:
		{
			int32_t L_124 = V_8;
			List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_125 = __this->get_formData_0();
			NullCheck(L_125);
			int32_t L_126;
			L_126 = List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_inline(L_125, /*hidden argument*/List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_RuntimeMethod_var);
			V_19 = (bool)((((int32_t)L_124) < ((int32_t)L_126))? 1 : 0);
			bool L_127 = V_19;
			if (L_127)
			{
				goto IL_0087;
			}
		}

IL_02dc:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_128 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_129 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_130 = V_2;
			NullCheck(L_130);
			NullCheck(L_128);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_128, L_129, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_130)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_131 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_132 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_133 = V_1;
			NullCheck(L_133);
			NullCheck(L_131);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_131, L_132, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_133)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_134 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_135 = __this->get_boundary_4();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_136 = __this->get_boundary_4();
			NullCheck(L_136);
			NullCheck(L_134);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_134, L_135, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_136)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_137 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_138 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_139 = V_1;
			NullCheck(L_139);
			NullCheck(L_137);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_137, L_138, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_139)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_140 = V_7;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_141 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_142 = V_2;
			NullCheck(L_142);
			NullCheck(L_140);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_140, L_141, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_142)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_143 = V_7;
			NullCheck(L_143);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_144;
			L_144 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_143);
			V_20 = L_144;
			IL2CPP_LEAVE(0x42F, FINALLY_0335);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0335;
	}

FINALLY_0335:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_145 = V_7;
			if (!L_145)
			{
				goto IL_0341;
			}
		}

IL_0339:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_146 = V_7;
			NullCheck(L_146);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_146);
		}

IL_0341:
		{
			IL2CPP_END_FINALLY(821)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(821)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42F, IL_042f)
	}

IL_0342:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_147;
		L_147 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_147);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_148;
		L_148 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_147, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		V_21 = L_148;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_149;
		L_149 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_149);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_150;
		L_150 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_149, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		V_22 = L_150;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_151 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938(L_151, ((int32_t)1024), /*hidden argument*/NULL);
		V_23 = L_151;
	}

IL_0371:
	try
	{ // begin try (depth: 1)
		{
			V_24 = 0;
			goto IL_03ff;
		}

IL_037a:
		{
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_152;
			L_152 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_153 = __this->get_fieldNames_1();
			int32_t L_154 = V_24;
			NullCheck(L_153);
			String_t* L_155;
			L_155 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_153, L_154, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
			NullCheck(L_152);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_156;
			L_156 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_152, L_155);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_157;
			L_157 = WWWTranscoder_DataEncode_m50A486970E8DFF6B99EC71217F626398C2C2C159(L_156, /*hidden argument*/NULL);
			V_25 = L_157;
			List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_158 = __this->get_formData_0();
			int32_t L_159 = V_24;
			NullCheck(L_158);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_160;
			L_160 = List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_inline(L_158, L_159, /*hidden argument*/List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_RuntimeMethod_var);
			V_26 = L_160;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_161 = V_26;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_162;
			L_162 = WWWTranscoder_DataEncode_m50A486970E8DFF6B99EC71217F626398C2C2C159(L_161, /*hidden argument*/NULL);
			V_27 = L_162;
			int32_t L_163 = V_24;
			V_28 = (bool)((((int32_t)L_163) > ((int32_t)0))? 1 : 0);
			bool L_164 = V_28;
			if (!L_164)
			{
				goto IL_03cb;
			}
		}

IL_03bc:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_165 = V_23;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_166 = V_21;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_167 = V_21;
			NullCheck(L_167);
			NullCheck(L_165);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_165, L_166, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_167)->max_length))));
		}

IL_03cb:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_168 = V_23;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_169 = V_25;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_170 = V_25;
			NullCheck(L_170);
			NullCheck(L_168);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_168, L_169, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_170)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_171 = V_23;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_172 = V_22;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_173 = V_22;
			NullCheck(L_173);
			NullCheck(L_171);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_171, L_172, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_173)->max_length))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_174 = V_23;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_175 = V_27;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_176 = V_27;
			NullCheck(L_176);
			NullCheck(L_174);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_174, L_175, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_176)->max_length))));
			int32_t L_177 = V_24;
			V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_177, (int32_t)1));
		}

IL_03ff:
		{
			int32_t L_178 = V_24;
			List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_179 = __this->get_formData_0();
			NullCheck(L_179);
			int32_t L_180;
			L_180 = List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_inline(L_179, /*hidden argument*/List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_RuntimeMethod_var);
			V_29 = (bool)((((int32_t)L_178) < ((int32_t)L_180))? 1 : 0);
			bool L_181 = V_29;
			if (L_181)
			{
				goto IL_037a;
			}
		}

IL_0417:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_182 = V_23;
			NullCheck(L_182);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_183;
			L_183 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_182);
			V_20 = L_183;
			IL2CPP_LEAVE(0x42F, FINALLY_0422);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0422;
	}

FINALLY_0422:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_184 = V_23;
			if (!L_184)
			{
				goto IL_042e;
			}
		}

IL_0426:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_185 = V_23;
			NullCheck(L_185);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_185);
		}

IL_042e:
		{
			IL2CPP_END_FINALLY(1058)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1058)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42F, IL_042f)
	}

IL_042f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_186 = V_20;
		return L_186;
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
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, int32_t ___offset1, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	{
		V_0 = (uint8_t)0;
		int32_t L_0 = ___offset1;
		V_1 = L_0;
		goto IL_0082;
	}

IL_0007:
	{
		uint8_t L_1 = V_0;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)16)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___b0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = V_2;
		G_B4_0 = ((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)48)));
		goto IL_0065;
	}

IL_002d:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_11 = V_2;
		G_B9_0 = ((((int32_t)((((int32_t)L_11) > ((int32_t)((int32_t)75)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B9_0 = 0;
	}

IL_003d:
	{
		V_4 = (bool)G_B9_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)55)));
		goto IL_0065;
	}

IL_004a:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)97))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_15 = V_2;
		G_B14_0 = ((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)102)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B14_0 = 0;
	}

IL_005a:
	{
		V_5 = (bool)G_B14_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)87)));
	}

IL_0065:
	{
		int32_t L_18 = V_2;
		V_6 = (bool)((((int32_t)L_18) > ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		V_7 = (uint8_t)((int32_t)63);
		goto IL_0096;
	}

IL_0077:
	{
		uint8_t L_20 = V_0;
		int32_t L_21 = V_2;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)((int32_t)((uint8_t)L_21))))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = ___offset1;
		V_8 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2))))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_0007;
		}
	}
	{
		uint8_t L_26 = V_0;
		V_7 = L_26;
		goto IL_0096;
	}

IL_0096:
	{
		uint8_t L_27 = V_7;
		return L_27;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_Byte2Hex_m3EBC331645C3DAF63D0D5E24EB2735BF662AA669 (uint8_t ___b0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___hexChars1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___hexChars1;
		uint8_t L_3 = ___b0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)((int32_t)L_3>>(int32_t)4));
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___hexChars1;
		uint8_t L_8 = ___b0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)((int32_t)L_8&(int32_t)((int32_t)15)));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		V_1 = L_11;
		goto IL_001d;
	}

IL_001d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_1;
		return L_12;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_URLEncode_m9A783433F5DFE48FBECB704557718A145844A53C (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___toEncode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlSpace_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlForbidden_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = WWWTranscoder_Encode_mD7D4534ACBC6CE1F98B223CE466352D976C5E99A(L_0, L_1, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.WWWTranscoder::DataEncode(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWWTranscoder_DataEncode_mA017B8D70BF88047C155634E2E2FA3CCC11389E7 (String_t* ___toEncode0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0 = ___e1;
		String_t* L_1 = ___toEncode0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_dataSpace_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlForbidden_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = WWWTranscoder_Encode_mD7D4534ACBC6CE1F98B223CE466352D976C5E99A(L_2, L_3, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_7;
		L_7 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		V_1 = L_10;
		goto IL_0030;
	}

IL_0030:
	{
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::DataEncode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_DataEncode_m50A486970E8DFF6B99EC71217F626398C2C2C159 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___toEncode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_dataSpace_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlForbidden_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = WWWTranscoder_Encode_mD7D4534ACBC6CE1F98B223CE466352D976C5E99A(L_0, L_1, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWWTranscoder_QPEncode_m9D74D3126E50EE48005E3DCEAD4771F63AF399B4 (String_t* ___toEncode0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0 = ___e1;
		String_t* L_1 = ___toEncode0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_qpEscapeChar_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_qpSpace_7();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_qpForbidden_8();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = WWWTranscoder_Encode_mD7D4534ACBC6CE1F98B223CE466352D976C5E99A(L_2, L_3, L_4, L_5, (bool)1, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_7;
		L_7 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		V_1 = L_10;
		goto IL_0030;
	}

IL_0030:
	{
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_Encode_mD7D4534ACBC6CE1F98B223CE466352D976C5E99A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___space2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___forbidden3, bool ___uppercase4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * G_B11_1 = NULL;
	int32_t G_B10_0 = 0;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * G_B10_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * G_B12_2 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___input0;
		NullCheck(L_0);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938(L_1, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0089;
		}

IL_0011:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___input0;
			int32_t L_3 = V_1;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_2 = (bool)((((int32_t)L_5) == ((int32_t)((int32_t)32)))? 1 : 0);
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_002d;
			}
		}

IL_001d:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_7 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___space2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___space2;
			NullCheck(L_9);
			NullCheck(L_7);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
			goto IL_0084;
		}

IL_002d:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___input0;
			int32_t L_11 = V_1;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			if ((((int32_t)L_13) < ((int32_t)((int32_t)32))))
			{
				goto IL_0046;
			}
		}

IL_0034:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___input0;
			int32_t L_15 = V_1;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			if ((((int32_t)L_17) > ((int32_t)((int32_t)126))))
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___forbidden3;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ___input0;
			int32_t L_20 = V_1;
			NullCheck(L_19);
			int32_t L_21 = L_20;
			uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			bool L_23;
			L_23 = WWWTranscoder_ByteArrayContains_mBDB7732AE3F1FD6B9930421075B8D41C4BB7B95B(L_18, L_22, /*hidden argument*/NULL);
			G_B8_0 = ((int32_t)(L_23));
			goto IL_0047;
		}

IL_0046:
		{
			G_B8_0 = 1;
		}

IL_0047:
		{
			V_3 = (bool)G_B8_0;
			bool L_24 = V_3;
			if (!L_24)
			{
				goto IL_0078;
			}
		}

IL_004b:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_25 = V_0;
			uint8_t L_26 = ___escapeChar1;
			NullCheck(L_25);
			VirtActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_25, L_26);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_27 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = ___input0;
			int32_t L_29 = V_1;
			NullCheck(L_28);
			int32_t L_30 = L_29;
			uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
			bool L_32 = ___uppercase4;
			G_B10_0 = ((int32_t)(L_31));
			G_B10_1 = L_27;
			if (L_32)
			{
				G_B11_0 = ((int32_t)(L_31));
				G_B11_1 = L_27;
				goto IL_0063;
			}
		}

IL_005c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_lcHexChars_1();
			G_B12_0 = L_33;
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			goto IL_0068;
		}

IL_0063:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_ucHexChars_0();
			G_B12_0 = L_34;
			G_B12_1 = G_B11_0;
			G_B12_2 = G_B11_1;
		}

IL_0068:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35;
			L_35 = WWWTranscoder_Byte2Hex_m3EBC331645C3DAF63D0D5E24EB2735BF662AA669((uint8_t)G_B12_1, G_B12_0, /*hidden argument*/NULL);
			NullCheck(G_B12_2);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, G_B12_2, L_35, 0, 2);
			goto IL_0084;
		}

IL_0078:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_36 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = ___input0;
			int32_t L_38 = V_1;
			NullCheck(L_37);
			int32_t L_39 = L_38;
			uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
			NullCheck(L_36);
			VirtActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_36, L_40);
		}

IL_0084:
		{
			int32_t L_41 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		}

IL_0089:
		{
			int32_t L_42 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = ___input0;
			NullCheck(L_43);
			V_4 = (bool)((((int32_t)L_42) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))? 1 : 0);
			bool L_44 = V_4;
			if (L_44)
			{
				goto IL_0011;
			}
		}

IL_0098:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_45 = V_0;
			NullCheck(L_45);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46;
			L_46 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_45);
			V_5 = L_46;
			IL2CPP_LEAVE(0xAD, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_47 = V_0;
			if (!L_47)
			{
				goto IL_00ac;
			}
		}

IL_00a5:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_48 = V_0;
			NullCheck(L_48);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_48);
		}

IL_00ac:
		{
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
	}

IL_00ad:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = V_5;
		return L_49;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_mBDB7732AE3F1FD6B9930421075B8D41C4BB7B95B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, uint8_t ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_1 = 0;
		goto IL_001d;
	}

IL_0009:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___array0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint8_t L_5 = ___b1;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0018;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_002b;
	}

IL_0018:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		V_4 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0009;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___toEncode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlSpace_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___index1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___comperand2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		NullCheck(L_0);
		int32_t L_1 = ___index1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___comperand2;
		NullCheck(L_2);
		V_0 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)L_1))) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_0013:
	{
		V_2 = 0;
		goto IL_0030;
	}

IL_0017:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		int32_t L_5 = ___index1;
		int32_t L_6 = V_2;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6));
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___comperand2;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_002c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_002c:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_15 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___comperand2;
		NullCheck(L_16);
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0040;
	}

IL_0040:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___space2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B7_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___input0;
		NullCheck(L_0);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938(L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0071;
		}

IL_000f:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___input0;
			int32_t L_3 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___space2;
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126(L_2, L_3, L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_0031;
			}
		}

IL_001c:
		{
			int32_t L_7 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___space2;
			NullCheck(L_8);
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), (int32_t)1))));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_9 = V_0;
			NullCheck(L_9);
			VirtActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_9, (uint8_t)((int32_t)32));
			goto IL_006c;
		}

IL_0031:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___input0;
			int32_t L_11 = V_1;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			uint8_t L_14 = ___escapeChar1;
			if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
			{
				goto IL_0041;
			}
		}

IL_0037:
		{
			int32_t L_15 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___input0;
			NullCheck(L_16);
			G_B7_0 = ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)2))) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))? 1 : 0);
			goto IL_0042;
		}

IL_0041:
		{
			G_B7_0 = 0;
		}

IL_0042:
		{
			V_3 = (bool)G_B7_0;
			bool L_17 = V_3;
			if (!L_17)
			{
				goto IL_0060;
			}
		}

IL_0046:
		{
			int32_t L_18 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_19 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___input0;
			int32_t L_21 = V_1;
			int32_t L_22 = L_21;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			uint8_t L_23;
			L_23 = WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA(L_20, L_22, /*hidden argument*/NULL);
			NullCheck(L_19);
			VirtActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_19, L_23);
			goto IL_006c;
		}

IL_0060:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_24 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = ___input0;
			int32_t L_26 = V_1;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			NullCheck(L_24);
			VirtActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_24, L_28);
		}

IL_006c:
		{
			int32_t L_29 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		}

IL_0071:
		{
			int32_t L_30 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = ___input0;
			NullCheck(L_31);
			V_4 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))? 1 : 0);
			bool L_32 = V_4;
			if (L_32)
			{
				goto IL_000f;
			}
		}

IL_007d:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_33 = V_0;
			NullCheck(L_33);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34;
			L_34 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_33);
			V_5 = L_34;
			IL2CPP_LEAVE(0x92, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_35 = V_0;
			if (!L_35)
			{
				goto IL_0091;
			}
		}

IL_008a:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_36 = V_0;
			NullCheck(L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_36);
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(135)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x92, IL_0092)
	}

IL_0092:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_5;
		return L_37;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_mCD4E3A5FA7817A3240AE6E1DA57FEB9C09539DA9 (String_t* ___s0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0 = ___e1;
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = WWWTranscoder_SevenBitClean_mE19564370D689C62CCE91C79912AB4396EA17A68(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_mE19564370D689C62CCE91C79912AB4396EA17A68 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		V_0 = 0;
		goto IL_0024;
	}

IL_0005:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___input0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) < ((int32_t)((int32_t)32))))
		{
			goto IL_0016;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___input0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		G_B4_0 = ((((int32_t)L_7) > ((int32_t)((int32_t)126)))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B4_0 = 1;
	}

IL_0017:
	{
		V_1 = (bool)G_B4_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_001f;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0032;
	}

IL_001f:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_10 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___input0;
		NullCheck(L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Void UnityEngine.WWWTranscoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder__cctor_mA3A2027DC5C23C8D8DDC8DDF795EE263B8B24C2F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_ucHexChars_0(L_1);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_lcHexChars_1(L_3);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_urlEscapeChar_2((uint8_t)((int32_t)37));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)43));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_urlSpace_3(L_5);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_6;
		L_6 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_dataSpace_4(L_7);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_8;
		L_8 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_urlForbidden_5(L_9);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_qpEscapeChar_6((uint8_t)((int32_t)61));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)95));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_qpSpace_7(L_11);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12;
		L_12 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_qpForbidden_8(L_13);
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
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_RedirectTo_m0E8715D4658E15C9775C6D06E1891267CB3C852F (String_t* ___baseUri0, String_t* ___redirectUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_1 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		String_t* L_0 = ___redirectUri1;
		NullCheck(L_0);
		Il2CppChar L_1;
		L_1 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, 0, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = ___redirectUri1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF(L_4, L_3, 2, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0022;
	}

IL_001a:
	{
		String_t* L_5 = ___redirectUri1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_6 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF(L_6, L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0022:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		goto IL_0052;
	}

IL_0038:
	{
		String_t* L_12 = ___baseUri0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_13 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF(L_13, L_12, 1, /*hidden argument*/NULL);
		V_1 = L_13;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_14 = V_1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_15 = V_0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_16 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18(L_16, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_17 = V_2;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		goto IL_0052;
	}

IL_0052:
	{
		String_t* L_19 = V_5;
		return L_19;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290 (String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_1 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_2 = NULL;
	FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * V_9 = NULL;
	bool V_10 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		String_t* L_0 = ___targetUrl0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_4 = L_1;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_00d6;
	}

IL_0019:
	{
		V_0 = (bool)0;
		String_t* L_3 = ___localUrl1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
		String_t* L_5 = ___targetUrl0;
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, 0, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_8 = V_1;
		String_t* L_9 = ___targetUrl0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_10 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m0B44AFB01F3FEDE9319BA4556288340D16101F9D(L_10, L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		V_0 = (bool)1;
	}

IL_0041:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Uri_op_Equality_mB322C9CBB45846441BDCA7357E7D28123824ED83(L_11, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_13 = ((WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var))->get_domainRegex_0();
		String_t* L_14 = ___targetUrl0;
		NullCheck(L_13);
		bool L_15;
		L_15 = Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859(L_13, L_14, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_15));
		goto IL_0058;
	}

IL_0057:
	{
		G_B7_0 = 0;
	}

IL_0058:
	{
		V_7 = (bool)G_B7_0;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_17, /*hidden argument*/NULL);
		String_t* L_19 = ___targetUrl0;
		String_t* L_20;
		L_20 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_18, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, L_19, /*hidden argument*/NULL);
		___targetUrl0 = L_20;
		V_0 = (bool)1;
	}

IL_0075:
	{
		V_3 = (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)NULL;
	}

IL_0077:
	try
	{ // begin try (depth: 1)
		{
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_21 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
			bool L_22;
			L_22 = Uri_op_Equality_mB322C9CBB45846441BDCA7357E7D28123824ED83(L_21, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_0091;
			}
		}

IL_0081:
		{
			String_t* L_23 = ___targetUrl0;
			NullCheck(L_23);
			Il2CppChar L_24;
			L_24 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_23, 0, /*hidden argument*/NULL);
			G_B13_0 = ((((int32_t)((((int32_t)L_24) == ((int32_t)((int32_t)46)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0092;
		}

IL_0091:
		{
			G_B13_0 = 0;
		}

IL_0092:
		{
			V_8 = (bool)G_B13_0;
			bool L_25 = V_8;
			if (!L_25)
			{
				goto IL_009f;
			}
		}

IL_0098:
		{
			String_t* L_26 = ___targetUrl0;
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_27 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
			Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_27, L_26, /*hidden argument*/NULL);
			V_2 = L_27;
		}

IL_009f:
		{
			goto IL_00ab;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a2;
		throw e;
	}

CATCH_00a2:
	{ // begin catch(System.FormatException)
		V_9 = ((FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)__exception_local);
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_28 = V_9;
		V_3 = L_28;
		goto IL_00ab;
	} // end catch (depth: 1)

IL_00ab:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Uri_op_Equality_mB322C9CBB45846441BDCA7357E7D28123824ED83(L_29, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL, /*hidden argument*/NULL);
		V_10 = L_30;
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_00ca;
		}
	}

IL_00b8:
	try
	{ // begin try (depth: 1)
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_32 = V_1;
		String_t* L_33 = ___targetUrl0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_34 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m0B44AFB01F3FEDE9319BA4556288340D16101F9D(L_34, L_32, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		V_0 = (bool)1;
		goto IL_00ca;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c6;
		throw e;
	}

CATCH_00c6:
	{ // begin catch(System.FormatException)
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_35 = V_3;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_00ca:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_36 = V_2;
		String_t* L_37 = ___targetUrl0;
		bool L_38 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		String_t* L_39;
		L_39 = WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D(L_36, L_37, L_38, /*hidden argument*/NULL);
		V_5 = L_39;
		goto IL_00d6;
	}

IL_00d6:
	{
		String_t* L_40 = V_5;
		return L_40;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	StringBuilder_t * V_8 = NULL;
	bool V_9 = false;
	String_t* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B23_0 = 0;
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___targetUri0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Uri_get_IsFile_mCFA022C6E4641EBD7285A01056B7E201CEFD2C73(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0083;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = ___targetUri0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Uri_get_IsLoopback_m6988313CE348064A6A068347D878DDC51594B710(L_3, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_6 = ___targetUri0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		goto IL_01c1;
	}

IL_0026:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_8 = ___targetUri0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = V_2;
		NullCheck(L_10);
		bool L_11;
		L_11 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_10, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		V_5 = L_11;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
	}

IL_0045:
	{
		String_t* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_17 = V_2;
		NullCheck(L_17);
		Il2CppChar L_18;
		L_18 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_17, 0, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_18) == ((int32_t)((int32_t)47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B8_0 = 0;
	}

IL_005f:
	{
		V_6 = (bool)G_B8_0;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_20 = V_2;
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_0071:
	{
		String_t* L_22 = V_2;
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		goto IL_01c1;
	}

IL_0083:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_24 = ___targetUri0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		bool L_26 = ___prependProtocol2;
		if (L_26)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_27 = ___targetUrl1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_27, /*hidden argument*/NULL);
		String_t* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)2)))))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_31 = ___targetUrl1;
		String_t* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Il2CppChar L_34;
		L_34 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_31, ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1)), /*hidden argument*/NULL);
		G_B15_0 = ((((int32_t)((((int32_t)L_34) == ((int32_t)((int32_t)47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B15_0 = 0;
	}

IL_00b5:
	{
		V_7 = (bool)G_B15_0;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_019c;
		}
	}
	{
		String_t* L_36 = V_0;
		String_t* L_37 = ___targetUrl1;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_37, /*hidden argument*/NULL);
		StringBuilder_t * L_39 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mE87B9746FC40A7ECC0149A24685BD0713459FAF1(L_39, L_36, L_38, /*hidden argument*/NULL);
		V_8 = L_39;
		StringBuilder_t * L_40 = V_8;
		NullCheck(L_40);
		StringBuilder_t * L_41;
		L_41 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_40, ((int32_t)58), /*hidden argument*/NULL);
		String_t* L_42 = V_0;
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A, /*hidden argument*/NULL);
		V_9 = L_43;
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_0175;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_45 = ___targetUri0;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306(L_45, /*hidden argument*/NULL);
		V_10 = L_46;
		String_t* L_47 = V_10;
		NullCheck(L_47);
		bool L_48;
		L_48 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_47, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		V_11 = L_48;
		bool L_49 = V_11;
		if (!L_49)
		{
			goto IL_010f;
		}
	}
	{
		String_t* L_50 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		String_t* L_51;
		L_51 = WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF(L_50, /*hidden argument*/NULL);
		V_10 = L_51;
	}

IL_010f:
	{
		String_t* L_52 = V_10;
		NullCheck(L_52);
		bool L_53;
		L_53 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_52, _stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_54 = V_10;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_54, /*hidden argument*/NULL);
		if ((((int32_t)L_55) <= ((int32_t)6)))
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_56 = V_10;
		NullCheck(L_56);
		Il2CppChar L_57;
		L_57 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_56, 6, /*hidden argument*/NULL);
		G_B23_0 = ((((int32_t)((((int32_t)L_57) == ((int32_t)((int32_t)47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0139;
	}

IL_0138:
	{
		G_B23_0 = 0;
	}

IL_0139:
	{
		V_12 = (bool)G_B23_0;
		bool L_58 = V_12;
		if (!L_58)
		{
			goto IL_0160;
		}
	}
	{
		StringBuilder_t * L_59 = V_8;
		NullCheck(L_59);
		StringBuilder_t * L_60;
		L_60 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_59, _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, /*hidden argument*/NULL);
		StringBuilder_t * L_61 = V_8;
		String_t* L_62 = V_10;
		NullCheck(L_62);
		String_t* L_63;
		L_63 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_62, 5, /*hidden argument*/NULL);
		NullCheck(L_61);
		StringBuilder_t * L_64;
		L_64 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_61, L_63, /*hidden argument*/NULL);
		goto IL_016a;
	}

IL_0160:
	{
		StringBuilder_t * L_65 = V_8;
		String_t* L_66 = V_10;
		NullCheck(L_65);
		StringBuilder_t * L_67;
		L_67 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_65, L_66, /*hidden argument*/NULL);
	}

IL_016a:
	{
		StringBuilder_t * L_68 = V_8;
		NullCheck(L_68);
		String_t* L_69;
		L_69 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_68);
		V_4 = L_69;
		goto IL_01c1;
	}

IL_0175:
	{
		StringBuilder_t * L_70 = V_8;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_71 = ___targetUri0;
		NullCheck(L_71);
		String_t* L_72;
		L_72 = Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35(L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		StringBuilder_t * L_73;
		L_73 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_70, L_72, /*hidden argument*/NULL);
		StringBuilder_t * L_74 = V_8;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_75 = ___targetUri0;
		NullCheck(L_75);
		String_t* L_76;
		L_76 = Uri_get_Fragment_m1734B2D3F27F38AA342CB65885DE732160501E72(L_75, /*hidden argument*/NULL);
		NullCheck(L_74);
		StringBuilder_t * L_77;
		L_77 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_74, L_76, /*hidden argument*/NULL);
		StringBuilder_t * L_78 = V_8;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_78);
		V_4 = L_79;
		goto IL_01c1;
	}

IL_019c:
	{
		String_t* L_80 = ___targetUrl1;
		NullCheck(L_80);
		bool L_81;
		L_81 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_80, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		V_13 = L_81;
		bool L_82 = V_13;
		if (!L_82)
		{
			goto IL_01b7;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_83 = ___targetUri0;
		NullCheck(L_83);
		String_t* L_84;
		L_84 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_83, /*hidden argument*/NULL);
		V_4 = L_84;
		goto IL_01c1;
	}

IL_01b7:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_85 = ___targetUri0;
		NullCheck(L_85);
		String_t* L_86;
		L_86 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_85, /*hidden argument*/NULL);
		V_4 = L_86;
		goto IL_01c1;
	}

IL_01c1:
	{
		String_t* L_87 = V_4;
		return L_87;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF (String_t* ___encoded0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___encoded0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_5;
		L_5 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_5, L_6);
		V_2 = L_7;
		goto IL_0022;
	}

IL_0022:
	{
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestUtils__cctor_mD79D1BBF154F1968AB3E32B710D8CE7583105600 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_0, _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F, /*hidden argument*/NULL);
		((WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var))->set_domainRegex_0(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method)
{
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___value0;
		__this->set_U3CwebRequestU3Ek__BackingField_2(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
