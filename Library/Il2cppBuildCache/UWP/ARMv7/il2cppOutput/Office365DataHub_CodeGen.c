#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Office365DataHub.Manager::GetSomeInformation(System.String,Office365DataHub.Manager/OnGetSomeInformationCompleted)
extern void Manager_GetSomeInformation_m2F80BD36320EF8E79B84491F91291954A665AD32 (void);
// 0x00000002 System.Void Office365DataHub.Manager::.ctor()
extern void Manager__ctor_m4A33B6FAA7CB40D5AD3DA4F36991A477C030268F (void);
// 0x00000003 System.Void Office365DataHub.Manager/OnGetSomeInformationCompleted::.ctor(System.Object,System.IntPtr)
extern void OnGetSomeInformationCompleted__ctor_m65B20003D752D63F4494257A201B8BB1788C9EB5 (void);
// 0x00000004 System.Void Office365DataHub.Manager/OnGetSomeInformationCompleted::Invoke(System.String)
extern void OnGetSomeInformationCompleted_Invoke_mC7B38B0406041831AF4873296369C432D264EA0A (void);
// 0x00000005 System.IAsyncResult Office365DataHub.Manager/OnGetSomeInformationCompleted::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void OnGetSomeInformationCompleted_BeginInvoke_mC47F8D35E7822CCC4BBA61D075413BD49B8B5DB1 (void);
// 0x00000006 System.Void Office365DataHub.Manager/OnGetSomeInformationCompleted::EndInvoke(System.IAsyncResult)
extern void OnGetSomeInformationCompleted_EndInvoke_mF881FAF6FBBF1A08FAF57C0266BDD6420C504F93 (void);
// 0x00000007 System.Void Office365DataHub.Singleton`1::.ctor()
// 0x00000008 T Office365DataHub.Singleton`1::get_Instance()
static Il2CppMethodPointer s_methodPointers[8] = 
{
	Manager_GetSomeInformation_m2F80BD36320EF8E79B84491F91291954A665AD32,
	Manager__ctor_m4A33B6FAA7CB40D5AD3DA4F36991A477C030268F,
	OnGetSomeInformationCompleted__ctor_m65B20003D752D63F4494257A201B8BB1788C9EB5,
	OnGetSomeInformationCompleted_Invoke_mC7B38B0406041831AF4873296369C432D264EA0A,
	OnGetSomeInformationCompleted_BeginInvoke_mC47F8D35E7822CCC4BBA61D075413BD49B8B5DB1,
	OnGetSomeInformationCompleted_EndInvoke_mF881FAF6FBBF1A08FAF57C0266BDD6420C504F93,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[8] = 
{
	3508,
	7110,
	3499,
	5876,
	1650,
	5876,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x02000004, { 0, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[3] = 
{
	{ (Il2CppRGCTXDataType)2, 19278 },
	{ (Il2CppRGCTXDataType)2, 1569 },
	{ (Il2CppRGCTXDataType)3, 75260 },
};
extern const CustomAttributesCacheGenerator g_Office365DataHub_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Office365DataHub_CodeGenModule;
const Il2CppCodeGenModule g_Office365DataHub_CodeGenModule = 
{
	"Office365DataHub.dll",
	8,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	3,
	s_rgctxValues,
	NULL,
	g_Office365DataHub_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
