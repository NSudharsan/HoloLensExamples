#include "pch-cpp.hpp"

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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>
struct EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103;
// System.EventHandler`1<System.Boolean>
struct EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeAddedEventArgs>
struct EventHandler_1_tCA0A2B41C8984DA1BE1BFF8CE830CD34399AA70F;
// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>
struct EventHandler_1_t5BCE95ACEA650660657EF4F49E824484DCEDC9CC;
// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>
struct EventHandler_1_t3555C0D4BF0D001148DF752B5B41E62A085D7C2F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>>
struct Func_2_tF43B855B7DEE26C922D5DAAA2EACCF1FD029FF32;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.QR.QRCode>
struct IEnumerable_1_tC2E486ABCBD46D3CCBB71D78159727BBDE840B56;
// System.Collections.Generic.IList`1<Microsoft.MixedReality.QR.QRCode>
struct IList_1_tDCD09B6575F32317464611CA32E5B52AC825F006;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Guid,UnityEngine.GameObject>
struct KeyCollection_t0B1C4148157031F10451F267DE15860D6DFCB819;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Guid,Microsoft.MixedReality.QR.QRCode>
struct KeyCollection_tF05F48C45438D692B218C084C76BDDE674755D8B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.QR.QRCode>
struct List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Guid,UnityEngine.GameObject>>
struct Node_t878A07FD9C642BECA83645F407833C97CE8D4E89;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>
struct Node_tBF6A1CB8835A47D23D93E5C7A69B82A8C4E5576F;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Guid,Microsoft.MixedReality.QR.QRCode>>
struct Node_t8DE1D713D30F83E0BE8DFBB2EB71967127E049DC;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// QRTracking.QRCodeEventArgs`1<System.Object>
struct QRCodeEventArgs_1_tB170C019EF1E3EB07BEB45B8539005046FCF7AB6;
// QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>
struct QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22;
// System.Collections.Generic.Queue`1<QRTracking.QRCodesVisualizer/ActionData>
struct Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F;
// QRTracking.Singleton`1<System.Object>
struct Singleton_1_t886D4BAE1A5F8F692736EF2CA36FD987976428A0;
// QRTracking.Singleton`1<QRTracking.QRCodesManager>
struct Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700;
// System.Collections.Generic.SortedDictionary`2<System.Guid,UnityEngine.GameObject>
struct SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC;
// System.Collections.Generic.SortedDictionary`2<System.Guid,System.Object>
struct SortedDictionary_2_tEA77492B4208CDD503D350FBDAFF1412D0AA06C0;
// System.Collections.Generic.SortedDictionary`2<System.Guid,Microsoft.MixedReality.QR.QRCode>
struct SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<System.Guid,UnityEngine.GameObject>>
struct SortedSet_1_t69053C3C2EC1938A6D4F8B262F0827877C8CB2E1;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>
struct SortedSet_1_t6837C1CD99E4816479FC9B3CA383B9C65AA7D42D;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<System.Guid,Microsoft.MixedReality.QR.QRCode>>
struct SortedSet_1_t1236BE27B6EA6D0DB854FAE0C95ADC1D750F1485;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Guid,UnityEngine.GameObject>>>
struct Stack_1_tD60A0691725838763B29C0580C86EEF87D1E1BA0;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>>
struct Stack_1_t731D7FE3DA6926D1F1D2CEE181E3A291BEF9BA22;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Guid,Microsoft.MixedReality.QR.QRCode>>>
struct Stack_1_t9511E0EEF5B03DB77FCE5284EF7C73A51DB03721;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct TaskFactory_1_t2F99AC12D855E7A1BF6429C36C0FBC879F08F9C2;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Guid,UnityEngine.GameObject>>
struct TreeSet_1_tC0737760F3FA2BC6C4CB21A1582D698F6DC605A0;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Guid,Microsoft.MixedReality.QR.QRCode>>
struct TreeSet_1_t6C72253D5DE875912C399A50D803545F3CC107F7;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Guid,UnityEngine.GameObject>
struct ValueCollection_tBFE574CC44BFA713963086CBAF7122DE794E1844;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Guid,System.Object>
struct ValueCollection_t5C37289B307157CF740594AB8987F349028B4FB6;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Guid,Microsoft.MixedReality.QR.QRCode>
struct ValueCollection_t01A52B30994F5EFC2BFD67A27FCA39C3CD2FF0E8;
// WinRT.WeakLazy`1<Microsoft.MixedReality.QR.QRCodeWatcher/Statics>
struct WeakLazy_1_tA6F8A5EE3F748879C0DE120274475877776E75A0;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// Microsoft.MixedReality.QR.QRCode[]
struct QRCodeU5BU5D_tA1DCECB901ECEB17FEBF219A116C03D3D8891F92;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;
// QRTracking.QRCodesVisualizer/ActionData[]
struct ActionDataU5BU5D_tA8CA46C9CB469EE3586FAD88155523893CA77F51;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.QR.IQRCode
struct IQRCode_t7991D68A1726CE743839B99850437162C61AF362;
// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs
struct IQRCodeAddedEventArgs_t69AD7543FA9F144176D2BED1D3EC10A0D122EBF5;
// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs
struct IQRCodeRemovedEventArgs_t2C71F7D125769E856BE2634A207726BD49E61ADA;
// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs
struct IQRCodeUpdatedEventArgs_t27F7643A4FF75C5B5E854CB740C0FCBBBCB7BA8D;
// Microsoft.MixedReality.QR.IQRCodeWatcher
struct IQRCodeWatcher_t70517DE526E006A3CE09E2C2456C542C737AD42C;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MyQRCodeManager
struct MyQRCodeManager_t958A40C0C85043628B0B6C4944FF59B1E728D74A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.MixedReality.QR.QRCode
struct QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40;
// QRTracking.QRCode
struct QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207;
// Microsoft.MixedReality.QR.QRCodeAddedEventArgs
struct QRCodeAddedEventArgs_t77611BE65C7F482E6E7D27642D8D7752C55CEC0A;
// Microsoft.MixedReality.QR.QRCodeRemovedEventArgs
struct QRCodeRemovedEventArgs_t4ACC2B0A16DFAB8ACF15183B33B92E056F63BE7B;
// Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs
struct QRCodeUpdatedEventArgs_t8F9B61799F713834B03340474C74B58A667B5C1F;
// Microsoft.MixedReality.QR.QRCodeWatcher
struct QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1;
// QRTracking.QRCodesManager
struct QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543;
// QRTracking.QRCodesVisualizer
struct QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB;
// QRTracking.SpatialGraphCoordinateSystem
struct SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t3555C0D4BF0D001148DF752B5B41E62A085D7C2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t5BCE95ACEA650660657EF4F49E824484DCEDC9CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCA0A2B41C8984DA1BE1BFF8CE830CD34399AA70F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRCodeWatcherAccessStatus_t86023A28F1A50704820A22D4DEFAD5BB8BA61A9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRVersion_t5FD572A6D650F21EFD763F4C7B298353969F7F39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385;
IL2CPP_EXTERN_C String_t* _stringLiteral012A9154EB0E2544752C473E2F5A47088D1568E6;
IL2CPP_EXTERN_C String_t* _stringLiteral015FE08F38FB20EBA6040A2EAEEB7FA9115CA907;
IL2CPP_EXTERN_C String_t* _stringLiteral0576BA379DB72C5751840475A13146C3E5B6F1DF;
IL2CPP_EXTERN_C String_t* _stringLiteral05CB6690A769EECBE4848B36A28B3988369EF536;
IL2CPP_EXTERN_C String_t* _stringLiteral0B3CB3F99BC45DAB07113D93B25AA5240C2DB5E6;
IL2CPP_EXTERN_C String_t* _stringLiteral0C8BBFA9F5BF2D7B808CD3A820BE3602E69BA36B;
IL2CPP_EXTERN_C String_t* _stringLiteral145AD74B63B3E9BA385E105383B05C39F0E5FED4;
IL2CPP_EXTERN_C String_t* _stringLiteral19C571CDD57B34F5A933CE0BCB7986464561D007;
IL2CPP_EXTERN_C String_t* _stringLiteral34BCC7D6A11188AEE9762CFDF5CC09AC27FC26D3;
IL2CPP_EXTERN_C String_t* _stringLiteral37746D726B84C34364DC77DFA8EEDA4458C0ACFB;
IL2CPP_EXTERN_C String_t* _stringLiteral3800E206DF25F91844E65CAB84A1EE76394A6277;
IL2CPP_EXTERN_C String_t* _stringLiteral38999ED5CF4AC7E609FDFC0137E1739626795BC2;
IL2CPP_EXTERN_C String_t* _stringLiteral45DA574CB2C8F055AD1800B98A4B50DCC48A252C;
IL2CPP_EXTERN_C String_t* _stringLiteral49C2C4CBD74690CC3F0B4127393BEA222F0A5B31;
IL2CPP_EXTERN_C String_t* _stringLiteral4D329D4CFAC1274B5D81E6AB7AFFB9C4C4EF8E1E;
IL2CPP_EXTERN_C String_t* _stringLiteral5A491DB589B97B437F24957B6D325EE00C6B81FC;
IL2CPP_EXTERN_C String_t* _stringLiteral5A5F76348815CD344F783F121EB3BBEBEED71C39;
IL2CPP_EXTERN_C String_t* _stringLiteral61F38298A615A904E0C5E9DB74D01127FBB11B70;
IL2CPP_EXTERN_C String_t* _stringLiteral66CF4B263730567AD27F70C87A31941CA31A0638;
IL2CPP_EXTERN_C String_t* _stringLiteral67C5284596BD3DD041640DAB32C50B2D2938E17C;
IL2CPP_EXTERN_C String_t* _stringLiteral6ED28B99113BB82D034A7C722F019C2EB2EC40FC;
IL2CPP_EXTERN_C String_t* _stringLiteral6F88CFB0D8276B94B359A05357AB7E176E554F44;
IL2CPP_EXTERN_C String_t* _stringLiteral7E76207EF38E064996E4F34B421DAB003D1B8209;
IL2CPP_EXTERN_C String_t* _stringLiteral81A18684769CD3ED4091D7616AA425D54B3274CC;
IL2CPP_EXTERN_C String_t* _stringLiteral81A9C47F832DFF447C89A9A02C11C7923FEF4D9C;
IL2CPP_EXTERN_C String_t* _stringLiteral830CCE3EA9A59C6B7EF178FD180E877B5B96EED8;
IL2CPP_EXTERN_C String_t* _stringLiteral8E4ADB2226577E5427587F7395A6706D20853A23;
IL2CPP_EXTERN_C String_t* _stringLiteralAAB948110EDB8CBC23EFB07A30BB51F296658C8A;
IL2CPP_EXTERN_C String_t* _stringLiteralAB0F2AA585E4293F3648EFB42D7769AA3CCB4FBA;
IL2CPP_EXTERN_C String_t* _stringLiteralADC474B38411E6C93F60127BC90F08A87E990BD6;
IL2CPP_EXTERN_C String_t* _stringLiteralC152E6B03FE454C99278017E4ECF0568CF8CBE28;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralC41B690EE2D8543081458532BCEECC70477A6323;
IL2CPP_EXTERN_C String_t* _stringLiteralCF749B962D9D36E7EEFE58489C1633EDABAEF38F;
IL2CPP_EXTERN_C String_t* _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928;
IL2CPP_EXTERN_C String_t* _stringLiteralD52996CC1ADEAA72CD886FCF2CF9405C220B34F6;
IL2CPP_EXTERN_C String_t* _stringLiteralD66A73752062FAA344673695094B15C58050D86B;
IL2CPP_EXTERN_C String_t* _stringLiteralE65E2CE0DEBF2B173F8B6082FD5880E40BD12E78;
IL2CPP_EXTERN_C String_t* _stringLiteralF3922079D01F645E56C79A7CD17AA011A7A94020;
IL2CPP_EXTERN_C String_t* _stringLiteralF41FA8A5140859D1C99B970D3A94D3E5D8815528;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7BB5AFE34A7641E7D3BF55F8816BDE55C67219;
IL2CPP_EXTERN_C String_t* _stringLiteralFFA30D3B695EC15584CDED61B4A8688598E7D3BC;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_m10A84018309A6D64785A9FBA1DBB5AE84AF036C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_mE935A4840A0574D9994ECA626C143DE9DC1172D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m036FCECBCB3BB2E2272B409594F5FA45C25C9B5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDA2519A67C765881B01A80E1C10CFFC7D6A977E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6284D28235A9B1D7C4528A6A6D22D7C5BB380851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCB834C08E0713324A30D692ECCD4DA983EEF7A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4CF9E7FA8993C11DDCC4A8084EA372974BCEA39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m74384F579C972D8FA6D4F81F29EA7F57BB8BCA95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m42D0BBB3F676D599DCAAA80A83CE77067E5E550B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m12BA750107857E6FC3727A8799DDF886EC14C684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m89F752F9643DA7F92FFEDCD06BC26F5BB9BFF7AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8DA19DB4049839DB9B1503CEAD5D988FEB999C9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mCAE3F32042CD3882698A13CE94A6CD252869E084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mF0DFFCE272FE4792069304D117B3C7A6907AC5F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisQRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207_m31D004BB01F60B33EF89D944B648C33FD6AA4251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7_m1110A5BB38EB761ECF8C6E1CAB3E3ED8390F4669_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m38179A314485CB66501658A4EAD7921B759CFA14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m3C0FA0F135703D79ABA12B0E5F614C471CE582C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mAA25298892BAD03B93824F99BDC1EDC877D07C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD56AA2FA9523945411DE3526AFB7B70F3E40A56B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodeEventArgs_1_get_Data_m88D1189535B385C85E32E1A93EC32EB64DECB888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodeEventArgs_Create_TisQRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40_m04207A8B460314B5D8F603B3499D6B53B1C342EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCode_Start_mC52A1519A5B2DDBFC5C6A2C63A3FC0D815DB2C4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodesManager_QRCodeWatcher_Added_mD411213E68E3E96A943F935DE917EF521999E566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodesManager_QRCodeWatcher_EnumerationCompleted_mD038D4411A8CF5501500C4508EE2E1DE6BDCBD62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodesManager_QRCodeWatcher_Removed_m5EE66C32918F5A117F328446BD254787AEAA8E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodesManager_QRCodeWatcher_Updated_m643A58FD0F608D6C7BC3CAC50416DEB8F6B65014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodesVisualizer_Instance_QRCodeAdded_m5B5B364C3D02CEE43D2D31FC9337563CD8CD6C74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodesVisualizer_Instance_QRCodeRemoved_mF88F2A4411DB0CE5E8B942DDBB807244F6534C60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodesVisualizer_Instance_QRCodeUpdated_m09DFD7A50F076A04B11AE14AC3C452770AE8DCE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodesVisualizer_Instance_QRCodesTrackingStateChanged_m90ECC4CEEE93D9CA1BEE0AD6F421DABFBF07EBBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodesVisualizer_Start_mCBDF9197A0996D90BBE1CDC64D19A52BFB57D241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mCAE79E030BE01A9215627883BACBF834DCCAEB68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m5CA6B1B89CB8D897ACEE1AA1AA907F46146B7092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m812BFFC0DCA11665073AAE686BF416AFF180B9F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m988567ED68F97FA39568BB637F79E48904DD31CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m902448B510BDA3596A55859D3544F754294037C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Add_m6265CDD5649B420911A38DF352AF3F5A193E3FE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Clear_m0B4DFF94494EF834FA659F065695D6D69B871C40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Clear_m453B425BA42CF426AF891742219DA0BF520961B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_ContainsKey_m71BB1D3E9A6A7A6D2B16E2E34AD8DE0E0C6E9C04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_ContainsKey_mA2A658F3C5F9E21A21EA708BC283EC7AA0D10576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_GetEnumerator_m2B8DAAD33D00CD8088BBCE1B1DDCABEFA97C873C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_GetEnumerator_m35F120E439685CF9BDBFC4ED6E5735577871040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Remove_m11C1C3C5161C4EA9F6FB83FD9CD758E239818986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Remove_m331F7BB84DF01BAFCA274CFA0CEAC6B589715752_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_m9B2CAFCC37D4A813230B0DAAF7C62FF210F29962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_mC5A267777A30A77771960E0EED4D8800272175D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Item_mC5F1BB60F70849DB83C79A8191E6DC6DAD1F4FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Values_mC2ECB62981F8B715831129D203518EE06FDE9604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_set_Item_m9CD3833EF1036E72C444A524EE660C8035539B7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m14EAAECB0FD1533735FFF73B15AB58370181AE43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m68179FA2220E60FA406BA17898F616103CDFB3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mA04F235B69C7E30ABE57EAFEC11D3E0E7F992D0D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct ISpatialCoordinateSystem_t0B599CF4D7B3B14DA13D87C3A231F9981F3A491A;

struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Microsoft.MixedReality.QR.QRCode>
struct  List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QRCodeU5BU5D_tA1DCECB901ECEB17FEBF219A116C03D3D8891F92* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C, ____items_1)); }
	inline QRCodeU5BU5D_tA1DCECB901ECEB17FEBF219A116C03D3D8891F92* get__items_1() const { return ____items_1; }
	inline QRCodeU5BU5D_tA1DCECB901ECEB17FEBF219A116C03D3D8891F92** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QRCodeU5BU5D_tA1DCECB901ECEB17FEBF219A116C03D3D8891F92* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QRCodeU5BU5D_tA1DCECB901ECEB17FEBF219A116C03D3D8891F92* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C_StaticFields, ____emptyArray_5)); }
	inline QRCodeU5BU5D_tA1DCECB901ECEB17FEBF219A116C03D3D8891F92* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QRCodeU5BU5D_tA1DCECB901ECEB17FEBF219A116C03D3D8891F92** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QRCodeU5BU5D_tA1DCECB901ECEB17FEBF219A116C03D3D8891F92* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<QRTracking.QRCodesVisualizer/ActionData>
struct  Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ActionDataU5BU5D_tA8CA46C9CB469EE3586FAD88155523893CA77F51* ____array_0;
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
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F, ____array_0)); }
	inline ActionDataU5BU5D_tA8CA46C9CB469EE3586FAD88155523893CA77F51* get__array_0() const { return ____array_0; }
	inline ActionDataU5BU5D_tA8CA46C9CB469EE3586FAD88155523893CA77F51** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ActionDataU5BU5D_tA8CA46C9CB469EE3586FAD88155523893CA77F51* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.SortedDictionary`2<System.Guid,UnityEngine.GameObject>
struct  SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t0B1C4148157031F10451F267DE15860D6DFCB819 * ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_tBFE574CC44BFA713963086CBAF7122DE794E1844 * ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_tC0737760F3FA2BC6C4CB21A1582D698F6DC605A0 * ____set_2;

public:
	inline static int32_t get_offset_of__keys_0() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC, ____keys_0)); }
	inline KeyCollection_t0B1C4148157031F10451F267DE15860D6DFCB819 * get__keys_0() const { return ____keys_0; }
	inline KeyCollection_t0B1C4148157031F10451F267DE15860D6DFCB819 ** get_address_of__keys_0() { return &____keys_0; }
	inline void set__keys_0(KeyCollection_t0B1C4148157031F10451F267DE15860D6DFCB819 * value)
	{
		____keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_0), (void*)value);
	}

	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC, ____values_1)); }
	inline ValueCollection_tBFE574CC44BFA713963086CBAF7122DE794E1844 * get__values_1() const { return ____values_1; }
	inline ValueCollection_tBFE574CC44BFA713963086CBAF7122DE794E1844 ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(ValueCollection_tBFE574CC44BFA713963086CBAF7122DE794E1844 * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_1), (void*)value);
	}

	inline static int32_t get_offset_of__set_2() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC, ____set_2)); }
	inline TreeSet_1_tC0737760F3FA2BC6C4CB21A1582D698F6DC605A0 * get__set_2() const { return ____set_2; }
	inline TreeSet_1_tC0737760F3FA2BC6C4CB21A1582D698F6DC605A0 ** get_address_of__set_2() { return &____set_2; }
	inline void set__set_2(TreeSet_1_tC0737760F3FA2BC6C4CB21A1582D698F6DC605A0 * value)
	{
		____set_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_2), (void*)value);
	}
};


// System.Collections.Generic.SortedDictionary`2<System.Guid,Microsoft.MixedReality.QR.QRCode>
struct  SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_tF05F48C45438D692B218C084C76BDDE674755D8B * ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t01A52B30994F5EFC2BFD67A27FCA39C3CD2FF0E8 * ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t6C72253D5DE875912C399A50D803545F3CC107F7 * ____set_2;

public:
	inline static int32_t get_offset_of__keys_0() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E, ____keys_0)); }
	inline KeyCollection_tF05F48C45438D692B218C084C76BDDE674755D8B * get__keys_0() const { return ____keys_0; }
	inline KeyCollection_tF05F48C45438D692B218C084C76BDDE674755D8B ** get_address_of__keys_0() { return &____keys_0; }
	inline void set__keys_0(KeyCollection_tF05F48C45438D692B218C084C76BDDE674755D8B * value)
	{
		____keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_0), (void*)value);
	}

	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E, ____values_1)); }
	inline ValueCollection_t01A52B30994F5EFC2BFD67A27FCA39C3CD2FF0E8 * get__values_1() const { return ____values_1; }
	inline ValueCollection_t01A52B30994F5EFC2BFD67A27FCA39C3CD2FF0E8 ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(ValueCollection_t01A52B30994F5EFC2BFD67A27FCA39C3CD2FF0E8 * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_1), (void*)value);
	}

	inline static int32_t get_offset_of__set_2() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E, ____set_2)); }
	inline TreeSet_1_t6C72253D5DE875912C399A50D803545F3CC107F7 * get__set_2() const { return ____set_2; }
	inline TreeSet_1_t6C72253D5DE875912C399A50D803545F3CC107F7 ** get_address_of__set_2() { return &____set_2; }
	inline void set__set_2(TreeSet_1_t6C72253D5DE875912C399A50D803545F3CC107F7 * value)
	{
		____set_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_2), (void*)value);
	}
};


// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Guid,Microsoft.MixedReality.QR.QRCode>
struct  ValueCollection_t01A52B30994F5EFC2BFD67A27FCA39C3CD2FF0E8  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/ValueCollection::_dictionary
	SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * ____dictionary_0;

public:
	inline static int32_t get_offset_of__dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t01A52B30994F5EFC2BFD67A27FCA39C3CD2FF0E8, ____dictionary_0)); }
	inline SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * get__dictionary_0() const { return ____dictionary_0; }
	inline SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E ** get_address_of__dictionary_0() { return &____dictionary_0; }
	inline void set__dictionary_0(SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * value)
	{
		____dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct  EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Microsoft.MixedReality.QR.QRCode
struct  QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.QR.IQRCode Microsoft.MixedReality.QR.QRCode::_interface
	IQRCode_t7991D68A1726CE743839B99850437162C61AF362 * ____interface_0;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40, ____interface_0)); }
	inline IQRCode_t7991D68A1726CE743839B99850437162C61AF362 * get__interface_0() const { return ____interface_0; }
	inline IQRCode_t7991D68A1726CE743839B99850437162C61AF362 ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IQRCode_t7991D68A1726CE743839B99850437162C61AF362 * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_0), (void*)value);
	}
};


// Microsoft.MixedReality.QR.QRCodeAddedEventArgs
struct  QRCodeAddedEventArgs_t77611BE65C7F482E6E7D27642D8D7752C55CEC0A  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs Microsoft.MixedReality.QR.QRCodeAddedEventArgs::_args
	IQRCodeAddedEventArgs_t69AD7543FA9F144176D2BED1D3EC10A0D122EBF5 * ____args_0;

public:
	inline static int32_t get_offset_of__args_0() { return static_cast<int32_t>(offsetof(QRCodeAddedEventArgs_t77611BE65C7F482E6E7D27642D8D7752C55CEC0A, ____args_0)); }
	inline IQRCodeAddedEventArgs_t69AD7543FA9F144176D2BED1D3EC10A0D122EBF5 * get__args_0() const { return ____args_0; }
	inline IQRCodeAddedEventArgs_t69AD7543FA9F144176D2BED1D3EC10A0D122EBF5 ** get_address_of__args_0() { return &____args_0; }
	inline void set__args_0(IQRCodeAddedEventArgs_t69AD7543FA9F144176D2BED1D3EC10A0D122EBF5 * value)
	{
		____args_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____args_0), (void*)value);
	}
};


// QRTracking.QRCodeEventArgs
struct  QRCodeEventArgs_tC468AB454D620ED738CF14276BEE7B19A27DC9F3  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.QR.QRCodeRemovedEventArgs
struct  QRCodeRemovedEventArgs_t4ACC2B0A16DFAB8ACF15183B33B92E056F63BE7B  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs Microsoft.MixedReality.QR.QRCodeRemovedEventArgs::_args
	IQRCodeRemovedEventArgs_t2C71F7D125769E856BE2634A207726BD49E61ADA * ____args_0;

public:
	inline static int32_t get_offset_of__args_0() { return static_cast<int32_t>(offsetof(QRCodeRemovedEventArgs_t4ACC2B0A16DFAB8ACF15183B33B92E056F63BE7B, ____args_0)); }
	inline IQRCodeRemovedEventArgs_t2C71F7D125769E856BE2634A207726BD49E61ADA * get__args_0() const { return ____args_0; }
	inline IQRCodeRemovedEventArgs_t2C71F7D125769E856BE2634A207726BD49E61ADA ** get_address_of__args_0() { return &____args_0; }
	inline void set__args_0(IQRCodeRemovedEventArgs_t2C71F7D125769E856BE2634A207726BD49E61ADA * value)
	{
		____args_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____args_0), (void*)value);
	}
};


// Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs
struct  QRCodeUpdatedEventArgs_t8F9B61799F713834B03340474C74B58A667B5C1F  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs::_args
	IQRCodeUpdatedEventArgs_t27F7643A4FF75C5B5E854CB740C0FCBBBCB7BA8D * ____args_0;

public:
	inline static int32_t get_offset_of__args_0() { return static_cast<int32_t>(offsetof(QRCodeUpdatedEventArgs_t8F9B61799F713834B03340474C74B58A667B5C1F, ____args_0)); }
	inline IQRCodeUpdatedEventArgs_t27F7643A4FF75C5B5E854CB740C0FCBBBCB7BA8D * get__args_0() const { return ____args_0; }
	inline IQRCodeUpdatedEventArgs_t27F7643A4FF75C5B5E854CB740C0FCBBBCB7BA8D ** get_address_of__args_0() { return &____args_0; }
	inline void set__args_0(IQRCodeUpdatedEventArgs_t27F7643A4FF75C5B5E854CB740C0FCBBBCB7BA8D * value)
	{
		____args_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____args_0), (void*)value);
	}
};


// Microsoft.MixedReality.QR.QRCodeWatcher
struct  QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.QR.IQRCodeWatcher Microsoft.MixedReality.QR.QRCodeWatcher::_interface
	IQRCodeWatcher_t70517DE526E006A3CE09E2C2456C542C737AD42C * ____interface_1;

public:
	inline static int32_t get_offset_of__interface_1() { return static_cast<int32_t>(offsetof(QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1, ____interface_1)); }
	inline IQRCodeWatcher_t70517DE526E006A3CE09E2C2456C542C737AD42C * get__interface_1() const { return ____interface_1; }
	inline IQRCodeWatcher_t70517DE526E006A3CE09E2C2456C542C737AD42C ** get_address_of__interface_1() { return &____interface_1; }
	inline void set__interface_1(IQRCodeWatcher_t70517DE526E006A3CE09E2C2456C542C737AD42C * value)
	{
		____interface_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_1), (void*)value);
	}
};

struct QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1_StaticFields
{
public:
	// WinRT.WeakLazy`1<Microsoft.MixedReality.QR.QRCodeWatcher/Statics> Microsoft.MixedReality.QR.QRCodeWatcher::_statics
	WeakLazy_1_tA6F8A5EE3F748879C0DE120274475877776E75A0 * ____statics_0;

public:
	inline static int32_t get_offset_of__statics_0() { return static_cast<int32_t>(offsetof(QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1_StaticFields, ____statics_0)); }
	inline WeakLazy_1_tA6F8A5EE3F748879C0DE120274475877776E75A0 * get__statics_0() const { return ____statics_0; }
	inline WeakLazy_1_tA6F8A5EE3F748879C0DE120274475877776E75A0 ** get_address_of__statics_0() { return &____statics_0; }
	inline void set__statics_0(WeakLazy_1_tA6F8A5EE3F748879C0DE120274475877776E75A0 * value)
	{
		____statics_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____statics_0), (void*)value);
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

// System.__Il2CppComObject


// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Guid,UnityEngine.GameObject>>
struct  Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487 
{
public:
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_t69053C3C2EC1938A6D4F8B262F0827877C8CB2E1 * ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_tD60A0691725838763B29C0580C86EEF87D1E1BA0 * ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_t878A07FD9C642BECA83645F407833C97CE8D4E89 * ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;

public:
	inline static int32_t get_offset_of__tree_1() { return static_cast<int32_t>(offsetof(Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487, ____tree_1)); }
	inline SortedSet_1_t69053C3C2EC1938A6D4F8B262F0827877C8CB2E1 * get__tree_1() const { return ____tree_1; }
	inline SortedSet_1_t69053C3C2EC1938A6D4F8B262F0827877C8CB2E1 ** get_address_of__tree_1() { return &____tree_1; }
	inline void set__tree_1(SortedSet_1_t69053C3C2EC1938A6D4F8B262F0827877C8CB2E1 * value)
	{
		____tree_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_1), (void*)value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__stack_3() { return static_cast<int32_t>(offsetof(Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487, ____stack_3)); }
	inline Stack_1_tD60A0691725838763B29C0580C86EEF87D1E1BA0 * get__stack_3() const { return ____stack_3; }
	inline Stack_1_tD60A0691725838763B29C0580C86EEF87D1E1BA0 ** get_address_of__stack_3() { return &____stack_3; }
	inline void set__stack_3(Stack_1_tD60A0691725838763B29C0580C86EEF87D1E1BA0 * value)
	{
		____stack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_3), (void*)value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487, ____current_4)); }
	inline Node_t878A07FD9C642BECA83645F407833C97CE8D4E89 * get__current_4() const { return ____current_4; }
	inline Node_t878A07FD9C642BECA83645F407833C97CE8D4E89 ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(Node_t878A07FD9C642BECA83645F407833C97CE8D4E89 * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_4), (void*)value);
	}

	inline static int32_t get_offset_of__reverse_5() { return static_cast<int32_t>(offsetof(Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487, ____reverse_5)); }
	inline bool get__reverse_5() const { return ____reverse_5; }
	inline bool* get_address_of__reverse_5() { return &____reverse_5; }
	inline void set__reverse_5(bool value)
	{
		____reverse_5 = value;
	}
};

struct Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487_StaticFields
{
public:
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_t878A07FD9C642BECA83645F407833C97CE8D4E89 * ___s_dummyNode_0;

public:
	inline static int32_t get_offset_of_s_dummyNode_0() { return static_cast<int32_t>(offsetof(Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487_StaticFields, ___s_dummyNode_0)); }
	inline Node_t878A07FD9C642BECA83645F407833C97CE8D4E89 * get_s_dummyNode_0() const { return ___s_dummyNode_0; }
	inline Node_t878A07FD9C642BECA83645F407833C97CE8D4E89 ** get_address_of_s_dummyNode_0() { return &___s_dummyNode_0; }
	inline void set_s_dummyNode_0(Node_t878A07FD9C642BECA83645F407833C97CE8D4E89 * value)
	{
		___s_dummyNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dummyNode_0), (void*)value);
	}
};


// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>
struct  Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B 
{
public:
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_t6837C1CD99E4816479FC9B3CA383B9C65AA7D42D * ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_t731D7FE3DA6926D1F1D2CEE181E3A291BEF9BA22 * ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_tBF6A1CB8835A47D23D93E5C7A69B82A8C4E5576F * ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;

public:
	inline static int32_t get_offset_of__tree_1() { return static_cast<int32_t>(offsetof(Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B, ____tree_1)); }
	inline SortedSet_1_t6837C1CD99E4816479FC9B3CA383B9C65AA7D42D * get__tree_1() const { return ____tree_1; }
	inline SortedSet_1_t6837C1CD99E4816479FC9B3CA383B9C65AA7D42D ** get_address_of__tree_1() { return &____tree_1; }
	inline void set__tree_1(SortedSet_1_t6837C1CD99E4816479FC9B3CA383B9C65AA7D42D * value)
	{
		____tree_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_1), (void*)value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__stack_3() { return static_cast<int32_t>(offsetof(Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B, ____stack_3)); }
	inline Stack_1_t731D7FE3DA6926D1F1D2CEE181E3A291BEF9BA22 * get__stack_3() const { return ____stack_3; }
	inline Stack_1_t731D7FE3DA6926D1F1D2CEE181E3A291BEF9BA22 ** get_address_of__stack_3() { return &____stack_3; }
	inline void set__stack_3(Stack_1_t731D7FE3DA6926D1F1D2CEE181E3A291BEF9BA22 * value)
	{
		____stack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_3), (void*)value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B, ____current_4)); }
	inline Node_tBF6A1CB8835A47D23D93E5C7A69B82A8C4E5576F * get__current_4() const { return ____current_4; }
	inline Node_tBF6A1CB8835A47D23D93E5C7A69B82A8C4E5576F ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(Node_tBF6A1CB8835A47D23D93E5C7A69B82A8C4E5576F * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_4), (void*)value);
	}

	inline static int32_t get_offset_of__reverse_5() { return static_cast<int32_t>(offsetof(Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B, ____reverse_5)); }
	inline bool get__reverse_5() const { return ____reverse_5; }
	inline bool* get_address_of__reverse_5() { return &____reverse_5; }
	inline void set__reverse_5(bool value)
	{
		____reverse_5 = value;
	}
};

struct Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B_StaticFields
{
public:
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_tBF6A1CB8835A47D23D93E5C7A69B82A8C4E5576F * ___s_dummyNode_0;

public:
	inline static int32_t get_offset_of_s_dummyNode_0() { return static_cast<int32_t>(offsetof(Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B_StaticFields, ___s_dummyNode_0)); }
	inline Node_tBF6A1CB8835A47D23D93E5C7A69B82A8C4E5576F * get_s_dummyNode_0() const { return ___s_dummyNode_0; }
	inline Node_tBF6A1CB8835A47D23D93E5C7A69B82A8C4E5576F ** get_address_of_s_dummyNode_0() { return &___s_dummyNode_0; }
	inline void set_s_dummyNode_0(Node_tBF6A1CB8835A47D23D93E5C7A69B82A8C4E5576F * value)
	{
		___s_dummyNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dummyNode_0), (void*)value);
	}
};


// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Guid,Microsoft.MixedReality.QR.QRCode>>
struct  Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7 
{
public:
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_t1236BE27B6EA6D0DB854FAE0C95ADC1D750F1485 * ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_t9511E0EEF5B03DB77FCE5284EF7C73A51DB03721 * ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_t8DE1D713D30F83E0BE8DFBB2EB71967127E049DC * ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;

public:
	inline static int32_t get_offset_of__tree_1() { return static_cast<int32_t>(offsetof(Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7, ____tree_1)); }
	inline SortedSet_1_t1236BE27B6EA6D0DB854FAE0C95ADC1D750F1485 * get__tree_1() const { return ____tree_1; }
	inline SortedSet_1_t1236BE27B6EA6D0DB854FAE0C95ADC1D750F1485 ** get_address_of__tree_1() { return &____tree_1; }
	inline void set__tree_1(SortedSet_1_t1236BE27B6EA6D0DB854FAE0C95ADC1D750F1485 * value)
	{
		____tree_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_1), (void*)value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__stack_3() { return static_cast<int32_t>(offsetof(Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7, ____stack_3)); }
	inline Stack_1_t9511E0EEF5B03DB77FCE5284EF7C73A51DB03721 * get__stack_3() const { return ____stack_3; }
	inline Stack_1_t9511E0EEF5B03DB77FCE5284EF7C73A51DB03721 ** get_address_of__stack_3() { return &____stack_3; }
	inline void set__stack_3(Stack_1_t9511E0EEF5B03DB77FCE5284EF7C73A51DB03721 * value)
	{
		____stack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_3), (void*)value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7, ____current_4)); }
	inline Node_t8DE1D713D30F83E0BE8DFBB2EB71967127E049DC * get__current_4() const { return ____current_4; }
	inline Node_t8DE1D713D30F83E0BE8DFBB2EB71967127E049DC ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(Node_t8DE1D713D30F83E0BE8DFBB2EB71967127E049DC * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_4), (void*)value);
	}

	inline static int32_t get_offset_of__reverse_5() { return static_cast<int32_t>(offsetof(Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7, ____reverse_5)); }
	inline bool get__reverse_5() const { return ____reverse_5; }
	inline bool* get_address_of__reverse_5() { return &____reverse_5; }
	inline void set__reverse_5(bool value)
	{
		____reverse_5 = value;
	}
};

