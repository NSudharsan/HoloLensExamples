#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.Quaternion UnityEngine.XR.Tango.PoseData::get_rotation()
extern void PoseData_get_rotation_m5A437E71A2A609F49A484158C6D9B6101B53F449_AdjustorThunk (void);
// 0x00000002 UnityEngine.Vector3 UnityEngine.XR.Tango.PoseData::get_position()
extern void PoseData_get_position_m9E2784EAB0B0CAA7973468A26005A7588C0EF7A0_AdjustorThunk (void);
// 0x00000003 System.Boolean UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)
extern void TangoInputTracking_Internal_TryGetPoseAtTime_mCFD0EEF32FD03A6788ED897B43F7F9638F8B3FEC (void);
// 0x00000004 System.Boolean UnityEngine.XR.Tango.TangoInputTracking::TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)
extern void TangoInputTracking_TryGetPoseAtTime_m5283E008A82EC10BF045A678E15B05A405B5C222 (void);
static Il2CppMethodPointer s_methodPointers[4] = 
{
	PoseData_get_rotation_m5A437E71A2A609F49A484158C6D9B6101B53F449_AdjustorThunk,
	PoseData_get_position_m9E2784EAB0B0CAA7973468A26005A7588C0EF7A0_AdjustorThunk,
	TangoInputTracking_Internal_TryGetPoseAtTime_mCFD0EEF32FD03A6788ED897B43F7F9638F8B3FEC,
	TangoInputTracking_TryGetPoseAtTime_m5283E008A82EC10BF045A678E15B05A405B5C222,
};
static const int32_t s_InvokerIndices[4] = 
{
	3433,
	3490,
	4885,
	4885,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_ARModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_ARModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_ARModule_CodeGenModule = 
{
	"UnityEngine.ARModule.dll",
	4,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_ARModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
