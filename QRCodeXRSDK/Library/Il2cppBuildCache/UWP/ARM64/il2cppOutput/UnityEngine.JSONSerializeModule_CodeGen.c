#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String UnityEngine.JsonUtility::ToJsonInternal(System.Object,System.Boolean)
extern void JsonUtility_ToJsonInternal_mDAAB37A1A4B7452DD48256B6884A11FB8E48B38D (void);
// 0x00000002 System.Object UnityEngine.JsonUtility::FromJsonInternal(System.String,System.Object,System.Type)
extern void JsonUtility_FromJsonInternal_m7353836E98A52C702E713DBE5E9C431BD8EC830A (void);
// 0x00000003 System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
extern void JsonUtility_ToJson_m624247F6B1FDBD1B02C133B4878E4F3C8CEA30DA (void);
// 0x00000004 T UnityEngine.JsonUtility::FromJson(System.String)
// 0x00000005 System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
extern void JsonUtility_FromJson_m81FC2A7DCB9231E8E201EAD8E160F921B1D2E25C (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	JsonUtility_ToJsonInternal_mDAAB37A1A4B7452DD48256B6884A11FB8E48B38D,
	JsonUtility_FromJsonInternal_m7353836E98A52C702E713DBE5E9C431BD8EC830A,
	JsonUtility_ToJson_m624247F6B1FDBD1B02C133B4878E4F3C8CEA30DA,
	NULL,
	JsonUtility_FromJson_m81FC2A7DCB9231E8E201EAD8E160F921B1D2E25C,
};
static const int32_t s_InvokerIndices[5] = 
{
	4476,
	4194,
	4476,
	-1,
	4475,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000004, { 0, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)1, 201 },
	{ (Il2CppRGCTXDataType)2, 201 },
};
extern const CustomAttributesCacheGenerator g_UnityEngine_JSONSerializeModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule = 
{
	"UnityEngine.JSONSerializeModule.dll",
	5,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	g_UnityEngine_JSONSerializeModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