struct Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7_StaticFields
{
public:
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_t8DE1D713D30F83E0BE8DFBB2EB71967127E049DC * ___s_dummyNode_0;

public:
	inline static int32_t get_offset_of_s_dummyNode_0() { return static_cast<int32_t>(offsetof(Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7_StaticFields, ___s_dummyNode_0)); }
	inline Node_t8DE1D713D30F83E0BE8DFBB2EB71967127E049DC * get_s_dummyNode_0() const { return ___s_dummyNode_0; }
	inline Node_t8DE1D713D30F83E0BE8DFBB2EB71967127E049DC ** get_address_of_s_dummyNode_0() { return &___s_dummyNode_0; }
	inline void set_s_dummyNode_0(Node_t8DE1D713D30F83E0BE8DFBB2EB71967127E049DC * value)
	{
		___s_dummyNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dummyNode_0), (void*)value);
	}
};


// QRTracking.QRCodeEventArgs`1<System.Object>
struct  QRCodeEventArgs_1_tB170C019EF1E3EB07BEB45B8539005046FCF7AB6  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// TData QRTracking.QRCodeEventArgs`1::<Data>k__BackingField
	RuntimeObject * ___U3CDataU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QRCodeEventArgs_1_tB170C019EF1E3EB07BEB45B8539005046FCF7AB6, ___U3CDataU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CDataU3Ek__BackingField_1() const { return ___U3CDataU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CDataU3Ek__BackingField_1() { return &___U3CDataU3Ek__BackingField_1; }
	inline void set_U3CDataU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CDataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_1), (void*)value);
	}
};


// QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>
struct  QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// TData QRTracking.QRCodeEventArgs`1::<Data>k__BackingField
	QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * ___U3CDataU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22, ___U3CDataU3Ek__BackingField_1)); }
	inline QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * get_U3CDataU3Ek__BackingField_1() const { return ___U3CDataU3Ek__BackingField_1; }
	inline QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 ** get_address_of_U3CDataU3Ek__BackingField_1() { return &___U3CDataU3Ek__BackingField_1; }
	inline void set_U3CDataU3Ek__BackingField_1(QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * value)
	{
		___U3CDataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_1), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct  TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct  TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct  TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>
struct  TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7, ___m_task_0)); }
	inline Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct  TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A, ___m_task_0)); }
	inline Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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


// TMPro.MaterialReference
struct  MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// System.Numerics.Quaternion
struct  Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C 
{
public:
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
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


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct  SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB  : public Il2CppComObject
{
public:

public:
};


// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
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


// System.Numerics.Vector3
struct  Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
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


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// TMPro.TMP_Text/SpecialCharacter
struct  SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,UnityEngine.GameObject>
struct  Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8 
{
public:
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487  ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;

public:
	inline static int32_t get_offset_of__treeEnum_0() { return static_cast<int32_t>(offsetof(Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8, ____treeEnum_0)); }
	inline Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487  get__treeEnum_0() const { return ____treeEnum_0; }
	inline Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487 * get_address_of__treeEnum_0() { return &____treeEnum_0; }
	inline void set__treeEnum_0(Enumerator_t87BB98FA490A0E414515AF7031BB2CE648330487  value)
	{
		____treeEnum_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____tree_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____stack_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____current_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__getEnumeratorRetType_1() { return static_cast<int32_t>(offsetof(Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8, ____getEnumeratorRetType_1)); }
	inline int32_t get__getEnumeratorRetType_1() const { return ____getEnumeratorRetType_1; }
	inline int32_t* get_address_of__getEnumeratorRetType_1() { return &____getEnumeratorRetType_1; }
	inline void set__getEnumeratorRetType_1(int32_t value)
	{
		____getEnumeratorRetType_1 = value;
	}
};


// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,System.Object>
struct  Enumerator_t6EF550E60E433CA4524541E360A18B84F52323F0 
{
public:
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B  ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;

public:
	inline static int32_t get_offset_of__treeEnum_0() { return static_cast<int32_t>(offsetof(Enumerator_t6EF550E60E433CA4524541E360A18B84F52323F0, ____treeEnum_0)); }
	inline Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B  get__treeEnum_0() const { return ____treeEnum_0; }
	inline Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B * get_address_of__treeEnum_0() { return &____treeEnum_0; }
	inline void set__treeEnum_0(Enumerator_t697B2827AB5E1EE8E363C18A342E0729250B8A5B  value)
	{
		____treeEnum_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____tree_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____stack_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____current_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__getEnumeratorRetType_1() { return static_cast<int32_t>(offsetof(Enumerator_t6EF550E60E433CA4524541E360A18B84F52323F0, ____getEnumeratorRetType_1)); }
	inline int32_t get__getEnumeratorRetType_1() const { return ____getEnumeratorRetType_1; }
	inline int32_t* get_address_of__getEnumeratorRetType_1() { return &____getEnumeratorRetType_1; }
	inline void set__getEnumeratorRetType_1(int32_t value)
	{
		____getEnumeratorRetType_1 = value;
	}
};


// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,Microsoft.MixedReality.QR.QRCode>
struct  Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0 
{
public:
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7  ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;

public:
	inline static int32_t get_offset_of__treeEnum_0() { return static_cast<int32_t>(offsetof(Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0, ____treeEnum_0)); }
	inline Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7  get__treeEnum_0() const { return ____treeEnum_0; }
	inline Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7 * get_address_of__treeEnum_0() { return &____treeEnum_0; }
	inline void set__treeEnum_0(Enumerator_t509E47C39D872B0480571A64436865AB9ABC53E7  value)
	{
		____treeEnum_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____tree_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____stack_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____current_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__getEnumeratorRetType_1() { return static_cast<int32_t>(offsetof(Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0, ____getEnumeratorRetType_1)); }
	inline int32_t get__getEnumeratorRetType_1() const { return ____getEnumeratorRetType_1; }
	inline int32_t* get_address_of__getEnumeratorRetType_1() { return &____getEnumeratorRetType_1; }
	inline void set__getEnumeratorRetType_1(int32_t value)
	{
		____getEnumeratorRetType_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Guid,UnityEngine.GameObject>
struct  KeyValuePair_2_tB1AE166AA9F1E4B9B27F62A2CC297C5220EAB2B5 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB1AE166AA9F1E4B9B27F62A2CC297C5220EAB2B5, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB1AE166AA9F1E4B9B27F62A2CC297C5220EAB2B5, ___value_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_value_1() const { return ___value_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct  KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Guid,Microsoft.MixedReality.QR.QRCode>
struct  KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2, ___value_1)); }
	inline QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * get_value_1() const { return ___value_1; }
	inline QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Numerics.Matrix4x4>
struct  Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 
{
public:
	// T System.Nullable`1::value
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8, ___value_0)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get_value_0() const { return ___value_0; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct  TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct  TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// TMPro.ColorMode
struct  ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
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

// TMPro.Extents
struct  Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct  HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct  HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.MaskingTypes
struct  MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477 
{
public:
	// System.Int32 TMPro.MaskingTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus
struct  QRCodeWatcherAccessStatus_t86023A28F1A50704820A22D4DEFAD5BB8BA61A9F 
{
public:
	// System.Int32 Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QRCodeWatcherAccessStatus_t86023A28F1A50704820A22D4DEFAD5BB8BA61A9F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.QR.QRVersion
struct  QRVersion_t5FD572A6D650F21EFD763F4C7B298353969F7F39 
{
public:
	// System.Int32 Microsoft.MixedReality.QR.QRVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QRVersion_t5FD572A6D650F21EFD763F4C7B298353969F7F39, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
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


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
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


// TMPro.VertexGradient
struct  VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct  VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct  TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
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


// QRTracking.QRCodesVisualizer/ActionData/Type
struct  Type_tD779BB8FB5123200CAFA4785B4627394E2AEB7D0 
{
public:
	// System.Int32 QRTracking.QRCodesVisualizer/ActionData/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tD779BB8FB5123200CAFA4785B4627394E2AEB7D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct  TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct  TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct  TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct  Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t2F99AC12D855E7A1BF6429C36C0FBC879F08F9C2 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF43B855B7DEE26C922D5DAAA2EACCF1FD029FF32 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t2F99AC12D855E7A1BF6429C36C0FBC879F08F9C2 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t2F99AC12D855E7A1BF6429C36C0FBC879F08F9C2 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t2F99AC12D855E7A1BF6429C36C0FBC879F08F9C2 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tF43B855B7DEE26C922D5DAAA2EACCF1FD029FF32 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tF43B855B7DEE26C922D5DAAA2EACCF1FD029FF32 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tF43B855B7DEE26C922D5DAAA2EACCF1FD029FF32 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
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

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
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


// QRTracking.QRCodesManager/<Start>d__29
struct  U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB 
{
public:
	// System.Int32 QRTracking.QRCodesManager/<Start>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder QRTracking.QRCodesManager/<Start>d__29::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// QRTracking.QRCodesManager QRTracking.QRCodesManager/<Start>d__29::<>4__this
	QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus> QRTracking.QRCodesManager/<Start>d__29::<>u__1
	TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB, ___U3CU3E4__this_2)); }
	inline QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// QRTracking.QRCodesVisualizer/ActionData
struct  ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160 
{
public:
	// QRTracking.QRCodesVisualizer/ActionData/Type QRTracking.QRCodesVisualizer/ActionData::type
	int32_t ___type_0;
	// Microsoft.MixedReality.QR.QRCode QRTracking.QRCodesVisualizer/ActionData::qrCode
	QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * ___qrCode_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_qrCode_1() { return static_cast<int32_t>(offsetof(ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160, ___qrCode_1)); }
	inline QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * get_qrCode_1() const { return ___qrCode_1; }
	inline QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 ** get_address_of_qrCode_1() { return &___qrCode_1; }
	inline void set_qrCode_1(QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * value)
	{
		___qrCode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qrCode_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of QRTracking.QRCodesVisualizer/ActionData
struct ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshaled_pinvoke
{
	int32_t ___type_0;
	QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * ___qrCode_1;
};
// Native definition for COM marshalling of QRTracking.QRCodesVisualizer/ActionData
struct ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshaled_com
{
	int32_t ___type_0;
	QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * ___qrCode_1;
};

// System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>
struct  EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.Boolean>
struct  EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for System.EventHandler`1<System.Boolean>
struct IEventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, bool ___e1) = 0;
};


// System.EventHandler`1<System.Object>
struct  EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for System.EventHandler`1<System.Object>
struct IEventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___e1) = 0;
};


// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeAddedEventArgs>
struct  EventHandler_1_tCA0A2B41C8984DA1BE1BFF8CE830CD34399AA70F  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>
struct  EventHandler_1_t5BCE95ACEA650660657EF4F49E824484DCEDC9CC  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>
struct  EventHandler_1_t3555C0D4BF0D001148DF752B5B41E62A085D7C2F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// TMPro.WordWrapState
struct  WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_27;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_28;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_29;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_30;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_31;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_32;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_33;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_34;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_35;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_58;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_62;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_64;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_65;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScale_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScale_27)); }
	inline float get_fontScale_27() const { return ___fontScale_27; }
	inline float* get_address_of_fontScale_27() { return &___fontScale_27; }
	inline void set_fontScale_27(float value)
	{
		___fontScale_27 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_28)); }
	inline float get_fontScaleMultiplier_28() const { return ___fontScaleMultiplier_28; }
	inline float* get_address_of_fontScaleMultiplier_28() { return &___fontScaleMultiplier_28; }
	inline void set_fontScaleMultiplier_28(float value)
	{
		___fontScaleMultiplier_28 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_29)); }
	inline float get_currentFontSize_29() const { return ___currentFontSize_29; }
	inline float* get_address_of_currentFontSize_29() { return &___currentFontSize_29; }
	inline void set_currentFontSize_29(float value)
	{
		___currentFontSize_29 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_30)); }
	inline float get_baselineOffset_30() const { return ___baselineOffset_30; }
	inline float* get_address_of_baselineOffset_30() { return &___baselineOffset_30; }
	inline void set_baselineOffset_30(float value)
	{
		___baselineOffset_30 = value;
	}

	inline static int32_t get_offset_of_lineOffset_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_31)); }
	inline float get_lineOffset_31() const { return ___lineOffset_31; }
	inline float* get_address_of_lineOffset_31() { return &___lineOffset_31; }
	inline void set_lineOffset_31(float value)
	{
		___lineOffset_31 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_32)); }
	inline bool get_isDrivenLineSpacing_32() const { return ___isDrivenLineSpacing_32; }
	inline bool* get_address_of_isDrivenLineSpacing_32() { return &___isDrivenLineSpacing_32; }
	inline void set_isDrivenLineSpacing_32(bool value)
	{
		___isDrivenLineSpacing_32 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_33)); }
	inline float get_glyphHorizontalAdvanceAdjustment_33() const { return ___glyphHorizontalAdvanceAdjustment_33; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_33() { return &___glyphHorizontalAdvanceAdjustment_33; }
	inline void set_glyphHorizontalAdvanceAdjustment_33(float value)
	{
		___glyphHorizontalAdvanceAdjustment_33 = value;
	}

	inline static int32_t get_offset_of_cSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_34)); }
	inline float get_cSpace_34() const { return ___cSpace_34; }
	inline float* get_address_of_cSpace_34() { return &___cSpace_34; }
	inline void set_cSpace_34(float value)
	{
		___cSpace_34 = value;
	}

	inline static int32_t get_offset_of_mSpace_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_35)); }
	inline float get_mSpace_35() const { return ___mSpace_35; }
	inline float* get_address_of_mSpace_35() { return &___mSpace_35; }
	inline void set_mSpace_35(float value)
	{
		___mSpace_35 = value;
	}

	inline static int32_t get_offset_of_textInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_36)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_36() const { return ___textInfo_36; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_36() { return &___textInfo_36; }
	inline void set_textInfo_36(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_36), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_37)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_37() const { return ___lineInfo_37; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_37() { return &___lineInfo_37; }
	inline void set_lineInfo_37(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_37 = value;
	}

	inline static int32_t get_offset_of_vertexColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_38() const { return ___vertexColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_38() { return &___vertexColor_38; }
	inline void set_vertexColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_38 = value;
	}

	inline static int32_t get_offset_of_underlineColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_39() const { return ___underlineColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_39() { return &___underlineColor_39; }
	inline void set_underlineColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_39 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_40() const { return ___strikethroughColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_40() { return &___strikethroughColor_40; }
	inline void set_strikethroughColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_40 = value;
	}

	inline static int32_t get_offset_of_highlightColor_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_41)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_41() const { return ___highlightColor_41; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_41() { return &___highlightColor_41; }
	inline void set_highlightColor_41(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_41 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_42)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_42() const { return ___basicStyleStack_42; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_42() { return &___basicStyleStack_42; }
	inline void set_basicStyleStack_42(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_42 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_43)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_43() const { return ___italicAngleStack_43; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_43() { return &___italicAngleStack_43; }
	inline void set_italicAngleStack_43(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_44() const { return ___colorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_44() { return &___colorStack_44; }
	inline void set_colorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_45() const { return ___underlineColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_45() { return &___underlineColorStack_45; }
	inline void set_underlineColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_46() const { return ___strikethroughColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_46() { return &___strikethroughColorStack_46; }
	inline void set_strikethroughColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_47)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_47() const { return ___highlightColorStack_47; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_47() { return &___highlightColorStack_47; }
	inline void set_highlightColorStack_47(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_48)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_48() const { return ___highlightStateStack_48; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_48() { return &___highlightStateStack_48; }
	inline void set_highlightStateStack_48(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_48))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_49)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_49() const { return ___colorGradientStack_49; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_49() { return &___colorGradientStack_49; }
	inline void set_colorGradientStack_49(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_50() const { return ___sizeStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_50() { return &___sizeStack_50; }
	inline void set_sizeStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_51)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_51() const { return ___indentStack_51; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_51() { return &___indentStack_51; }
	inline void set_indentStack_51(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_52)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_52() const { return ___fontWeightStack_52; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_52() { return &___fontWeightStack_52; }
	inline void set_fontWeightStack_52(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_53)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_53() const { return ___styleStack_53; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_53() { return &___styleStack_53; }
	inline void set_styleStack_53(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_54)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_54() const { return ___baselineStack_54; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_54() { return &___baselineStack_54; }
	inline void set_baselineStack_54(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_55)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_55() const { return ___actionStack_55; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_55() { return &___actionStack_55; }
	inline void set_actionStack_55(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_55))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_56)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_56() const { return ___materialReferenceStack_56; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_56() { return &___materialReferenceStack_56; }
	inline void set_materialReferenceStack_56(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_57)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_57() const { return ___lineJustificationStack_57; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_57() { return &___lineJustificationStack_57; }
	inline void set_lineJustificationStack_57(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_58)); }
	inline int32_t get_spriteAnimationID_58() const { return ___spriteAnimationID_58; }
	inline int32_t* get_address_of_spriteAnimationID_58() { return &___spriteAnimationID_58; }
	inline void set_spriteAnimationID_58(int32_t value)
	{
		___spriteAnimationID_58 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_59)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_59() const { return ___currentFontAsset_59; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_59() { return &___currentFontAsset_59; }
	inline void set_currentFontAsset_59(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_60)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_60() const { return ___currentSpriteAsset_60; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_60() { return &___currentSpriteAsset_60; }
	inline void set_currentSpriteAsset_60(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_61)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_61() const { return ___currentMaterial_61; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_61() { return &___currentMaterial_61; }
	inline void set_currentMaterial_61(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_61), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_62)); }
	inline int32_t get_currentMaterialIndex_62() const { return ___currentMaterialIndex_62; }
	inline int32_t* get_address_of_currentMaterialIndex_62() { return &___currentMaterialIndex_62; }
	inline void set_currentMaterialIndex_62(int32_t value)
	{
		___currentMaterialIndex_62 = value;
	}

	inline static int32_t get_offset_of_meshExtents_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_63)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_63() const { return ___meshExtents_63; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_63() { return &___meshExtents_63; }
	inline void set_meshExtents_63(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_63 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_64)); }
	inline bool get_tagNoParsing_64() const { return ___tagNoParsing_64; }
	inline bool* get_address_of_tagNoParsing_64() { return &___tagNoParsing_64; }
	inline void set_tagNoParsing_64(bool value)
	{
		___tagNoParsing_64 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_65() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_65)); }
	inline bool get_isNonBreakingSpace_65() const { return ___isNonBreakingSpace_65; }
	inline bool* get_address_of_isNonBreakingSpace_65() { return &___isNonBreakingSpace_65; }
	inline void set_isNonBreakingSpace_65(bool value)
	{
		___isNonBreakingSpace_65 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct  TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
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


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// QRTracking.Singleton`1<QRTracking.QRCodesManager>
struct  Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700_StaticFields
{
public:
	// System.Boolean QRTracking.Singleton`1::m_ShuttingDown
	bool ___m_ShuttingDown_4;
	// System.Object QRTracking.Singleton`1::m_Lock
	RuntimeObject * ___m_Lock_5;
	// T QRTracking.Singleton`1::m_Instance
	QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * ___m_Instance_6;

public:
	inline static int32_t get_offset_of_m_ShuttingDown_4() { return static_cast<int32_t>(offsetof(Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700_StaticFields, ___m_ShuttingDown_4)); }
	inline bool get_m_ShuttingDown_4() const { return ___m_ShuttingDown_4; }
	inline bool* get_address_of_m_ShuttingDown_4() { return &___m_ShuttingDown_4; }
	inline void set_m_ShuttingDown_4(bool value)
	{
		___m_ShuttingDown_4 = value;
	}

	inline static int32_t get_offset_of_m_Lock_5() { return static_cast<int32_t>(offsetof(Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700_StaticFields, ___m_Lock_5)); }
	inline RuntimeObject * get_m_Lock_5() const { return ___m_Lock_5; }
	inline RuntimeObject ** get_address_of_m_Lock_5() { return &___m_Lock_5; }
	inline void set_m_Lock_5(RuntimeObject * value)
	{
		___m_Lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Instance_6() { return static_cast<int32_t>(offsetof(Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700_StaticFields, ___m_Instance_6)); }
	inline QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * get_m_Instance_6() const { return ___m_Instance_6; }
	inline QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 ** get_address_of_m_Instance_6() { return &___m_Instance_6; }
	inline void set_m_Instance_6(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * value)
	{
		___m_Instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_6), (void*)value);
	}
};


// MyQRCodeManager
struct  MyQRCodeManager_t958A40C0C85043628B0B6C4944FF59B1E728D74A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// QRTracking.QRCodesManager MyQRCodeManager::qRCodesManager
	QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * ___qRCodesManager_4;
	// TMPro.TextMeshPro MyQRCodeManager::statusText
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___statusText_5;

public:
	inline static int32_t get_offset_of_qRCodesManager_4() { return static_cast<int32_t>(offsetof(MyQRCodeManager_t958A40C0C85043628B0B6C4944FF59B1E728D74A, ___qRCodesManager_4)); }
	inline QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * get_qRCodesManager_4() const { return ___qRCodesManager_4; }
	inline QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 ** get_address_of_qRCodesManager_4() { return &___qRCodesManager_4; }
	inline void set_qRCodesManager_4(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * value)
	{
		___qRCodesManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qRCodesManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_statusText_5() { return static_cast<int32_t>(offsetof(MyQRCodeManager_t958A40C0C85043628B0B6C4944FF59B1E728D74A, ___statusText_5)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_statusText_5() const { return ___statusText_5; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_statusText_5() { return &___statusText_5; }
	inline void set_statusText_5(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___statusText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statusText_5), (void*)value);
	}
};


// QRTracking.QRCode
struct  QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.QR.QRCode QRTracking.QRCode::qrCode
	QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * ___qrCode_4;
	// UnityEngine.GameObject QRTracking.QRCode::qrCodeCube
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___qrCodeCube_5;
	// System.Single QRTracking.QRCode::<PhysicalSize>k__BackingField
	float ___U3CPhysicalSizeU3Ek__BackingField_6;
	// System.String QRTracking.QRCode::<CodeText>k__BackingField
	String_t* ___U3CCodeTextU3Ek__BackingField_7;
	// UnityEngine.TextMesh QRTracking.QRCode::QRID
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___QRID_8;
	// UnityEngine.TextMesh QRTracking.QRCode::QRNodeID
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___QRNodeID_9;
	// UnityEngine.TextMesh QRTracking.QRCode::QRText
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___QRText_10;
	// UnityEngine.TextMesh QRTracking.QRCode::QRVersion
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___QRVersion_11;
	// UnityEngine.TextMesh QRTracking.QRCode::QRTimeStamp
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___QRTimeStamp_12;
	// UnityEngine.TextMesh QRTracking.QRCode::QRSize
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___QRSize_13;
	// UnityEngine.GameObject QRTracking.QRCode::QRInfo
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___QRInfo_14;
	// System.Boolean QRTracking.QRCode::validURI
	bool ___validURI_15;
	// System.Boolean QRTracking.QRCode::launch
	bool ___launch_16;
	// System.Uri QRTracking.QRCode::uriResult
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uriResult_17;
	// System.Int64 QRTracking.QRCode::lastTimeStamp
	int64_t ___lastTimeStamp_18;

public:
	inline static int32_t get_offset_of_qrCode_4() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___qrCode_4)); }
	inline QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * get_qrCode_4() const { return ___qrCode_4; }
	inline QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 ** get_address_of_qrCode_4() { return &___qrCode_4; }
	inline void set_qrCode_4(QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * value)
	{
		___qrCode_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qrCode_4), (void*)value);
	}

	inline static int32_t get_offset_of_qrCodeCube_5() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___qrCodeCube_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_qrCodeCube_5() const { return ___qrCodeCube_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_qrCodeCube_5() { return &___qrCodeCube_5; }
	inline void set_qrCodeCube_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___qrCodeCube_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qrCodeCube_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPhysicalSizeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___U3CPhysicalSizeU3Ek__BackingField_6)); }
	inline float get_U3CPhysicalSizeU3Ek__BackingField_6() const { return ___U3CPhysicalSizeU3Ek__BackingField_6; }
	inline float* get_address_of_U3CPhysicalSizeU3Ek__BackingField_6() { return &___U3CPhysicalSizeU3Ek__BackingField_6; }
	inline void set_U3CPhysicalSizeU3Ek__BackingField_6(float value)
	{
		___U3CPhysicalSizeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCodeTextU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___U3CCodeTextU3Ek__BackingField_7)); }
	inline String_t* get_U3CCodeTextU3Ek__BackingField_7() const { return ___U3CCodeTextU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CCodeTextU3Ek__BackingField_7() { return &___U3CCodeTextU3Ek__BackingField_7; }
	inline void set_U3CCodeTextU3Ek__BackingField_7(String_t* value)
	{
		___U3CCodeTextU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCodeTextU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_QRID_8() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___QRID_8)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_QRID_8() const { return ___QRID_8; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_QRID_8() { return &___QRID_8; }
	inline void set_QRID_8(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___QRID_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QRID_8), (void*)value);
	}

	inline static int32_t get_offset_of_QRNodeID_9() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___QRNodeID_9)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_QRNodeID_9() const { return ___QRNodeID_9; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_QRNodeID_9() { return &___QRNodeID_9; }
	inline void set_QRNodeID_9(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___QRNodeID_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QRNodeID_9), (void*)value);
	}

	inline static int32_t get_offset_of_QRText_10() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___QRText_10)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_QRText_10() const { return ___QRText_10; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_QRText_10() { return &___QRText_10; }
	inline void set_QRText_10(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___QRText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QRText_10), (void*)value);
	}

	inline static int32_t get_offset_of_QRVersion_11() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___QRVersion_11)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_QRVersion_11() const { return ___QRVersion_11; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_QRVersion_11() { return &___QRVersion_11; }
	inline void set_QRVersion_11(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___QRVersion_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QRVersion_11), (void*)value);
	}

	inline static int32_t get_offset_of_QRTimeStamp_12() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___QRTimeStamp_12)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_QRTimeStamp_12() const { return ___QRTimeStamp_12; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_QRTimeStamp_12() { return &___QRTimeStamp_12; }
	inline void set_QRTimeStamp_12(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___QRTimeStamp_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QRTimeStamp_12), (void*)value);
	}

	inline static int32_t get_offset_of_QRSize_13() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___QRSize_13)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_QRSize_13() const { return ___QRSize_13; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_QRSize_13() { return &___QRSize_13; }
	inline void set_QRSize_13(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___QRSize_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QRSize_13), (void*)value);
	}

	inline static int32_t get_offset_of_QRInfo_14() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___QRInfo_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_QRInfo_14() const { return ___QRInfo_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_QRInfo_14() { return &___QRInfo_14; }
	inline void set_QRInfo_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___QRInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QRInfo_14), (void*)value);
	}

	inline static int32_t get_offset_of_validURI_15() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___validURI_15)); }
	inline bool get_validURI_15() const { return ___validURI_15; }
	inline bool* get_address_of_validURI_15() { return &___validURI_15; }
	inline void set_validURI_15(bool value)
	{
		___validURI_15 = value;
	}

	inline static int32_t get_offset_of_launch_16() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___launch_16)); }
	inline bool get_launch_16() const { return ___launch_16; }
	inline bool* get_address_of_launch_16() { return &___launch_16; }
	inline void set_launch_16(bool value)
	{
		___launch_16 = value;
	}

	inline static int32_t get_offset_of_uriResult_17() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___uriResult_17)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_uriResult_17() const { return ___uriResult_17; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_uriResult_17() { return &___uriResult_17; }
	inline void set_uriResult_17(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___uriResult_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uriResult_17), (void*)value);
	}

	inline static int32_t get_offset_of_lastTimeStamp_18() { return static_cast<int32_t>(offsetof(QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207, ___lastTimeStamp_18)); }
	inline int64_t get_lastTimeStamp_18() const { return ___lastTimeStamp_18; }
	inline int64_t* get_address_of_lastTimeStamp_18() { return &___lastTimeStamp_18; }
	inline void set_lastTimeStamp_18(int64_t value)
	{
		___lastTimeStamp_18 = value;
	}
};


// QRTracking.QRCodesVisualizer
struct  QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject QRTracking.QRCodesVisualizer::qrCodePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___qrCodePrefab_4;
	// TMPro.TextMeshPro QRTracking.QRCodesVisualizer::LatestQRCodeDetails
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___LatestQRCodeDetails_5;
	// System.Collections.Generic.SortedDictionary`2<System.Guid,UnityEngine.GameObject> QRTracking.QRCodesVisualizer::qrCodesObjectsList
	SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * ___qrCodesObjectsList_6;
	// System.Boolean QRTracking.QRCodesVisualizer::clearExisting
	bool ___clearExisting_7;
	// System.Collections.Generic.Queue`1<QRTracking.QRCodesVisualizer/ActionData> QRTracking.QRCodesVisualizer::pendingActions
	Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * ___pendingActions_8;

public:
	inline static int32_t get_offset_of_qrCodePrefab_4() { return static_cast<int32_t>(offsetof(QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9, ___qrCodePrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_qrCodePrefab_4() const { return ___qrCodePrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_qrCodePrefab_4() { return &___qrCodePrefab_4; }
	inline void set_qrCodePrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___qrCodePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qrCodePrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_LatestQRCodeDetails_5() { return static_cast<int32_t>(offsetof(QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9, ___LatestQRCodeDetails_5)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_LatestQRCodeDetails_5() const { return ___LatestQRCodeDetails_5; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_LatestQRCodeDetails_5() { return &___LatestQRCodeDetails_5; }
	inline void set_LatestQRCodeDetails_5(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___LatestQRCodeDetails_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LatestQRCodeDetails_5), (void*)value);
	}

	inline static int32_t get_offset_of_qrCodesObjectsList_6() { return static_cast<int32_t>(offsetof(QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9, ___qrCodesObjectsList_6)); }
	inline SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * get_qrCodesObjectsList_6() const { return ___qrCodesObjectsList_6; }
	inline SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC ** get_address_of_qrCodesObjectsList_6() { return &___qrCodesObjectsList_6; }
	inline void set_qrCodesObjectsList_6(SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * value)
	{
		___qrCodesObjectsList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qrCodesObjectsList_6), (void*)value);
	}

	inline static int32_t get_offset_of_clearExisting_7() { return static_cast<int32_t>(offsetof(QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9, ___clearExisting_7)); }
	inline bool get_clearExisting_7() const { return ___clearExisting_7; }
	inline bool* get_address_of_clearExisting_7() { return &___clearExisting_7; }
	inline void set_clearExisting_7(bool value)
	{
		___clearExisting_7 = value;
	}

	inline static int32_t get_offset_of_pendingActions_8() { return static_cast<int32_t>(offsetof(QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9, ___pendingActions_8)); }
	inline Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * get_pendingActions_8() const { return ___pendingActions_8; }
	inline Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F ** get_address_of_pendingActions_8() { return &___pendingActions_8; }
	inline void set_pendingActions_8(Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * value)
	{
		___pendingActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingActions_8), (void*)value);
	}
};


// QRTracking.SpatialGraphCoordinateSystem
struct  SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Windows.Perception.Spatial.SpatialCoordinateSystem QRTracking.SpatialGraphCoordinateSystem::CoordinateSystem
	SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___CoordinateSystem_4;
	// System.Guid QRTracking.SpatialGraphCoordinateSystem::id
	Guid_t  ___id_5;

