﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr)
extern void NativeUpdateCallback__ctor_mBCA97F21830E76C5C6422815CEA55013C19E30B6 (void);
// 0x00000002 System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*)
extern void NativeUpdateCallback_Invoke_m323D2546D5B759E75B912EBF7ACF1EC1113DBFCC (void);
// 0x00000003 System.IAsyncResult UnityEngineInternal.Input.NativeUpdateCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*,System.AsyncCallback,System.Object)
extern void NativeUpdateCallback_BeginInvoke_mE1760CCF47E50F8D8955C6031C58BC822A91C6F4 (void);
// 0x00000004 System.Void UnityEngineInternal.Input.NativeUpdateCallback::EndInvoke(System.IAsyncResult)
extern void NativeUpdateCallback_EndInvoke_m79CB9CB0869EF7085B74BD65411E77F8CA98644F (void);
// 0x00000005 System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor()
extern void NativeInputSystem__cctor_m3BC901B5BBA7D392F2E7D8CAECFD776DA9008171 (void);
// 0x00000006 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
extern void NativeInputSystem_NotifyBeforeUpdate_m10163C54D7E8DCFF64B6D2E0E6DC9020DA9EDFAF (void);
// 0x00000007 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.IntPtr)
extern void NativeInputSystem_NotifyUpdate_m3FEEEF44D59A1DF6C8D47515039AEBD3909748C5 (void);
// 0x00000008 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String)
extern void NativeInputSystem_NotifyDeviceDiscovered_mE2A2EE5101C84476F03E375C543C0A90E71ABED4 (void);
// 0x00000009 System.Void UnityEngineInternal.Input.NativeInputSystem::ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean&)
extern void NativeInputSystem_ShouldRunUpdate_m1399A591D0D59B1B4E8F05E26ECA85979583214A (void);
// 0x0000000A System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
extern void NativeInputSystem_set_hasDeviceDiscoveredCallback_m5F071F40EB3C2A0B86913CEDC03F3AA7112EB68B (void);
static Il2CppMethodPointer s_methodPointers[10] = 
{
	NativeUpdateCallback__ctor_mBCA97F21830E76C5C6422815CEA55013C19E30B6,
	NativeUpdateCallback_Invoke_m323D2546D5B759E75B912EBF7ACF1EC1113DBFCC,
	NativeUpdateCallback_BeginInvoke_mE1760CCF47E50F8D8955C6031C58BC822A91C6F4,
	NativeUpdateCallback_EndInvoke_m79CB9CB0869EF7085B74BD65411E77F8CA98644F,
	NativeInputSystem__cctor_m3BC901B5BBA7D392F2E7D8CAECFD776DA9008171,
	NativeInputSystem_NotifyBeforeUpdate_m10163C54D7E8DCFF64B6D2E0E6DC9020DA9EDFAF,
	NativeInputSystem_NotifyUpdate_m3FEEEF44D59A1DF6C8D47515039AEBD3909748C5,
	NativeInputSystem_NotifyDeviceDiscovered_mE2A2EE5101C84476F03E375C543C0A90E71ABED4,
	NativeInputSystem_ShouldRunUpdate_m1399A591D0D59B1B4E8F05E26ECA85979583214A,
	NativeInputSystem_set_hasDeviceDiscoveredCallback_m5F071F40EB3C2A0B86913CEDC03F3AA7112EB68B,
};
static const int32_t s_InvokerIndices[10] = 
{
	1725,
	1536,
	485,
	2885,
	5046,
	4953,
	4655,
	4656,
	4653,
	4961,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_InputModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_InputModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_InputModule_CodeGenModule = 
{
	"UnityEngine.InputModule.dll",
	10,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_InputModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
