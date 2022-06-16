#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71 (void);
// 0x00000002 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromMemory_Internal(System.Byte[],System.UInt32)
extern void AssetBundle_LoadFromMemory_Internal_m8686921676AAF7F9A97F6AD306A49689AC7D5B42 (void);
// 0x00000003 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromMemory(System.Byte[])
extern void AssetBundle_LoadFromMemory_mBD987A63D3D85A01C02CF2FE3987F7AB9C8C0BE5 (void);
static Il2CppMethodPointer s_methodPointers[3] = 
{
	AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71,
	AssetBundle_LoadFromMemory_Internal_m8686921676AAF7F9A97F6AD306A49689AC7D5B42,
	AssetBundle_LoadFromMemory_mBD987A63D3D85A01C02CF2FE3987F7AB9C8C0BE5,
};
static const int32_t s_InvokerIndices[3] = 
{
	7584,
	9878,
	10624,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_AssetBundleModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	3,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_AssetBundleModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