public:
	inline static int32_t get_offset_of_CoordinateSystem_4() { return static_cast<int32_t>(offsetof(SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7, ___CoordinateSystem_4)); }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * get_CoordinateSystem_4() const { return ___CoordinateSystem_4; }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB ** get_address_of_CoordinateSystem_4() { return &___CoordinateSystem_4; }
	inline void set_CoordinateSystem_4(SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * value)
	{
		___CoordinateSystem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoordinateSystem_4), (void*)value);
	}

	inline static int32_t get_offset_of_id_5() { return static_cast<int32_t>(offsetof(SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7, ___id_5)); }
	inline Guid_t  get_id_5() const { return ___id_5; }
	inline Guid_t * get_address_of_id_5() { return &___id_5; }
	inline void set_id_5(Guid_t  value)
	{
		___id_5 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// QRTracking.QRCodesManager
struct  QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543  : public Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700
{
public:
	// System.Boolean QRTracking.QRCodesManager::AutoStartQRTracking
	bool ___AutoStartQRTracking_7;
	// System.Boolean QRTracking.QRCodesManager::<IsTrackerRunning>k__BackingField
	bool ___U3CIsTrackerRunningU3Ek__BackingField_8;
	// System.Boolean QRTracking.QRCodesManager::<IsSupported>k__BackingField
	bool ___U3CIsSupportedU3Ek__BackingField_9;
	// System.EventHandler`1<System.Boolean> QRTracking.QRCodesManager::QRCodesTrackingStateChanged
	EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * ___QRCodesTrackingStateChanged_10;
	// System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>> QRTracking.QRCodesManager::QRCodeAdded
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___QRCodeAdded_11;
	// System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>> QRTracking.QRCodesManager::QRCodeUpdated
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___QRCodeUpdated_12;
	// System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>> QRTracking.QRCodesManager::QRCodeRemoved
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___QRCodeRemoved_13;
	// System.Collections.Generic.SortedDictionary`2<System.Guid,Microsoft.MixedReality.QR.QRCode> QRTracking.QRCodesManager::qrCodesList
	SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * ___qrCodesList_14;
	// Microsoft.MixedReality.QR.QRCodeWatcher QRTracking.QRCodesManager::qrTracker
	QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * ___qrTracker_15;
	// System.Boolean QRTracking.QRCodesManager::capabilityInitialized
	bool ___capabilityInitialized_16;
	// Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus QRTracking.QRCodesManager::accessStatus
	int32_t ___accessStatus_17;
	// System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus> QRTracking.QRCodesManager::capabilityTask
	Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E * ___capabilityTask_18;

public:
	inline static int32_t get_offset_of_AutoStartQRTracking_7() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___AutoStartQRTracking_7)); }
	inline bool get_AutoStartQRTracking_7() const { return ___AutoStartQRTracking_7; }
	inline bool* get_address_of_AutoStartQRTracking_7() { return &___AutoStartQRTracking_7; }
	inline void set_AutoStartQRTracking_7(bool value)
	{
		___AutoStartQRTracking_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsTrackerRunningU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___U3CIsTrackerRunningU3Ek__BackingField_8)); }
	inline bool get_U3CIsTrackerRunningU3Ek__BackingField_8() const { return ___U3CIsTrackerRunningU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsTrackerRunningU3Ek__BackingField_8() { return &___U3CIsTrackerRunningU3Ek__BackingField_8; }
	inline void set_U3CIsTrackerRunningU3Ek__BackingField_8(bool value)
	{
		___U3CIsTrackerRunningU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsSupportedU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___U3CIsSupportedU3Ek__BackingField_9)); }
	inline bool get_U3CIsSupportedU3Ek__BackingField_9() const { return ___U3CIsSupportedU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsSupportedU3Ek__BackingField_9() { return &___U3CIsSupportedU3Ek__BackingField_9; }
	inline void set_U3CIsSupportedU3Ek__BackingField_9(bool value)
	{
		___U3CIsSupportedU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_QRCodesTrackingStateChanged_10() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___QRCodesTrackingStateChanged_10)); }
	inline EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * get_QRCodesTrackingStateChanged_10() const { return ___QRCodesTrackingStateChanged_10; }
	inline EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 ** get_address_of_QRCodesTrackingStateChanged_10() { return &___QRCodesTrackingStateChanged_10; }
	inline void set_QRCodesTrackingStateChanged_10(EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * value)
	{
		___QRCodesTrackingStateChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QRCodesTrackingStateChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_QRCodeAdded_11() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___QRCodeAdded_11)); }
	inline EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * get_QRCodeAdded_11() const { return ___QRCodeAdded_11; }
	inline EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 ** get_address_of_QRCodeAdded_11() { return &___QRCodeAdded_11; }
	inline void set_QRCodeAdded_11(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * value)
	{
		___QRCodeAdded_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QRCodeAdded_11), (void*)value);
	}

	inline static int32_t get_offset_of_QRCodeUpdated_12() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___QRCodeUpdated_12)); }
	inline EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * get_QRCodeUpdated_12() const { return ___QRCodeUpdated_12; }
	inline EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 ** get_address_of_QRCodeUpdated_12() { return &___QRCodeUpdated_12; }
	inline void set_QRCodeUpdated_12(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * value)
	{
		___QRCodeUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QRCodeUpdated_12), (void*)value);
	}

	inline static int32_t get_offset_of_QRCodeRemoved_13() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___QRCodeRemoved_13)); }
	inline EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * get_QRCodeRemoved_13() const { return ___QRCodeRemoved_13; }
	inline EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 ** get_address_of_QRCodeRemoved_13() { return &___QRCodeRemoved_13; }
	inline void set_QRCodeRemoved_13(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * value)
	{
		___QRCodeRemoved_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QRCodeRemoved_13), (void*)value);
	}

	inline static int32_t get_offset_of_qrCodesList_14() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___qrCodesList_14)); }
	inline SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * get_qrCodesList_14() const { return ___qrCodesList_14; }
	inline SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E ** get_address_of_qrCodesList_14() { return &___qrCodesList_14; }
	inline void set_qrCodesList_14(SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * value)
	{
		___qrCodesList_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qrCodesList_14), (void*)value);
	}

	inline static int32_t get_offset_of_qrTracker_15() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___qrTracker_15)); }
	inline QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * get_qrTracker_15() const { return ___qrTracker_15; }
	inline QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 ** get_address_of_qrTracker_15() { return &___qrTracker_15; }
	inline void set_qrTracker_15(QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * value)
	{
		___qrTracker_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qrTracker_15), (void*)value);
	}

	inline static int32_t get_offset_of_capabilityInitialized_16() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___capabilityInitialized_16)); }
	inline bool get_capabilityInitialized_16() const { return ___capabilityInitialized_16; }
	inline bool* get_address_of_capabilityInitialized_16() { return &___capabilityInitialized_16; }
	inline void set_capabilityInitialized_16(bool value)
	{
		___capabilityInitialized_16 = value;
	}

	inline static int32_t get_offset_of_accessStatus_17() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___accessStatus_17)); }
	inline int32_t get_accessStatus_17() const { return ___accessStatus_17; }
	inline int32_t* get_address_of_accessStatus_17() { return &___accessStatus_17; }
	inline void set_accessStatus_17(int32_t value)
	{
		___accessStatus_17 = value;
	}

	inline static int32_t get_offset_of_capabilityTask_18() { return static_cast<int32_t>(offsetof(QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543, ___capabilityTask_18)); }
	inline Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E * get_capabilityTask_18() const { return ___capabilityTask_18; }
	inline Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E ** get_address_of_capabilityTask_18() { return &___capabilityTask_18; }
	inline void set_capabilityTask_18(Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E * value)
	{
		___capabilityTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capabilityTask_18), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_37;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_38;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_40;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_41;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_42;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_43;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_44;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_45;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_46;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_47;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_48;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_50;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_51;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_52;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_56;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_57;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_58;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_59;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_60;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_61;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_62;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_63;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_64;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_65;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_66;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_67;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_68;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_70;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_71;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_72;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_73;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_74;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_75;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_77;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_78;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_79;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_80;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_81;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_83;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_84;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_86;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_88;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_89;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_90;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_91;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_92;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_93;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_94;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_95;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_96;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_97;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_98;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_99;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_100;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_102;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_103;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_104;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_105;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_106;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_107;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_108;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_109;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_110;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_111;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_112;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_113;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_114;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_115;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_116;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_117;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_118;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_119;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_120;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_121;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_122;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_123;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_124;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_125;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_126;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_127;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_128;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_129;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_130;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_132;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_133;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_134;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_135;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_136;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_137;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_138;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_141;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_142;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_143;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_144;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_145;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_146;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_147;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_148;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_149;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_150;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_151;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_152;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_153;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_154;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_155;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_157;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_158;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_159;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_160;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_161;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_164;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_165;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_166;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_167;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_168;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_169;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_170;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_171;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_172;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_173;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_174;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_175;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_176;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_177;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_178;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_179;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_180;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_181;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_182;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_183;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_190;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_InternalParsingBuffer
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_InternalParsingBuffer_198;
	// System.Int32 TMPro.TMP_Text::m_InternalParsingBufferSize
	int32_t ___m_InternalParsingBufferSize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_200;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_input_CharArray_201;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_202;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_206;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_207;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_208;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_209;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_210;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_213;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_214;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_215;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_216;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_217;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_218;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_219;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_220;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_221;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_222;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_223;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_224;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_225;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_226;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_227;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_228;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_230;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_231;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_233;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_234;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_235;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_236;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_237;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_239;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_241;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_242;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_243;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_244;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_245;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_246;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_247;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_248;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_249;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_250;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_251;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_252;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_253;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_254;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_255;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_256;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_258;

public:
	inline static int32_t get_offset_of_m_text_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_36)); }
	inline String_t* get_m_text_36() const { return ___m_text_36; }
	inline String_t** get_address_of_m_text_36() { return &___m_text_36; }
	inline void set_m_text_36(String_t* value)
	{
		___m_text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_37)); }
	inline RuntimeObject* get_m_TextPreprocessor_37() const { return ___m_TextPreprocessor_37; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_37() { return &___m_TextPreprocessor_37; }
	inline void set_m_TextPreprocessor_37(RuntimeObject* value)
	{
		___m_TextPreprocessor_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_38)); }
	inline bool get_m_isRightToLeft_38() const { return ___m_isRightToLeft_38; }
	inline bool* get_address_of_m_isRightToLeft_38() { return &___m_isRightToLeft_38; }
	inline void set_m_isRightToLeft_38(bool value)
	{
		___m_isRightToLeft_38 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_39)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_39() const { return ___m_fontAsset_39; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_39() { return &___m_fontAsset_39; }
	inline void set_m_fontAsset_39(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_40)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_40() const { return ___m_currentFontAsset_40; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_40() { return &___m_currentFontAsset_40; }
	inline void set_m_currentFontAsset_40(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_41)); }
	inline bool get_m_isSDFShader_41() const { return ___m_isSDFShader_41; }
	inline bool* get_address_of_m_isSDFShader_41() { return &___m_isSDFShader_41; }
	inline void set_m_isSDFShader_41(bool value)
	{
		___m_isSDFShader_41 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_42)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_42() const { return ___m_sharedMaterial_42; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_42() { return &___m_sharedMaterial_42; }
	inline void set_m_sharedMaterial_42(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_43() const { return ___m_currentMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_43() { return &___m_currentMaterial_43; }
	inline void set_m_currentMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferences_44)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_44() const { return ___m_materialReferences_44; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_44() { return &___m_materialReferences_44; }
	inline void set_m_materialReferences_44(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceIndexLookup_45)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_45() const { return ___m_materialReferenceIndexLookup_45; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_45() { return &___m_materialReferenceIndexLookup_45; }
	inline void set_m_materialReferenceIndexLookup_45(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceStack_46)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_46() const { return ___m_materialReferenceStack_46; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_46() { return &___m_materialReferenceStack_46; }
	inline void set_m_materialReferenceStack_46(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_46))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_47)); }
	inline int32_t get_m_currentMaterialIndex_47() const { return ___m_currentMaterialIndex_47; }
	inline int32_t* get_address_of_m_currentMaterialIndex_47() { return &___m_currentMaterialIndex_47; }
	inline void set_m_currentMaterialIndex_47(int32_t value)
	{
		___m_currentMaterialIndex_47 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_48)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_48() const { return ___m_fontSharedMaterials_48; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_48() { return &___m_fontSharedMaterials_48; }
	inline void set_m_fontSharedMaterials_48(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_49)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_49() const { return ___m_fontMaterial_49; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_49() { return &___m_fontMaterial_49; }
	inline void set_m_fontMaterial_49(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_50)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_50() const { return ___m_fontMaterials_50; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_50() { return &___m_fontMaterials_50; }
	inline void set_m_fontMaterials_50(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_51)); }
	inline bool get_m_isMaterialDirty_51() const { return ___m_isMaterialDirty_51; }
	inline bool* get_address_of_m_isMaterialDirty_51() { return &___m_isMaterialDirty_51; }
	inline void set_m_isMaterialDirty_51(bool value)
	{
		___m_isMaterialDirty_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_52)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_52() const { return ___m_fontColor32_52; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_52() { return &___m_fontColor32_52; }
	inline void set_m_fontColor32_52(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_53)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_53() const { return ___m_fontColor_53; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_53() { return &___m_fontColor_53; }
	inline void set_m_fontColor_53(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_53 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_55() const { return ___m_underlineColor_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_55() { return &___m_underlineColor_55; }
	inline void set_m_underlineColor_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_55 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_56() const { return ___m_strikethroughColor_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_56() { return &___m_strikethroughColor_56; }
	inline void set_m_strikethroughColor_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_56 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_57)); }
	inline bool get_m_enableVertexGradient_57() const { return ___m_enableVertexGradient_57; }
	inline bool* get_address_of_m_enableVertexGradient_57() { return &___m_enableVertexGradient_57; }
	inline void set_m_enableVertexGradient_57(bool value)
	{
		___m_enableVertexGradient_57 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_58)); }
	inline int32_t get_m_colorMode_58() const { return ___m_colorMode_58; }
	inline int32_t* get_address_of_m_colorMode_58() { return &___m_colorMode_58; }
	inline void set_m_colorMode_58(int32_t value)
	{
		___m_colorMode_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_59)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_59() const { return ___m_fontColorGradient_59; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_59() { return &___m_fontColorGradient_59; }
	inline void set_m_fontColorGradient_59(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_60)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_60() const { return ___m_fontColorGradientPreset_60; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_60() { return &___m_fontColorGradientPreset_60; }
	inline void set_m_fontColorGradientPreset_60(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_61)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_61() const { return ___m_spriteAsset_61; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_61() { return &___m_spriteAsset_61; }
	inline void set_m_spriteAsset_61(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_62)); }
	inline bool get_m_tintAllSprites_62() const { return ___m_tintAllSprites_62; }
	inline bool* get_address_of_m_tintAllSprites_62() { return &___m_tintAllSprites_62; }
	inline void set_m_tintAllSprites_62(bool value)
	{
		___m_tintAllSprites_62 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_63)); }
	inline bool get_m_tintSprite_63() const { return ___m_tintSprite_63; }
	inline bool* get_address_of_m_tintSprite_63() { return &___m_tintSprite_63; }
	inline void set_m_tintSprite_63(bool value)
	{
		___m_tintSprite_63 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_64)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_64() const { return ___m_spriteColor_64; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_64() { return &___m_spriteColor_64; }
	inline void set_m_spriteColor_64(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_64 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_65)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_65() const { return ___m_StyleSheet_65; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_65() { return &___m_StyleSheet_65; }
	inline void set_m_StyleSheet_65(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_66)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_66() const { return ___m_TextStyle_66; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_66() { return &___m_TextStyle_66; }
	inline void set_m_TextStyle_66(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_67)); }
	inline int32_t get_m_TextStyleHashCode_67() const { return ___m_TextStyleHashCode_67; }
	inline int32_t* get_address_of_m_TextStyleHashCode_67() { return &___m_TextStyleHashCode_67; }
	inline void set_m_TextStyleHashCode_67(int32_t value)
	{
		___m_TextStyleHashCode_67 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_68)); }
	inline bool get_m_overrideHtmlColors_68() const { return ___m_overrideHtmlColors_68; }
	inline bool* get_address_of_m_overrideHtmlColors_68() { return &___m_overrideHtmlColors_68; }
	inline void set_m_overrideHtmlColors_68(bool value)
	{
		___m_overrideHtmlColors_68 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_69)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_69() const { return ___m_faceColor_69; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_69() { return &___m_faceColor_69; }
	inline void set_m_faceColor_69(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_69 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_70)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_70() const { return ___m_outlineColor_70; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_70() { return &___m_outlineColor_70; }
	inline void set_m_outlineColor_70(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_71)); }
	inline float get_m_outlineWidth_71() const { return ___m_outlineWidth_71; }
	inline float* get_address_of_m_outlineWidth_71() { return &___m_outlineWidth_71; }
	inline void set_m_outlineWidth_71(float value)
	{
		___m_outlineWidth_71 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_72)); }
	inline float get_m_fontSize_72() const { return ___m_fontSize_72; }
	inline float* get_address_of_m_fontSize_72() { return &___m_fontSize_72; }
	inline void set_m_fontSize_72(float value)
	{
		___m_fontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_73)); }
	inline float get_m_currentFontSize_73() const { return ___m_currentFontSize_73; }
	inline float* get_address_of_m_currentFontSize_73() { return &___m_currentFontSize_73; }
	inline void set_m_currentFontSize_73(float value)
	{
		___m_currentFontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_74)); }
	inline float get_m_fontSizeBase_74() const { return ___m_fontSizeBase_74; }
	inline float* get_address_of_m_fontSizeBase_74() { return &___m_fontSizeBase_74; }
	inline void set_m_fontSizeBase_74(float value)
	{
		___m_fontSizeBase_74 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_75)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_75() const { return ___m_sizeStack_75; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_75() { return &___m_sizeStack_75; }
	inline void set_m_sizeStack_75(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_75 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_75))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_76)); }
	inline int32_t get_m_fontWeight_76() const { return ___m_fontWeight_76; }
	inline int32_t* get_address_of_m_fontWeight_76() { return &___m_fontWeight_76; }
	inline void set_m_fontWeight_76(int32_t value)
	{
		___m_fontWeight_76 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_77)); }
	inline int32_t get_m_FontWeightInternal_77() const { return ___m_FontWeightInternal_77; }
	inline int32_t* get_address_of_m_FontWeightInternal_77() { return &___m_FontWeightInternal_77; }
	inline void set_m_FontWeightInternal_77(int32_t value)
	{
		___m_FontWeightInternal_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_78)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_78() const { return ___m_FontWeightStack_78; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_78() { return &___m_FontWeightStack_78; }
	inline void set_m_FontWeightStack_78(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_78 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_78))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_79)); }
	inline bool get_m_enableAutoSizing_79() const { return ___m_enableAutoSizing_79; }
	inline bool* get_address_of_m_enableAutoSizing_79() { return &___m_enableAutoSizing_79; }
	inline void set_m_enableAutoSizing_79(bool value)
	{
		___m_enableAutoSizing_79 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_80)); }
	inline float get_m_maxFontSize_80() const { return ___m_maxFontSize_80; }
	inline float* get_address_of_m_maxFontSize_80() { return &___m_maxFontSize_80; }
	inline void set_m_maxFontSize_80(float value)
	{
		___m_maxFontSize_80 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_81)); }
	inline float get_m_minFontSize_81() const { return ___m_minFontSize_81; }
	inline float* get_address_of_m_minFontSize_81() { return &___m_minFontSize_81; }
	inline void set_m_minFontSize_81(float value)
	{
		___m_minFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_82)); }
	inline int32_t get_m_AutoSizeIterationCount_82() const { return ___m_AutoSizeIterationCount_82; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_82() { return &___m_AutoSizeIterationCount_82; }
	inline void set_m_AutoSizeIterationCount_82(int32_t value)
	{
		___m_AutoSizeIterationCount_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_83)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_83() const { return ___m_AutoSizeMaxIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_83() { return &___m_AutoSizeMaxIterationCount_83; }
	inline void set_m_AutoSizeMaxIterationCount_83(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_84)); }
	inline bool get_m_IsAutoSizePointSizeSet_84() const { return ___m_IsAutoSizePointSizeSet_84; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_84() { return &___m_IsAutoSizePointSizeSet_84; }
	inline void set_m_IsAutoSizePointSizeSet_84(bool value)
	{
		___m_IsAutoSizePointSizeSet_84 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_85)); }
	inline float get_m_fontSizeMin_85() const { return ___m_fontSizeMin_85; }
	inline float* get_address_of_m_fontSizeMin_85() { return &___m_fontSizeMin_85; }
	inline void set_m_fontSizeMin_85(float value)
	{
		___m_fontSizeMin_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_86)); }
	inline float get_m_fontSizeMax_86() const { return ___m_fontSizeMax_86; }
	inline float* get_address_of_m_fontSizeMax_86() { return &___m_fontSizeMax_86; }
	inline void set_m_fontSizeMax_86(float value)
	{
		___m_fontSizeMax_86 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_87)); }
	inline int32_t get_m_fontStyle_87() const { return ___m_fontStyle_87; }
	inline int32_t* get_address_of_m_fontStyle_87() { return &___m_fontStyle_87; }
	inline void set_m_fontStyle_87(int32_t value)
	{
		___m_fontStyle_87 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_88)); }
	inline int32_t get_m_FontStyleInternal_88() const { return ___m_FontStyleInternal_88; }
	inline int32_t* get_address_of_m_FontStyleInternal_88() { return &___m_FontStyleInternal_88; }
	inline void set_m_FontStyleInternal_88(int32_t value)
	{
		___m_FontStyleInternal_88 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_89)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_89() const { return ___m_fontStyleStack_89; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_89() { return &___m_fontStyleStack_89; }
	inline void set_m_fontStyleStack_89(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_89 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_90)); }
	inline bool get_m_isUsingBold_90() const { return ___m_isUsingBold_90; }
	inline bool* get_address_of_m_isUsingBold_90() { return &___m_isUsingBold_90; }
	inline void set_m_isUsingBold_90(bool value)
	{
		___m_isUsingBold_90 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_91)); }
	inline int32_t get_m_HorizontalAlignment_91() const { return ___m_HorizontalAlignment_91; }
	inline int32_t* get_address_of_m_HorizontalAlignment_91() { return &___m_HorizontalAlignment_91; }
	inline void set_m_HorizontalAlignment_91(int32_t value)
	{
		___m_HorizontalAlignment_91 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_92)); }
	inline int32_t get_m_VerticalAlignment_92() const { return ___m_VerticalAlignment_92; }
	inline int32_t* get_address_of_m_VerticalAlignment_92() { return &___m_VerticalAlignment_92; }
	inline void set_m_VerticalAlignment_92(int32_t value)
	{
		___m_VerticalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_93)); }
	inline int32_t get_m_textAlignment_93() const { return ___m_textAlignment_93; }
	inline int32_t* get_address_of_m_textAlignment_93() { return &___m_textAlignment_93; }
	inline void set_m_textAlignment_93(int32_t value)
	{
		___m_textAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_94)); }
	inline int32_t get_m_lineJustification_94() const { return ___m_lineJustification_94; }
	inline int32_t* get_address_of_m_lineJustification_94() { return &___m_lineJustification_94; }
	inline void set_m_lineJustification_94(int32_t value)
	{
		___m_lineJustification_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_95)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_95() const { return ___m_lineJustificationStack_95; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_95() { return &___m_lineJustificationStack_95; }
	inline void set_m_lineJustificationStack_95(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_95 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_95))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_96)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_96() const { return ___m_textContainerLocalCorners_96; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_96() { return &___m_textContainerLocalCorners_96; }
	inline void set_m_textContainerLocalCorners_96(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_96), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_97)); }
	inline float get_m_characterSpacing_97() const { return ___m_characterSpacing_97; }
	inline float* get_address_of_m_characterSpacing_97() { return &___m_characterSpacing_97; }
	inline void set_m_characterSpacing_97(float value)
	{
		___m_characterSpacing_97 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_98)); }
	inline float get_m_cSpacing_98() const { return ___m_cSpacing_98; }
	inline float* get_address_of_m_cSpacing_98() { return &___m_cSpacing_98; }
	inline void set_m_cSpacing_98(float value)
	{
		___m_cSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_99)); }
	inline float get_m_monoSpacing_99() const { return ___m_monoSpacing_99; }
	inline float* get_address_of_m_monoSpacing_99() { return &___m_monoSpacing_99; }
	inline void set_m_monoSpacing_99(float value)
	{
		___m_monoSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_100)); }
	inline float get_m_wordSpacing_100() const { return ___m_wordSpacing_100; }
	inline float* get_address_of_m_wordSpacing_100() { return &___m_wordSpacing_100; }
	inline void set_m_wordSpacing_100(float value)
	{
		___m_wordSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_101)); }
	inline float get_m_lineSpacing_101() const { return ___m_lineSpacing_101; }
	inline float* get_address_of_m_lineSpacing_101() { return &___m_lineSpacing_101; }
	inline void set_m_lineSpacing_101(float value)
	{
		___m_lineSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_102)); }
	inline float get_m_lineSpacingDelta_102() const { return ___m_lineSpacingDelta_102; }
	inline float* get_address_of_m_lineSpacingDelta_102() { return &___m_lineSpacingDelta_102; }
	inline void set_m_lineSpacingDelta_102(float value)
	{
		___m_lineSpacingDelta_102 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_103)); }
	inline float get_m_lineHeight_103() const { return ___m_lineHeight_103; }
	inline float* get_address_of_m_lineHeight_103() { return &___m_lineHeight_103; }
	inline void set_m_lineHeight_103(float value)
	{
		___m_lineHeight_103 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_104)); }
	inline bool get_m_IsDrivenLineSpacing_104() const { return ___m_IsDrivenLineSpacing_104; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_104() { return &___m_IsDrivenLineSpacing_104; }
	inline void set_m_IsDrivenLineSpacing_104(bool value)
	{
		___m_IsDrivenLineSpacing_104 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_105)); }
	inline float get_m_lineSpacingMax_105() const { return ___m_lineSpacingMax_105; }
	inline float* get_address_of_m_lineSpacingMax_105() { return &___m_lineSpacingMax_105; }
	inline void set_m_lineSpacingMax_105(float value)
	{
		___m_lineSpacingMax_105 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_106)); }
	inline float get_m_paragraphSpacing_106() const { return ___m_paragraphSpacing_106; }
	inline float* get_address_of_m_paragraphSpacing_106() { return &___m_paragraphSpacing_106; }
	inline void set_m_paragraphSpacing_106(float value)
	{
		___m_paragraphSpacing_106 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_107)); }
	inline float get_m_charWidthMaxAdj_107() const { return ___m_charWidthMaxAdj_107; }
	inline float* get_address_of_m_charWidthMaxAdj_107() { return &___m_charWidthMaxAdj_107; }
	inline void set_m_charWidthMaxAdj_107(float value)
	{
		___m_charWidthMaxAdj_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_108)); }
	inline float get_m_charWidthAdjDelta_108() const { return ___m_charWidthAdjDelta_108; }
	inline float* get_address_of_m_charWidthAdjDelta_108() { return &___m_charWidthAdjDelta_108; }
	inline void set_m_charWidthAdjDelta_108(float value)
	{
		___m_charWidthAdjDelta_108 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_109)); }
	inline bool get_m_enableWordWrapping_109() const { return ___m_enableWordWrapping_109; }
	inline bool* get_address_of_m_enableWordWrapping_109() { return &___m_enableWordWrapping_109; }
	inline void set_m_enableWordWrapping_109(bool value)
	{
		___m_enableWordWrapping_109 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_110)); }
	inline bool get_m_isCharacterWrappingEnabled_110() const { return ___m_isCharacterWrappingEnabled_110; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_110() { return &___m_isCharacterWrappingEnabled_110; }
	inline void set_m_isCharacterWrappingEnabled_110(bool value)
	{
		___m_isCharacterWrappingEnabled_110 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_111)); }
	inline bool get_m_isNonBreakingSpace_111() const { return ___m_isNonBreakingSpace_111; }
	inline bool* get_address_of_m_isNonBreakingSpace_111() { return &___m_isNonBreakingSpace_111; }
	inline void set_m_isNonBreakingSpace_111(bool value)
	{
		___m_isNonBreakingSpace_111 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_112)); }
	inline bool get_m_isIgnoringAlignment_112() const { return ___m_isIgnoringAlignment_112; }
	inline bool* get_address_of_m_isIgnoringAlignment_112() { return &___m_isIgnoringAlignment_112; }
	inline void set_m_isIgnoringAlignment_112(bool value)
	{
		___m_isIgnoringAlignment_112 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_113)); }
	inline float get_m_wordWrappingRatios_113() const { return ___m_wordWrappingRatios_113; }
	inline float* get_address_of_m_wordWrappingRatios_113() { return &___m_wordWrappingRatios_113; }
	inline void set_m_wordWrappingRatios_113(float value)
	{
		___m_wordWrappingRatios_113 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_114)); }
	inline int32_t get_m_overflowMode_114() const { return ___m_overflowMode_114; }
	inline int32_t* get_address_of_m_overflowMode_114() { return &___m_overflowMode_114; }
	inline void set_m_overflowMode_114(int32_t value)
	{
		___m_overflowMode_114 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_115)); }
	inline int32_t get_m_firstOverflowCharacterIndex_115() const { return ___m_firstOverflowCharacterIndex_115; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_115() { return &___m_firstOverflowCharacterIndex_115; }
	inline void set_m_firstOverflowCharacterIndex_115(int32_t value)
	{
		___m_firstOverflowCharacterIndex_115 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_116)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_116() const { return ___m_linkedTextComponent_116; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_116() { return &___m_linkedTextComponent_116; }
	inline void set_m_linkedTextComponent_116(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_116), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_117)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_117() const { return ___parentLinkedComponent_117; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_117() { return &___parentLinkedComponent_117; }
	inline void set_parentLinkedComponent_117(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_118)); }
	inline bool get_m_isTextTruncated_118() const { return ___m_isTextTruncated_118; }
	inline bool* get_address_of_m_isTextTruncated_118() { return &___m_isTextTruncated_118; }
	inline void set_m_isTextTruncated_118(bool value)
	{
		___m_isTextTruncated_118 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_119)); }
	inline bool get_m_enableKerning_119() const { return ___m_enableKerning_119; }
	inline bool* get_address_of_m_enableKerning_119() { return &___m_enableKerning_119; }
	inline void set_m_enableKerning_119(bool value)
	{
		___m_enableKerning_119 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_120)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_120() const { return ___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_120() { return &___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_120(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_120 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_121)); }
	inline bool get_m_enableExtraPadding_121() const { return ___m_enableExtraPadding_121; }
	inline bool* get_address_of_m_enableExtraPadding_121() { return &___m_enableExtraPadding_121; }
	inline void set_m_enableExtraPadding_121(bool value)
	{
		___m_enableExtraPadding_121 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_122)); }
	inline bool get_checkPaddingRequired_122() const { return ___checkPaddingRequired_122; }
	inline bool* get_address_of_checkPaddingRequired_122() { return &___checkPaddingRequired_122; }
	inline void set_checkPaddingRequired_122(bool value)
	{
		___checkPaddingRequired_122 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_123)); }
	inline bool get_m_isRichText_123() const { return ___m_isRichText_123; }
	inline bool* get_address_of_m_isRichText_123() { return &___m_isRichText_123; }
	inline void set_m_isRichText_123(bool value)
	{
		___m_isRichText_123 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_124)); }
	inline bool get_m_parseCtrlCharacters_124() const { return ___m_parseCtrlCharacters_124; }
	inline bool* get_address_of_m_parseCtrlCharacters_124() { return &___m_parseCtrlCharacters_124; }
	inline void set_m_parseCtrlCharacters_124(bool value)
	{
		___m_parseCtrlCharacters_124 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_125)); }
	inline bool get_m_isOverlay_125() const { return ___m_isOverlay_125; }
	inline bool* get_address_of_m_isOverlay_125() { return &___m_isOverlay_125; }
	inline void set_m_isOverlay_125(bool value)
	{
		___m_isOverlay_125 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_126)); }
	inline bool get_m_isOrthographic_126() const { return ___m_isOrthographic_126; }
	inline bool* get_address_of_m_isOrthographic_126() { return &___m_isOrthographic_126; }
	inline void set_m_isOrthographic_126(bool value)
	{
		___m_isOrthographic_126 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_127)); }
	inline bool get_m_isCullingEnabled_127() const { return ___m_isCullingEnabled_127; }
	inline bool* get_address_of_m_isCullingEnabled_127() { return &___m_isCullingEnabled_127; }
	inline void set_m_isCullingEnabled_127(bool value)
	{
		___m_isCullingEnabled_127 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_128)); }
	inline bool get_m_isMaskingEnabled_128() const { return ___m_isMaskingEnabled_128; }
	inline bool* get_address_of_m_isMaskingEnabled_128() { return &___m_isMaskingEnabled_128; }
	inline void set_m_isMaskingEnabled_128(bool value)
	{
		___m_isMaskingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_129)); }
	inline bool get_isMaskUpdateRequired_129() const { return ___isMaskUpdateRequired_129; }
	inline bool* get_address_of_isMaskUpdateRequired_129() { return &___isMaskUpdateRequired_129; }
	inline void set_isMaskUpdateRequired_129(bool value)
	{
		___isMaskUpdateRequired_129 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_130)); }
	inline bool get_m_ignoreCulling_130() const { return ___m_ignoreCulling_130; }
	inline bool* get_address_of_m_ignoreCulling_130() { return &___m_ignoreCulling_130; }
	inline void set_m_ignoreCulling_130(bool value)
	{
		___m_ignoreCulling_130 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_131)); }
	inline int32_t get_m_horizontalMapping_131() const { return ___m_horizontalMapping_131; }
	inline int32_t* get_address_of_m_horizontalMapping_131() { return &___m_horizontalMapping_131; }
	inline void set_m_horizontalMapping_131(int32_t value)
	{
		___m_horizontalMapping_131 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_132)); }
	inline int32_t get_m_verticalMapping_132() const { return ___m_verticalMapping_132; }
	inline int32_t* get_address_of_m_verticalMapping_132() { return &___m_verticalMapping_132; }
	inline void set_m_verticalMapping_132(int32_t value)
	{
		___m_verticalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_133)); }
	inline float get_m_uvLineOffset_133() const { return ___m_uvLineOffset_133; }
	inline float* get_address_of_m_uvLineOffset_133() { return &___m_uvLineOffset_133; }
	inline void set_m_uvLineOffset_133(float value)
	{
		___m_uvLineOffset_133 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_134)); }
	inline int32_t get_m_renderMode_134() const { return ___m_renderMode_134; }
	inline int32_t* get_address_of_m_renderMode_134() { return &___m_renderMode_134; }
	inline void set_m_renderMode_134(int32_t value)
	{
		___m_renderMode_134 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_135)); }
	inline int32_t get_m_geometrySortingOrder_135() const { return ___m_geometrySortingOrder_135; }
	inline int32_t* get_address_of_m_geometrySortingOrder_135() { return &___m_geometrySortingOrder_135; }
	inline void set_m_geometrySortingOrder_135(int32_t value)
	{
		___m_geometrySortingOrder_135 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_136)); }
	inline bool get_m_IsTextObjectScaleStatic_136() const { return ___m_IsTextObjectScaleStatic_136; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_136() { return &___m_IsTextObjectScaleStatic_136; }
	inline void set_m_IsTextObjectScaleStatic_136(bool value)
	{
		___m_IsTextObjectScaleStatic_136 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_137)); }
	inline bool get_m_VertexBufferAutoSizeReduction_137() const { return ___m_VertexBufferAutoSizeReduction_137; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_137() { return &___m_VertexBufferAutoSizeReduction_137; }
	inline void set_m_VertexBufferAutoSizeReduction_137(bool value)
	{
		___m_VertexBufferAutoSizeReduction_137 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_138)); }
	inline int32_t get_m_firstVisibleCharacter_138() const { return ___m_firstVisibleCharacter_138; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_138() { return &___m_firstVisibleCharacter_138; }
	inline void set_m_firstVisibleCharacter_138(int32_t value)
	{
		___m_firstVisibleCharacter_138 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_139)); }
	inline int32_t get_m_maxVisibleCharacters_139() const { return ___m_maxVisibleCharacters_139; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_139() { return &___m_maxVisibleCharacters_139; }
	inline void set_m_maxVisibleCharacters_139(int32_t value)
	{
		___m_maxVisibleCharacters_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_140)); }
	inline int32_t get_m_maxVisibleWords_140() const { return ___m_maxVisibleWords_140; }
	inline int32_t* get_address_of_m_maxVisibleWords_140() { return &___m_maxVisibleWords_140; }
	inline void set_m_maxVisibleWords_140(int32_t value)
	{
		___m_maxVisibleWords_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_141)); }
	inline int32_t get_m_maxVisibleLines_141() const { return ___m_maxVisibleLines_141; }
	inline int32_t* get_address_of_m_maxVisibleLines_141() { return &___m_maxVisibleLines_141; }
	inline void set_m_maxVisibleLines_141(int32_t value)
	{
		___m_maxVisibleLines_141 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_142)); }
	inline bool get_m_useMaxVisibleDescender_142() const { return ___m_useMaxVisibleDescender_142; }
	inline bool* get_address_of_m_useMaxVisibleDescender_142() { return &___m_useMaxVisibleDescender_142; }
	inline void set_m_useMaxVisibleDescender_142(bool value)
	{
		___m_useMaxVisibleDescender_142 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_143)); }
	inline int32_t get_m_pageToDisplay_143() const { return ___m_pageToDisplay_143; }
	inline int32_t* get_address_of_m_pageToDisplay_143() { return &___m_pageToDisplay_143; }
	inline void set_m_pageToDisplay_143(int32_t value)
	{
		___m_pageToDisplay_143 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_144)); }
	inline bool get_m_isNewPage_144() const { return ___m_isNewPage_144; }
	inline bool* get_address_of_m_isNewPage_144() { return &___m_isNewPage_144; }
	inline void set_m_isNewPage_144(bool value)
	{
		___m_isNewPage_144 = value;
	}

	inline static int32_t get_offset_of_m_margin_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_145)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_145() const { return ___m_margin_145; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_145() { return &___m_margin_145; }
	inline void set_m_margin_145(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_145 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_146)); }
	inline float get_m_marginLeft_146() const { return ___m_marginLeft_146; }
	inline float* get_address_of_m_marginLeft_146() { return &___m_marginLeft_146; }
	inline void set_m_marginLeft_146(float value)
	{
		___m_marginLeft_146 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_147)); }
	inline float get_m_marginRight_147() const { return ___m_marginRight_147; }
	inline float* get_address_of_m_marginRight_147() { return &___m_marginRight_147; }
	inline void set_m_marginRight_147(float value)
	{
		___m_marginRight_147 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_148)); }
	inline float get_m_marginWidth_148() const { return ___m_marginWidth_148; }
	inline float* get_address_of_m_marginWidth_148() { return &___m_marginWidth_148; }
	inline void set_m_marginWidth_148(float value)
	{
		___m_marginWidth_148 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_149)); }
	inline float get_m_marginHeight_149() const { return ___m_marginHeight_149; }
	inline float* get_address_of_m_marginHeight_149() { return &___m_marginHeight_149; }
	inline void set_m_marginHeight_149(float value)
	{
		___m_marginHeight_149 = value;
	}

	inline static int32_t get_offset_of_m_width_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_150)); }
	inline float get_m_width_150() const { return ___m_width_150; }
	inline float* get_address_of_m_width_150() { return &___m_width_150; }
	inline void set_m_width_150(float value)
	{
		___m_width_150 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_151)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_151() const { return ___m_textInfo_151; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_151() { return &___m_textInfo_151; }
	inline void set_m_textInfo_151(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_151 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_151), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_152)); }
	inline bool get_m_havePropertiesChanged_152() const { return ___m_havePropertiesChanged_152; }
	inline bool* get_address_of_m_havePropertiesChanged_152() { return &___m_havePropertiesChanged_152; }
	inline void set_m_havePropertiesChanged_152(bool value)
	{
		___m_havePropertiesChanged_152 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_153)); }
	inline bool get_m_isUsingLegacyAnimationComponent_153() const { return ___m_isUsingLegacyAnimationComponent_153; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_153() { return &___m_isUsingLegacyAnimationComponent_153; }
	inline void set_m_isUsingLegacyAnimationComponent_153(bool value)
	{
		___m_isUsingLegacyAnimationComponent_153 = value;
	}

	inline static int32_t get_offset_of_m_transform_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_154)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_154() const { return ___m_transform_154; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_154() { return &___m_transform_154; }
	inline void set_m_transform_154(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_155)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_155() const { return ___m_rectTransform_155; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_155() { return &___m_rectTransform_155; }
	inline void set_m_rectTransform_155(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_156)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_156() const { return ___m_PreviousRectTransformSize_156; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_156() { return &___m_PreviousRectTransformSize_156; }
	inline void set_m_PreviousRectTransformSize_156(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_156 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_157)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_157() const { return ___m_PreviousPivotPosition_157; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_157() { return &___m_PreviousPivotPosition_157; }
	inline void set_m_PreviousPivotPosition_157(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_157 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_158)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_158() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return &___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_158(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_158 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_159)); }
	inline bool get_m_autoSizeTextContainer_159() const { return ___m_autoSizeTextContainer_159; }
	inline bool* get_address_of_m_autoSizeTextContainer_159() { return &___m_autoSizeTextContainer_159; }
	inline void set_m_autoSizeTextContainer_159(bool value)
	{
		___m_autoSizeTextContainer_159 = value;
	}

	inline static int32_t get_offset_of_m_mesh_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_160)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_160() const { return ___m_mesh_160; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_160() { return &___m_mesh_160; }
	inline void set_m_mesh_160(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_160 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_160), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_161)); }
	inline bool get_m_isVolumetricText_161() const { return ___m_isVolumetricText_161; }
	inline bool* get_address_of_m_isVolumetricText_161() { return &___m_isVolumetricText_161; }
	inline void set_m_isVolumetricText_161(bool value)
	{
		___m_isVolumetricText_161 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_164)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_164() const { return ___OnPreRenderText_164; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_164() { return &___OnPreRenderText_164; }
	inline void set_OnPreRenderText_164(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_165)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_165() const { return ___m_spriteAnimator_165; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_165() { return &___m_spriteAnimator_165; }
	inline void set_m_spriteAnimator_165(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_166)); }
	inline float get_m_flexibleHeight_166() const { return ___m_flexibleHeight_166; }
	inline float* get_address_of_m_flexibleHeight_166() { return &___m_flexibleHeight_166; }
	inline void set_m_flexibleHeight_166(float value)
	{
		___m_flexibleHeight_166 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_167)); }
	inline float get_m_flexibleWidth_167() const { return ___m_flexibleWidth_167; }
	inline float* get_address_of_m_flexibleWidth_167() { return &___m_flexibleWidth_167; }
	inline void set_m_flexibleWidth_167(float value)
	{
		___m_flexibleWidth_167 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_168)); }
	inline float get_m_minWidth_168() const { return ___m_minWidth_168; }
	inline float* get_address_of_m_minWidth_168() { return &___m_minWidth_168; }
	inline void set_m_minWidth_168(float value)
	{
		___m_minWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_169)); }
	inline float get_m_minHeight_169() const { return ___m_minHeight_169; }
	inline float* get_address_of_m_minHeight_169() { return &___m_minHeight_169; }
	inline void set_m_minHeight_169(float value)
	{
		___m_minHeight_169 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_170)); }
	inline float get_m_maxWidth_170() const { return ___m_maxWidth_170; }
	inline float* get_address_of_m_maxWidth_170() { return &___m_maxWidth_170; }
	inline void set_m_maxWidth_170(float value)
	{
		___m_maxWidth_170 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_171)); }
	inline float get_m_maxHeight_171() const { return ___m_maxHeight_171; }
	inline float* get_address_of_m_maxHeight_171() { return &___m_maxHeight_171; }
	inline void set_m_maxHeight_171(float value)
	{
		___m_maxHeight_171 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_172)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_172() const { return ___m_LayoutElement_172; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_172() { return &___m_LayoutElement_172; }
	inline void set_m_LayoutElement_172(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_172 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_172), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_173)); }
	inline float get_m_preferredWidth_173() const { return ___m_preferredWidth_173; }
	inline float* get_address_of_m_preferredWidth_173() { return &___m_preferredWidth_173; }
	inline void set_m_preferredWidth_173(float value)
	{
		___m_preferredWidth_173 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_174)); }
	inline float get_m_renderedWidth_174() const { return ___m_renderedWidth_174; }
	inline float* get_address_of_m_renderedWidth_174() { return &___m_renderedWidth_174; }
	inline void set_m_renderedWidth_174(float value)
	{
		___m_renderedWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_175)); }
	inline bool get_m_isPreferredWidthDirty_175() const { return ___m_isPreferredWidthDirty_175; }
	inline bool* get_address_of_m_isPreferredWidthDirty_175() { return &___m_isPreferredWidthDirty_175; }
	inline void set_m_isPreferredWidthDirty_175(bool value)
	{
		___m_isPreferredWidthDirty_175 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_176)); }
	inline float get_m_preferredHeight_176() const { return ___m_preferredHeight_176; }
	inline float* get_address_of_m_preferredHeight_176() { return &___m_preferredHeight_176; }
	inline void set_m_preferredHeight_176(float value)
	{
		___m_preferredHeight_176 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_177)); }
	inline float get_m_renderedHeight_177() const { return ___m_renderedHeight_177; }
	inline float* get_address_of_m_renderedHeight_177() { return &___m_renderedHeight_177; }
	inline void set_m_renderedHeight_177(float value)
	{
		___m_renderedHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_178)); }
	inline bool get_m_isPreferredHeightDirty_178() const { return ___m_isPreferredHeightDirty_178; }
	inline bool* get_address_of_m_isPreferredHeightDirty_178() { return &___m_isPreferredHeightDirty_178; }
	inline void set_m_isPreferredHeightDirty_178(bool value)
	{
		___m_isPreferredHeightDirty_178 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_179)); }
	inline bool get_m_isCalculatingPreferredValues_179() const { return ___m_isCalculatingPreferredValues_179; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_179() { return &___m_isCalculatingPreferredValues_179; }
	inline void set_m_isCalculatingPreferredValues_179(bool value)
	{
		___m_isCalculatingPreferredValues_179 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_180)); }
	inline int32_t get_m_layoutPriority_180() const { return ___m_layoutPriority_180; }
	inline int32_t* get_address_of_m_layoutPriority_180() { return &___m_layoutPriority_180; }
	inline void set_m_layoutPriority_180(int32_t value)
	{
		___m_layoutPriority_180 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_181)); }
	inline bool get_m_isLayoutDirty_181() const { return ___m_isLayoutDirty_181; }
	inline bool* get_address_of_m_isLayoutDirty_181() { return &___m_isLayoutDirty_181; }
	inline void set_m_isLayoutDirty_181(bool value)
	{
		___m_isLayoutDirty_181 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_182)); }
	inline bool get_m_isAwake_182() const { return ___m_isAwake_182; }
	inline bool* get_address_of_m_isAwake_182() { return &___m_isAwake_182; }
	inline void set_m_isAwake_182(bool value)
	{
		___m_isAwake_182 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_183)); }
	inline bool get_m_isWaitingOnResourceLoad_183() const { return ___m_isWaitingOnResourceLoad_183; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_183() { return &___m_isWaitingOnResourceLoad_183; }
	inline void set_m_isWaitingOnResourceLoad_183(bool value)
	{
		___m_isWaitingOnResourceLoad_183 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isInputParsingRequired_184)); }
	inline bool get_m_isInputParsingRequired_184() const { return ___m_isInputParsingRequired_184; }
	inline bool* get_address_of_m_isInputParsingRequired_184() { return &___m_isInputParsingRequired_184; }
	inline void set_m_isInputParsingRequired_184(bool value)
	{
		___m_isInputParsingRequired_184 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_185)); }
	inline int32_t get_m_inputSource_185() const { return ___m_inputSource_185; }
	inline int32_t* get_address_of_m_inputSource_185() { return &___m_inputSource_185; }
	inline void set_m_inputSource_185(int32_t value)
	{
		___m_inputSource_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScale_186)); }
	inline float get_m_fontScale_186() const { return ___m_fontScale_186; }
	inline float* get_address_of_m_fontScale_186() { return &___m_fontScale_186; }
	inline void set_m_fontScale_186(float value)
	{
		___m_fontScale_186 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_187)); }
	inline float get_m_fontScaleMultiplier_187() const { return ___m_fontScaleMultiplier_187; }
	inline float* get_address_of_m_fontScaleMultiplier_187() { return &___m_fontScaleMultiplier_187; }
	inline void set_m_fontScaleMultiplier_187(float value)
	{
		___m_fontScaleMultiplier_187 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlTag_188)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_188() const { return ___m_htmlTag_188; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_188() { return &___m_htmlTag_188; }
	inline void set_m_htmlTag_188(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xmlAttribute_189)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_189() const { return ___m_xmlAttribute_189; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_189() { return &___m_xmlAttribute_189; }
	inline void set_m_xmlAttribute_189(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_attributeParameterValues_190)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_190() const { return ___m_attributeParameterValues_190; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_190() { return &___m_attributeParameterValues_190; }
	inline void set_m_attributeParameterValues_190(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_190 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_190), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_191)); }
	inline float get_tag_LineIndent_191() const { return ___tag_LineIndent_191; }
	inline float* get_address_of_tag_LineIndent_191() { return &___tag_LineIndent_191; }
	inline void set_tag_LineIndent_191(float value)
	{
		___tag_LineIndent_191 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_192)); }
	inline float get_tag_Indent_192() const { return ___tag_Indent_192; }
	inline float* get_address_of_tag_Indent_192() { return &___tag_Indent_192; }
	inline void set_tag_Indent_192(float value)
	{
		___tag_Indent_192 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_193)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_193() const { return ___m_indentStack_193; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_193() { return &___m_indentStack_193; }
	inline void set_m_indentStack_193(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_193 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_193))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_194)); }
	inline bool get_tag_NoParsing_194() const { return ___tag_NoParsing_194; }
	inline bool* get_address_of_tag_NoParsing_194() { return &___tag_NoParsing_194; }
	inline void set_tag_NoParsing_194(bool value)
	{
		___tag_NoParsing_194 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_195)); }
	inline bool get_m_isParsingText_195() const { return ___m_isParsingText_195; }
	inline bool* get_address_of_m_isParsingText_195() { return &___m_isParsingText_195; }
	inline void set_m_isParsingText_195(bool value)
	{
		___m_isParsingText_195 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_196)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_196() const { return ___m_FXMatrix_196; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_196() { return &___m_FXMatrix_196; }
	inline void set_m_FXMatrix_196(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_196 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_197)); }
	inline bool get_m_isFXMatrixSet_197() const { return ___m_isFXMatrixSet_197; }
	inline bool* get_address_of_m_isFXMatrixSet_197() { return &___m_isFXMatrixSet_197; }
	inline void set_m_isFXMatrixSet_197(bool value)
	{
		___m_isFXMatrixSet_197 = value;
	}

	inline static int32_t get_offset_of_m_InternalParsingBuffer_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalParsingBuffer_198)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_InternalParsingBuffer_198() const { return ___m_InternalParsingBuffer_198; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_InternalParsingBuffer_198() { return &___m_InternalParsingBuffer_198; }
	inline void set_m_InternalParsingBuffer_198(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_InternalParsingBuffer_198 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalParsingBuffer_198), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalParsingBufferSize_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalParsingBufferSize_199)); }
	inline int32_t get_m_InternalParsingBufferSize_199() const { return ___m_InternalParsingBufferSize_199; }
	inline int32_t* get_address_of_m_InternalParsingBufferSize_199() { return &___m_InternalParsingBufferSize_199; }
	inline void set_m_InternalParsingBufferSize_199(int32_t value)
	{
		___m_InternalParsingBufferSize_199 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_200)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_200() const { return ___m_internalCharacterInfo_200; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_200() { return &___m_internalCharacterInfo_200; }
	inline void set_m_internalCharacterInfo_200(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_200 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_200), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_input_CharArray_201)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_input_CharArray_201() const { return ___m_input_CharArray_201; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_input_CharArray_201() { return &___m_input_CharArray_201; }
	inline void set_m_input_CharArray_201(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_input_CharArray_201 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_201), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charArray_Length_202)); }
	inline int32_t get_m_charArray_Length_202() const { return ___m_charArray_Length_202; }
	inline int32_t* get_address_of_m_charArray_Length_202() { return &___m_charArray_Length_202; }
	inline void set_m_charArray_Length_202(int32_t value)
	{
		___m_charArray_Length_202 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_203)); }
	inline int32_t get_m_totalCharacterCount_203() const { return ___m_totalCharacterCount_203; }
	inline int32_t* get_address_of_m_totalCharacterCount_203() { return &___m_totalCharacterCount_203; }
	inline void set_m_totalCharacterCount_203(int32_t value)
	{
		___m_totalCharacterCount_203 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedWordWrapState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_204() const { return ___m_SavedWordWrapState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_204() { return &___m_SavedWordWrapState_204; }
	inline void set_m_SavedWordWrapState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedLineState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_205() const { return ___m_SavedLineState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_205() { return &___m_SavedLineState_205; }
	inline void set_m_SavedLineState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedEllipsisState_206)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_206() const { return ___m_SavedEllipsisState_206; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_206() { return &___m_SavedEllipsisState_206; }
	inline void set_m_SavedEllipsisState_206(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedLastValidState_207)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_207() const { return ___m_SavedLastValidState_207; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_207() { return &___m_SavedLastValidState_207; }
	inline void set_m_SavedLastValidState_207(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_207 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedSoftLineBreakState_208)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_208() const { return ___m_SavedSoftLineBreakState_208; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_208() { return &___m_SavedSoftLineBreakState_208; }
	inline void set_m_SavedSoftLineBreakState_208(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_208 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_EllipsisInsertionCandidateStack_209)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_209() const { return ___m_EllipsisInsertionCandidateStack_209; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_209() { return &___m_EllipsisInsertionCandidateStack_209; }
	inline void set_m_EllipsisInsertionCandidateStack_209(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_209 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_209))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_210)); }
	inline int32_t get_m_characterCount_210() const { return ___m_characterCount_210; }
	inline int32_t* get_address_of_m_characterCount_210() { return &___m_characterCount_210; }
	inline void set_m_characterCount_210(int32_t value)
	{
		___m_characterCount_210 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_211)); }
	inline int32_t get_m_firstCharacterOfLine_211() const { return ___m_firstCharacterOfLine_211; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_211() { return &___m_firstCharacterOfLine_211; }
	inline void set_m_firstCharacterOfLine_211(int32_t value)
	{
		___m_firstCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_212)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_212() const { return ___m_firstVisibleCharacterOfLine_212; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_212() { return &___m_firstVisibleCharacterOfLine_212; }
	inline void set_m_firstVisibleCharacterOfLine_212(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_212 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_213)); }
	inline int32_t get_m_lastCharacterOfLine_213() const { return ___m_lastCharacterOfLine_213; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_213() { return &___m_lastCharacterOfLine_213; }
	inline void set_m_lastCharacterOfLine_213(int32_t value)
	{
		___m_lastCharacterOfLine_213 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_214)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_214() const { return ___m_lastVisibleCharacterOfLine_214; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_214() { return &___m_lastVisibleCharacterOfLine_214; }
	inline void set_m_lastVisibleCharacterOfLine_214(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_214 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_215)); }
	inline int32_t get_m_lineNumber_215() const { return ___m_lineNumber_215; }
	inline int32_t* get_address_of_m_lineNumber_215() { return &___m_lineNumber_215; }
	inline void set_m_lineNumber_215(int32_t value)
	{
		___m_lineNumber_215 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_216)); }
	inline int32_t get_m_lineVisibleCharacterCount_216() const { return ___m_lineVisibleCharacterCount_216; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_216() { return &___m_lineVisibleCharacterCount_216; }
	inline void set_m_lineVisibleCharacterCount_216(int32_t value)
	{
		___m_lineVisibleCharacterCount_216 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_217)); }
	inline int32_t get_m_pageNumber_217() const { return ___m_pageNumber_217; }
	inline int32_t* get_address_of_m_pageNumber_217() { return &___m_pageNumber_217; }
	inline void set_m_pageNumber_217(int32_t value)
	{
		___m_pageNumber_217 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_218)); }
	inline float get_m_PageAscender_218() const { return ___m_PageAscender_218; }
	inline float* get_address_of_m_PageAscender_218() { return &___m_PageAscender_218; }
	inline void set_m_PageAscender_218(float value)
	{
		___m_PageAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_219)); }
	inline float get_m_maxTextAscender_219() const { return ___m_maxTextAscender_219; }
	inline float* get_address_of_m_maxTextAscender_219() { return &___m_maxTextAscender_219; }
	inline void set_m_maxTextAscender_219(float value)
	{
		___m_maxTextAscender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_220)); }
	inline float get_m_maxCapHeight_220() const { return ___m_maxCapHeight_220; }
	inline float* get_address_of_m_maxCapHeight_220() { return &___m_maxCapHeight_220; }
	inline void set_m_maxCapHeight_220(float value)
	{
		___m_maxCapHeight_220 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_221)); }
	inline float get_m_ElementAscender_221() const { return ___m_ElementAscender_221; }
	inline float* get_address_of_m_ElementAscender_221() { return &___m_ElementAscender_221; }
	inline void set_m_ElementAscender_221(float value)
	{
		___m_ElementAscender_221 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_222)); }
	inline float get_m_ElementDescender_222() const { return ___m_ElementDescender_222; }
	inline float* get_address_of_m_ElementDescender_222() { return &___m_ElementDescender_222; }
	inline void set_m_ElementDescender_222(float value)
	{
		___m_ElementDescender_222 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_223)); }
	inline float get_m_maxLineAscender_223() const { return ___m_maxLineAscender_223; }
	inline float* get_address_of_m_maxLineAscender_223() { return &___m_maxLineAscender_223; }
	inline void set_m_maxLineAscender_223(float value)
	{
		___m_maxLineAscender_223 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_224)); }
	inline float get_m_maxLineDescender_224() const { return ___m_maxLineDescender_224; }
	inline float* get_address_of_m_maxLineDescender_224() { return &___m_maxLineDescender_224; }
	inline void set_m_maxLineDescender_224(float value)
	{
		___m_maxLineDescender_224 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_225)); }
	inline float get_m_startOfLineAscender_225() const { return ___m_startOfLineAscender_225; }
	inline float* get_address_of_m_startOfLineAscender_225() { return &___m_startOfLineAscender_225; }
	inline void set_m_startOfLineAscender_225(float value)
	{
		___m_startOfLineAscender_225 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_226)); }
	inline float get_m_startOfLineDescender_226() const { return ___m_startOfLineDescender_226; }
	inline float* get_address_of_m_startOfLineDescender_226() { return &___m_startOfLineDescender_226; }
	inline void set_m_startOfLineDescender_226(float value)
	{
		___m_startOfLineDescender_226 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_227)); }
	inline float get_m_lineOffset_227() const { return ___m_lineOffset_227; }
	inline float* get_address_of_m_lineOffset_227() { return &___m_lineOffset_227; }
	inline void set_m_lineOffset_227(float value)
	{
		___m_lineOffset_227 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_228)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_228() const { return ___m_meshExtents_228; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_228() { return &___m_meshExtents_228; }
	inline void set_m_meshExtents_228(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_228 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_229)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_229() const { return ___m_htmlColor_229; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_229() { return &___m_htmlColor_229; }
	inline void set_m_htmlColor_229(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_229 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_230)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_230() const { return ___m_colorStack_230; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_230() { return &___m_colorStack_230; }
	inline void set_m_colorStack_230(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_231)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_231() const { return ___m_underlineColorStack_231; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_231() { return &___m_underlineColorStack_231; }
	inline void set_m_underlineColorStack_231(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_231))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_232)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_232() const { return ___m_strikethroughColorStack_232; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_232() { return &___m_strikethroughColorStack_232; }
	inline void set_m_strikethroughColorStack_232(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_232))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_233)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_233() const { return ___m_HighlightStateStack_233; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_233() { return &___m_HighlightStateStack_233; }
	inline void set_m_HighlightStateStack_233(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_233 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_233))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_234)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_234() const { return ___m_colorGradientPreset_234; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_234() { return &___m_colorGradientPreset_234; }
	inline void set_m_colorGradientPreset_234(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_234 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_234), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_235)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_235() const { return ___m_colorGradientStack_235; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_235() { return &___m_colorGradientStack_235; }
	inline void set_m_colorGradientStack_235(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_235 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_235))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_235))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_236)); }
	inline bool get_m_colorGradientPresetIsTinted_236() const { return ___m_colorGradientPresetIsTinted_236; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_236() { return &___m_colorGradientPresetIsTinted_236; }
	inline void set_m_colorGradientPresetIsTinted_236(bool value)
	{
		___m_colorGradientPresetIsTinted_236 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_237)); }
	inline float get_m_tabSpacing_237() const { return ___m_tabSpacing_237; }
	inline float* get_address_of_m_tabSpacing_237() { return &___m_tabSpacing_237; }
	inline void set_m_tabSpacing_237(float value)
	{
		___m_tabSpacing_237 = value;
	}

	inline static int32_t get_offset_of_m_spacing_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_238)); }
	inline float get_m_spacing_238() const { return ___m_spacing_238; }
	inline float* get_address_of_m_spacing_238() { return &___m_spacing_238; }
	inline void set_m_spacing_238(float value)
	{
		___m_spacing_238 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_239)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_239() const { return ___m_TextStyleStacks_239; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_239() { return &___m_TextStyleStacks_239; }
	inline void set_m_TextStyleStacks_239(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_239 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_239), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_240)); }
	inline int32_t get_m_TextStyleStackDepth_240() const { return ___m_TextStyleStackDepth_240; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_240() { return &___m_TextStyleStackDepth_240; }
	inline void set_m_TextStyleStackDepth_240(int32_t value)
	{
		___m_TextStyleStackDepth_240 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_241)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_241() const { return ___m_ItalicAngleStack_241; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_241() { return &___m_ItalicAngleStack_241; }
	inline void set_m_ItalicAngleStack_241(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_241 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_241))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_242)); }
	inline int32_t get_m_ItalicAngle_242() const { return ___m_ItalicAngle_242; }
	inline int32_t* get_address_of_m_ItalicAngle_242() { return &___m_ItalicAngle_242; }
	inline void set_m_ItalicAngle_242(int32_t value)
	{
		___m_ItalicAngle_242 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_243)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_243() const { return ___m_actionStack_243; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_243() { return &___m_actionStack_243; }
	inline void set_m_actionStack_243(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_243 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_243))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_244)); }
	inline float get_m_padding_244() const { return ___m_padding_244; }
	inline float* get_address_of_m_padding_244() { return &___m_padding_244; }
	inline void set_m_padding_244(float value)
	{
		___m_padding_244 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_245)); }
	inline float get_m_baselineOffset_245() const { return ___m_baselineOffset_245; }
	inline float* get_address_of_m_baselineOffset_245() { return &___m_baselineOffset_245; }
	inline void set_m_baselineOffset_245(float value)
	{
		___m_baselineOffset_245 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_246)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_246() const { return ___m_baselineOffsetStack_246; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_246() { return &___m_baselineOffsetStack_246; }
	inline void set_m_baselineOffsetStack_246(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_246 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_246))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_247)); }
	inline float get_m_xAdvance_247() const { return ___m_xAdvance_247; }
	inline float* get_address_of_m_xAdvance_247() { return &___m_xAdvance_247; }
	inline void set_m_xAdvance_247(float value)
	{
		___m_xAdvance_247 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_248)); }
	inline int32_t get_m_textElementType_248() const { return ___m_textElementType_248; }
	inline int32_t* get_address_of_m_textElementType_248() { return &___m_textElementType_248; }
	inline void set_m_textElementType_248(int32_t value)
	{
		___m_textElementType_248 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_249)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_249() const { return ___m_cached_TextElement_249; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_249() { return &___m_cached_TextElement_249; }
	inline void set_m_cached_TextElement_249(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_250)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_250() const { return ___m_Ellipsis_250; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_250() { return &___m_Ellipsis_250; }
	inline void set_m_Ellipsis_250(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_250 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_251)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_251() const { return ___m_Underline_251; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_251() { return &___m_Underline_251; }
	inline void set_m_Underline_251(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_251 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_252)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_252() const { return ___m_defaultSpriteAsset_252; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_252() { return &___m_defaultSpriteAsset_252; }
	inline void set_m_defaultSpriteAsset_252(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_252 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_252), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_253)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_253() const { return ___m_currentSpriteAsset_253; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_253() { return &___m_currentSpriteAsset_253; }
	inline void set_m_currentSpriteAsset_253(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_253 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_253), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_254)); }
	inline int32_t get_m_spriteCount_254() const { return ___m_spriteCount_254; }
	inline int32_t* get_address_of_m_spriteCount_254() { return &___m_spriteCount_254; }
	inline void set_m_spriteCount_254(int32_t value)
	{
		___m_spriteCount_254 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_255)); }
	inline int32_t get_m_spriteIndex_255() const { return ___m_spriteIndex_255; }
	inline int32_t* get_address_of_m_spriteIndex_255() { return &___m_spriteIndex_255; }
	inline void set_m_spriteIndex_255(int32_t value)
	{
		___m_spriteIndex_255 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_256)); }
	inline int32_t get_m_spriteAnimationID_256() const { return ___m_spriteAnimationID_256; }
	inline int32_t* get_address_of_m_spriteAnimationID_256() { return &___m_spriteAnimationID_256; }
	inline void set_m_spriteAnimationID_256(int32_t value)
	{
		___m_spriteAnimationID_256 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_257)); }
	inline bool get_m_ignoreActiveState_257() const { return ___m_ignoreActiveState_257; }
	inline bool* get_address_of_m_ignoreActiveState_257() { return &___m_ignoreActiveState_257; }
	inline void set_m_ignoreActiveState_257(bool value)
	{
		___m_ignoreActiveState_257 = value;
	}

	inline static int32_t get_offset_of_k_Power_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_258)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_258() const { return ___k_Power_258; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_258() { return &___k_Power_258; }
	inline void set_k_Power_258(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_258 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_258), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_54;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_162;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_163;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;

public:
	inline static int32_t get_offset_of_s_colorWhite_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_54)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_54() const { return ___s_colorWhite_54; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_54() { return &___s_colorWhite_54; }
	inline void set_s_colorWhite_54(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_54 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_162)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_162() const { return ___OnFontAssetRequest_162; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_162() { return &___OnFontAssetRequest_162; }
	inline void set_OnFontAssetRequest_162(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_162), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_163)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_163() const { return ___OnSpriteAssetRequest_163; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_163() { return &___OnSpriteAssetRequest_163; }
	inline void set_OnSpriteAssetRequest_163(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_259)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_259() const { return ___k_LargePositiveVector2_259; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_259() { return &___k_LargePositiveVector2_259; }
	inline void set_k_LargePositiveVector2_259(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_260() const { return ___k_LargeNegativeVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_260() { return &___k_LargeNegativeVector2_260; }
	inline void set_k_LargeNegativeVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_261)); }
	inline float get_k_LargePositiveFloat_261() const { return ___k_LargePositiveFloat_261; }
	inline float* get_address_of_k_LargePositiveFloat_261() { return &___k_LargePositiveFloat_261; }
	inline void set_k_LargePositiveFloat_261(float value)
	{
		___k_LargePositiveFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_262)); }
	inline float get_k_LargeNegativeFloat_262() const { return ___k_LargeNegativeFloat_262; }
	inline float* get_address_of_k_LargeNegativeFloat_262() { return &___k_LargeNegativeFloat_262; }
	inline void set_k_LargeNegativeFloat_262(float value)
	{
		___k_LargeNegativeFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_263)); }
	inline int32_t get_k_LargePositiveInt_263() const { return ___k_LargePositiveInt_263; }
	inline int32_t* get_address_of_k_LargePositiveInt_263() { return &___k_LargePositiveInt_263; }
	inline void set_k_LargePositiveInt_263(int32_t value)
	{
		___k_LargePositiveInt_263 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_264)); }
	inline int32_t get_k_LargeNegativeInt_264() const { return ___k_LargeNegativeInt_264; }
	inline int32_t* get_address_of_k_LargeNegativeInt_264() { return &___k_LargeNegativeInt_264; }
	inline void set_k_LargeNegativeInt_264(int32_t value)
	{
		___k_LargeNegativeInt_264 = value;
	}
};


// TMPro.TextMeshPro
struct  TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4  : public TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262
{
public:
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_265;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_266;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___m_renderer_267;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___m_meshFilter_268;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_269;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_270;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_271;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* ___m_subTextObjects_272;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_273;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_EnvMapMatrix_274;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_RectTransformCorners_275;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_276;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_277;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_278;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_279;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_280;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_265() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_hasFontAssetChanged_265)); }
	inline bool get_m_hasFontAssetChanged_265() const { return ___m_hasFontAssetChanged_265; }
	inline bool* get_address_of_m_hasFontAssetChanged_265() { return &___m_hasFontAssetChanged_265; }
	inline void set_m_hasFontAssetChanged_265(bool value)
	{
		___m_hasFontAssetChanged_265 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_266() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_previousLossyScaleY_266)); }
	inline float get_m_previousLossyScaleY_266() const { return ___m_previousLossyScaleY_266; }
	inline float* get_address_of_m_previousLossyScaleY_266() { return &___m_previousLossyScaleY_266; }
	inline void set_m_previousLossyScaleY_266(float value)
	{
		___m_previousLossyScaleY_266 = value;
	}

	inline static int32_t get_offset_of_m_renderer_267() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_renderer_267)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_m_renderer_267() const { return ___m_renderer_267; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_m_renderer_267() { return &___m_renderer_267; }
	inline void set_m_renderer_267(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___m_renderer_267 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_renderer_267), (void*)value);
	}

	inline static int32_t get_offset_of_m_meshFilter_268() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_meshFilter_268)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_m_meshFilter_268() const { return ___m_meshFilter_268; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_m_meshFilter_268() { return &___m_meshFilter_268; }
	inline void set_m_meshFilter_268(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___m_meshFilter_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_meshFilter_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_269() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isFirstAllocation_269)); }
	inline bool get_m_isFirstAllocation_269() const { return ___m_isFirstAllocation_269; }
	inline bool* get_address_of_m_isFirstAllocation_269() { return &___m_isFirstAllocation_269; }
	inline void set_m_isFirstAllocation_269(bool value)
	{
		___m_isFirstAllocation_269 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_270() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_characters_270)); }
	inline int32_t get_m_max_characters_270() const { return ___m_max_characters_270; }
	inline int32_t* get_address_of_m_max_characters_270() { return &___m_max_characters_270; }
	inline void set_m_max_characters_270(int32_t value)
	{
		___m_max_characters_270 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_271() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_numberOfLines_271)); }
	inline int32_t get_m_max_numberOfLines_271() const { return ___m_max_numberOfLines_271; }
	inline int32_t* get_address_of_m_max_numberOfLines_271() { return &___m_max_numberOfLines_271; }
	inline void set_m_max_numberOfLines_271(int32_t value)
	{
		___m_max_numberOfLines_271 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_272() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_subTextObjects_272)); }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* get_m_subTextObjects_272() const { return ___m_subTextObjects_272; }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2** get_address_of_m_subTextObjects_272() { return &___m_subTextObjects_272; }
	inline void set_m_subTextObjects_272(TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* value)
	{
		___m_subTextObjects_272 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_272), (void*)value);
	}

	inline static int32_t get_offset_of_m_maskType_273() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_maskType_273)); }
	inline int32_t get_m_maskType_273() const { return ___m_maskType_273; }
	inline int32_t* get_address_of_m_maskType_273() { return &___m_maskType_273; }
	inline void set_m_maskType_273(int32_t value)
	{
		___m_maskType_273 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_274() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_EnvMapMatrix_274)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_EnvMapMatrix_274() const { return ___m_EnvMapMatrix_274; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_EnvMapMatrix_274() { return &___m_EnvMapMatrix_274; }
	inline void set_m_EnvMapMatrix_274(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_EnvMapMatrix_274 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_275() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_RectTransformCorners_275)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_RectTransformCorners_275() const { return ___m_RectTransformCorners_275; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_RectTransformCorners_275() { return &___m_RectTransformCorners_275; }
	inline void set_m_RectTransformCorners_275(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_RectTransformCorners_275 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_275), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_276() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isRegisteredForEvents_276)); }
	inline bool get_m_isRegisteredForEvents_276() const { return ___m_isRegisteredForEvents_276; }
	inline bool* get_address_of_m_isRegisteredForEvents_276() { return &___m_isRegisteredForEvents_276; }
	inline void set_m_isRegisteredForEvents_276(bool value)
	{
		___m_isRegisteredForEvents_276 = value;
	}

	inline static int32_t get_offset_of__SortingLayerID_277() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingLayerID_277)); }
	inline int32_t get__SortingLayerID_277() const { return ____SortingLayerID_277; }
	inline int32_t* get_address_of__SortingLayerID_277() { return &____SortingLayerID_277; }
	inline void set__SortingLayerID_277(int32_t value)
	{
		____SortingLayerID_277 = value;
	}

	inline static int32_t get_offset_of__SortingOrder_278() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingOrder_278)); }
	inline int32_t get__SortingOrder_278() const { return ____SortingOrder_278; }
	inline int32_t* get_address_of__SortingOrder_278() { return &____SortingOrder_278; }
	inline void set__SortingOrder_278(int32_t value)
	{
		____SortingOrder_278 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_279() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___OnPreRenderText_279)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_279() const { return ___OnPreRenderText_279; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_279() { return &___OnPreRenderText_279; }
	inline void set_OnPreRenderText_279(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_279 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_279), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentAutoSizeMode_280() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_currentAutoSizeMode_280)); }
	inline bool get_m_currentAutoSizeMode_280() const { return ___m_currentAutoSizeMode_280; }
	inline bool* get_address_of_m_currentAutoSizeMode_280() { return &___m_currentAutoSizeMode_280; }
	inline void set_m_currentAutoSizeMode_280(bool value)
	{
		___m_currentAutoSizeMode_280 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.Generic.SortedDictionary`2/Enumerator<!0,!1> System.Collections.Generic.SortedDictionary`2<System.Guid,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6EF550E60E433CA4524541E360A18B84F52323F0  SortedDictionary_2_GetEnumerator_m3A5287965AE0D594DE02B4BE05492F1184BDB88C_gshared (SortedDictionary_2_tEA77492B4208CDD503D350FBDAFF1412D0AA06C0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F  Enumerator_get_Current_mAA09ED3F4D20E9E1ECAE844686919E41765C2AD6_gshared (Enumerator_t6EF550E60E433CA4524541E360A18B84F52323F0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mE47F3F438F816C36EF8D857CD4313EDE8E9BA71E_gshared_inline (KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  KeyValuePair_2_get_Key_mE03F9398C8279E092A6E54CA730BEB18E2CBBF53_gshared_inline (KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA97D80BCB38C5FC3616B006E5F2D2AE15067B79F_gshared (Enumerator_t6EF550E60E433CA4524541E360A18B84F52323F0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m144C51626343121EB5392A8150091A10937F092E_gshared (Enumerator_t6EF550E60E433CA4524541E360A18B84F52323F0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.SortedDictionary`2/ValueCollection<!0,!1> System.Collections.Generic.SortedDictionary`2<System.Guid,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5C37289B307157CF740594AB8987F349028B4FB6 * SortedDictionary_2_get_Values_m73C47CB03F2653B9294FD23933114FC3DD5C9624_gshared (SortedDictionary_2_tEA77492B4208CDD503D350FBDAFF1412D0AA06C0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<QRTracking.QRCodesManager/<Start>d__29>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_mE935A4840A0574D9994ECA626C143DE9DC1172D1_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Boolean>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_gshared (EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * __this, RuntimeObject * ___sender0, bool ___e1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Guid,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Clear_m935736F97D371A69CF51A20F450F40A1F105EBF9_gshared (SortedDictionary_2_tEA77492B4208CDD503D350FBDAFF1412D0AA06C0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Guid,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_ContainsKey_m3F4790D149257D97C5E01948341716964F5BECA7_gshared (SortedDictionary_2_tEA77492B4208CDD503D350FBDAFF1412D0AA06C0 * __this, Guid_t  ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Guid,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_Remove_m32121410F476A1D5FF14ACA00DBE34A2C7A728D2_gshared (SortedDictionary_2_tEA77492B4208CDD503D350FBDAFF1412D0AA06C0 * __this, Guid_t  ___key0, const RuntimeMethod* method);
// QRTracking.QRCodeEventArgs`1<TData> QRTracking.QRCodeEventArgs::Create<System.Object>(TData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCodeEventArgs_1_tB170C019EF1E3EB07BEB45B8539005046FCF7AB6 * QRCodeEventArgs_Create_TisRuntimeObject_m3510B11E4516410C24A5AC53FE750D2FC4B67DE5_gshared (RuntimeObject * ___data0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Guid,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_set_Item_m3428247691E86D6977EA895F3FE9EE9F9132F12E_gshared (SortedDictionary_2_tEA77492B4208CDD503D350FBDAFF1412D0AA06C0 * __this, Guid_t  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Guid,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_mFFCB685C4984C546D536B16500C82EDAA0D923CD_gshared (SortedDictionary_2_tEA77492B4208CDD503D350FBDAFF1412D0AA06C0 * __this, const RuntimeMethod* method);
// System.Void QRTracking.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mAFB79C093D08CCE205AC5987BC8F908B8BB9827D_gshared (Singleton_1_t886D4BAE1A5F8F692736EF2CA36FD987976428A0 * __this, const RuntimeMethod* method);
// T QRTracking.Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_m3A5E47084A40959335D5A33F624E11A500B76C45_gshared (const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m89F752F9643DA7F92FFEDCD06BC26F5BB9BFF7AA_gshared (EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TData QRTracking.QRCodeEventArgs`1<System.Object>::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * QRCodeEventArgs_1_get_Data_m6717EA682D9B2B0E3A40930C0516FE686F563934_gshared_inline (QRCodeEventArgs_1_tB170C019EF1E3EB07BEB45B8539005046FCF7AB6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<QRTracking.QRCodesVisualizer/ActionData>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA_gshared (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * __this, ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<QRTracking.QRCodesVisualizer/ActionData>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  Queue_1_Dequeue_mCAE79E030BE01A9215627883BACBF834DCCAEB68_gshared (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Guid,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Add_m4555DE1972156DEACC71F13B70C4E7C6AA50486E_gshared (SortedDictionary_2_tEA77492B4208CDD503D350FBDAFF1412D0AA06C0 * __this, Guid_t  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.SortedDictionary`2<System.Guid,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SortedDictionary_2_get_Item_m65D56FDB9DD18C09EF0B18DAFDA471241C00BB75_gshared (SortedDictionary_2_tEA77492B4208CDD503D350FBDAFF1412D0AA06C0 * __this, Guid_t  ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<QRTracking.QRCodesVisualizer/ActionData>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m812BFFC0DCA11665073AAE686BF416AFF180B9F5_gshared_inline (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<QRTracking.QRCodesVisualizer/ActionData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5CA6B1B89CB8D897ACEE1AA1AA907F46146B7092_gshared (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.Matrix4x4>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_gshared_inline (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Numerics.Matrix4x4>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_gshared (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32Enum>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7  Task_1_GetAwaiter_m4EF638C9B2EDBA17F0C9F4DD1029E9BD08C7BF19_gshared (Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m2A676042F160D1A6A0BA2AD08D10AE3F41277FEB_gshared (TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>,QRTracking.QRCodesManager/<Start>d__29>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_m59A64E5E28AC454872E5EEEB064E288CA2214881_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7 * ___awaiter0, U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m0E423017AA9BCD5014ECA8DF02802488ECB0B673_gshared (TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7 * __this, const RuntimeMethod* method);

// System.Void QRTracking.QRCodesManager::StartQRTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_StartQRTracking_m62F9D31D3CE2D9BBE15F257A222DC07C76237EA5 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method);
// System.Void QRTracking.QRCodesManager::StopQRTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_StopQRTracking_m2B3A205A35A01A0CF90ED25E577E035F1D837829 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void QRTracking.QRCode::set_PhysicalSize(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QRCode_set_PhysicalSize_m0A4AFD0FA61E1E75AB70146A601F32920D288BFB_inline (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, float ___value0, const RuntimeMethod* method);
// System.Void QRTracking.QRCode::set_CodeText(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QRCode_set_CodeText_mB4878FD110C1D5CC31A1902023CE50DC3BAB433A_inline (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.QR.QRCode::get_PhysicalSideLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float QRCode_get_PhysicalSideLength_m49AC8B9F77DBE0BCC6D24768B26C53B6C836E9CA (QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.QR.QRCode::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QRCode_get_Data_m3A9D8F30CB7DA1D9C233ED1F74CC1B7DDBD91B6A (QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Guid Microsoft.MixedReality.QR.QRCode::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2 (QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * __this, const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Guid Microsoft.MixedReality.QR.QRCode::get_SpatialGraphNodeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  QRCode_get_SpatialGraphNodeId_mEAE60D35B8E885FD291532E94E63B91EB66FF6D6 (QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * __this, const RuntimeMethod* method);
// System.String QRTracking.QRCode::get_CodeText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* QRCode_get_CodeText_m14CBFF93BBC261D89838E3CD5D2119BF94A3C3FF_inline (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_TryCreate_m44277635BB8291BC0AADD85B9C9A015C1C21EF92 (String_t* ___uriString0, int32_t ___uriKind1, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___result2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.QR.QRVersion Microsoft.MixedReality.QR.QRCode::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QRCode_get_Version_m640BEEA0DCF9916E27BD4BFC5B848E64A0EC13D1 (QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.DateTimeOffset Microsoft.MixedReality.QR.QRCode::get_LastDetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  QRCode_get_LastDetectedTime_m3F074BE8624FEFB9F390E05FCE4842EA9EF05F8D (QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * __this, const RuntimeMethod* method);
// System.String System.DateTimeOffset::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeOffset_ToString_m0F27E1C939EDD772DF5A09D3C8CD7F0D5922A9F8 (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * __this, String_t* ___format0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Single QRTracking.QRCode::get_PhysicalSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421_inline (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.TimeSpan Microsoft.MixedReality.QR.QRCode::get_SystemRelativeLastDetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  QRCode_get_SystemRelativeLastDetectedTime_mEF361C928AF8D7980397F65F38B6353797520A87 (QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * __this, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.TextMesh::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TextMesh_get_color_m81016B82BB08E4CBEDF00DBC2AEF0DBD5894EC4F (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void QRTracking.QRCode::UpdatePropertiesDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode_UpdatePropertiesDisplay_m200F7E7501142FF0336A1BD7DBBB6E07A65581FD (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method);
// System.Void QRTracking.QRCode::LaunchUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode_LaunchUri_m7EEDC21E2709EC77C69F9FCC577B44900FF48122 (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WSA.Launcher::LaunchUri(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Launcher_LaunchUri_m5320697DD7D0BCC8E0AA2A851C8E71B29A75C9DA (String_t* ___uri0, bool ___showWarning1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Collections.Generic.SortedDictionary`2/Enumerator<!0,!1> System.Collections.Generic.SortedDictionary`2<System.Guid,Microsoft.MixedReality.QR.QRCode>::GetEnumerator()
inline Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0  SortedDictionary_2_GetEnumerator_m35F120E439685CF9BDBFC4ED6E5735577871040A (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0  (*) (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E *, const RuntimeMethod*))SortedDictionary_2_GetEnumerator_m3A5287965AE0D594DE02B4BE05492F1184BDB88C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,Microsoft.MixedReality.QR.QRCode>::get_Current()
inline KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2  Enumerator_get_Current_m74384F579C972D8FA6D4F81F29EA7F57BB8BCA95 (Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2  (*) (Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0 *, const RuntimeMethod*))Enumerator_get_Current_mAA09ED3F4D20E9E1ECAE844686919E41765C2AD6_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Guid,Microsoft.MixedReality.QR.QRCode>::get_Value()
inline QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * KeyValuePair_2_get_Value_mAA25298892BAD03B93824F99BDC1EDC877D07C65_inline (KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2 * __this, const RuntimeMethod* method)
{
	return ((  QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * (*) (KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mE47F3F438F816C36EF8D857CD4313EDE8E9BA71E_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Guid,Microsoft.MixedReality.QR.QRCode>::get_Key()
inline Guid_t  KeyValuePair_2_get_Key_m38179A314485CB66501658A4EAD7921B759CFA14_inline (KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2 * __this, const RuntimeMethod* method)
{
	return ((  Guid_t  (*) (KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mE03F9398C8279E092A6E54CA730BEB18E2CBBF53_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,Microsoft.MixedReality.QR.QRCode>::MoveNext()
inline bool Enumerator_MoveNext_mCB834C08E0713324A30D692ECCD4DA983EEF7A99 (Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0 *, const RuntimeMethod*))Enumerator_MoveNext_mA97D80BCB38C5FC3616B006E5F2D2AE15067B79F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,Microsoft.MixedReality.QR.QRCode>::Dispose()
inline void Enumerator_Dispose_m036FCECBCB3BB2E2272B409594F5FA45C25C9B5B (Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0 *, const RuntimeMethod*))Enumerator_Dispose_m144C51626343121EB5392A8150091A10937F092E_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Collections.Generic.SortedDictionary`2/ValueCollection<!0,!1> System.Collections.Generic.SortedDictionary`2<System.Guid,Microsoft.MixedReality.QR.QRCode>::get_Values()
inline ValueCollection_t01A52B30994F5EFC2BFD67A27FCA39C3CD2FF0E8 * SortedDictionary_2_get_Values_mC2ECB62981F8B715831129D203518EE06FDE9604 (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t01A52B30994F5EFC2BFD67A27FCA39C3CD2FF0E8 * (*) (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E *, const RuntimeMethod*))SortedDictionary_2_get_Values_m73C47CB03F2653B9294FD23933114FC3DD5C9624_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.QR.QRCode>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mD56AA2FA9523945411DE3526AFB7B70F3E40A56B (List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<QRTracking.QRCodesManager/<Start>d__29>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_mE935A4840A0574D9994ECA626C143DE9DC1172D1 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_mE935A4840A0574D9994ECA626C143DE9DC1172D1_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher__ctor_m0ED099A5CA2D08C9E3C4A10D8E1A5D1FAD6C7E18 (QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * __this, const RuntimeMethod* method);
// System.Void QRTracking.QRCodesManager::set_IsTrackerRunning(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QRCodesManager_set_IsTrackerRunning_m37EB90CB0A2D98DA445CD02A3A473D01522C05FB_inline (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeAddedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mF0DFFCE272FE4792069304D117B3C7A6907AC5F6 (EventHandler_1_tCA0A2B41C8984DA1BE1BFF8CE830CD34399AA70F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCA0A2B41C8984DA1BE1BFF8CE830CD34399AA70F *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::add_Added(System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeAddedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher_add_Added_m4B8F890F04D1CCB0B2BABFCE3F89984A1357A125 (QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * __this, EventHandler_1_tCA0A2B41C8984DA1BE1BFF8CE830CD34399AA70F * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCAE3F32042CD3882698A13CE94A6CD252869E084 (EventHandler_1_t3555C0D4BF0D001148DF752B5B41E62A085D7C2F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t3555C0D4BF0D001148DF752B5B41E62A085D7C2F *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::add_Updated(System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher_add_Updated_mCE6CEC8C252453FE91F3D3DF0F0FD8423CDEE57A (QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * __this, EventHandler_1_t3555C0D4BF0D001148DF752B5B41E62A085D7C2F * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m12BA750107857E6FC3727A8799DDF886EC14C684 (EventHandler_1_t5BCE95ACEA650660657EF4F49E824484DCEDC9CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5BCE95ACEA650660657EF4F49E824484DCEDC9CC *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::add_Removed(System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher_add_Removed_mD819433B9C8FDCEEA6A900D3FCC4B1554920F7A9 (QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * __this, EventHandler_1_t5BCE95ACEA650660657EF4F49E824484DCEDC9CC * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4 (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::add_EnumerationCompleted(System.EventHandler`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher_add_EnumerationCompleted_m28BCDBF15F1E0D903F58FB15C1E1EB0FFFA6AEF7 (QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * __this, EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * ___value0, const RuntimeMethod* method);
// System.Boolean QRTracking.QRCodesManager::get_IsTrackerRunning()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QRCodesManager_get_IsTrackerRunning_mEB820442D0588EC9382806131768ED2655C8729B_inline (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher_Start_mA8265CACF16DBC4840AFA65A98839717BBBEAC53 (QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Boolean>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4 (EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * __this, RuntimeObject * ___sender0, bool ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *, RuntimeObject *, bool, const RuntimeMethod*))EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher_Stop_mE21DAA77C2CD7BEE35278EA66C413FBEABCC441B (QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Guid,Microsoft.MixedReality.QR.QRCode>::Clear()
inline void SortedDictionary_2_Clear_m453B425BA42CF426AF891742219DA0BF520961B0 (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E *, const RuntimeMethod*))SortedDictionary_2_Clear_m935736F97D371A69CF51A20F450F40A1F105EBF9_gshared)(__this, method);
}
// Microsoft.MixedReality.QR.QRCode Microsoft.MixedReality.QR.QRCodeRemovedEventArgs::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * QRCodeRemovedEventArgs_get_Code_m1673AD47D1F2B94114B13B098BF4B038030C82A0 (QRCodeRemovedEventArgs_t4ACC2B0A16DFAB8ACF15183B33B92E056F63BE7B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Guid,Microsoft.MixedReality.QR.QRCode>::ContainsKey(!0)
inline bool SortedDictionary_2_ContainsKey_mA2A658F3C5F9E21A21EA708BC283EC7AA0D10576 (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * __this, Guid_t  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E *, Guid_t , const RuntimeMethod*))SortedDictionary_2_ContainsKey_m3F4790D149257D97C5E01948341716964F5BECA7_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Guid,Microsoft.MixedReality.QR.QRCode>::Remove(!0)
inline bool SortedDictionary_2_Remove_m331F7BB84DF01BAFCA274CFA0CEAC6B589715752 (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * __this, Guid_t  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E *, Guid_t , const RuntimeMethod*))SortedDictionary_2_Remove_m32121410F476A1D5FF14ACA00DBE34A2C7A728D2_gshared)(__this, ___key0, method);
}
// QRTracking.QRCodeEventArgs`1<TData> QRTracking.QRCodeEventArgs::Create<Microsoft.MixedReality.QR.QRCode>(TData)
inline QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * QRCodeEventArgs_Create_TisQRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40_m04207A8B460314B5D8F603B3499D6B53B1C342EF (QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * ___data0, const RuntimeMethod* method)
{
	return ((  QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * (*) (QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 *, const RuntimeMethod*))QRCodeEventArgs_Create_TisRuntimeObject_m3510B11E4516410C24A5AC53FE750D2FC4B67DE5_gshared)(___data0, method);
}
// System.Void System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m42D0BBB3F676D599DCAAA80A83CE77067E5E550B (EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * __this, RuntimeObject * ___sender0, QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *, RuntimeObject *, QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// Microsoft.MixedReality.QR.QRCode Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * QRCodeUpdatedEventArgs_get_Code_mDDD9AF1C4990679F46DE9B0C2061008EC16FC33D (QRCodeUpdatedEventArgs_t8F9B61799F713834B03340474C74B58A667B5C1F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Guid,Microsoft.MixedReality.QR.QRCode>::set_Item(!0,!1)
inline void SortedDictionary_2_set_Item_m9CD3833EF1036E72C444A524EE660C8035539B7D (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * __this, Guid_t  ___key0, QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E *, Guid_t , QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 *, const RuntimeMethod*))SortedDictionary_2_set_Item_m3428247691E86D6977EA895F3FE9EE9F9132F12E_gshared)(__this, ___key0, ___value1, method);
}
// Microsoft.MixedReality.QR.QRCode Microsoft.MixedReality.QR.QRCodeAddedEventArgs::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * QRCodeAddedEventArgs_get_Code_m82E28D071F7479252FC71762B2321ACB8FE8A405 (QRCodeAddedEventArgs_t77611BE65C7F482E6E7D27642D8D7752C55CEC0A * __this, const RuntimeMethod* method);
// System.Boolean QRTracking.QRCodesManager::get_IsSupported()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QRCodesManager_get_IsSupported_m09F2E18B4C918A98BCF6699EEAA2592A1F3F0C84_inline (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method);
// System.Void QRTracking.QRCodesManager::SetupQRTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_SetupQRTracking_m61A691EF9BC3314F084B9A18067545F1F7D00573 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Guid,Microsoft.MixedReality.QR.QRCode>::.ctor()
inline void SortedDictionary_2__ctor_m9B2CAFCC37D4A813230B0DAAF7C62FF210F29962 (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E *, const RuntimeMethod*))SortedDictionary_2__ctor_mFFCB685C4984C546D536B16500C82EDAA0D923CD_gshared)(__this, method);
}
// System.Void QRTracking.Singleton`1<QRTracking.QRCodesManager>::.ctor()
inline void Singleton_1__ctor_m988567ED68F97FA39568BB637F79E48904DD31CD (Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700 *, const RuntimeMethod*))Singleton_1__ctor_mAFB79C093D08CCE205AC5987BC8F908B8BB9827D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Guid,UnityEngine.GameObject>::.ctor()
inline void SortedDictionary_2__ctor_mC5A267777A30A77771960E0EED4D8800272175D5 (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC *, const RuntimeMethod*))SortedDictionary_2__ctor_mFFCB685C4984C546D536B16500C82EDAA0D923CD_gshared)(__this, method);
}
// T QRTracking.Singleton`1<QRTracking.QRCodesManager>::get_Instance()
inline QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * Singleton_1_get_Instance_m902448B510BDA3596A55859D3544F754294037C5 (const RuntimeMethod* method)
{
	return ((  QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m3A5E47084A40959335D5A33F624E11A500B76C45_gshared)(method);
}
// System.Void System.EventHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m89F752F9643DA7F92FFEDCD06BC26F5BB9BFF7AA (EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m89F752F9643DA7F92FFEDCD06BC26F5BB9BFF7AA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QRTracking.QRCodesManager::add_QRCodesTrackingStateChanged(System.EventHandler`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_add_QRCodesTrackingStateChanged_m913730A12A01302F5FB3B5B4C08256CF9E855C4C (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8DA19DB4049839DB9B1503CEAD5D988FEB999C9A (EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QRTracking.QRCodesManager::add_QRCodeAdded(System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_add_QRCodeAdded_m8CCDC766AC4BBD088E2580C0BFA7372CB098D64C (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___value0, const RuntimeMethod* method);
// System.Void QRTracking.QRCodesManager::add_QRCodeUpdated(System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_add_QRCodeUpdated_mDD7664BAA2BFCA8367E1D10E6E5D0B38A5AD5578 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___value0, const RuntimeMethod* method);
// System.Void QRTracking.QRCodesManager::add_QRCodeRemoved(System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_add_QRCodeRemoved_mD4F8C41368DBAC477390D64A606780C074A73C3B (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// TData QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>::get_Data()
inline QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * QRCodeEventArgs_1_get_Data_m88D1189535B385C85E32E1A93EC32EB64DECB888_inline (QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * __this, const RuntimeMethod* method)
{
	return ((  QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * (*) (QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 *, const RuntimeMethod*))QRCodeEventArgs_1_get_Data_m6717EA682D9B2B0E3A40930C0516FE686F563934_gshared_inline)(__this, method);
}
// System.Void QRTracking.QRCodesVisualizer/ActionData::.ctor(QRTracking.QRCodesVisualizer/ActionData/Type,Microsoft.MixedReality.QR.QRCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionData__ctor_m8B08E69A4860E12412D164D34977DDF70E26E0C6 (ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160 * __this, int32_t ___type0, QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * ___qRCode1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<QRTracking.QRCodesVisualizer/ActionData>::Enqueue(!0)
inline void Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * __this, ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F *, ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160 , const RuntimeMethod*))Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<QRTracking.QRCodesVisualizer/ActionData>::Dequeue()
inline ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  Queue_1_Dequeue_mCAE79E030BE01A9215627883BACBF834DCCAEB68 (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * __this, const RuntimeMethod* method)
{
	return ((  ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  (*) (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F *, const RuntimeMethod*))Queue_1_Dequeue_mCAE79E030BE01A9215627883BACBF834DCCAEB68_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<QRTracking.SpatialGraphCoordinateSystem>()
inline SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * GameObject_GetComponent_TisSpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7_m1110A5BB38EB761ECF8C6E1CAB3E3ED8390F4669 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void QRTracking.SpatialGraphCoordinateSystem::set_Id(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphCoordinateSystem_set_Id_m5A761F02F9D6E244BBED42841DBE43C2DBE11AB8 (SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * __this, Guid_t  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<QRTracking.QRCode>()
inline QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * GameObject_GetComponent_TisQRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207_m31D004BB01F60B33EF89D944B648C33FD6AA4251 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Guid,UnityEngine.GameObject>::Add(!0,!1)
inline void SortedDictionary_2_Add_m6265CDD5649B420911A38DF352AF3F5A193E3FE9 (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * __this, Guid_t  ___key0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC *, Guid_t , GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))SortedDictionary_2_Add_m4555DE1972156DEACC71F13B70C4E7C6AA50486E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Guid,UnityEngine.GameObject>::ContainsKey(!0)
inline bool SortedDictionary_2_ContainsKey_m71BB1D3E9A6A7A6D2B16E2E34AD8DE0E0C6E9C04 (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * __this, Guid_t  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC *, Guid_t , const RuntimeMethod*))SortedDictionary_2_ContainsKey_m3F4790D149257D97C5E01948341716964F5BECA7_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.SortedDictionary`2<System.Guid,UnityEngine.GameObject>::get_Item(!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SortedDictionary_2_get_Item_mC5F1BB60F70849DB83C79A8191E6DC6DAD1F4FE4 (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * __this, Guid_t  ___key0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC *, Guid_t , const RuntimeMethod*))SortedDictionary_2_get_Item_m65D56FDB9DD18C09EF0B18DAFDA471241C00BB75_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Guid,UnityEngine.GameObject>::Remove(!0)
inline bool SortedDictionary_2_Remove_m11C1C3C5161C4EA9F6FB83FD9CD758E239818986 (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * __this, Guid_t  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC *, Guid_t , const RuntimeMethod*))SortedDictionary_2_Remove_m32121410F476A1D5FF14ACA00DBE34A2C7A728D2_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<QRTracking.QRCodesVisualizer/ActionData>::get_Count()
inline int32_t Queue_1_get_Count_m812BFFC0DCA11665073AAE686BF416AFF180B9F5_inline (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F *, const RuntimeMethod*))Queue_1_get_Count_m812BFFC0DCA11665073AAE686BF416AFF180B9F5_gshared_inline)(__this, method);
}
// System.Collections.Generic.SortedDictionary`2/Enumerator<!0,!1> System.Collections.Generic.SortedDictionary`2<System.Guid,UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8  SortedDictionary_2_GetEnumerator_m2B8DAAD33D00CD8088BBCE1B1DDCABEFA97C873C (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8  (*) (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC *, const RuntimeMethod*))SortedDictionary_2_GetEnumerator_m3A5287965AE0D594DE02B4BE05492F1184BDB88C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,UnityEngine.GameObject>::get_Current()
inline KeyValuePair_2_tB1AE166AA9F1E4B9B27F62A2CC297C5220EAB2B5  Enumerator_get_Current_m4CF9E7FA8993C11DDCC4A8084EA372974BCEA39F (Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tB1AE166AA9F1E4B9B27F62A2CC297C5220EAB2B5  (*) (Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8 *, const RuntimeMethod*))Enumerator_get_Current_mAA09ED3F4D20E9E1ECAE844686919E41765C2AD6_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Guid,UnityEngine.GameObject>::get_Value()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * KeyValuePair_2_get_Value_m3C0FA0F135703D79ABA12B0E5F614C471CE582C3_inline (KeyValuePair_2_tB1AE166AA9F1E4B9B27F62A2CC297C5220EAB2B5 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (KeyValuePair_2_tB1AE166AA9F1E4B9B27F62A2CC297C5220EAB2B5 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mE47F3F438F816C36EF8D857CD4313EDE8E9BA71E_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m6284D28235A9B1D7C4528A6A6D22D7C5BB380851 (Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8 *, const RuntimeMethod*))Enumerator_MoveNext_mA97D80BCB38C5FC3616B006E5F2D2AE15067B79F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Guid,UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_mDA2519A67C765881B01A80E1C10CFFC7D6A977E1 (Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8 *, const RuntimeMethod*))Enumerator_Dispose_m144C51626343121EB5392A8150091A10937F092E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Guid,UnityEngine.GameObject>::Clear()
inline void SortedDictionary_2_Clear_m0B4DFF94494EF834FA659F065695D6D69B871C40 (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC *, const RuntimeMethod*))SortedDictionary_2_Clear_m935736F97D371A69CF51A20F450F40A1F105EBF9_gshared)(__this, method);
}
// System.Void QRTracking.QRCodesVisualizer::HandleEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesVisualizer_HandleEvents_mDCF4101574176124E8BB8EFD9C0635AE080400C0 (QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<QRTracking.QRCodesVisualizer/ActionData>::.ctor()
inline void Queue_1__ctor_m5CA6B1B89CB8D897ACEE1AA1AA907F46146B7092 (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F *, const RuntimeMethod*))Queue_1__ctor_m5CA6B1B89CB8D897ACEE1AA1AA907F46146B7092_gshared)(__this, method);
}
// Windows.Perception.Spatial.SpatialCoordinateSystem Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview::CreateCoordinateSystemForNode(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * SpatialGraphInteropPreview_CreateCoordinateSystemForNode_m761C451C38061188B0492A3F41B2684556818C6B (Guid_t  ___nodeId0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.WindowsMR.WindowsMREnvironment::get_OriginSpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsMREnvironment_get_OriginSpatialCoordinateSystem_m3609FBD7226520512F8F2A8A5D0FFC1E2A0B015E (const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::GetObjectForIUnknown(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_GetObjectForIUnknown_m9D5CB9B12B72BC4CCC46E363C805A03FFE644443 (intptr_t ___pUnk0, const RuntimeMethod* method);
// System.Nullable`1<System.Numerics.Matrix4x4> Windows.Perception.Spatial.SpatialCoordinateSystem::TryGetTransformTo(Windows.Perception.Spatial.SpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8  SpatialCoordinateSystem_TryGetTransformTo_m9860B951AA3C929F3C1A39347C72EA838E5774FF (SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * __this, SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___target0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.Matrix4x4>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_inline (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Numerics.Matrix4x4>::get_Value()
inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method)
{
	return ((  Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  (*) (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *, const RuntimeMethod*))Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_gshared)(__this, method);
}
// System.Boolean System.Numerics.Matrix4x4::Decompose(System.Numerics.Matrix4x4,System.Numerics.Vector3&,System.Numerics.Quaternion&,System.Numerics.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_Decompose_mAEEBB02601928ECC39E5459CC1015C8FEE7D4754 (Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___matrix0, Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * ___scale1, Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C * ___rotation2, Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * ___translation3, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_GetTransformedBy_m4CA999ABD2B7AFE2AEC9B4B058C4AC39A88B303A (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lhs0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void QRTracking.SpatialGraphCoordinateSystem::UpdateLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphCoordinateSystem_UpdateLocation_m0FF5C3A72F4CB737BE86C7031A99D15BD7282DEA (SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.QR.QRCodeWatcher::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QRCodeWatcher_IsSupported_mD3DFE3C2FCE0F24AE34F4DCD697B8418CAAFC56C (const RuntimeMethod* method);
// System.Void QRTracking.QRCodesManager::set_IsSupported(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QRCodesManager_set_IsSupported_m8829FFCED6A719B474472C4156D9B92902E1AE18_inline (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, bool ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus> Microsoft.MixedReality.QR.QRCodeWatcher::RequestAccessAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E * QRCodeWatcher_RequestAccessAsync_m8D53925DDAEFD663704C820975C84AEC72960B02 (const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>::GetAwaiter()
inline TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A  Task_1_GetAwaiter_mA04F235B69C7E30ABE57EAFEC11D3E0E7F992D0D (Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A  (*) (Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E *, const RuntimeMethod*))Task_1_GetAwaiter_m4EF638C9B2EDBA17F0C9F4DD1029E9BD08C7BF19_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m68179FA2220E60FA406BA17898F616103CDFB3DD (TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m2A676042F160D1A6A0BA2AD08D10AE3F41277FEB_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>,QRTracking.QRCodesManager/<Start>d__29>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_m10A84018309A6D64785A9FBA1DBB5AE84AF036C4 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A * ___awaiter0, U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A *, U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_m59A64E5E28AC454872E5EEEB064E288CA2214881_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m14EAAECB0FD1533735FFF73B15AB58370181AE43 (TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m0E423017AA9BCD5014ECA8DF02802488ECB0B673_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void QRTracking.QRCodesManager/<Start>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__29_MoveNext_m3ECBB759910E10DE27685BD2FB2A900535E44551 (U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void QRTracking.QRCodesManager/<Start>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__29_SetStateMachine_m588C94D5FB6E8F6C467A5F079BDFF039B5694F40 (U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.Void MyQRCodeManager::StartScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyQRCodeManager_StartScan_mF73313FBF5BE688D52CD7726B94CF0D9A83AA7E1 (MyQRCodeManager_t958A40C0C85043628B0B6C4944FF59B1E728D74A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34BCC7D6A11188AEE9762CFDF5CC09AC27FC26D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// qRCodesManager.StartQRTracking();
		QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_0 = __this->get_qRCodesManager_4();
		NullCheck(L_0);
		QRCodesManager_StartQRTracking_m62F9D31D3CE2D9BBE15F257A222DC07C76237EA5(L_0, /*hidden argument*/NULL);
		// statusText.text = "Started QRCode Tracking";
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_1 = __this->get_statusText_5();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, _stringLiteral34BCC7D6A11188AEE9762CFDF5CC09AC27FC26D3);
		// }
		return;
	}
}
// System.Void MyQRCodeManager::StopScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyQRCodeManager_StopScan_m2C165017A5374CF98969D567C7EBB890682CC992 (MyQRCodeManager_t958A40C0C85043628B0B6C4944FF59B1E728D74A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3922079D01F645E56C79A7CD17AA011A7A94020);
		s_Il2CppMethodInitialized = true;
	}
	{
		// qRCodesManager.StopQRTracking();
		QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_0 = __this->get_qRCodesManager_4();
		NullCheck(L_0);
		QRCodesManager_StopQRTracking_m2B3A205A35A01A0CF90ED25E577E035F1D837829(L_0, /*hidden argument*/NULL);
		// statusText.text = "Stopped QRCode Tracking";
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_1 = __this->get_statusText_5();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, _stringLiteralF3922079D01F645E56C79A7CD17AA011A7A94020);
		// }
		return;
	}
}
// System.Void MyQRCodeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyQRCodeManager__ctor_m27E49A2CC6E7712EDA03228194DF31A10C645471 (MyQRCodeManager_t958A40C0C85043628B0B6C4944FF59B1E728D74A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Single QRTracking.QRCode::get_PhysicalSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421 (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method)
{
	{
		// public float PhysicalSize { get; private set; }
		float L_0 = __this->get_U3CPhysicalSizeU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void QRTracking.QRCode::set_PhysicalSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode_set_PhysicalSize_m0A4AFD0FA61E1E75AB70146A601F32920D288BFB (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float PhysicalSize { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CPhysicalSizeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String QRTracking.QRCode::get_CodeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QRCode_get_CodeText_m14CBFF93BBC261D89838E3CD5D2119BF94A3C3FF (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method)
{
	{
		// public string CodeText { get; private set; }
		String_t* L_0 = __this->get_U3CCodeTextU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void QRTracking.QRCode::set_CodeText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode_set_CodeText_mB4878FD110C1D5CC31A1902023CE50DC3BAB433A (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string CodeText { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CCodeTextU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void QRTracking.QRCode::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode_Start_mC52A1519A5B2DDBFC5C6A2C63A3FC0D815DB2C4E (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRVersion_t5FD572A6D650F21EFD763F4C7B298353969F7F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0576BA379DB72C5751840475A13146C3E5B6F1DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37746D726B84C34364DC77DFA8EEDA4458C0ACFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3800E206DF25F91844E65CAB84A1EE76394A6277);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49C2C4CBD74690CC3F0B4127393BEA222F0A5B31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D329D4CFAC1274B5D81E6AB7AFFB9C4C4EF8E1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A5F76348815CD344F783F121EB3BBEBEED71C39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67C5284596BD3DD041640DAB32C50B2D2938E17C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F88CFB0D8276B94B359A05357AB7E176E554F44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E76207EF38E064996E4F34B421DAB003D1B8209);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81A9C47F832DFF447C89A9A02C11C7923FEF4D9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830CCE3EA9A59C6B7EF178FD180E877B5B96EED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E4ADB2226577E5427587F7395A6706D20853A23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAB948110EDB8CBC23EFB07A30BB51F296658C8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC152E6B03FE454C99278017E4ECF0568CF8CBE28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC41B690EE2D8543081458532BCEECC70477A6323);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF749B962D9D36E7EEFE58489C1633EDABAEF38F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD66A73752062FAA344673695094B15C58050D86B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF41FA8A5140859D1C99B970D3A94D3E5D8815528);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB7BB5AFE34A7641E7D3BF55F8816BDE55C67219);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFA30D3B695EC15584CDED61B4A8688598E7D3BC);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int64_t V_5 = 0;
	{
		// PhysicalSize = 0.1f;
		QRCode_set_PhysicalSize_m0A4AFD0FA61E1E75AB70146A601F32920D288BFB_inline(__this, (0.100000001f), /*hidden argument*/NULL);
		// CodeText = "Dummy";
		QRCode_set_CodeText_mB4878FD110C1D5CC31A1902023CE50DC3BAB433A_inline(__this, _stringLiteral3800E206DF25F91844E65CAB84A1EE76394A6277, /*hidden argument*/NULL);
		// if (qrCode == null)
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_0 = __this->get_qrCode_4();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// throw new System.Exception("QR Code Empty");
		Exception_t * L_1 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralADC474B38411E6C93F60127BC90F08A87E990BD6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QRCode_Start_mC52A1519A5B2DDBFC5C6A2C63A3FC0D815DB2C4E_RuntimeMethod_var)));
	}

IL_0029:
	{
		// PhysicalSize = qrCode.PhysicalSideLength;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_2 = __this->get_qrCode_4();
		NullCheck(L_2);
		float L_3;
		L_3 = QRCode_get_PhysicalSideLength_m49AC8B9F77DBE0BCC6D24768B26C53B6C836E9CA(L_2, /*hidden argument*/NULL);
		QRCode_set_PhysicalSize_m0A4AFD0FA61E1E75AB70146A601F32920D288BFB_inline(__this, L_3, /*hidden argument*/NULL);
		// CodeText = qrCode.Data;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_4 = __this->get_qrCode_4();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = QRCode_get_Data_m3A9D8F30CB7DA1D9C233ED1F74CC1B7DDBD91B6A(L_4, /*hidden argument*/NULL);
		QRCode_set_CodeText_mB4878FD110C1D5CC31A1902023CE50DC3BAB433A_inline(__this, L_5, /*hidden argument*/NULL);
		// qrCodeCube = gameObject.transform.Find("Cube").gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_7, _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		__this->set_qrCodeCube_5(L_9);
		// QRInfo = gameObject.transform.Find("QRInfo").gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_11, _stringLiteralF41FA8A5140859D1C99B970D3A94D3E5D8815528, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		__this->set_QRInfo_14(L_13);
		// QRID = QRInfo.transform.Find("QRID").gameObject.GetComponent<TextMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_QRInfo_14();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_15, _stringLiteralFB7BB5AFE34A7641E7D3BF55F8816BDE55C67219, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_18;
		L_18 = GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00(L_17, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00_RuntimeMethod_var);
		__this->set_QRID_8(L_18);
		// QRNodeID = QRInfo.transform.Find("QRNodeID").gameObject.GetComponent<TextMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_QRInfo_14();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_20, _stringLiteral0576BA379DB72C5751840475A13146C3E5B6F1DF, /*hidden argument*/NULL);
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_23;
		L_23 = GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00(L_22, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00_RuntimeMethod_var);
		__this->set_QRNodeID_9(L_23);
		// QRText = QRInfo.transform.Find("QRText").gameObject.GetComponent<TextMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_QRInfo_14();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_25, _stringLiteral7E76207EF38E064996E4F34B421DAB003D1B8209, /*hidden argument*/NULL);
		NullCheck(L_26);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_28;
		L_28 = GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00(L_27, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00_RuntimeMethod_var);
		__this->set_QRText_10(L_28);
		// QRVersion = QRInfo.transform.Find("QRVersion").gameObject.GetComponent<TextMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_QRInfo_14();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_30, _stringLiteral5A5F76348815CD344F783F121EB3BBEBEED71C39, /*hidden argument*/NULL);
		NullCheck(L_31);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_33;
		L_33 = GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00(L_32, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00_RuntimeMethod_var);
		__this->set_QRVersion_11(L_33);
		// QRTimeStamp = QRInfo.transform.Find("QRTimeStamp").gameObject.GetComponent<TextMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_QRInfo_14();
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_35, _stringLiteralAAB948110EDB8CBC23EFB07A30BB51F296658C8A, /*hidden argument*/NULL);
		NullCheck(L_36);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_38;
		L_38 = GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00(L_37, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00_RuntimeMethod_var);
		__this->set_QRTimeStamp_12(L_38);
		// QRSize = QRInfo.transform.Find("QRSize").gameObject.GetComponent<TextMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_QRInfo_14();
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_40, _stringLiteral4D329D4CFAC1274B5D81E6AB7AFFB9C4C4EF8E1E, /*hidden argument*/NULL);
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_43;
		L_43 = GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00(L_42, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00_RuntimeMethod_var);
		__this->set_QRSize_13(L_43);
		// QRID.text = "Id:" + qrCode.Id.ToString();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_44 = __this->get_QRID_8();
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_45 = __this->get_qrCode_4();
		NullCheck(L_45);
		Guid_t  L_46;
		L_46 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_45, /*hidden argument*/NULL);
		V_0 = L_46;
		String_t* L_47;
		L_47 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		String_t* L_48;
		L_48 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC41B690EE2D8543081458532BCEECC70477A6323, L_47, /*hidden argument*/NULL);
		NullCheck(L_44);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_44, L_48, /*hidden argument*/NULL);
		// QRNodeID.text = "NodeId:" + qrCode.SpatialGraphNodeId.ToString();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_49 = __this->get_QRNodeID_9();
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_50 = __this->get_qrCode_4();
		NullCheck(L_50);
		Guid_t  L_51;
		L_51 = QRCode_get_SpatialGraphNodeId_mEAE60D35B8E885FD291532E94E63B91EB66FF6D6(L_50, /*hidden argument*/NULL);
		V_0 = L_51;
		String_t* L_52;
		L_52 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		String_t* L_53;
		L_53 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8E4ADB2226577E5427587F7395A6706D20853A23, L_52, /*hidden argument*/NULL);
		NullCheck(L_49);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_49, L_53, /*hidden argument*/NULL);
		// QRText.text = CodeText;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_54 = __this->get_QRText_10();
		String_t* L_55;
		L_55 = QRCode_get_CodeText_m14CBFF93BBC261D89838E3CD5D2119BF94A3C3FF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_54, L_55, /*hidden argument*/NULL);
		// if (System.Uri.TryCreate(CodeText, System.UriKind.Absolute,out uriResult))
		String_t* L_56;
		L_56 = QRCode_get_CodeText_m14CBFF93BBC261D89838E3CD5D2119BF94A3C3FF_inline(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** L_57 = __this->get_address_of_uriResult_17();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Uri_TryCreate_m44277635BB8291BC0AADD85B9C9A015C1C21EF92(L_56, 1, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **)L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0201;
		}
	}
	{
		// validURI = true;
		__this->set_validURI_15((bool)1);
		// QRText.color = Color.blue;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_59 = __this->get_QRText_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60;
		L_60 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		NullCheck(L_59);
		TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE(L_59, L_60, /*hidden argument*/NULL);
	}

IL_0201:
	{
		// QRVersion.text = "Ver: " + qrCode.Version;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_61 = __this->get_QRVersion_11();
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_62 = __this->get_qrCode_4();
		NullCheck(L_62);
		int32_t L_63;
		L_63 = QRCode_get_Version_m640BEEA0DCF9916E27BD4BFC5B848E64A0EC13D1(L_62, /*hidden argument*/NULL);
		V_1 = L_63;
		RuntimeObject * L_64 = Box(QRVersion_t5FD572A6D650F21EFD763F4C7B298353969F7F39_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_64);
		String_t* L_65;
		L_65 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_64);
		V_1 = *(int32_t*)UnBox(L_64);
		String_t* L_66;
		L_66 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral830CCE3EA9A59C6B7EF178FD180E877B5B96EED8, L_65, /*hidden argument*/NULL);
		NullCheck(L_61);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_61, L_66, /*hidden argument*/NULL);
		// QRSize.text = "Size:" + qrCode.PhysicalSideLength.ToString("F04") + "m";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_67 = __this->get_QRSize_13();
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_68 = __this->get_qrCode_4();
		NullCheck(L_68);
		float L_69;
		L_69 = QRCode_get_PhysicalSideLength_m49AC8B9F77DBE0BCC6D24768B26C53B6C836E9CA(L_68, /*hidden argument*/NULL);
		V_2 = L_69;
		String_t* L_70;
		L_70 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_2), _stringLiteralD66A73752062FAA344673695094B15C58050D86B, /*hidden argument*/NULL);
		String_t* L_71;
		L_71 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralFFA30D3B695EC15584CDED61B4A8688598E7D3BC, L_70, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, /*hidden argument*/NULL);
		NullCheck(L_67);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_67, L_71, /*hidden argument*/NULL);
		// QRTimeStamp.text = "Time:" + qrCode.LastDetectedTime.ToString("MM/dd/yyyy HH:mm:ss.fff");
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_72 = __this->get_QRTimeStamp_12();
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_73 = __this->get_qrCode_4();
		NullCheck(L_73);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_74;
		L_74 = QRCode_get_LastDetectedTime_m3F074BE8624FEFB9F390E05FCE4842EA9EF05F8D(L_73, /*hidden argument*/NULL);
		V_3 = L_74;
		String_t* L_75;
		L_75 = DateTimeOffset_ToString_m0F27E1C939EDD772DF5A09D3C8CD7F0D5922A9F8((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_3), _stringLiteral81A9C47F832DFF447C89A9A02C11C7923FEF4D9C, /*hidden argument*/NULL);
		String_t* L_76;
		L_76 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral49C2C4CBD74690CC3F0B4127393BEA222F0A5B31, L_75, /*hidden argument*/NULL);
		NullCheck(L_72);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_72, L_76, /*hidden argument*/NULL);
		// QRTimeStamp.color = Color.yellow;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_77 = __this->get_QRTimeStamp_12();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_78;
		L_78 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_77);
		TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE(L_77, L_78, /*hidden argument*/NULL);
		// Debug.Log("Id= " + qrCode.Id + "NodeId= " + qrCode.SpatialGraphNodeId + " PhysicalSize = " + PhysicalSize + " TimeStamp = " + qrCode.SystemRelativeLastDetectedTime.Ticks + " QRVersion = " + qrCode.Version + " QRData = " + CodeText);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = L_79;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = L_80;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_82 = __this->get_qrCode_4();
		NullCheck(L_82);
		Guid_t  L_83;
		L_83 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_82, /*hidden argument*/NULL);
		V_0 = L_83;
		String_t* L_84;
		L_84 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_84);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_84);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_85 = L_81;
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, _stringLiteral67C5284596BD3DD041640DAB32C50B2D2938E17C);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral67C5284596BD3DD041640DAB32C50B2D2938E17C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_86 = L_85;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_87 = __this->get_qrCode_4();
		NullCheck(L_87);
		Guid_t  L_88;
		L_88 = QRCode_get_SpatialGraphNodeId_mEAE60D35B8E885FD291532E94E63B91EB66FF6D6(L_87, /*hidden argument*/NULL);
		V_0 = L_88;
		String_t* L_89;
		L_89 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_89);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_89);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_90 = L_86;
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, _stringLiteralC152E6B03FE454C99278017E4ECF0568CF8CBE28);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC152E6B03FE454C99278017E4ECF0568CF8CBE28);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_91 = L_90;
		float L_92;
		L_92 = QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421_inline(__this, /*hidden argument*/NULL);
		V_2 = L_92;
		String_t* L_93;
		L_93 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, L_93);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_93);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_94 = L_91;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, _stringLiteralCF749B962D9D36E7EEFE58489C1633EDABAEF38F);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralCF749B962D9D36E7EEFE58489C1633EDABAEF38F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_95 = L_94;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_96 = __this->get_qrCode_4();
		NullCheck(L_96);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_97;
		L_97 = QRCode_get_SystemRelativeLastDetectedTime_mEF361C928AF8D7980397F65F38B6353797520A87(L_96, /*hidden argument*/NULL);
		V_4 = L_97;
		int64_t L_98;
		L_98 = TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_98;
		String_t* L_99;
		L_99 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_99);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_99);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_100 = L_95;
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, _stringLiteral6F88CFB0D8276B94B359A05357AB7E176E554F44);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral6F88CFB0D8276B94B359A05357AB7E176E554F44);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_101 = L_100;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_102 = __this->get_qrCode_4();
		NullCheck(L_102);
		int32_t L_103;
		L_103 = QRCode_get_Version_m640BEEA0DCF9916E27BD4BFC5B848E64A0EC13D1(L_102, /*hidden argument*/NULL);
		V_1 = L_103;
		RuntimeObject * L_104 = Box(QRVersion_t5FD572A6D650F21EFD763F4C7B298353969F7F39_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_104);
		V_1 = *(int32_t*)UnBox(L_104);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_105);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_105);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_106 = L_101;
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, _stringLiteral37746D726B84C34364DC77DFA8EEDA4458C0ACFB);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral37746D726B84C34364DC77DFA8EEDA4458C0ACFB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_107 = L_106;
		String_t* L_108;
		L_108 = QRCode_get_CodeText_m14CBFF93BBC261D89838E3CD5D2119BF94A3C3FF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_107);
		ArrayElementTypeCheck (L_107, L_108);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_108);
		String_t* L_109;
		L_109 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_107, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_109, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QRTracking.QRCode::UpdatePropertiesDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode_UpdatePropertiesDisplay_m200F7E7501142FF0336A1BD7DBBB6E07A65581FD (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45DA574CB2C8F055AD1800B98A4B50DCC48A252C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49C2C4CBD74690CC3F0B4127393BEA222F0A5B31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67C5284596BD3DD041640DAB32C50B2D2938E17C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81A9C47F832DFF447C89A9A02C11C7923FEF4D9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC152E6B03FE454C99278017E4ECF0568CF8CBE28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF749B962D9D36E7EEFE58489C1633EDABAEF38F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD66A73752062FAA344673695094B15C58050D86B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFA30D3B695EC15584CDED61B4A8688598E7D3BC);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Guid_t  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B4_0 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B3_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B5_1 = NULL;
	{
		// if (qrCode != null && lastTimeStamp != qrCode.SystemRelativeLastDetectedTime.Ticks)
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_0 = __this->get_qrCode_4();
		if (!L_0)
		{
			goto IL_022e;
		}
	}
	{
		int64_t L_1 = __this->get_lastTimeStamp_18();
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_2 = __this->get_qrCode_4();
		NullCheck(L_2);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3;
		L_3 = QRCode_get_SystemRelativeLastDetectedTime_mEF361C928AF8D7980397F65F38B6353797520A87(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int64_t L_4;
		L_4 = TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		if ((((int64_t)L_1) == ((int64_t)L_4)))
		{
			goto IL_022e;
		}
	}
	{
		// QRSize.text = "Size:" + qrCode.PhysicalSideLength.ToString("F04") + "m";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_5 = __this->get_QRSize_13();
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_6 = __this->get_qrCode_4();
		NullCheck(L_6);
		float L_7;
		L_7 = QRCode_get_PhysicalSideLength_m49AC8B9F77DBE0BCC6D24768B26C53B6C836E9CA(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8;
		L_8 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_1), _stringLiteralD66A73752062FAA344673695094B15C58050D86B, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralFFA30D3B695EC15584CDED61B4A8688598E7D3BC, L_8, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, /*hidden argument*/NULL);
		NullCheck(L_5);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_5, L_9, /*hidden argument*/NULL);
		// QRTimeStamp.text = "Time:" + qrCode.LastDetectedTime.ToString("MM/dd/yyyy HH:mm:ss.fff");
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_10 = __this->get_QRTimeStamp_12();
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_11 = __this->get_qrCode_4();
		NullCheck(L_11);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_12;
		L_12 = QRCode_get_LastDetectedTime_m3F074BE8624FEFB9F390E05FCE4842EA9EF05F8D(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		String_t* L_13;
		L_13 = DateTimeOffset_ToString_m0F27E1C939EDD772DF5A09D3C8CD7F0D5922A9F8((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_2), _stringLiteral81A9C47F832DFF447C89A9A02C11C7923FEF4D9C, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral49C2C4CBD74690CC3F0B4127393BEA222F0A5B31, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_10, L_14, /*hidden argument*/NULL);
		// QRTimeStamp.color = QRTimeStamp.color==Color.yellow? Color.white: Color.yellow;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_15 = __this->get_QRTimeStamp_12();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_16 = __this->get_QRTimeStamp_12();
		NullCheck(L_16);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		L_17 = TextMesh_get_color_m81016B82BB08E4CBEDF00DBC2AEF0DBD5894EC4F(L_16, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		bool L_19;
		L_19 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_17, L_18, /*hidden argument*/NULL);
		G_B3_0 = L_15;
		if (L_19)
		{
			G_B4_0 = L_15;
			goto IL_00ac;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		G_B5_0 = L_20;
		G_B5_1 = G_B3_0;
		goto IL_00b1;
	}

IL_00ac:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		L_21 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		G_B5_0 = L_21;
		G_B5_1 = G_B4_0;
	}

IL_00b1:
	{
		NullCheck(G_B5_1);
		TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		// PhysicalSize = qrCode.PhysicalSideLength;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_22 = __this->get_qrCode_4();
		NullCheck(L_22);
		float L_23;
		L_23 = QRCode_get_PhysicalSideLength_m49AC8B9F77DBE0BCC6D24768B26C53B6C836E9CA(L_22, /*hidden argument*/NULL);
		QRCode_set_PhysicalSize_m0A4AFD0FA61E1E75AB70146A601F32920D288BFB_inline(__this, L_23, /*hidden argument*/NULL);
		// Debug.Log("Id= " + qrCode.Id + "NodeId= " + qrCode.SpatialGraphNodeId + " PhysicalSize = " + PhysicalSize + " TimeStamp = " + qrCode.SystemRelativeLastDetectedTime.Ticks + " Time = " + qrCode.LastDetectedTime.ToString("MM/dd/yyyy HH:mm:ss.fff"));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_27 = __this->get_qrCode_4();
		NullCheck(L_27);
		Guid_t  L_28;
		L_28 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		String_t* L_29;
		L_29 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_29);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_26;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral67C5284596BD3DD041640DAB32C50B2D2938E17C);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral67C5284596BD3DD041640DAB32C50B2D2938E17C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_32 = __this->get_qrCode_4();
		NullCheck(L_32);
		Guid_t  L_33;
		L_33 = QRCode_get_SpatialGraphNodeId_mEAE60D35B8E885FD291532E94E63B91EB66FF6D6(L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		String_t* L_34;
		L_34 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_31;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralC152E6B03FE454C99278017E4ECF0568CF8CBE28);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC152E6B03FE454C99278017E4ECF0568CF8CBE28);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_35;
		float L_37;
		L_37 = QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421_inline(__this, /*hidden argument*/NULL);
		V_1 = L_37;
		String_t* L_38;
		L_38 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_38);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_36;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralCF749B962D9D36E7EEFE58489C1633EDABAEF38F);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralCF749B962D9D36E7EEFE58489C1633EDABAEF38F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_41 = __this->get_qrCode_4();
		NullCheck(L_41);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_42;
		L_42 = QRCode_get_SystemRelativeLastDetectedTime_mEF361C928AF8D7980397F65F38B6353797520A87(L_41, /*hidden argument*/NULL);
		V_0 = L_42;
		int64_t L_43;
		L_43 = TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		V_4 = L_43;
		String_t* L_44;
		L_44 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_44);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_44);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = L_40;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral45DA574CB2C8F055AD1800B98A4B50DCC48A252C);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral45DA574CB2C8F055AD1800B98A4B50DCC48A252C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_45;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_47 = __this->get_qrCode_4();
		NullCheck(L_47);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_48;
		L_48 = QRCode_get_LastDetectedTime_m3F074BE8624FEFB9F390E05FCE4842EA9EF05F8D(L_47, /*hidden argument*/NULL);
		V_2 = L_48;
		String_t* L_49;
		L_49 = DateTimeOffset_ToString_m0F27E1C939EDD772DF5A09D3C8CD7F0D5922A9F8((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_2), _stringLiteral81A9C47F832DFF447C89A9A02C11C7923FEF4D9C, /*hidden argument*/NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_49);
		String_t* L_50;
		L_50 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_50, /*hidden argument*/NULL);
		// qrCodeCube.transform.localPosition = new Vector3(PhysicalSize / 2.0f, PhysicalSize / 2.0f, 0.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = __this->get_qrCodeCube_5();
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_51, /*hidden argument*/NULL);
		float L_53;
		L_53 = QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421_inline(__this, /*hidden argument*/NULL);
		float L_54;
		L_54 = QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_55), ((float)((float)L_53/(float)(2.0f))), ((float)((float)L_54/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_52, L_55, /*hidden argument*/NULL);
		// qrCodeCube.transform.localScale = new Vector3(PhysicalSize, PhysicalSize, 0.005f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = __this->get_qrCodeCube_5();
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		float L_58;
		L_58 = QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421_inline(__this, /*hidden argument*/NULL);
		float L_59;
		L_59 = QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_60), L_58, L_59, (0.00499999989f), /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_57, L_60, /*hidden argument*/NULL);
		// lastTimeStamp = qrCode.SystemRelativeLastDetectedTime.Ticks;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_61 = __this->get_qrCode_4();
		NullCheck(L_61);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_62;
		L_62 = QRCode_get_SystemRelativeLastDetectedTime_mEF361C928AF8D7980397F65F38B6353797520A87(L_61, /*hidden argument*/NULL);
		V_0 = L_62;
		int64_t L_63;
		L_63 = TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		__this->set_lastTimeStamp_18(L_63);
		// QRInfo.transform.localScale = new Vector3(PhysicalSize/0.2f, PhysicalSize / 0.2f, PhysicalSize / 0.2f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_QRInfo_14();
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		float L_66;
		L_66 = QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421_inline(__this, /*hidden argument*/NULL);
		float L_67;
		L_67 = QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421_inline(__this, /*hidden argument*/NULL);
		float L_68;
		L_68 = QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_69), ((float)((float)L_66/(float)(0.200000003f))), ((float)((float)L_67/(float)(0.200000003f))), ((float)((float)L_68/(float)(0.200000003f))), /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_65, L_69, /*hidden argument*/NULL);
	}

IL_022e:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCode::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode_Update_m229CE998A0C5BFC253ED9232267231EE5C2D0283 (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method)
{
	{
		// UpdatePropertiesDisplay();
		QRCode_UpdatePropertiesDisplay_m200F7E7501142FF0336A1BD7DBBB6E07A65581FD(__this, /*hidden argument*/NULL);
		// if (launch)
		bool L_0 = __this->get_launch_16();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// launch = false;
		__this->set_launch_16((bool)0);
		// LaunchUri();
		QRCode_LaunchUri_m7EEDC21E2709EC77C69F9FCC577B44900FF48122(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCode::LaunchUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode_LaunchUri_m7EEDC21E2709EC77C69F9FCC577B44900FF48122 (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method)
{
	{
		// UnityEngine.WSA.Launcher.LaunchUri(uriResult.ToString(), true);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = __this->get_uriResult_17();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Launcher_LaunchUri_m5320697DD7D0BCC8E0AA2A851C8E71B29A75C9DA(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QRTracking.QRCode::OnInputClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode_OnInputClicked_mB32979A657D9ADD556CFA0CF9A4D516E5325B8FC (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method)
{
	{
		// if (validURI)
		bool L_0 = __this->get_validURI_15();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// launch = true;
		__this->set_launch_16((bool)1);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode__ctor_m0574CE789771CAD1E0028F3637E6B8B11905A963 (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Boolean QRTracking.QRCodesManager::get_IsTrackerRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QRCodesManager_get_IsTrackerRunning_mEB820442D0588EC9382806131768ED2655C8729B (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsTrackerRunning { get; private set; }
		bool L_0 = __this->get_U3CIsTrackerRunningU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void QRTracking.QRCodesManager::set_IsTrackerRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_set_IsTrackerRunning_m37EB90CB0A2D98DA445CD02A3A473D01522C05FB (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsTrackerRunning { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsTrackerRunningU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Boolean QRTracking.QRCodesManager::get_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QRCodesManager_get_IsSupported_m09F2E18B4C918A98BCF6699EEAA2592A1F3F0C84 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsSupported { get; private set; }
		bool L_0 = __this->get_U3CIsSupportedU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void QRTracking.QRCodesManager::set_IsSupported(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_set_IsSupported_m8829FFCED6A719B474472C4156D9B92902E1AE18 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsSupported { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsSupportedU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void QRTracking.QRCodesManager::add_QRCodesTrackingStateChanged(System.EventHandler`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_add_QRCodesTrackingStateChanged_m913730A12A01302F5FB3B5B4C08256CF9E855C4C (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * V_0 = NULL;
	EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * V_1 = NULL;
	EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * V_2 = NULL;
	{
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_0 = __this->get_QRCodesTrackingStateChanged_10();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_2 = V_1;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_il2cpp_TypeInfo_var));
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 ** L_5 = __this->get_address_of_QRCodesTrackingStateChanged_10();
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_6 = V_2;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_7 = V_1;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *>((EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_9 = V_0;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *)L_9) == ((RuntimeObject*)(EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QRTracking.QRCodesManager::remove_QRCodesTrackingStateChanged(System.EventHandler`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_remove_QRCodesTrackingStateChanged_mB71F5708EF9CBA6F5E9896190F370B910A51A48F (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * V_0 = NULL;
	EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * V_1 = NULL;
	EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * V_2 = NULL;
	{
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_0 = __this->get_QRCodesTrackingStateChanged_10();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_2 = V_1;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_il2cpp_TypeInfo_var));
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 ** L_5 = __this->get_address_of_QRCodesTrackingStateChanged_10();
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_6 = V_2;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_7 = V_1;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *>((EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_9 = V_0;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *)L_9) == ((RuntimeObject*)(EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QRTracking.QRCodesManager::add_QRCodeAdded(System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_add_QRCodeAdded_m8CCDC766AC4BBD088E2580C0BFA7372CB098D64C (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_0 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_1 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_2 = NULL;
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_0 = __this->get_QRCodeAdded_11();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_2 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var));
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 ** L_5 = __this->get_address_of_QRCodeAdded_11();
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_6 = V_2;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_7 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *>((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_9 = V_0;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_9) == ((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QRTracking.QRCodesManager::remove_QRCodeAdded(System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_remove_QRCodeAdded_m3EE0D8F4E7023874EF6643B9D70E8240A8C0AA5D (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_0 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_1 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_2 = NULL;
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_0 = __this->get_QRCodeAdded_11();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_2 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var));
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 ** L_5 = __this->get_address_of_QRCodeAdded_11();
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_6 = V_2;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_7 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *>((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_9 = V_0;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_9) == ((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QRTracking.QRCodesManager::add_QRCodeUpdated(System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_add_QRCodeUpdated_mDD7664BAA2BFCA8367E1D10E6E5D0B38A5AD5578 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_0 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_1 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_2 = NULL;
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_0 = __this->get_QRCodeUpdated_12();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_2 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var));
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 ** L_5 = __this->get_address_of_QRCodeUpdated_12();
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_6 = V_2;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_7 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *>((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_9 = V_0;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_9) == ((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QRTracking.QRCodesManager::remove_QRCodeUpdated(System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_remove_QRCodeUpdated_m443468F8A0552E22C14E23AF70C35629F4A85017 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_0 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_1 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_2 = NULL;
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_0 = __this->get_QRCodeUpdated_12();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_2 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var));
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 ** L_5 = __this->get_address_of_QRCodeUpdated_12();
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_6 = V_2;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_7 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *>((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_9 = V_0;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_9) == ((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QRTracking.QRCodesManager::add_QRCodeRemoved(System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_add_QRCodeRemoved_mD4F8C41368DBAC477390D64A606780C074A73C3B (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_0 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_1 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_2 = NULL;
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_0 = __this->get_QRCodeRemoved_13();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_2 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var));
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 ** L_5 = __this->get_address_of_QRCodeRemoved_13();
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_6 = V_2;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_7 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *>((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_9 = V_0;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_9) == ((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QRTracking.QRCodesManager::remove_QRCodeRemoved(System.EventHandler`1<QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_remove_QRCodeRemoved_mE9CC875A8551688DE05448806FC4C702E9B45D2D (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_0 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_1 = NULL;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_2 = NULL;
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_0 = __this->get_QRCodeRemoved_13();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_2 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var));
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 ** L_5 = __this->get_address_of_QRCodeRemoved_13();
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_6 = V_2;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_7 = V_1;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *>((EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_9 = V_0;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_9) == ((RuntimeObject*)(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Guid QRTracking.QRCodesManager::GetIdForQRCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  QRCodesManager_GetIdForQRCode_m783BF8E2DBB0B8587AD8F1B597C90777E19C239F (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, String_t* ___qrCodeData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m036FCECBCB3BB2E2272B409594F5FA45C25C9B5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCB834C08E0713324A30D692ECCD4DA983EEF7A99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m74384F579C972D8FA6D4F81F29EA7F57BB8BCA95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m38179A314485CB66501658A4EAD7921B759CFA14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mAA25298892BAD03B93824F99BDC1EDC877D07C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_GetEnumerator_m35F120E439685CF9BDBFC4ED6E5735577871040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * V_0 = NULL;
	bool V_1 = false;
	Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Guid_t  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Guid_t  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (qrCodesList)
		SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_0 = __this->get_qrCodesList_14();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// foreach (var ite in qrCodesList)
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_2 = __this->get_qrCodesList_14();
			NullCheck(L_2);
			Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0  L_3;
			L_3 = SortedDictionary_2_GetEnumerator_m35F120E439685CF9BDBFC4ED6E5735577871040A(L_2, /*hidden argument*/SortedDictionary_2_GetEnumerator_m35F120E439685CF9BDBFC4ED6E5735577871040A_RuntimeMethod_var);
			V_2 = L_3;
		}

IL_001d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0046;
			}

IL_001f:
			{
				// foreach (var ite in qrCodesList)
				KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2  L_4;
				L_4 = Enumerator_get_Current_m74384F579C972D8FA6D4F81F29EA7F57BB8BCA95((Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m74384F579C972D8FA6D4F81F29EA7F57BB8BCA95_RuntimeMethod_var);
				V_3 = L_4;
				// if (ite.Value.Data == qrCodeData)
				QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_5;
				L_5 = KeyValuePair_2_get_Value_mAA25298892BAD03B93824F99BDC1EDC877D07C65_inline((KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mAA25298892BAD03B93824F99BDC1EDC877D07C65_RuntimeMethod_var);
				NullCheck(L_5);
				String_t* L_6;
				L_6 = QRCode_get_Data_m3A9D8F30CB7DA1D9C233ED1F74CC1B7DDBD91B6A(L_5, /*hidden argument*/NULL);
				String_t* L_7 = ___qrCodeData0;
				bool L_8;
				L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, L_7, /*hidden argument*/NULL);
				if (!L_8)
				{
					goto IL_0046;
				}
			}

IL_003b:
			{
				// return ite.Key;
				Guid_t  L_9;
				L_9 = KeyValuePair_2_get_Key_m38179A314485CB66501658A4EAD7921B759CFA14_inline((KeyValuePair_2_tA9417F04A9A903AA138172244197FC90A381BBD2 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m38179A314485CB66501658A4EAD7921B759CFA14_RuntimeMethod_var);
				V_4 = L_9;
				IL2CPP_LEAVE(0x74, FINALLY_0051);
			}

IL_0046:
			{
				// foreach (var ite in qrCodesList)
				bool L_10;
				L_10 = Enumerator_MoveNext_mCB834C08E0713324A30D692ECCD4DA983EEF7A99((Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCB834C08E0713324A30D692ECCD4DA983EEF7A99_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_001f;
				}
			}

IL_004f:
			{
				IL2CPP_LEAVE(0x69, FINALLY_0051);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0051;
		}

FINALLY_0051:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m036FCECBCB3BB2E2272B409594F5FA45C25C9B5B((Enumerator_tBB5977D5DE2CA2D036276FAB0C702E6CC67CFDF0 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m036FCECBCB3BB2E2272B409594F5FA45C25C9B5B_RuntimeMethod_var);
			IL2CPP_END_FINALLY(81)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(81)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x74, FINALLY_005f);
			IL2CPP_END_CLEANUP(0x69, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_0068;
			}
		}

IL_0062:
		{
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_12 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_12, /*hidden argument*/NULL);
		}

IL_0068:
		{
			IL2CPP_END_FINALLY(95)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		// return new System.Guid();
		il2cpp_codegen_initobj((&V_5), sizeof(Guid_t ));
		Guid_t  L_13 = V_5;
		return L_13;
	}

IL_0074:
	{
		// }
		Guid_t  L_14 = V_4;
		return L_14;
	}
}
// System.Collections.Generic.IList`1<Microsoft.MixedReality.QR.QRCode> QRTracking.QRCodesManager::GetList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QRCodesManager_GetList_mB93EBEE810A94A61F29230CC7D241E754F2B5E15 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD56AA2FA9523945411DE3526AFB7B70F3E40A56B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Values_mC2ECB62981F8B715831129D203518EE06FDE9604_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (qrCodesList)
		SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_0 = __this->get_qrCodesList_14();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// return new List<Microsoft.MixedReality.QR.QRCode>(qrCodesList.Values);
		SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_2 = __this->get_qrCodesList_14();
		NullCheck(L_2);
		ValueCollection_t01A52B30994F5EFC2BFD67A27FCA39C3CD2FF0E8 * L_3;
		L_3 = SortedDictionary_2_get_Values_mC2ECB62981F8B715831129D203518EE06FDE9604(L_2, /*hidden argument*/SortedDictionary_2_get_Values_mC2ECB62981F8B715831129D203518EE06FDE9604_RuntimeMethod_var);
		List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C * L_4 = (List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C *)il2cpp_codegen_object_new(List_1_t1395D45A098413DCEBADD1184EADF12F6FCA2B7C_il2cpp_TypeInfo_var);
		List_1__ctor_mD56AA2FA9523945411DE3526AFB7B70F3E40A56B(L_4, L_3, /*hidden argument*/List_1__ctor_mD56AA2FA9523945411DE3526AFB7B70F3E40A56B_RuntimeMethod_var);
		V_2 = (RuntimeObject*)L_4;
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// }
		RuntimeObject* L_7 = V_2;
		return L_7;
	}
}
// System.Void QRTracking.QRCodesManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_Awake_m1F40A214F5FF33D8628FE5D979F5654A3CAE850E (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_Start_m0EA1DFCCD8A5D13819CECAB4F34D730F6D0DF7E2 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_mE935A4840A0574D9994ECA626C143DE9DC1172D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_mE935A4840A0574D9994ECA626C143DE9DC1172D1((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_mE935A4840A0574D9994ECA626C143DE9DC1172D1_RuntimeMethod_var);
		return;
	}
}
// System.Void QRTracking.QRCodesManager::SetupQRTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_SetupQRTracking_m61A691EF9BC3314F084B9A18067545F1F7D00573 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m12BA750107857E6FC3727A8799DDF886EC14C684_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mCAE3F32042CD3882698A13CE94A6CD252869E084_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mF0DFFCE272FE4792069304D117B3C7A6907AC5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t3555C0D4BF0D001148DF752B5B41E62A085D7C2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t5BCE95ACEA650660657EF4F49E824484DCEDC9CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA0A2B41C8984DA1BE1BFF8CE830CD34399AA70F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodesManager_QRCodeWatcher_Added_mD411213E68E3E96A943F935DE917EF521999E566_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodesManager_QRCodeWatcher_EnumerationCompleted_mD038D4411A8CF5501500C4508EE2E1DE6BDCBD62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodesManager_QRCodeWatcher_Removed_m5EE66C32918F5A117F328446BD254787AEAA8E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodesManager_QRCodeWatcher_Updated_m643A58FD0F608D6C7BC3CAC50416DEB8F6B65014_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19C571CDD57B34F5A933CE0BCB7986464561D007);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Debug.Log("Setup QRTracking()");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral19C571CDD57B34F5A933CE0BCB7986464561D007, /*hidden argument*/NULL);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// qrTracker = new QRCodeWatcher(); 
		QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * L_0 = (QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 *)il2cpp_codegen_object_new(QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1_il2cpp_TypeInfo_var);
		QRCodeWatcher__ctor_m0ED099A5CA2D08C9E3C4A10D8E1A5D1FAD6C7E18(L_0, /*hidden argument*/NULL);
		__this->set_qrTracker_15(L_0);
		// IsTrackerRunning = false; 
		QRCodesManager_set_IsTrackerRunning_m37EB90CB0A2D98DA445CD02A3A473D01522C05FB_inline(__this, (bool)0, /*hidden argument*/NULL);
		// qrTracker.Added += QRCodeWatcher_Added; 
		QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * L_1 = __this->get_qrTracker_15();
		EventHandler_1_tCA0A2B41C8984DA1BE1BFF8CE830CD34399AA70F * L_2 = (EventHandler_1_tCA0A2B41C8984DA1BE1BFF8CE830CD34399AA70F *)il2cpp_codegen_object_new(EventHandler_1_tCA0A2B41C8984DA1BE1BFF8CE830CD34399AA70F_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mF0DFFCE272FE4792069304D117B3C7A6907AC5F6(L_2, __this, (intptr_t)((intptr_t)QRCodesManager_QRCodeWatcher_Added_mD411213E68E3E96A943F935DE917EF521999E566_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mF0DFFCE272FE4792069304D117B3C7A6907AC5F6_RuntimeMethod_var);
		NullCheck(L_1);
		QRCodeWatcher_add_Added_m4B8F890F04D1CCB0B2BABFCE3F89984A1357A125(L_1, L_2, /*hidden argument*/NULL);
		// qrTracker.Updated += QRCodeWatcher_Updated; 
		QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * L_3 = __this->get_qrTracker_15();
		EventHandler_1_t3555C0D4BF0D001148DF752B5B41E62A085D7C2F * L_4 = (EventHandler_1_t3555C0D4BF0D001148DF752B5B41E62A085D7C2F *)il2cpp_codegen_object_new(EventHandler_1_t3555C0D4BF0D001148DF752B5B41E62A085D7C2F_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mCAE3F32042CD3882698A13CE94A6CD252869E084(L_4, __this, (intptr_t)((intptr_t)QRCodesManager_QRCodeWatcher_Updated_m643A58FD0F608D6C7BC3CAC50416DEB8F6B65014_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mCAE3F32042CD3882698A13CE94A6CD252869E084_RuntimeMethod_var);
		NullCheck(L_3);
		QRCodeWatcher_add_Updated_mCE6CEC8C252453FE91F3D3DF0F0FD8423CDEE57A(L_3, L_4, /*hidden argument*/NULL);
		// qrTracker.Removed += QRCodeWatcher_Removed; 
		QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * L_5 = __this->get_qrTracker_15();
		EventHandler_1_t5BCE95ACEA650660657EF4F49E824484DCEDC9CC * L_6 = (EventHandler_1_t5BCE95ACEA650660657EF4F49E824484DCEDC9CC *)il2cpp_codegen_object_new(EventHandler_1_t5BCE95ACEA650660657EF4F49E824484DCEDC9CC_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m12BA750107857E6FC3727A8799DDF886EC14C684(L_6, __this, (intptr_t)((intptr_t)QRCodesManager_QRCodeWatcher_Removed_m5EE66C32918F5A117F328446BD254787AEAA8E70_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m12BA750107857E6FC3727A8799DDF886EC14C684_RuntimeMethod_var);
		NullCheck(L_5);
		QRCodeWatcher_add_Removed_mD819433B9C8FDCEEA6A900D3FCC4B1554920F7A9(L_5, L_6, /*hidden argument*/NULL);
		// qrTracker.EnumerationCompleted += QRCodeWatcher_EnumerationCompleted; 
		QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * L_7 = __this->get_qrTracker_15();
		EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * L_8 = (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB *)il2cpp_codegen_object_new(EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4(L_8, __this, (intptr_t)((intptr_t)QRCodesManager_QRCodeWatcher_EnumerationCompleted_mD038D4411A8CF5501500C4508EE2E1DE6BDCBD62_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_RuntimeMethod_var);
		NullCheck(L_7);
		QRCodeWatcher_add_EnumerationCompleted_m28BCDBF15F1E0D903F58FB15C1E1EB0FFFA6AEF7(L_7, L_8, /*hidden argument*/NULL);
		// }
		goto IL_0092;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_007a;
		throw e;
	}

CATCH_007a:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_0 = ((Exception_t *)__exception_local);
		// Debug.Log("QRCodesManager : exception starting the tracker " + ex.ToString());
		Exception_t * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE65E2CE0DEBF2B173F8B6082FD5880E40BD12E78)), L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_11, /*hidden argument*/NULL);
		// }
		goto IL_0092;
	} // end catch (depth: 1)

IL_0092:
	{
		// if (AutoStartQRTracking) 
		bool L_12 = __this->get_AutoStartQRTracking_7();
		if (!L_12)
		{
			goto IL_00a0;
		}
	}
	{
		// StartQRTracking();
		QRCodesManager_StartQRTracking_m62F9D31D3CE2D9BBE15F257A222DC07C76237EA5(__this, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesManager::StartQRTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_StartQRTracking_m62F9D31D3CE2D9BBE15F257A222DC07C76237EA5 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD52996CC1ADEAA72CD886FCF2CF9405C220B34F6);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * G_B5_0 = NULL;
	EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * G_B4_0 = NULL;
	{
		// if (qrTracker != null && !IsTrackerRunning) 
		QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * L_0 = __this->get_qrTracker_15();
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		bool L_1;
		L_1 = QRCodesManager_get_IsTrackerRunning_mEB820442D0588EC9382806131768ED2655C8729B_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0059;
		}
	}
	{
		// Debug.Log("QRCodesManager starting QRCodeWatcher");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD52996CC1ADEAA72CD886FCF2CF9405C220B34F6, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			// qrTracker.Start(); 
			QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * L_2 = __this->get_qrTracker_15();
			NullCheck(L_2);
			QRCodeWatcher_Start_mA8265CACF16DBC4840AFA65A98839717BBBEAC53(L_2, /*hidden argument*/NULL);
			// IsTrackerRunning = true; 
			QRCodesManager_set_IsTrackerRunning_m37EB90CB0A2D98DA445CD02A3A473D01522C05FB_inline(__this, (bool)1, /*hidden argument*/NULL);
			// QRCodesTrackingStateChanged?.Invoke(this, true); 
			EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_3 = __this->get_QRCodesTrackingStateChanged_10();
			EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_4 = L_3;
			G_B4_0 = L_4;
			if (L_4)
			{
				G_B5_0 = L_4;
				goto IL_0038;
			}
		}

IL_0035:
		{
			goto IL_003f;
		}

IL_0038:
		{
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4(G_B5_0, __this, (bool)1, /*hidden argument*/EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_RuntimeMethod_var);
		}

IL_003f:
		{
			// }
			goto IL_0059;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0041;
		throw e;
	}

CATCH_0041:
	{ // begin catch(System.Exception)
		// catch(Exception ex)
		V_0 = ((Exception_t *)__exception_local);
		// Debug.Log("QRCodesManager starting QRCodeWatcher Exception:" + ex.ToString());
		Exception_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral145AD74B63B3E9BA385E105383B05C39F0E5FED4)), L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// }
		goto IL_0059;
	} // end catch (depth: 1)

IL_0059:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesManager::StopQRTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_StopQRTracking_m2B3A205A35A01A0CF90ED25E577E035F1D837829 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Clear_m453B425BA42CF426AF891742219DA0BF520961B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * V_0 = NULL;
	{
		// if (IsTrackerRunning)
		bool L_0;
		L_0 = QRCodesManager_get_IsTrackerRunning_mEB820442D0588EC9382806131768ED2655C8729B_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		// IsTrackerRunning = false;
		QRCodesManager_set_IsTrackerRunning_m37EB90CB0A2D98DA445CD02A3A473D01522C05FB_inline(__this, (bool)0, /*hidden argument*/NULL);
		// if (qrTracker != null)
		QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * L_1 = __this->get_qrTracker_15();
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// qrTracker.Stop();
		QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * L_2 = __this->get_qrTracker_15();
		NullCheck(L_2);
		QRCodeWatcher_Stop_mE21DAA77C2CD7BEE35278EA66C413FBEABCC441B(L_2, /*hidden argument*/NULL);
		// qrCodesList.Clear();
		SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_3 = __this->get_qrCodesList_14();
		NullCheck(L_3);
		SortedDictionary_2_Clear_m453B425BA42CF426AF891742219DA0BF520961B0(L_3, /*hidden argument*/SortedDictionary_2_Clear_m453B425BA42CF426AF891742219DA0BF520961B0_RuntimeMethod_var);
	}

IL_002d:
	{
		// var handlers = QRCodesTrackingStateChanged;
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_4 = __this->get_QRCodesTrackingStateChanged_10();
		V_0 = L_4;
		// if (handlers != null)
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// handlers(this, false);
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4(L_6, __this, (bool)0, /*hidden argument*/EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_RuntimeMethod_var);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesManager::QRCodeWatcher_Removed(System.Object,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_QRCodeWatcher_Removed_m5EE66C32918F5A117F328446BD254787AEAA8E70 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, RuntimeObject * ___sender0, QRCodeRemovedEventArgs_t4ACC2B0A16DFAB8ACF15183B33B92E056F63BE7B * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m42D0BBB3F676D599DCAAA80A83CE77067E5E550B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeEventArgs_Create_TisQRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40_m04207A8B460314B5D8F603B3499D6B53B1C342EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_mA2A658F3C5F9E21A21EA708BC283EC7AA0D10576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Remove_m331F7BB84DF01BAFCA274CFA0CEAC6B589715752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38999ED5CF4AC7E609FDFC0137E1739626795BC2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * V_1 = NULL;
	bool V_2 = false;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Debug.Log("QRCodesManager QRCodeWatcher_Removed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral38999ED5CF4AC7E609FDFC0137E1739626795BC2, /*hidden argument*/NULL);
		// bool found = false;
		V_0 = (bool)0;
		// lock (qrCodesList)
		SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_0 = __this->get_qrCodesList_14();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_1 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
			// if (qrCodesList.ContainsKey(args.Code.Id))
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_2 = __this->get_qrCodesList_14();
			QRCodeRemovedEventArgs_t4ACC2B0A16DFAB8ACF15183B33B92E056F63BE7B * L_3 = ___args1;
			NullCheck(L_3);
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_4;
			L_4 = QRCodeRemovedEventArgs_get_Code_m1673AD47D1F2B94114B13B098BF4B038030C82A0(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			Guid_t  L_5;
			L_5 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_4, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_6;
			L_6 = SortedDictionary_2_ContainsKey_mA2A658F3C5F9E21A21EA708BC283EC7AA0D10576(L_2, L_5, /*hidden argument*/SortedDictionary_2_ContainsKey_mA2A658F3C5F9E21A21EA708BC283EC7AA0D10576_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_004e;
			}
		}

IL_0035:
		{
			// qrCodesList.Remove(args.Code.Id);
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_7 = __this->get_qrCodesList_14();
			QRCodeRemovedEventArgs_t4ACC2B0A16DFAB8ACF15183B33B92E056F63BE7B * L_8 = ___args1;
			NullCheck(L_8);
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_9;
			L_9 = QRCodeRemovedEventArgs_get_Code_m1673AD47D1F2B94114B13B098BF4B038030C82A0(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			Guid_t  L_10;
			L_10 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_9, /*hidden argument*/NULL);
			NullCheck(L_7);
			bool L_11;
			L_11 = SortedDictionary_2_Remove_m331F7BB84DF01BAFCA274CFA0CEAC6B589715752(L_7, L_10, /*hidden argument*/SortedDictionary_2_Remove_m331F7BB84DF01BAFCA274CFA0CEAC6B589715752_RuntimeMethod_var);
			// found = true;
			V_0 = (bool)1;
		}

IL_004e:
		{
			// }
			IL2CPP_LEAVE(0x5A, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_2;
			if (!L_12)
			{
				goto IL_0059;
			}
		}

IL_0053:
		{
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_13 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		}

IL_0059:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// if (found)
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		// var handlers = QRCodeRemoved;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_15 = __this->get_QRCodeRemoved_13();
		V_3 = L_15;
		// if (handlers != null)
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_16 = V_3;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		// handlers(this, QRCodeEventArgs.Create(args.Code));
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_17 = V_3;
		QRCodeRemovedEventArgs_t4ACC2B0A16DFAB8ACF15183B33B92E056F63BE7B * L_18 = ___args1;
		NullCheck(L_18);
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_19;
		L_19 = QRCodeRemovedEventArgs_get_Code_m1673AD47D1F2B94114B13B098BF4B038030C82A0(L_18, /*hidden argument*/NULL);
		QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * L_20;
		L_20 = QRCodeEventArgs_Create_TisQRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40_m04207A8B460314B5D8F603B3499D6B53B1C342EF(L_19, /*hidden argument*/QRCodeEventArgs_Create_TisQRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40_m04207A8B460314B5D8F603B3499D6B53B1C342EF_RuntimeMethod_var);
		NullCheck(L_17);
		EventHandler_1_Invoke_m42D0BBB3F676D599DCAAA80A83CE77067E5E550B(L_17, __this, L_20, /*hidden argument*/EventHandler_1_Invoke_m42D0BBB3F676D599DCAAA80A83CE77067E5E550B_RuntimeMethod_var);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesManager::QRCodeWatcher_Updated(System.Object,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_QRCodeWatcher_Updated_m643A58FD0F608D6C7BC3CAC50416DEB8F6B65014 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, RuntimeObject * ___sender0, QRCodeUpdatedEventArgs_t8F9B61799F713834B03340474C74B58A667B5C1F * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m42D0BBB3F676D599DCAAA80A83CE77067E5E550B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeEventArgs_Create_TisQRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40_m04207A8B460314B5D8F603B3499D6B53B1C342EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_mA2A658F3C5F9E21A21EA708BC283EC7AA0D10576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_set_Item_m9CD3833EF1036E72C444A524EE660C8035539B7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81A18684769CD3ED4091D7616AA425D54B3274CC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * V_1 = NULL;
	bool V_2 = false;
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Debug.Log("QRCodesManager QRCodeWatcher_Updated");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral81A18684769CD3ED4091D7616AA425D54B3274CC, /*hidden argument*/NULL);
		// bool found = false;
		V_0 = (bool)0;
		// lock (qrCodesList)
		SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_0 = __this->get_qrCodesList_14();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_1 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
			// if (qrCodesList.ContainsKey(args.Code.Id))
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_2 = __this->get_qrCodesList_14();
			QRCodeUpdatedEventArgs_t8F9B61799F713834B03340474C74B58A667B5C1F * L_3 = ___args1;
			NullCheck(L_3);
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_4;
			L_4 = QRCodeUpdatedEventArgs_get_Code_mDDD9AF1C4990679F46DE9B0C2061008EC16FC33D(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			Guid_t  L_5;
			L_5 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_4, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_6;
			L_6 = SortedDictionary_2_ContainsKey_mA2A658F3C5F9E21A21EA708BC283EC7AA0D10576(L_2, L_5, /*hidden argument*/SortedDictionary_2_ContainsKey_mA2A658F3C5F9E21A21EA708BC283EC7AA0D10576_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_0053;
			}
		}

IL_0035:
		{
			// found = true;
			V_0 = (bool)1;
			// qrCodesList[args.Code.Id] = args.Code;
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_7 = __this->get_qrCodesList_14();
			QRCodeUpdatedEventArgs_t8F9B61799F713834B03340474C74B58A667B5C1F * L_8 = ___args1;
			NullCheck(L_8);
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_9;
			L_9 = QRCodeUpdatedEventArgs_get_Code_mDDD9AF1C4990679F46DE9B0C2061008EC16FC33D(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			Guid_t  L_10;
			L_10 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_9, /*hidden argument*/NULL);
			QRCodeUpdatedEventArgs_t8F9B61799F713834B03340474C74B58A667B5C1F * L_11 = ___args1;
			NullCheck(L_11);
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_12;
			L_12 = QRCodeUpdatedEventArgs_get_Code_mDDD9AF1C4990679F46DE9B0C2061008EC16FC33D(L_11, /*hidden argument*/NULL);
			NullCheck(L_7);
			SortedDictionary_2_set_Item_m9CD3833EF1036E72C444A524EE660C8035539B7D(L_7, L_10, L_12, /*hidden argument*/SortedDictionary_2_set_Item_m9CD3833EF1036E72C444A524EE660C8035539B7D_RuntimeMethod_var);
		}

IL_0053:
		{
			// }
			IL2CPP_LEAVE(0x5F, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_2;
			if (!L_13)
			{
				goto IL_005e;
			}
		}

IL_0058:
		{
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_14 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
		}

IL_005e:
		{
			IL2CPP_END_FINALLY(85)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
	}

IL_005f:
	{
		// if (found)
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// var handlers = QRCodeUpdated;
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_16 = __this->get_QRCodeUpdated_12();
		V_3 = L_16;
		// if (handlers != null)
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_17 = V_3;
		if (!L_17)
		{
			goto IL_007e;
		}
	}
	{
		// handlers(this, QRCodeEventArgs.Create(args.Code));
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_18 = V_3;
		QRCodeUpdatedEventArgs_t8F9B61799F713834B03340474C74B58A667B5C1F * L_19 = ___args1;
		NullCheck(L_19);
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_20;
		L_20 = QRCodeUpdatedEventArgs_get_Code_mDDD9AF1C4990679F46DE9B0C2061008EC16FC33D(L_19, /*hidden argument*/NULL);
		QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * L_21;
		L_21 = QRCodeEventArgs_Create_TisQRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40_m04207A8B460314B5D8F603B3499D6B53B1C342EF(L_20, /*hidden argument*/QRCodeEventArgs_Create_TisQRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40_m04207A8B460314B5D8F603B3499D6B53B1C342EF_RuntimeMethod_var);
		NullCheck(L_18);
		EventHandler_1_Invoke_m42D0BBB3F676D599DCAAA80A83CE77067E5E550B(L_18, __this, L_21, /*hidden argument*/EventHandler_1_Invoke_m42D0BBB3F676D599DCAAA80A83CE77067E5E550B_RuntimeMethod_var);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesManager::QRCodeWatcher_Added(System.Object,Microsoft.MixedReality.QR.QRCodeAddedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_QRCodeWatcher_Added_mD411213E68E3E96A943F935DE917EF521999E566 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, RuntimeObject * ___sender0, QRCodeAddedEventArgs_t77611BE65C7F482E6E7D27642D8D7752C55CEC0A * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m42D0BBB3F676D599DCAAA80A83CE77067E5E550B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeEventArgs_Create_TisQRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40_m04207A8B460314B5D8F603B3499D6B53B1C342EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_set_Item_m9CD3833EF1036E72C444A524EE660C8035539B7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8BBFA9F5BF2D7B808CD3A820BE3602E69BA36B);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * V_0 = NULL;
	SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Debug.Log("QRCodesManager QRCodeWatcher_Added");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0C8BBFA9F5BF2D7B808CD3A820BE3602E69BA36B, /*hidden argument*/NULL);
		// lock (qrCodesList) 
		SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_0 = __this->get_qrCodesList_14();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_1 = V_1;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
		// qrCodesList[args.Code.Id] = args.Code; 
		SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_2 = __this->get_qrCodesList_14();
		QRCodeAddedEventArgs_t77611BE65C7F482E6E7D27642D8D7752C55CEC0A * L_3 = ___args1;
		NullCheck(L_3);
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_4;
		L_4 = QRCodeAddedEventArgs_get_Code_m82E28D071F7479252FC71762B2321ACB8FE8A405(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Guid_t  L_5;
		L_5 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_4, /*hidden argument*/NULL);
		QRCodeAddedEventArgs_t77611BE65C7F482E6E7D27642D8D7752C55CEC0A * L_6 = ___args1;
		NullCheck(L_6);
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_7;
		L_7 = QRCodeAddedEventArgs_get_Code_m82E28D071F7479252FC71762B2321ACB8FE8A405(L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		SortedDictionary_2_set_Item_m9CD3833EF1036E72C444A524EE660C8035539B7D(L_2, L_5, L_7, /*hidden argument*/SortedDictionary_2_set_Item_m9CD3833EF1036E72C444A524EE660C8035539B7D_RuntimeMethod_var);
		// }
		IL2CPP_LEAVE(0x43, FINALLY_0039);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_2;
			if (!L_8)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_9 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// var handlers = QRCodeAdded; 
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_10 = __this->get_QRCodeAdded_11();
		V_0 = L_10;
		// if (handlers != null)
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		// handlers(this, QRCodeEventArgs.Create(args.Code));
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_12 = V_0;
		QRCodeAddedEventArgs_t77611BE65C7F482E6E7D27642D8D7752C55CEC0A * L_13 = ___args1;
		NullCheck(L_13);
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_14;
		L_14 = QRCodeAddedEventArgs_get_Code_m82E28D071F7479252FC71762B2321ACB8FE8A405(L_13, /*hidden argument*/NULL);
		QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * L_15;
		L_15 = QRCodeEventArgs_Create_TisQRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40_m04207A8B460314B5D8F603B3499D6B53B1C342EF(L_14, /*hidden argument*/QRCodeEventArgs_Create_TisQRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40_m04207A8B460314B5D8F603B3499D6B53B1C342EF_RuntimeMethod_var);
		NullCheck(L_12);
		EventHandler_1_Invoke_m42D0BBB3F676D599DCAAA80A83CE77067E5E550B(L_12, __this, L_15, /*hidden argument*/EventHandler_1_Invoke_m42D0BBB3F676D599DCAAA80A83CE77067E5E550B_RuntimeMethod_var);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesManager::QRCodeWatcher_EnumerationCompleted(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_QRCodeWatcher_EnumerationCompleted_mD038D4411A8CF5501500C4508EE2E1DE6BDCBD62 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CB6690A769EECBE4848B36A28B3988369EF536);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("QRCodesManager QrTracker_EnumerationCompleted");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral05CB6690A769EECBE4848B36A28B3988369EF536, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager_Update_m48E79713040FB7004859A2B65E0289A54E51A79E (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeWatcherAccessStatus_t86023A28F1A50704820A22D4DEFAD5BB8BA61A9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B3CB3F99BC45DAB07113D93B25AA5240C2DB5E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (qrTracker == null && capabilityInitialized && IsSupported)
		QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1 * L_0 = __this->get_qrTracker_15();
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		bool L_1 = __this->get_capabilityInitialized_16();
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		bool L_2;
		L_2 = QRCodesManager_get_IsSupported_m09F2E18B4C918A98BCF6699EEAA2592A1F3F0C84_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// if (accessStatus == QRCodeWatcherAccessStatus.Allowed)
		int32_t L_3 = __this->get_accessStatus_17();
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0028;
		}
	}
	{
		// SetupQRTracking();
		QRCodesManager_SetupQRTracking_m61A691EF9BC3314F084B9A18067545F1F7D00573(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// Debug.Log("Capability access status : " + accessStatus);
		int32_t* L_4 = __this->get_address_of_accessStatus_17();
		RuntimeObject * L_5 = Box(QRCodeWatcherAccessStatus_t86023A28F1A50704820A22D4DEFAD5BB8BA61A9F_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		*L_4 = *(int32_t*)UnBox(L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0B3CB3F99BC45DAB07113D93B25AA5240C2DB5E6, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesManager__ctor_mFBD46B1ABE3DFCF4D990AC6371CB83FF1374C908 (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m988567ED68F97FA39568BB637F79E48904DD31CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_m9B2CAFCC37D4A813230B0DAAF7C62FF210F29962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private System.Collections.Generic.SortedDictionary<System.Guid, Microsoft.MixedReality.QR.QRCode> qrCodesList = new SortedDictionary<System.Guid, Microsoft.MixedReality.QR.QRCode>();
		SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E * L_0 = (SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E *)il2cpp_codegen_object_new(SortedDictionary_2_t5AEBB9464A15B9ED67782CD14A6D364FE310808E_il2cpp_TypeInfo_var);
		SortedDictionary_2__ctor_m9B2CAFCC37D4A813230B0DAAF7C62FF210F29962(L_0, /*hidden argument*/SortedDictionary_2__ctor_m9B2CAFCC37D4A813230B0DAAF7C62FF210F29962_RuntimeMethod_var);
		__this->set_qrCodesList_14(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m988567ED68F97FA39568BB637F79E48904DD31CD(__this, /*hidden argument*/Singleton_1__ctor_m988567ED68F97FA39568BB637F79E48904DD31CD_RuntimeMethod_var);
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
// System.Void QRTracking.QRCodesVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesVisualizer_Awake_m80F1BDB532BAF915A9521E609D8F5B31869E40E8 (QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesVisualizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesVisualizer_Start_mCBDF9197A0996D90BBE1CDC64D19A52BFB57D241 (QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m89F752F9643DA7F92FFEDCD06BC26F5BB9BFF7AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8DA19DB4049839DB9B1503CEAD5D988FEB999C9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodesVisualizer_Instance_QRCodeAdded_m5B5B364C3D02CEE43D2D31FC9337563CD8CD6C74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodesVisualizer_Instance_QRCodeRemoved_mF88F2A4411DB0CE5E8B942DDBB807244F6534C60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodesVisualizer_Instance_QRCodeUpdated_m09DFD7A50F076A04B11AE14AC3C452770AE8DCE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodesVisualizer_Instance_QRCodesTrackingStateChanged_m90ECC4CEEE93D9CA1BEE0AD6F421DABFBF07EBBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m902448B510BDA3596A55859D3544F754294037C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_mC5A267777A30A77771960E0EED4D8800272175D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66CF4B263730567AD27F70C87A31941CA31A0638);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("QRCodesVisualizer start");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral66CF4B263730567AD27F70C87A31941CA31A0638, /*hidden argument*/NULL);
		// qrCodesObjectsList = new SortedDictionary<System.Guid, GameObject>();
		SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * L_0 = (SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC *)il2cpp_codegen_object_new(SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC_il2cpp_TypeInfo_var);
		SortedDictionary_2__ctor_mC5A267777A30A77771960E0EED4D8800272175D5(L_0, /*hidden argument*/SortedDictionary_2__ctor_mC5A267777A30A77771960E0EED4D8800272175D5_RuntimeMethod_var);
		__this->set_qrCodesObjectsList_6(L_0);
		// QRCodesManager.Instance.QRCodesTrackingStateChanged += Instance_QRCodesTrackingStateChanged;
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tC50B6B2D73128525A0925FB059FA4A4FA9D7E700_il2cpp_TypeInfo_var);
		QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_1;
		L_1 = Singleton_1_get_Instance_m902448B510BDA3596A55859D3544F754294037C5(/*hidden argument*/Singleton_1_get_Instance_m902448B510BDA3596A55859D3544F754294037C5_RuntimeMethod_var);
		EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * L_2 = (EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *)il2cpp_codegen_object_new(EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m89F752F9643DA7F92FFEDCD06BC26F5BB9BFF7AA(L_2, __this, (intptr_t)((intptr_t)QRCodesVisualizer_Instance_QRCodesTrackingStateChanged_m90ECC4CEEE93D9CA1BEE0AD6F421DABFBF07EBBA_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m89F752F9643DA7F92FFEDCD06BC26F5BB9BFF7AA_RuntimeMethod_var);
		NullCheck(L_1);
		QRCodesManager_add_QRCodesTrackingStateChanged_m913730A12A01302F5FB3B5B4C08256CF9E855C4C(L_1, L_2, /*hidden argument*/NULL);
		// QRCodesManager.Instance.QRCodeAdded += Instance_QRCodeAdded;
		QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_3;
		L_3 = Singleton_1_get_Instance_m902448B510BDA3596A55859D3544F754294037C5(/*hidden argument*/Singleton_1_get_Instance_m902448B510BDA3596A55859D3544F754294037C5_RuntimeMethod_var);
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_4 = (EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)il2cpp_codegen_object_new(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8DA19DB4049839DB9B1503CEAD5D988FEB999C9A(L_4, __this, (intptr_t)((intptr_t)QRCodesVisualizer_Instance_QRCodeAdded_m5B5B364C3D02CEE43D2D31FC9337563CD8CD6C74_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8DA19DB4049839DB9B1503CEAD5D988FEB999C9A_RuntimeMethod_var);
		NullCheck(L_3);
		QRCodesManager_add_QRCodeAdded_m8CCDC766AC4BBD088E2580C0BFA7372CB098D64C(L_3, L_4, /*hidden argument*/NULL);
		// QRCodesManager.Instance.QRCodeUpdated += Instance_QRCodeUpdated;
		QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_5;
		L_5 = Singleton_1_get_Instance_m902448B510BDA3596A55859D3544F754294037C5(/*hidden argument*/Singleton_1_get_Instance_m902448B510BDA3596A55859D3544F754294037C5_RuntimeMethod_var);
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_6 = (EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)il2cpp_codegen_object_new(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8DA19DB4049839DB9B1503CEAD5D988FEB999C9A(L_6, __this, (intptr_t)((intptr_t)QRCodesVisualizer_Instance_QRCodeUpdated_m09DFD7A50F076A04B11AE14AC3C452770AE8DCE1_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8DA19DB4049839DB9B1503CEAD5D988FEB999C9A_RuntimeMethod_var);
		NullCheck(L_5);
		QRCodesManager_add_QRCodeUpdated_mDD7664BAA2BFCA8367E1D10E6E5D0B38A5AD5578(L_5, L_6, /*hidden argument*/NULL);
		// QRCodesManager.Instance.QRCodeRemoved += Instance_QRCodeRemoved;
		QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_7;
		L_7 = Singleton_1_get_Instance_m902448B510BDA3596A55859D3544F754294037C5(/*hidden argument*/Singleton_1_get_Instance_m902448B510BDA3596A55859D3544F754294037C5_RuntimeMethod_var);
		EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 * L_8 = (EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103 *)il2cpp_codegen_object_new(EventHandler_1_tF0932EF38EE41C192D54F86B84F80457945F3103_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8DA19DB4049839DB9B1503CEAD5D988FEB999C9A(L_8, __this, (intptr_t)((intptr_t)QRCodesVisualizer_Instance_QRCodeRemoved_mF88F2A4411DB0CE5E8B942DDBB807244F6534C60_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8DA19DB4049839DB9B1503CEAD5D988FEB999C9A_RuntimeMethod_var);
		NullCheck(L_7);
		QRCodesManager_add_QRCodeRemoved_mD4F8C41368DBAC477390D64A606780C074A73C3B(L_7, L_8, /*hidden argument*/NULL);
		// if (qrCodePrefab == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_qrCodePrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0086;
		}
	}
	{
		// throw new System.Exception("Prefab not assigned");
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral012A9154EB0E2544752C473E2F5A47088D1568E6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QRCodesVisualizer_Start_mCBDF9197A0996D90BBE1CDC64D19A52BFB57D241_RuntimeMethod_var)));
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesVisualizer::Instance_QRCodesTrackingStateChanged(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesVisualizer_Instance_QRCodesTrackingStateChanged_m90ECC4CEEE93D9CA1BEE0AD6F421DABFBF07EBBA (QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9 * __this, RuntimeObject * ___sender0, bool ___status1, const RuntimeMethod* method)
{
	{
		// if (!status)
		bool L_0 = ___status1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// clearExisting = true;
		__this->set_clearExisting_7((bool)1);
	}

IL_000a:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesVisualizer::Instance_QRCodeAdded(System.Object,QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesVisualizer_Instance_QRCodeAdded_m5B5B364C3D02CEE43D2D31FC9337563CD8CD6C74 (QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9 * __this, RuntimeObject * ___sender0, QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeEventArgs_1_get_Data_m88D1189535B385C85E32E1A93EC32EB64DECB888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral015FE08F38FB20EBA6040A2EAEEB7FA9115CA907);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Debug.Log("QRCodesVisualizer Instance_QRCodeAdded");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral015FE08F38FB20EBA6040A2EAEEB7FA9115CA907, /*hidden argument*/NULL);
		// lock (pendingActions)
		Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_0 = __this->get_pendingActions_8();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// pendingActions.Enqueue(new ActionData(ActionData.Type.Added, e.Data));
		Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_2 = __this->get_pendingActions_8();
		QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * L_3 = ___e1;
		NullCheck(L_3);
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_4;
		L_4 = QRCodeEventArgs_1_get_Data_m88D1189535B385C85E32E1A93EC32EB64DECB888_inline(L_3, /*hidden argument*/QRCodeEventArgs_1_get_Data_m88D1189535B385C85E32E1A93EC32EB64DECB888_RuntimeMethod_var);
		ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ActionData__ctor_m8B08E69A4860E12412D164D34977DDF70E26E0C6((&L_5), 0, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA(L_2, L_5, /*hidden argument*/Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA_RuntimeMethod_var);
		// }
		IL2CPP_LEAVE(0x3E, FINALLY_0034);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesVisualizer::Instance_QRCodeUpdated(System.Object,QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesVisualizer_Instance_QRCodeUpdated_m09DFD7A50F076A04B11AE14AC3C452770AE8DCE1 (QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9 * __this, RuntimeObject * ___sender0, QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeEventArgs_1_get_Data_m88D1189535B385C85E32E1A93EC32EB64DECB888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB0F2AA585E4293F3648EFB42D7769AA3CCB4FBA);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Debug.Log("QRCodesVisualizer Instance_QRCodeUpdated");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralAB0F2AA585E4293F3648EFB42D7769AA3CCB4FBA, /*hidden argument*/NULL);
		// lock (pendingActions)
		Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_0 = __this->get_pendingActions_8();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// pendingActions.Enqueue(new ActionData(ActionData.Type.Updated, e.Data)); 
		Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_2 = __this->get_pendingActions_8();
		QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * L_3 = ___e1;
		NullCheck(L_3);
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_4;
		L_4 = QRCodeEventArgs_1_get_Data_m88D1189535B385C85E32E1A93EC32EB64DECB888_inline(L_3, /*hidden argument*/QRCodeEventArgs_1_get_Data_m88D1189535B385C85E32E1A93EC32EB64DECB888_RuntimeMethod_var);
		ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ActionData__ctor_m8B08E69A4860E12412D164D34977DDF70E26E0C6((&L_5), 1, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA(L_2, L_5, /*hidden argument*/Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA_RuntimeMethod_var);
		// }
		IL2CPP_LEAVE(0x3E, FINALLY_0034);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesVisualizer::Instance_QRCodeRemoved(System.Object,QRTracking.QRCodeEventArgs`1<Microsoft.MixedReality.QR.QRCode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesVisualizer_Instance_QRCodeRemoved_mF88F2A4411DB0CE5E8B942DDBB807244F6534C60 (QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9 * __this, RuntimeObject * ___sender0, QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeEventArgs_1_get_Data_m88D1189535B385C85E32E1A93EC32EB64DECB888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A491DB589B97B437F24957B6D325EE00C6B81FC);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Debug.Log("QRCodesVisualizer Instance_QRCodeRemoved");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5A491DB589B97B437F24957B6D325EE00C6B81FC, /*hidden argument*/NULL);
		// lock (pendingActions)
		Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_0 = __this->get_pendingActions_8();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// pendingActions.Enqueue(new ActionData(ActionData.Type.Removed, e.Data));
		Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_2 = __this->get_pendingActions_8();
		QRCodeEventArgs_1_t1968D619830A7721174D1604734F23648FA5CE22 * L_3 = ___e1;
		NullCheck(L_3);
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_4;
		L_4 = QRCodeEventArgs_1_get_Data_m88D1189535B385C85E32E1A93EC32EB64DECB888_inline(L_3, /*hidden argument*/QRCodeEventArgs_1_get_Data_m88D1189535B385C85E32E1A93EC32EB64DECB888_RuntimeMethod_var);
		ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ActionData__ctor_m8B08E69A4860E12412D164D34977DDF70E26E0C6((&L_5), 2, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA(L_2, L_5, /*hidden argument*/Queue_1_Enqueue_m0EE2884F5B16CD4C13482D4D715BFCDE0CF015AA_RuntimeMethod_var);
		// }
		IL2CPP_LEAVE(0x3E, FINALLY_0034);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesVisualizer::HandleEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesVisualizer_HandleEvents_mDCF4101574176124E8BB8EFD9C0635AE080400C0 (QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDA2519A67C765881B01A80E1C10CFFC7D6A977E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6284D28235A9B1D7C4528A6A6D22D7C5BB380851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4CF9E7FA8993C11DDCC4A8084EA372974BCEA39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisQRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207_m31D004BB01F60B33EF89D944B648C33FD6AA4251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7_m1110A5BB38EB761ECF8C6E1CAB3E3ED8390F4669_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m3C0FA0F135703D79ABA12B0E5F614C471CE582C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mCAE79E030BE01A9215627883BACBF834DCCAEB68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m812BFFC0DCA11665073AAE686BF416AFF180B9F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Add_m6265CDD5649B420911A38DF352AF3F5A193E3FE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Clear_m0B4DFF94494EF834FA659F065695D6D69B871C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m71BB1D3E9A6A7A6D2B16E2E34AD8DE0E0C6E9C04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_GetEnumerator_m2B8DAAD33D00CD8088BBCE1B1DDCABEFA97C873C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Remove_m11C1C3C5161C4EA9F6FB83FD9CD758E239818986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_mC5F1BB60F70849DB83C79A8191E6DC6DAD1F4FE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * V_0 = NULL;
	bool V_1 = false;
	ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8  V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_tB1AE166AA9F1E4B9B27F62A2CC297C5220EAB2B5  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (pendingActions)
		Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_0 = __this->get_pendingActions_8();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			goto IL_018b;
		}

IL_0016:
		{
			// var action = pendingActions.Dequeue(); 
			Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_2 = __this->get_pendingActions_8();
			NullCheck(L_2);
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_3;
			L_3 = Queue_1_Dequeue_mCAE79E030BE01A9215627883BACBF834DCCAEB68(L_2, /*hidden argument*/Queue_1_Dequeue_mCAE79E030BE01A9215627883BACBF834DCCAEB68_RuntimeMethod_var);
			V_2 = L_3;
			// if (action.type == ActionData.Type.Added)
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_4 = V_2;
			int32_t L_5 = L_4.get_type_0();
			if (L_5)
			{
				goto IL_00a8;
			}
		}

IL_002a:
		{
			// GameObject qrCodeObject = Instantiate(qrCodePrefab, new Vector3(0, 0, 0), Quaternion.identity);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_qrCodePrefab_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
			memset((&L_7), 0, sizeof(L_7));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
			L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
			L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
			V_3 = L_9;
			// qrCodeObject.GetComponent<SpatialGraphCoordinateSystem>().Id = action.qrCode.SpatialGraphNodeId;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_3;
			NullCheck(L_10);
			SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * L_11;
			L_11 = GameObject_GetComponent_TisSpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7_m1110A5BB38EB761ECF8C6E1CAB3E3ED8390F4669(L_10, /*hidden argument*/GameObject_GetComponent_TisSpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7_m1110A5BB38EB761ECF8C6E1CAB3E3ED8390F4669_RuntimeMethod_var);
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_12 = V_2;
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_13 = L_12.get_qrCode_1();
			NullCheck(L_13);
			Guid_t  L_14;
			L_14 = QRCode_get_SpatialGraphNodeId_mEAE60D35B8E885FD291532E94E63B91EB66FF6D6(L_13, /*hidden argument*/NULL);
			NullCheck(L_11);
			SpatialGraphCoordinateSystem_set_Id_m5A761F02F9D6E244BBED42841DBE43C2DBE11AB8(L_11, L_14, /*hidden argument*/NULL);
			// qrCodeObject.GetComponent<QRCode>().qrCode = action.qrCode;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_3;
			NullCheck(L_15);
			QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * L_16;
			L_16 = GameObject_GetComponent_TisQRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207_m31D004BB01F60B33EF89D944B648C33FD6AA4251(L_15, /*hidden argument*/GameObject_GetComponent_TisQRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207_m31D004BB01F60B33EF89D944B648C33FD6AA4251_RuntimeMethod_var);
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_17 = V_2;
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_18 = L_17.get_qrCode_1();
			NullCheck(L_16);
			L_16->set_qrCode_4(L_18);
			// LatestQRCodeDetails.text = action.qrCode.Data; 
			TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_19 = __this->get_LatestQRCodeDetails_5();
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_20 = V_2;
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_21 = L_20.get_qrCode_1();
			NullCheck(L_21);
			String_t* L_22;
			L_22 = QRCode_get_Data_m3A9D8F30CB7DA1D9C233ED1F74CC1B7DDBD91B6A(L_21, /*hidden argument*/NULL);
			NullCheck(L_19);
			VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_22);
			// qrCodesObjectsList.Add(action.qrCode.Id, qrCodeObject); 
			SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * L_23 = __this->get_qrCodesObjectsList_6();
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_24 = V_2;
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_25 = L_24.get_qrCode_1();
			NullCheck(L_25);
			Guid_t  L_26;
			L_26 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_25, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_3;
			NullCheck(L_23);
			SortedDictionary_2_Add_m6265CDD5649B420911A38DF352AF3F5A193E3FE9(L_23, L_26, L_27, /*hidden argument*/SortedDictionary_2_Add_m6265CDD5649B420911A38DF352AF3F5A193E3FE9_RuntimeMethod_var);
			// }
			goto IL_018b;
		}

IL_00a8:
		{
			// else if (action.type == ActionData.Type.Updated)
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_28 = V_2;
			int32_t L_29 = L_28.get_type_0();
			if ((!(((uint32_t)L_29) == ((uint32_t)1))))
			{
				goto IL_0138;
			}
		}

IL_00b4:
		{
			// if (!qrCodesObjectsList.ContainsKey(action.qrCode.Id))
			SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * L_30 = __this->get_qrCodesObjectsList_6();
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_31 = V_2;
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_32 = L_31.get_qrCode_1();
			NullCheck(L_32);
			Guid_t  L_33;
			L_33 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_32, /*hidden argument*/NULL);
			NullCheck(L_30);
			bool L_34;
			L_34 = SortedDictionary_2_ContainsKey_m71BB1D3E9A6A7A6D2B16E2E34AD8DE0E0C6E9C04(L_30, L_33, /*hidden argument*/SortedDictionary_2_ContainsKey_m71BB1D3E9A6A7A6D2B16E2E34AD8DE0E0C6E9C04_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_018b;
			}
		}

IL_00cf:
		{
			// GameObject qrCodeObject = Instantiate(qrCodePrefab, new Vector3(0, 0, 0), Quaternion.identity);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_qrCodePrefab_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
			memset((&L_36), 0, sizeof(L_36));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37;
			L_37 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
			L_38 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_35, L_36, L_37, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
			V_4 = L_38;
			// qrCodeObject.GetComponent<SpatialGraphCoordinateSystem>().Id = action.qrCode.SpatialGraphNodeId;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_4;
			NullCheck(L_39);
			SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * L_40;
			L_40 = GameObject_GetComponent_TisSpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7_m1110A5BB38EB761ECF8C6E1CAB3E3ED8390F4669(L_39, /*hidden argument*/GameObject_GetComponent_TisSpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7_m1110A5BB38EB761ECF8C6E1CAB3E3ED8390F4669_RuntimeMethod_var);
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_41 = V_2;
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_42 = L_41.get_qrCode_1();
			NullCheck(L_42);
			Guid_t  L_43;
			L_43 = QRCode_get_SpatialGraphNodeId_mEAE60D35B8E885FD291532E94E63B91EB66FF6D6(L_42, /*hidden argument*/NULL);
			NullCheck(L_40);
			SpatialGraphCoordinateSystem_set_Id_m5A761F02F9D6E244BBED42841DBE43C2DBE11AB8(L_40, L_43, /*hidden argument*/NULL);
			// qrCodeObject.GetComponent<QRCode>().qrCode = action.qrCode;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_4;
			NullCheck(L_44);
			QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * L_45;
			L_45 = GameObject_GetComponent_TisQRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207_m31D004BB01F60B33EF89D944B648C33FD6AA4251(L_44, /*hidden argument*/GameObject_GetComponent_TisQRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207_m31D004BB01F60B33EF89D944B648C33FD6AA4251_RuntimeMethod_var);
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_46 = V_2;
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_47 = L_46.get_qrCode_1();
			NullCheck(L_45);
			L_45->set_qrCode_4(L_47);
			// qrCodesObjectsList.Add(action.qrCode.Id, qrCodeObject);
			SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * L_48 = __this->get_qrCodesObjectsList_6();
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_49 = V_2;
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_50 = L_49.get_qrCode_1();
			NullCheck(L_50);
			Guid_t  L_51;
			L_51 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_50, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = V_4;
			NullCheck(L_48);
			SortedDictionary_2_Add_m6265CDD5649B420911A38DF352AF3F5A193E3FE9(L_48, L_51, L_52, /*hidden argument*/SortedDictionary_2_Add_m6265CDD5649B420911A38DF352AF3F5A193E3FE9_RuntimeMethod_var);
			// }
			goto IL_018b;
		}

IL_0138:
		{
			// else if (action.type == ActionData.Type.Removed)
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_53 = V_2;
			int32_t L_54 = L_53.get_type_0();
			if ((!(((uint32_t)L_54) == ((uint32_t)2))))
			{
				goto IL_018b;
			}
		}

IL_0141:
		{
			// if (qrCodesObjectsList.ContainsKey(action.qrCode.Id))
			SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * L_55 = __this->get_qrCodesObjectsList_6();
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_56 = V_2;
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_57 = L_56.get_qrCode_1();
			NullCheck(L_57);
			Guid_t  L_58;
			L_58 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_57, /*hidden argument*/NULL);
			NullCheck(L_55);
			bool L_59;
			L_59 = SortedDictionary_2_ContainsKey_m71BB1D3E9A6A7A6D2B16E2E34AD8DE0E0C6E9C04(L_55, L_58, /*hidden argument*/SortedDictionary_2_ContainsKey_m71BB1D3E9A6A7A6D2B16E2E34AD8DE0E0C6E9C04_RuntimeMethod_var);
			if (!L_59)
			{
				goto IL_018b;
			}
		}

IL_0159:
		{
			// Destroy(qrCodesObjectsList[action.qrCode.Id]);
			SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * L_60 = __this->get_qrCodesObjectsList_6();
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_61 = V_2;
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_62 = L_61.get_qrCode_1();
			NullCheck(L_62);
			Guid_t  L_63;
			L_63 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_62, /*hidden argument*/NULL);
			NullCheck(L_60);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64;
			L_64 = SortedDictionary_2_get_Item_mC5F1BB60F70849DB83C79A8191E6DC6DAD1F4FE4(L_60, L_63, /*hidden argument*/SortedDictionary_2_get_Item_mC5F1BB60F70849DB83C79A8191E6DC6DAD1F4FE4_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_64, /*hidden argument*/NULL);
			// qrCodesObjectsList.Remove(action.qrCode.Id);
			SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * L_65 = __this->get_qrCodesObjectsList_6();
			ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160  L_66 = V_2;
			QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_67 = L_66.get_qrCode_1();
			NullCheck(L_67);
			Guid_t  L_68;
			L_68 = QRCode_get_Id_m9F53DA48C55DC0AB64180387BDE2AD3DFC1C81F2(L_67, /*hidden argument*/NULL);
			NullCheck(L_65);
			bool L_69;
			L_69 = SortedDictionary_2_Remove_m11C1C3C5161C4EA9F6FB83FD9CD758E239818986(L_65, L_68, /*hidden argument*/SortedDictionary_2_Remove_m11C1C3C5161C4EA9F6FB83FD9CD758E239818986_RuntimeMethod_var);
		}

IL_018b:
		{
			// while (pendingActions.Count > 0)
			Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_70 = __this->get_pendingActions_8();
			NullCheck(L_70);
			int32_t L_71;
			L_71 = Queue_1_get_Count_m812BFFC0DCA11665073AAE686BF416AFF180B9F5_inline(L_70, /*hidden argument*/Queue_1_get_Count_m812BFFC0DCA11665073AAE686BF416AFF180B9F5_RuntimeMethod_var);
			if ((((int32_t)L_71) > ((int32_t)0)))
			{
				goto IL_0016;
			}
		}

IL_019c:
		{
			// }
			IL2CPP_LEAVE(0x1A8, FINALLY_019e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_019e;
	}

FINALLY_019e:
	{ // begin finally (depth: 1)
		{
			bool L_72 = V_1;
			if (!L_72)
			{
				goto IL_01a7;
			}
		}

IL_01a1:
		{
			Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_73 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_73, /*hidden argument*/NULL);
		}

IL_01a7:
		{
			IL2CPP_END_FINALLY(414)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(414)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A8, IL_01a8)
	}

IL_01a8:
	{
		// if (clearExisting)
		bool L_74 = __this->get_clearExisting_7();
		if (!L_74)
		{
			goto IL_01ff;
		}
	}
	{
		// clearExisting = false;
		__this->set_clearExisting_7((bool)0);
		// foreach (var obj in qrCodesObjectsList)
		SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * L_75 = __this->get_qrCodesObjectsList_6();
		NullCheck(L_75);
		Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8  L_76;
		L_76 = SortedDictionary_2_GetEnumerator_m2B8DAAD33D00CD8088BBCE1B1DDCABEFA97C873C(L_75, /*hidden argument*/SortedDictionary_2_GetEnumerator_m2B8DAAD33D00CD8088BBCE1B1DDCABEFA97C873C_RuntimeMethod_var);
		V_5 = L_76;
	}

IL_01c4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01db;
		}

IL_01c6:
		{
			// foreach (var obj in qrCodesObjectsList)
			KeyValuePair_2_tB1AE166AA9F1E4B9B27F62A2CC297C5220EAB2B5  L_77;
			L_77 = Enumerator_get_Current_m4CF9E7FA8993C11DDCC4A8084EA372974BCEA39F((Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m4CF9E7FA8993C11DDCC4A8084EA372974BCEA39F_RuntimeMethod_var);
			V_6 = L_77;
			// Destroy(obj.Value);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78;
			L_78 = KeyValuePair_2_get_Value_m3C0FA0F135703D79ABA12B0E5F614C471CE582C3_inline((KeyValuePair_2_tB1AE166AA9F1E4B9B27F62A2CC297C5220EAB2B5 *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Value_m3C0FA0F135703D79ABA12B0E5F614C471CE582C3_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_78, /*hidden argument*/NULL);
		}

IL_01db:
		{
			// foreach (var obj in qrCodesObjectsList)
			bool L_79;
			L_79 = Enumerator_MoveNext_m6284D28235A9B1D7C4528A6A6D22D7C5BB380851((Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m6284D28235A9B1D7C4528A6A6D22D7C5BB380851_RuntimeMethod_var);
			if (L_79)
			{
				goto IL_01c6;
			}
		}

IL_01e4:
		{
			IL2CPP_LEAVE(0x1F4, FINALLY_01e6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01e6;
	}

FINALLY_01e6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mDA2519A67C765881B01A80E1C10CFFC7D6A977E1((Enumerator_t745D522C9F4F0AFEFE32FD90D8543E5881A1D1A8 *)(&V_5), /*hidden argument*/Enumerator_Dispose_mDA2519A67C765881B01A80E1C10CFFC7D6A977E1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(486)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(486)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F4, IL_01f4)
	}

IL_01f4:
	{
		// qrCodesObjectsList.Clear();
		SortedDictionary_2_tE7185AC2FC09EDC931FF810624785AF79B711CDC * L_80 = __this->get_qrCodesObjectsList_6();
		NullCheck(L_80);
		SortedDictionary_2_Clear_m0B4DFF94494EF834FA659F065695D6D69B871C40(L_80, /*hidden argument*/SortedDictionary_2_Clear_m0B4DFF94494EF834FA659F065695D6D69B871C40_RuntimeMethod_var);
	}

IL_01ff:
	{
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesVisualizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesVisualizer_Update_mCF785905D50F71B440BB5646231081965C5DE439 (QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9 * __this, const RuntimeMethod* method)
{
	{
		// HandleEvents();
		QRCodesVisualizer_HandleEvents_mDCF4101574176124E8BB8EFD9C0635AE080400C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QRTracking.QRCodesVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodesVisualizer__ctor_m1AB98BB003839C918EEE9D3F65FABFEF96F57D28 (QRCodesVisualizer_t2663FDE302FA75B3E65FF044F302888400A69AE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m5CA6B1B89CB8D897ACEE1AA1AA907F46146B7092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool clearExisting = true;
		__this->set_clearExisting_7((bool)1);
		// private System.Collections.Generic.Queue<ActionData> pendingActions = new Queue<ActionData>();
		Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * L_0 = (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F *)il2cpp_codegen_object_new(Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F_il2cpp_TypeInfo_var);
		Queue_1__ctor_m5CA6B1B89CB8D897ACEE1AA1AA907F46146B7092(L_0, /*hidden argument*/Queue_1__ctor_m5CA6B1B89CB8D897ACEE1AA1AA907F46146B7092_RuntimeMethod_var);
		__this->set_pendingActions_8(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Guid QRTracking.SpatialGraphCoordinateSystem::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  SpatialGraphCoordinateSystem_get_Id_m37A2376506584ED5C856ED0E042F0FCE97103508 (SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * __this, const RuntimeMethod* method)
{
	{
		// return id;
		Guid_t  L_0 = __this->get_id_5();
		return L_0;
	}
}
// System.Void QRTracking.SpatialGraphCoordinateSystem::set_Id(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphCoordinateSystem_set_Id_m5A761F02F9D6E244BBED42841DBE43C2DBE11AB8 (SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61F38298A615A904E0C5E9DB74D01127FBB11B70);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// id = value;
		Guid_t  L_0 = ___value0;
		__this->set_id_5(L_0);
		// CoordinateSystem = Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview.CreateCoordinateSystemForNode(id);
		Guid_t  L_1 = __this->get_id_5();
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_2;
		L_2 = SpatialGraphInteropPreview_CreateCoordinateSystemForNode_m761C451C38061188B0492A3F41B2684556818C6B(L_1, /*hidden argument*/NULL);
		__this->set_CoordinateSystem_4(L_2);
		// if (CoordinateSystem == null)
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_3 = __this->get_CoordinateSystem_4();
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.Log("Id= " + id + " Failed to acquire coordinate system");
		Guid_t  L_4 = __this->get_id_5();
		V_0 = L_4;
		String_t* L_5;
		L_5 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385, L_5, _stringLiteral61F38298A615A904E0C5E9DB74D01127FBB11B70, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void QRTracking.SpatialGraphCoordinateSystem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphCoordinateSystem_Awake_m1E14DDC98CE4F9DC493606B479366D30B5B224B7 (SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void QRTracking.SpatialGraphCoordinateSystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphCoordinateSystem_Start_m70F3C4E97324D06A2686EE0C34C74D86A5EAA97A (SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61F38298A615A904E0C5E9DB74D01127FBB11B70);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (CoordinateSystem == null)
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_0 = __this->get_CoordinateSystem_4();
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		// CoordinateSystem = Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview.CreateCoordinateSystemForNode(id);
		Guid_t  L_1 = __this->get_id_5();
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_2;
		L_2 = SpatialGraphInteropPreview_CreateCoordinateSystemForNode_m761C451C38061188B0492A3F41B2684556818C6B(L_1, /*hidden argument*/NULL);
		__this->set_CoordinateSystem_4(L_2);
		// if (CoordinateSystem == null)
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_3 = __this->get_CoordinateSystem_4();
		if (L_3)
		{
			goto IL_0049;
		}
	}
	{
		// Debug.Log("Id= " + id + " Failed to acquire coordinate system");
		Guid_t  L_4 = __this->get_id_5();
		V_0 = L_4;
		String_t* L_5;
		L_5 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385, L_5, _stringLiteral61F38298A615A904E0C5E9DB74D01127FBB11B70, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void QRTracking.SpatialGraphCoordinateSystem::UpdateLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphCoordinateSystem_UpdateLocation_m0FF5C3A72F4CB737BE86C7031A99D15BD7282DEA (SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61F38298A615A904E0C5E9DB74D01127FBB11B70);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * V_3 = NULL;
	Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// if (CoordinateSystem == null)
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_0 = __this->get_CoordinateSystem_4();
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		// CoordinateSystem = Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview.CreateCoordinateSystemForNode(id);
		Guid_t  L_1 = __this->get_id_5();
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_2;
		L_2 = SpatialGraphInteropPreview_CreateCoordinateSystemForNode_m761C451C38061188B0492A3F41B2684556818C6B(L_1, /*hidden argument*/NULL);
		__this->set_CoordinateSystem_4(L_2);
		// if (CoordinateSystem == null)
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_3 = __this->get_CoordinateSystem_4();
		if (L_3)
		{
			goto IL_0049;
		}
	}
	{
		// Debug.Log("Id= " + id + " Failed to acquire coordinate system");
		Guid_t  L_4 = __this->get_id_5();
		V_0 = L_4;
		String_t* L_5;
		L_5 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral00AE70FA44D35F08953E7FF1C756E43533E41385, L_5, _stringLiteral61F38298A615A904E0C5E9DB74D01127FBB11B70, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// if (CoordinateSystem != null)
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_7 = __this->get_CoordinateSystem_4();
		if (!L_7)
		{
			goto IL_01a1;
		}
	}
	{
		// Quaternion rotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		V_1 = L_8;
		// Vector3 translation = new Vector3(0.0f, 0.0f, 0.0f);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// System.IntPtr rootCoordnateSystemPtr = UnityEngine.XR.WindowsMR.WindowsMREnvironment.OriginSpatialCoordinateSystem;
		intptr_t L_9;
		L_9 = WindowsMREnvironment_get_OriginSpatialCoordinateSystem_m3609FBD7226520512F8F2A8A5D0FFC1E2A0B015E(/*hidden argument*/NULL);
		// SpatialCoordinateSystem rootSpatialCoordinateSystem = (SpatialCoordinateSystem)System.Runtime.InteropServices.Marshal.GetObjectForIUnknown(rootCoordnateSystemPtr);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_10;
		L_10 = Marshal_GetObjectForIUnknown_m9D5CB9B12B72BC4CCC46E363C805A03FFE644443((intptr_t)L_9, /*hidden argument*/NULL);
		V_3 = ((SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB *)CastclassSealed((RuntimeObject*)L_10, SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB_il2cpp_TypeInfo_var));
		// System.Numerics.Matrix4x4? relativePose = CoordinateSystem.TryGetTransformTo(rootSpatialCoordinateSystem);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_11 = __this->get_CoordinateSystem_4();
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_12 = V_3;
		NullCheck(L_11);
		Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8  L_13;
		L_13 = SpatialCoordinateSystem_TryGetTransformTo_m9860B951AA3C929F3C1A39347C72EA838E5774FF(L_11, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		// if (relativePose != null)
		bool L_14;
		L_14 = Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_inline((Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_01ad;
		}
	}
	{
		// System.Numerics.Matrix4x4 newMatrix = relativePose.Value;
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_15;
		L_15 = Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A((Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *)(&V_4), /*hidden argument*/Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_RuntimeMethod_var);
		V_8 = L_15;
		// newMatrix.M13 = -newMatrix.M13;
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_16 = V_8;
		float L_17 = L_16.get_M13_2();
		(&V_8)->set_M13_2(((-L_17)));
		// newMatrix.M23 = -newMatrix.M23;
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_18 = V_8;
		float L_19 = L_18.get_M23_6();
		(&V_8)->set_M23_6(((-L_19)));
		// newMatrix.M43 = -newMatrix.M43;
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_20 = V_8;
		float L_21 = L_20.get_M43_14();
		(&V_8)->set_M43_14(((-L_21)));
		// newMatrix.M31 = -newMatrix.M31;
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_22 = V_8;
		float L_23 = L_22.get_M31_8();
		(&V_8)->set_M31_8(((-L_23)));
		// newMatrix.M32 = -newMatrix.M32;
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_24 = V_8;
		float L_25 = L_24.get_M32_9();
		(&V_8)->set_M32_9(((-L_25)));
		// newMatrix.M34 = -newMatrix.M34;
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_26 = V_8;
		float L_27 = L_26.get_M34_11();
		(&V_8)->set_M34_11(((-L_27)));
		// System.Numerics.Matrix4x4.Decompose(newMatrix, out scale, out rotation1, out translation1);
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_28 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Matrix4x4_Decompose_mAEEBB02601928ECC39E5459CC1015C8FEE7D4754(L_28, (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *)(&V_5), (Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C *)(&V_6), (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *)(&V_7), /*hidden argument*/NULL);
		// translation = new Vector3(translation1.X, translation1.Y, translation1.Z);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_30 = V_7;
		float L_31 = L_30.get_X_0();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_32 = V_7;
		float L_33 = L_32.get_Y_1();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_34 = V_7;
		float L_35 = L_34.get_Z_2();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), L_31, L_33, L_35, /*hidden argument*/NULL);
		// rotation = new Quaternion(rotation1.X, rotation1.Y, rotation1.Z, rotation1.W);
		Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  L_36 = V_6;
		float L_37 = L_36.get_X_0();
		Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  L_38 = V_6;
		float L_39 = L_38.get_Y_1();
		Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  L_40 = V_6;
		float L_41 = L_40.get_Z_2();
		Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  L_42 = V_6;
		float L_43 = L_42.get_W_3();
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_1), L_37, L_39, L_41, L_43, /*hidden argument*/NULL);
		// Pose pose = new Pose(translation, rotation);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_45 = V_1;
		Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_9), L_44, L_45, /*hidden argument*/NULL);
		// if (CameraCache.Main.transform.parent != null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_46;
		L_46 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_48, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0182;
		}
	}
	{
		// pose = pose.GetTransformedBy(CameraCache.Main.transform.parent);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_50;
		L_50 = CameraCache_get_Main_m197C7A2C9D2EAE6AD083908F4CBC07262BDB75E7(/*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_51, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_53;
		L_53 = Pose_GetTransformedBy_m4CA999ABD2B7AFE2AEC9B4B058C4AC39A88B303A((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_9), L_52, /*hidden argument*/NULL);
		V_9 = L_53;
	}

IL_0182:
	{
		// gameObject.transform.SetPositionAndRotation(pose.position, pose.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_54, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_56 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = L_56.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_58 = V_9;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_59 = L_58.get_rotation_1();
		NullCheck(L_55);
		Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE(L_55, L_57, L_59, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01a1:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60;
		L_60 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_60, (bool)0, /*hidden argument*/NULL);
	}

IL_01ad:
	{
		// }
		return;
	}
}
// System.Void QRTracking.SpatialGraphCoordinateSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphCoordinateSystem_Update_m466E7D628D48D39D07E34F845BCFAFAD0C18CFFB (SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * __this, const RuntimeMethod* method)
{
	{
		// UpdateLocation();
		SpatialGraphCoordinateSystem_UpdateLocation_m0FF5C3A72F4CB737BE86C7031A99D15BD7282DEA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QRTracking.SpatialGraphCoordinateSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphCoordinateSystem__ctor_mC59CA7D0D7B9717B302E59DB8BB7BEC88987521C (SpatialGraphCoordinateSystem_t7D3B6717D7E3716340F52E5BC415C0C20C37AAB7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void QRTracking.QRCodesManager/<Start>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__29_MoveNext_m3ECBB759910E10DE27685BD2FB2A900535E44551 (U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_m10A84018309A6D64785A9FBA1DBB5AE84AF036C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m14EAAECB0FD1533735FFF73B15AB58370181AE43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m68179FA2220E60FA406BA17898F616103CDFB3DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mA04F235B69C7E30ABE57EAFEC11D3E0E7F992D0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ED28B99113BB82D034A7C722F019C2EB2EC40FC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * V_1 = NULL;
	int32_t V_2 = 0;
	TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0066;
			}
		}

IL_0011:
		{
			// Debug.Log("In Start() of QRCodesManager");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6ED28B99113BB82D034A7C722F019C2EB2EC40FC, /*hidden argument*/NULL);
			// IsSupported = QRCodeWatcher.IsSupported(); 
			QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_3 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(QRCodeWatcher_t8BB8C8478946631C52C1F5E24C1BCF1BF9D3CCD1_il2cpp_TypeInfo_var);
			bool L_4;
			L_4 = QRCodeWatcher_IsSupported_mD3DFE3C2FCE0F24AE34F4DCD697B8418CAAFC56C(/*hidden argument*/NULL);
			NullCheck(L_3);
			QRCodesManager_set_IsSupported_m8829FFCED6A719B474472C4156D9B92902E1AE18_inline(L_3, L_4, /*hidden argument*/NULL);
			// capabilityTask = QRCodeWatcher.RequestAccessAsync(); 
			QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_5 = V_1;
			Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E * L_6;
			L_6 = QRCodeWatcher_RequestAccessAsync_m8D53925DDAEFD663704C820975C84AEC72960B02(/*hidden argument*/NULL);
			NullCheck(L_5);
			L_5->set_capabilityTask_18(L_6);
			// accessStatus = await capabilityTask;
			QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_7 = V_1;
			NullCheck(L_7);
			Task_1_tD9B41DD4579F814DA7220ABF76C2094E5452B40E * L_8 = L_7->get_capabilityTask_18();
			NullCheck(L_8);
			TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A  L_9;
			L_9 = Task_1_GetAwaiter_mA04F235B69C7E30ABE57EAFEC11D3E0E7F992D0D(L_8, /*hidden argument*/Task_1_GetAwaiter_mA04F235B69C7E30ABE57EAFEC11D3E0E7F992D0D_RuntimeMethod_var);
			V_3 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_1_get_IsCompleted_m68179FA2220E60FA406BA17898F616103CDFB3DD((TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m68179FA2220E60FA406BA17898F616103CDFB3DD_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0082;
			}
		}

IL_0046:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A  L_12 = V_3;
			__this->set_U3CU3Eu__1_3(L_12);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_m10A84018309A6D64785A9FBA1DBB5AE84AF036C4((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_13, (TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A *)(&V_3), (U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A_TisU3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB_m10A84018309A6D64785A9FBA1DBB5AE84AF036C4_RuntimeMethod_var);
			goto IL_00c6;
		}

IL_0066:
		{
			TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A  L_14 = __this->get_U3CU3Eu__1_3();
			V_3 = L_14;
			TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A * L_15 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_0082:
		{
			int32_t L_17;
			L_17 = TaskAwaiter_1_GetResult_m14EAAECB0FD1533735FFF73B15AB58370181AE43((TaskAwaiter_1_tEBDB589EA105F0ED93A2B7505BDAD4CBC844784A *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m14EAAECB0FD1533735FFF73B15AB58370181AE43_RuntimeMethod_var);
			V_2 = L_17;
			QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_18 = V_1;
			int32_t L_19 = V_2;
			NullCheck(L_18);
			L_18->set_accessStatus_17(L_19);
			// capabilityInitialized = true;
			QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * L_20 = V_1;
			NullCheck(L_20);
			L_20->set_capabilityInitialized_16((bool)1);
			goto IL_00b3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009a;
		throw e;
	}

CATCH_009a:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, L_22, /*hidden argument*/NULL);
		goto IL_00c6;
	} // end catch (depth: 1)

IL_00b3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_23, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__29_MoveNext_m3ECBB759910E10DE27685BD2FB2A900535E44551_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB *>(__this + _offset);
	U3CStartU3Ed__29_MoveNext_m3ECBB759910E10DE27685BD2FB2A900535E44551(_thisAdjusted, method);
}
// System.Void QRTracking.QRCodesManager/<Start>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__29_SetStateMachine_m588C94D5FB6E8F6C467A5F079BDFF039B5694F40 (U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__29_SetStateMachine_m588C94D5FB6E8F6C467A5F079BDFF039B5694F40_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__29_tC16BFBAF0500D6B6E9C189E31B2F8C0BC5F4B3AB *>(__this + _offset);
	U3CStartU3Ed__29_SetStateMachine_m588C94D5FB6E8F6C467A5F079BDFF039B5694F40(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: QRTracking.QRCodesVisualizer/ActionData
IL2CPP_EXTERN_C void ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshal_pinvoke(const ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160& unmarshaled, ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshaled_pinvoke& marshaled)
{
	Exception_t* ___qrCode_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'qrCode' of type 'ActionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___qrCode_1Exception, NULL);
}
IL2CPP_EXTERN_C void ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshal_pinvoke_back(const ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshaled_pinvoke& marshaled, ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160& unmarshaled)
{
	Exception_t* ___qrCode_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'qrCode' of type 'ActionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___qrCode_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: QRTracking.QRCodesVisualizer/ActionData
IL2CPP_EXTERN_C void ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshal_pinvoke_cleanup(ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: QRTracking.QRCodesVisualizer/ActionData
IL2CPP_EXTERN_C void ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshal_com(const ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160& unmarshaled, ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshaled_com& marshaled)
{
	Exception_t* ___qrCode_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'qrCode' of type 'ActionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___qrCode_1Exception, NULL);
}
IL2CPP_EXTERN_C void ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshal_com_back(const ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshaled_com& marshaled, ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160& unmarshaled)
{
	Exception_t* ___qrCode_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'qrCode' of type 'ActionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___qrCode_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: QRTracking.QRCodesVisualizer/ActionData
IL2CPP_EXTERN_C void ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshal_com_cleanup(ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160_marshaled_com& marshaled)
{
}
// System.Void QRTracking.QRCodesVisualizer/ActionData::.ctor(QRTracking.QRCodesVisualizer/ActionData/Type,Microsoft.MixedReality.QR.QRCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionData__ctor_m8B08E69A4860E12412D164D34977DDF70E26E0C6 (ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160 * __this, int32_t ___type0, QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * ___qRCode1, const RuntimeMethod* method)
{
	{
		// public ActionData(Type type, Microsoft.MixedReality.QR.QRCode qRCode) : this()
		il2cpp_codegen_initobj(__this, sizeof(ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160 ));
		// this.type = type;
		int32_t L_0 = ___type0;
		__this->set_type_0(L_0);
		// qrCode = qRCode;
		QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * L_1 = ___qRCode1;
		__this->set_qrCode_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ActionData__ctor_m8B08E69A4860E12412D164D34977DDF70E26E0C6_AdjustorThunk (RuntimeObject * __this, int32_t ___type0, QRCode_t5AA49003F43DFF79237D84B01B1DAF019ACC7A40 * ___qRCode1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160 * _thisAdjusted = reinterpret_cast<ActionData_t95D0AECB2FF5B95298706F6DC2802B5C20582160 *>(__this + _offset);
	ActionData__ctor_m8B08E69A4860E12412D164D34977DDF70E26E0C6(_thisAdjusted, ___type0, ___qRCode1, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QRCode_set_PhysicalSize_m0A4AFD0FA61E1E75AB70146A601F32920D288BFB_inline (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float PhysicalSize { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CPhysicalSizeU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QRCode_set_CodeText_mB4878FD110C1D5CC31A1902023CE50DC3BAB433A_inline (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string CodeText { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CCodeTextU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* QRCode_get_CodeText_m14CBFF93BBC261D89838E3CD5D2119BF94A3C3FF_inline (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method)
{
	{
		// public string CodeText { get; private set; }
		String_t* L_0 = __this->get_U3CCodeTextU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float QRCode_get_PhysicalSize_m9BAFFDFA74DE09930F8D66F0E37B2E1A6EC15421_inline (QRCode_t6DC04C647BF260229FBDE6AF202AF41EB8C82207 * __this, const RuntimeMethod* method)
{
	{
		// public float PhysicalSize { get; private set; }
		float L_0 = __this->get_U3CPhysicalSizeU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__ticks_3();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QRCodesManager_set_IsTrackerRunning_m37EB90CB0A2D98DA445CD02A3A473D01522C05FB_inline (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsTrackerRunning { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsTrackerRunningU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QRCodesManager_get_IsTrackerRunning_mEB820442D0588EC9382806131768ED2655C8729B_inline (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsTrackerRunning { get; private set; }
		bool L_0 = __this->get_U3CIsTrackerRunningU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QRCodesManager_get_IsSupported_m09F2E18B4C918A98BCF6699EEAA2592A1F3F0C84_inline (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsSupported { get; private set; }
		bool L_0 = __this->get_U3CIsSupportedU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QRCodesManager_set_IsSupported_m8829FFCED6A719B474472C4156D9B92902E1AE18_inline (QRCodesManager_tBCB3D7A6BC74CB41D63EF1A9BA11E112E63F7543 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsSupported { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsSupportedU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mE47F3F438F816C36EF8D857CD4313EDE8E9BA71E_gshared_inline (KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  KeyValuePair_2_get_Key_mE03F9398C8279E092A6E54CA730BEB18E2CBBF53_gshared_inline (KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F * __this, const RuntimeMethod* method)
{
	{
		Guid_t  L_0 = (Guid_t )__this->get_key_0();
		return (Guid_t )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * QRCodeEventArgs_1_get_Data_m6717EA682D9B2B0E3A40930C0516FE686F563934_gshared_inline (QRCodeEventArgs_1_tB170C019EF1E3EB07BEB45B8539005046FCF7AB6 * __this, const RuntimeMethod* method)
{
	{
		// public TData Data { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CDataU3Ek__BackingField_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m812BFFC0DCA11665073AAE686BF416AFF180B9F5_gshared_inline (Queue_1_t8CD7EEDE6D161A8B17EE09C783698181F7F1381F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_gshared_inline (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
