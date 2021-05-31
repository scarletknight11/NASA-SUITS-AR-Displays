#include "pch-cpp.hpp"

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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.Byte[]>
struct Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.GameObject>>
struct Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject>>
struct Func_2_t17E02A8033908D0F2F21C06B118E0AF5E37EDAAE;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>>
struct Func_2_tD68283456AE36285845036EDF0144BEB5A437024;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.Extensions.GltfExtension>
struct List_1_t2B45EBE0C27B137EEC238891D56C367806F129F2;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.GameObject>
struct TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject>
struct TaskFactory_1_t7C356EB951EFA7FC3515941950ACA86E3F0E5F3B;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct TaskFactory_1_t5DF73F168C08BC055AC7D02E1778F1ADF2C4CFE3;
// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject>
struct Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfAccessor[]
struct GltfAccessorU5BU5D_t1044D65D4DFA46C9734BB5F6AE0D357F560015A7;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfAnimation[]
struct GltfAnimationU5BU5D_t8B2D77549D5E22BBB909CCCA449A8590FF4B02EA;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfBuffer[]
struct GltfBufferU5BU5D_tFA2733D66E6EEC179388FD011921E75E3C80F88A;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfBufferView[]
struct GltfBufferViewU5BU5D_t34854E0CAD69604E19DF5FE055B238BB01B98808;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfCamera[]
struct GltfCameraU5BU5D_t8CBFE71A898CD4A03BCAB718370D1B382F536C68;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfImage[]
struct GltfImageU5BU5D_tF749ABF77997FA901F5F4FFCE71BA794E15F6234;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfMaterial[]
struct GltfMaterialU5BU5D_t12502301D9579FFCB901BE5A550EE00292DAB91F;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfMesh[]
struct GltfMeshU5BU5D_t3CF0F2BE553D9154066103A0F2D71CA1FCEED2C1;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfNode[]
struct GltfNodeU5BU5D_tB0248B7F6448DDF68DC5B27ED5DAC56B54BA09A5;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfSampler[]
struct GltfSamplerU5BU5D_t8BFBC76485911C65D5547FC33F85B9EC8D246423;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfScene[]
struct GltfSceneU5BU5D_t794EA01AE511CB05D7B8922AFB1933FD98C1CBB4;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfSkin[]
struct GltfSkinU5BU5D_t0FF4ADF0CEC605870E9D1620C64B58D29DDC1C2D;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfTexture[]
struct GltfTextureU5BU5D_t6C6C28A02E0975A04655BEB6D6306F694540AAF2;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfAssetInfo
struct GltfAssetInfo_t4A13A0357A357007C88C5D1E3E004606EAEAEF42;
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject
struct GltfObject_t5302D0C0673855995CA443BD390E910933697D68;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
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
// Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading
struct TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578;
// Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading
struct TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* ConstructGltf_tEAEAD10FA805FB76C7B273EEC7E6631007AED6E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GltfUtility_t93E997E5437F844ABF7F1935BF325AF7F93A6A14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0A0192FA710F18F7767264EFA0D30E80C67917E2;
IL2CPP_EXTERN_C String_t* _stringLiteral0FAC048E5FDFD99C765DD25991703B696DB6D02D;
IL2CPP_EXTERN_C String_t* _stringLiteral80B807265562180D08B57F933B8656F17E58BAC7;
IL2CPP_EXTERN_C String_t* _stringLiteral81DABCE7A00E9EE8710C4BB662CF263893F315DD;
IL2CPP_EXTERN_C String_t* _stringLiteralFF730CEDD21D96583D210F9CFDE9A9458928A5CE;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m39083FB5D60B8C18258F4F3AB73015E6CAC10C72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_mCB215DAC883B97D0A92135E37C4037BC9A1E7269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8F75F12CC59E47D56CF3840D4C62C691BEEB7D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8DCCDF82C1BFD659A089CB04589B8849B7C7DEB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_m4347BDF6FCD41569509CE6DFC08C1144D8DAD2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m887A3B0B2CC006FD70FD11D912790965EA1F04B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA08EC04FE95641E702EC61CF4A536AFB6244FA89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m62C9A3D271C29AB749952F79DE2507CAE1BD237A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC33C2E9C5D38B765E23EB9CA19B9584E9F2154BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m206BF91573B5E68E758C864E002B6D76C82109DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mE7881486E7CB980B4C8766B3A7CE6FEBABF63322_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAE1FE1AFD47C92DF880D5E45386AF557B065238E 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
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

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfProperty
struct GltfProperty_tD98272DE11D3602B99EAFDB7EC4215922F5B2174  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfProperty::Extensions
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___Extensions_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfProperty::Extras
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___Extras_1;

public:
	inline static int32_t get_offset_of_Extensions_0() { return static_cast<int32_t>(offsetof(GltfProperty_tD98272DE11D3602B99EAFDB7EC4215922F5B2174, ___Extensions_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_Extensions_0() const { return ___Extensions_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_Extensions_0() { return &___Extensions_0; }
	inline void set_Extensions_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___Extensions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Extensions_0), (void*)value);
	}

	inline static int32_t get_offset_of_Extras_1() { return static_cast<int32_t>(offsetof(GltfProperty_tD98272DE11D3602B99EAFDB7EC4215922F5B2174, ___Extras_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_Extras_1() const { return ___Extras_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_Extras_1() { return &___Extras_1; }
	inline void set_Extras_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___Extras_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Extras_1), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>
struct TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B, ___m_task_0)); }
	inline Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject>
struct TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023, ___m_task_0)); }
	inline Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3, ___m_task_0)); }
	inline Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
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
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject
struct GltfObject_t5302D0C0673855995CA443BD390E910933697D68  : public GltfProperty_tD98272DE11D3602B99EAFDB7EC4215922F5B2174
{
public:
	// System.String[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::extensionsUsed
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___extensionsUsed_2;
	// System.String[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::extensionsRequired
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___extensionsRequired_3;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfAccessor[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::accessors
	GltfAccessorU5BU5D_t1044D65D4DFA46C9734BB5F6AE0D357F560015A7* ___accessors_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfAnimation[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::animations
	GltfAnimationU5BU5D_t8B2D77549D5E22BBB909CCCA449A8590FF4B02EA* ___animations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfAssetInfo Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::asset
	GltfAssetInfo_t4A13A0357A357007C88C5D1E3E004606EAEAEF42 * ___asset_6;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfBuffer[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::buffers
	GltfBufferU5BU5D_tFA2733D66E6EEC179388FD011921E75E3C80F88A* ___buffers_7;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfBufferView[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::bufferViews
	GltfBufferViewU5BU5D_t34854E0CAD69604E19DF5FE055B238BB01B98808* ___bufferViews_8;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfCamera[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::cameras
	GltfCameraU5BU5D_t8CBFE71A898CD4A03BCAB718370D1B382F536C68* ___cameras_9;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfImage[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::images
	GltfImageU5BU5D_tF749ABF77997FA901F5F4FFCE71BA794E15F6234* ___images_10;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfMaterial[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::materials
	GltfMaterialU5BU5D_t12502301D9579FFCB901BE5A550EE00292DAB91F* ___materials_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfMesh[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::meshes
	GltfMeshU5BU5D_t3CF0F2BE553D9154066103A0F2D71CA1FCEED2C1* ___meshes_12;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfNode[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::nodes
	GltfNodeU5BU5D_tB0248B7F6448DDF68DC5B27ED5DAC56B54BA09A5* ___nodes_13;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfSampler[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::samplers
	GltfSamplerU5BU5D_t8BFBC76485911C65D5547FC33F85B9EC8D246423* ___samplers_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::scene
	int32_t ___scene_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfScene[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::scenes
	GltfSceneU5BU5D_t794EA01AE511CB05D7B8922AFB1933FD98C1CBB4* ___scenes_16;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfSkin[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::skins
	GltfSkinU5BU5D_t0FF4ADF0CEC605870E9D1620C64B58D29DDC1C2D* ___skins_17;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfTexture[] Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::textures
	GltfTextureU5BU5D_t6C6C28A02E0975A04655BEB6D6306F694540AAF2* ___textures_18;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_19;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::<Uri>k__BackingField
	String_t* ___U3CUriU3Ek__BackingField_20;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::<GameObjectReference>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectReferenceU3Ek__BackingField_21;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.Extensions.GltfExtension> Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::<RegisteredExtensions>k__BackingField
	List_1_t2B45EBE0C27B137EEC238891D56C367806F129F2 * ___U3CRegisteredExtensionsU3Ek__BackingField_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::<UseBackgroundThread>k__BackingField
	bool ___U3CUseBackgroundThreadU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_extensionsUsed_2() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___extensionsUsed_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_extensionsUsed_2() const { return ___extensionsUsed_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_extensionsUsed_2() { return &___extensionsUsed_2; }
	inline void set_extensionsUsed_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___extensionsUsed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsUsed_2), (void*)value);
	}

	inline static int32_t get_offset_of_extensionsRequired_3() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___extensionsRequired_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_extensionsRequired_3() const { return ___extensionsRequired_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_extensionsRequired_3() { return &___extensionsRequired_3; }
	inline void set_extensionsRequired_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___extensionsRequired_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsRequired_3), (void*)value);
	}

	inline static int32_t get_offset_of_accessors_4() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___accessors_4)); }
	inline GltfAccessorU5BU5D_t1044D65D4DFA46C9734BB5F6AE0D357F560015A7* get_accessors_4() const { return ___accessors_4; }
	inline GltfAccessorU5BU5D_t1044D65D4DFA46C9734BB5F6AE0D357F560015A7** get_address_of_accessors_4() { return &___accessors_4; }
	inline void set_accessors_4(GltfAccessorU5BU5D_t1044D65D4DFA46C9734BB5F6AE0D357F560015A7* value)
	{
		___accessors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accessors_4), (void*)value);
	}

	inline static int32_t get_offset_of_animations_5() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___animations_5)); }
	inline GltfAnimationU5BU5D_t8B2D77549D5E22BBB909CCCA449A8590FF4B02EA* get_animations_5() const { return ___animations_5; }
	inline GltfAnimationU5BU5D_t8B2D77549D5E22BBB909CCCA449A8590FF4B02EA** get_address_of_animations_5() { return &___animations_5; }
	inline void set_animations_5(GltfAnimationU5BU5D_t8B2D77549D5E22BBB909CCCA449A8590FF4B02EA* value)
	{
		___animations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animations_5), (void*)value);
	}

	inline static int32_t get_offset_of_asset_6() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___asset_6)); }
	inline GltfAssetInfo_t4A13A0357A357007C88C5D1E3E004606EAEAEF42 * get_asset_6() const { return ___asset_6; }
	inline GltfAssetInfo_t4A13A0357A357007C88C5D1E3E004606EAEAEF42 ** get_address_of_asset_6() { return &___asset_6; }
	inline void set_asset_6(GltfAssetInfo_t4A13A0357A357007C88C5D1E3E004606EAEAEF42 * value)
	{
		___asset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asset_6), (void*)value);
	}

	inline static int32_t get_offset_of_buffers_7() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___buffers_7)); }
	inline GltfBufferU5BU5D_tFA2733D66E6EEC179388FD011921E75E3C80F88A* get_buffers_7() const { return ___buffers_7; }
	inline GltfBufferU5BU5D_tFA2733D66E6EEC179388FD011921E75E3C80F88A** get_address_of_buffers_7() { return &___buffers_7; }
	inline void set_buffers_7(GltfBufferU5BU5D_tFA2733D66E6EEC179388FD011921E75E3C80F88A* value)
	{
		___buffers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffers_7), (void*)value);
	}

	inline static int32_t get_offset_of_bufferViews_8() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___bufferViews_8)); }
	inline GltfBufferViewU5BU5D_t34854E0CAD69604E19DF5FE055B238BB01B98808* get_bufferViews_8() const { return ___bufferViews_8; }
	inline GltfBufferViewU5BU5D_t34854E0CAD69604E19DF5FE055B238BB01B98808** get_address_of_bufferViews_8() { return &___bufferViews_8; }
	inline void set_bufferViews_8(GltfBufferViewU5BU5D_t34854E0CAD69604E19DF5FE055B238BB01B98808* value)
	{
		___bufferViews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferViews_8), (void*)value);
	}

	inline static int32_t get_offset_of_cameras_9() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___cameras_9)); }
	inline GltfCameraU5BU5D_t8CBFE71A898CD4A03BCAB718370D1B382F536C68* get_cameras_9() const { return ___cameras_9; }
	inline GltfCameraU5BU5D_t8CBFE71A898CD4A03BCAB718370D1B382F536C68** get_address_of_cameras_9() { return &___cameras_9; }
	inline void set_cameras_9(GltfCameraU5BU5D_t8CBFE71A898CD4A03BCAB718370D1B382F536C68* value)
	{
		___cameras_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameras_9), (void*)value);
	}

	inline static int32_t get_offset_of_images_10() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___images_10)); }
	inline GltfImageU5BU5D_tF749ABF77997FA901F5F4FFCE71BA794E15F6234* get_images_10() const { return ___images_10; }
	inline GltfImageU5BU5D_tF749ABF77997FA901F5F4FFCE71BA794E15F6234** get_address_of_images_10() { return &___images_10; }
	inline void set_images_10(GltfImageU5BU5D_tF749ABF77997FA901F5F4FFCE71BA794E15F6234* value)
	{
		___images_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___images_10), (void*)value);
	}

	inline static int32_t get_offset_of_materials_11() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___materials_11)); }
	inline GltfMaterialU5BU5D_t12502301D9579FFCB901BE5A550EE00292DAB91F* get_materials_11() const { return ___materials_11; }
	inline GltfMaterialU5BU5D_t12502301D9579FFCB901BE5A550EE00292DAB91F** get_address_of_materials_11() { return &___materials_11; }
	inline void set_materials_11(GltfMaterialU5BU5D_t12502301D9579FFCB901BE5A550EE00292DAB91F* value)
	{
		___materials_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materials_11), (void*)value);
	}

	inline static int32_t get_offset_of_meshes_12() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___meshes_12)); }
	inline GltfMeshU5BU5D_t3CF0F2BE553D9154066103A0F2D71CA1FCEED2C1* get_meshes_12() const { return ___meshes_12; }
	inline GltfMeshU5BU5D_t3CF0F2BE553D9154066103A0F2D71CA1FCEED2C1** get_address_of_meshes_12() { return &___meshes_12; }
	inline void set_meshes_12(GltfMeshU5BU5D_t3CF0F2BE553D9154066103A0F2D71CA1FCEED2C1* value)
	{
		___meshes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_12), (void*)value);
	}

	inline static int32_t get_offset_of_nodes_13() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___nodes_13)); }
	inline GltfNodeU5BU5D_tB0248B7F6448DDF68DC5B27ED5DAC56B54BA09A5* get_nodes_13() const { return ___nodes_13; }
	inline GltfNodeU5BU5D_tB0248B7F6448DDF68DC5B27ED5DAC56B54BA09A5** get_address_of_nodes_13() { return &___nodes_13; }
	inline void set_nodes_13(GltfNodeU5BU5D_tB0248B7F6448DDF68DC5B27ED5DAC56B54BA09A5* value)
	{
		___nodes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodes_13), (void*)value);
	}

	inline static int32_t get_offset_of_samplers_14() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___samplers_14)); }
	inline GltfSamplerU5BU5D_t8BFBC76485911C65D5547FC33F85B9EC8D246423* get_samplers_14() const { return ___samplers_14; }
	inline GltfSamplerU5BU5D_t8BFBC76485911C65D5547FC33F85B9EC8D246423** get_address_of_samplers_14() { return &___samplers_14; }
	inline void set_samplers_14(GltfSamplerU5BU5D_t8BFBC76485911C65D5547FC33F85B9EC8D246423* value)
	{
		___samplers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplers_14), (void*)value);
	}

	inline static int32_t get_offset_of_scene_15() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___scene_15)); }
	inline int32_t get_scene_15() const { return ___scene_15; }
	inline int32_t* get_address_of_scene_15() { return &___scene_15; }
	inline void set_scene_15(int32_t value)
	{
		___scene_15 = value;
	}

	inline static int32_t get_offset_of_scenes_16() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___scenes_16)); }
	inline GltfSceneU5BU5D_t794EA01AE511CB05D7B8922AFB1933FD98C1CBB4* get_scenes_16() const { return ___scenes_16; }
	inline GltfSceneU5BU5D_t794EA01AE511CB05D7B8922AFB1933FD98C1CBB4** get_address_of_scenes_16() { return &___scenes_16; }
	inline void set_scenes_16(GltfSceneU5BU5D_t794EA01AE511CB05D7B8922AFB1933FD98C1CBB4* value)
	{
		___scenes_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scenes_16), (void*)value);
	}

	inline static int32_t get_offset_of_skins_17() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___skins_17)); }
	inline GltfSkinU5BU5D_t0FF4ADF0CEC605870E9D1620C64B58D29DDC1C2D* get_skins_17() const { return ___skins_17; }
	inline GltfSkinU5BU5D_t0FF4ADF0CEC605870E9D1620C64B58D29DDC1C2D** get_address_of_skins_17() { return &___skins_17; }
	inline void set_skins_17(GltfSkinU5BU5D_t0FF4ADF0CEC605870E9D1620C64B58D29DDC1C2D* value)
	{
		___skins_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skins_17), (void*)value);
	}

	inline static int32_t get_offset_of_textures_18() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___textures_18)); }
	inline GltfTextureU5BU5D_t6C6C28A02E0975A04655BEB6D6306F694540AAF2* get_textures_18() const { return ___textures_18; }
	inline GltfTextureU5BU5D_t6C6C28A02E0975A04655BEB6D6306F694540AAF2** get_address_of_textures_18() { return &___textures_18; }
	inline void set_textures_18(GltfTextureU5BU5D_t6C6C28A02E0975A04655BEB6D6306F694540AAF2* value)
	{
		___textures_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textures_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___U3CNameU3Ek__BackingField_19)); }
	inline String_t* get_U3CNameU3Ek__BackingField_19() const { return ___U3CNameU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_19() { return &___U3CNameU3Ek__BackingField_19; }
	inline void set_U3CNameU3Ek__BackingField_19(String_t* value)
	{
		___U3CNameU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUriU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___U3CUriU3Ek__BackingField_20)); }
	inline String_t* get_U3CUriU3Ek__BackingField_20() const { return ___U3CUriU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CUriU3Ek__BackingField_20() { return &___U3CUriU3Ek__BackingField_20; }
	inline void set_U3CUriU3Ek__BackingField_20(String_t* value)
	{
		___U3CUriU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUriU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectReferenceU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___U3CGameObjectReferenceU3Ek__BackingField_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectReferenceU3Ek__BackingField_21() const { return ___U3CGameObjectReferenceU3Ek__BackingField_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectReferenceU3Ek__BackingField_21() { return &___U3CGameObjectReferenceU3Ek__BackingField_21; }
	inline void set_U3CGameObjectReferenceU3Ek__BackingField_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectReferenceU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectReferenceU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRegisteredExtensionsU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___U3CRegisteredExtensionsU3Ek__BackingField_22)); }
	inline List_1_t2B45EBE0C27B137EEC238891D56C367806F129F2 * get_U3CRegisteredExtensionsU3Ek__BackingField_22() const { return ___U3CRegisteredExtensionsU3Ek__BackingField_22; }
	inline List_1_t2B45EBE0C27B137EEC238891D56C367806F129F2 ** get_address_of_U3CRegisteredExtensionsU3Ek__BackingField_22() { return &___U3CRegisteredExtensionsU3Ek__BackingField_22; }
	inline void set_U3CRegisteredExtensionsU3Ek__BackingField_22(List_1_t2B45EBE0C27B137EEC238891D56C367806F129F2 * value)
	{
		___U3CRegisteredExtensionsU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegisteredExtensionsU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUseBackgroundThreadU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GltfObject_t5302D0C0673855995CA443BD390E910933697D68, ___U3CUseBackgroundThreadU3Ek__BackingField_23)); }
	inline bool get_U3CUseBackgroundThreadU3Ek__BackingField_23() const { return ___U3CUseBackgroundThreadU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CUseBackgroundThreadU3Ek__BackingField_23() { return &___U3CUseBackgroundThreadU3Ek__BackingField_23; }
	inline void set_U3CUseBackgroundThreadU3Ek__BackingField_23(bool value)
	{
		___U3CUseBackgroundThreadU3Ek__BackingField_23 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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


// Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F 
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Response::<Successful>k__BackingField
	bool ___U3CSuccessfulU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Response::responseBody
	String_t* ___responseBody_1;
	// System.Func`1<System.String> Microsoft.MixedReality.Toolkit.Utilities.Response::responseBodyAction
	Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___responseBodyAction_2;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.Response::responseData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___responseData_3;
	// System.Func`1<System.Byte[]> Microsoft.MixedReality.Toolkit.Utilities.Response::responseDataAction
	Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * ___responseDataAction_4;
	// System.Int64 Microsoft.MixedReality.Toolkit.Utilities.Response::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSuccessfulU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F, ___U3CSuccessfulU3Ek__BackingField_0)); }
	inline bool get_U3CSuccessfulU3Ek__BackingField_0() const { return ___U3CSuccessfulU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CSuccessfulU3Ek__BackingField_0() { return &___U3CSuccessfulU3Ek__BackingField_0; }
	inline void set_U3CSuccessfulU3Ek__BackingField_0(bool value)
	{
		___U3CSuccessfulU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_responseBody_1() { return static_cast<int32_t>(offsetof(Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F, ___responseBody_1)); }
	inline String_t* get_responseBody_1() const { return ___responseBody_1; }
	inline String_t** get_address_of_responseBody_1() { return &___responseBody_1; }
	inline void set_responseBody_1(String_t* value)
	{
		___responseBody_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBody_1), (void*)value);
	}

	inline static int32_t get_offset_of_responseBodyAction_2() { return static_cast<int32_t>(offsetof(Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F, ___responseBodyAction_2)); }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * get_responseBodyAction_2() const { return ___responseBodyAction_2; }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 ** get_address_of_responseBodyAction_2() { return &___responseBodyAction_2; }
	inline void set_responseBodyAction_2(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * value)
	{
		___responseBodyAction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBodyAction_2), (void*)value);
	}

	inline static int32_t get_offset_of_responseData_3() { return static_cast<int32_t>(offsetof(Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F, ___responseData_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_responseData_3() const { return ___responseData_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_responseData_3() { return &___responseData_3; }
	inline void set_responseData_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___responseData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseData_3), (void*)value);
	}

	inline static int32_t get_offset_of_responseDataAction_4() { return static_cast<int32_t>(offsetof(Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F, ___responseDataAction_4)); }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * get_responseDataAction_4() const { return ___responseDataAction_4; }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 ** get_address_of_responseDataAction_4() { return &___responseDataAction_4; }
	inline void set_responseDataAction_4(Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * value)
	{
		___responseDataAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseDataAction_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseCodeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F, ___U3CResponseCodeU3Ek__BackingField_5)); }
	inline int64_t get_U3CResponseCodeU3Ek__BackingField_5() const { return ___U3CResponseCodeU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CResponseCodeU3Ek__BackingField_5() { return &___U3CResponseCodeU3Ek__BackingField_5; }
	inline void set_U3CResponseCodeU3Ek__BackingField_5(int64_t value)
	{
		___U3CResponseCodeU3Ek__BackingField_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F_marshaled_pinvoke
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	char* ___responseBody_1;
	Il2CppMethodPointer ___responseBodyAction_2;
	Il2CppSafeArray/*NONE*/* ___responseData_3;
	Il2CppMethodPointer ___responseDataAction_4;
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F_marshaled_com
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	Il2CppChar* ___responseBody_1;
	Il2CppMethodPointer ___responseBodyAction_2;
	Il2CppSafeArray/*NONE*/* ___responseData_3;
	Il2CppMethodPointer ___responseDataAction_4;
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
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

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
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
struct Exception_t  : public RuntimeObject
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

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
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


// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C, ___m_result_40)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_result_40() const { return ___m_result_40; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject>
struct Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B, ___m_result_40)); }
	inline GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * get_m_result_40() const { return ___m_result_40; }
	inline GltfObject_t5302D0C0673855995CA443BD390E910933697D68 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t7C356EB951EFA7FC3515941950ACA86E3F0E5F3B * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t17E02A8033908D0F2F21C06B118E0AF5E37EDAAE * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t7C356EB951EFA7FC3515941950ACA86E3F0E5F3B * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t7C356EB951EFA7FC3515941950ACA86E3F0E5F3B ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t7C356EB951EFA7FC3515941950ACA86E3F0E5F3B * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t17E02A8033908D0F2F21C06B118E0AF5E37EDAAE * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t17E02A8033908D0F2F21C06B118E0AF5E37EDAAE ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t17E02A8033908D0F2F21C06B118E0AF5E37EDAAE * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299, ___m_result_40)); }
	inline Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  get_m_result_40() const { return ___m_result_40; }
	inline Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseData_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseDataAction_4), (void*)NULL);
		#endif
	}
};

struct Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t5DF73F168C08BC055AC7D02E1778F1ADF2C4CFE3 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tD68283456AE36285845036EDF0144BEB5A437024 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t5DF73F168C08BC055AC7D02E1778F1ADF2C4CFE3 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t5DF73F168C08BC055AC7D02E1778F1ADF2C4CFE3 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t5DF73F168C08BC055AC7D02E1778F1ADF2C4CFE3 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tD68283456AE36285845036EDF0144BEB5A437024 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tD68283456AE36285845036EDF0144BEB5A437024 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tD68283456AE36285845036EDF0144BEB5A437024 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1
struct U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1::<>4__this
	TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578 * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Response Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1::<response>5__2
	Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  ___U3CresponseU3E5__2_3;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1::<gltfObject>5__3
	GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * ___U3CgltfObjectU3E5__3_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1::<>u__1
	TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1::<>u__2
	TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6, ___U3CU3E4__this_2)); }
	inline TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6, ___U3CresponseU3E5__2_3)); }
	inline Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  get_U3CresponseU3E5__2_3() const { return ___U3CresponseU3E5__2_3; }
	inline Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F * get_address_of_U3CresponseU3E5__2_3() { return &___U3CresponseU3E5__2_3; }
	inline void set_U3CresponseU3E5__2_3(Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  value)
	{
		___U3CresponseU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseData_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseDataAction_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CgltfObjectU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6, ___U3CgltfObjectU3E5__3_4)); }
	inline GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * get_U3CgltfObjectU3E5__3_4() const { return ___U3CgltfObjectU3E5__3_4; }
	inline GltfObject_t5302D0C0673855995CA443BD390E910933697D68 ** get_address_of_U3CgltfObjectU3E5__3_4() { return &___U3CgltfObjectU3E5__3_4; }
	inline void set_U3CgltfObjectU3E5__3_4(GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * value)
	{
		___U3CgltfObjectU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgltfObjectU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6, ___U3CU3Eu__2_6)); }
	inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7
struct U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7::<>4__this
	TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7::<gltfObject>5__2
	GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * ___U3CgltfObjectU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject> Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7::<>u__1
	TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11, ___U3CU3E4__this_2)); }
	inline TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgltfObjectU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11, ___U3CgltfObjectU3E5__2_3)); }
	inline GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * get_U3CgltfObjectU3E5__2_3() const { return ___U3CgltfObjectU3E5__2_3; }
	inline GltfObject_t5302D0C0673855995CA443BD390E910933697D68 ** get_address_of_U3CgltfObjectU3E5__2_3() { return &___U3CgltfObjectU3E5__2_3; }
	inline void set_U3CgltfObjectU3E5__2_3(GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * value)
	{
		___U3CgltfObjectU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgltfObjectU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading
struct TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading::uri
	String_t* ___uri_4;

public:
	inline static int32_t get_offset_of_uri_4() { return static_cast<int32_t>(offsetof(TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578, ___uri_4)); }
	inline String_t* get_uri_4() const { return ___uri_4; }
	inline String_t** get_address_of_uri_4() { return &___uri_4; }
	inline void set_uri_4(String_t* value)
	{
		___uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading
struct TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading::relativePath
	String_t* ___relativePath_4;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading::ScaleFactor
	float ___ScaleFactor_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading::DebugText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___DebugText_6;

public:
	inline static int32_t get_offset_of_relativePath_4() { return static_cast<int32_t>(offsetof(TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A, ___relativePath_4)); }
	inline String_t* get_relativePath_4() const { return ___relativePath_4; }
	inline String_t** get_address_of_relativePath_4() { return &___relativePath_4; }
	inline void set_relativePath_4(String_t* value)
	{
		___relativePath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___relativePath_4), (void*)value);
	}

	inline static int32_t get_offset_of_ScaleFactor_5() { return static_cast<int32_t>(offsetof(TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A, ___ScaleFactor_5)); }
	inline float get_ScaleFactor_5() const { return ___ScaleFactor_5; }
	inline float* get_address_of_ScaleFactor_5() { return &___ScaleFactor_5; }
	inline void set_ScaleFactor_5(float value)
	{
		___ScaleFactor_5 = value;
	}

	inline static int32_t get_offset_of_DebugText_6() { return static_cast<int32_t>(offsetof(TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A, ___DebugText_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_DebugText_6() const { return ___DebugText_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_DebugText_6() { return &___DebugText_6; }
	inline void set_DebugText_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___DebugText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugText_6), (void*)value);
	}
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


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8DCCDF82C1BFD659A089CB04589B8849B7C7DEB9_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_m4347BDF6FCD41569509CE6DFC08C1144D8DAD2BB_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3  Task_1_GetAwaiter_mE7881486E7CB980B4C8766B3A7CE6FEBABF63322_gshared (Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m62C9A3D271C29AB749952F79DE2507CAE1BD237A_gshared (TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m39083FB5D60B8C18258F4F3AB73015E6CAC10C72_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 * ___awaiter0, U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  TaskAwaiter_1_GetResult_mA08EC04FE95641E702EC61CF4A536AFB6244FA89_gshared (TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_mF07E432B720F5BADC53D424AF9A96E909BEAF182_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_m1A8A28AC27D3195820089BCEA3E7FFC172CE02FB_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 * ___stateMachine1, const RuntimeMethod* method);

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8DCCDF82C1BFD659A089CB04589B8849B7C7DEB9 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8DCCDF82C1BFD659A089CB04589B8849B7C7DEB9_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.StringExtensions::NormalizeSeparators(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtensions_NormalizeSeparators_m5DD054B7D69B3C99FE476D11573DE8E25C76BCC5 (String_t* ___path0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.String System.IO.Path::GetFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPath_m4AECE56CB0187AD8375137200EDA24AE4F317963 (String_t* ___path0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading::get_RelativePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TestGltfLoading_get_RelativePath_m53D4B4BBB341B808686ED4593A20B9ABD948FE78 (TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * __this, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_m4347BDF6FCD41569509CE6DFC08C1144D8DAD2BB (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_m4347BDF6FCD41569509CE6DFC08C1144D8DAD2BB_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest::GetAsync(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32,UnityEngine.Networking.DownloadHandler,System.Boolean,UnityEngine.Networking.CertificateHandler,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299 * Rest_GetAsync_m28561A077774AFD4E806153A72FA30BD3FBC14B3 (String_t* ___query0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, int32_t ___timeout2, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___downloadHandler3, bool ___readResponseData4, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___certificateHandler5, bool ___disposeCertificateHandlerOnDispose6, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetAwaiter()
inline TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3  Task_1_GetAwaiter_mE7881486E7CB980B4C8766B3A7CE6FEBABF63322 (Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3  (*) (Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299 *, const RuntimeMethod*))Task_1_GetAwaiter_mE7881486E7CB980B4C8766B3A7CE6FEBABF63322_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m62C9A3D271C29AB749952F79DE2507CAE1BD237A (TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m62C9A3D271C29AB749952F79DE2507CAE1BD237A_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m39083FB5D60B8C18258F4F3AB73015E6CAC10C72 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 * ___awaiter0, U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 *, U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m39083FB5D60B8C18258F4F3AB73015E6CAC10C72_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetResult()
inline Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  TaskAwaiter_1_GetResult_mA08EC04FE95641E702EC61CF4A536AFB6244FA89 (TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 * __this, const RuntimeMethod* method)
{
	return ((  Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  (*) (TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA08EC04FE95641E702EC61CF4A536AFB6244FA89_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Response::get_Successful()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Response_get_Successful_m084F29E9C7EEA9EB39C6B54E903145F04E3403ED_inline (Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.Response::get_ResponseData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Response_get_ResponseData_m56F68445EEAA6BB673C58885C310CEDF2938BDE7 (Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject Microsoft.MixedReality.Toolkit.Utilities.Gltf.Serialization.GltfUtility::GetGltfObjectFromGlb(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * GltfUtility_GetGltfObjectFromGlb_m121711DE77D3BFD2AAAB60849E09EB72E8822EE2 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___glbData0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Utilities.Gltf.Serialization.ConstructGltf::ConstructAsync(Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * ConstructGltf_ConstructAsync_m3E519AB41F9B237D922285AB736FF76FEC292547 (GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * ___gltfObject0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<UnityEngine.GameObject>::GetAwaiter()
inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631 (Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  (*) (Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>,Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8F75F12CC59E47D56CF3840D4C62C691BEEB7D33 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * ___awaiter0, U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_mF07E432B720F5BADC53D424AF9A96E909BEAF182_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>::GetResult()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2 (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_MoveNext_mD2433ED03D24800F122F312C1F94C8FF6A43C53D (U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_SetStateMachine_mC8613ABB063CFA77854A27CCAF46F1F3250D1B53 (U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading::get_AbsolutePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TestGltfLoading_get_AbsolutePath_m736C6EAE86B6B051ED4F99F865B166CA509D425E (TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * __this, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject> Microsoft.MixedReality.Toolkit.Utilities.Gltf.Serialization.GltfUtility::ImportGltfObjectFromPathAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B * GltfUtility_ImportGltfObjectFromPathAsync_mD79DBF21A9C0335A877DB2AD3E2B29240D98BBD3 (String_t* ___uri0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject>::GetAwaiter()
inline TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023  Task_1_GetAwaiter_m206BF91573B5E68E758C864E002B6D76C82109DB (Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023  (*) (Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC33C2E9C5D38B765E23EB9CA19B9584E9F2154BD (TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject>,Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_mCB215DAC883B97D0A92135E37C4037BC9A1E7269 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 * ___awaiter0, U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 *, U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_m1A8A28AC27D3195820089BCEA3E7FFC172CE02FB_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject>::GetResult()
inline GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * TaskAwaiter_1_GetResult_m887A3B0B2CC006FD70FD11D912790965EA1F04B1 (TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 * __this, const RuntimeMethod* method)
{
	return ((  GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * (*) (TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfObject::get_GameObjectReference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GltfObject_get_GameObjectReference_m3390D940BF4210863D4D326F333B9AE515A15B86_inline (GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7_MoveNext_mECE852746BCE6CD6FF46C32E9892E8B1BEE278AB (U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7_SetStateMachine_mA9FDE81AC3EE1A5028D0B0D22B97D054A6FBE0A3 (U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestGlbLoading_Start_m4506F172D3A38FC517B71F066F0F0503C269FE22 (TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8DCCDF82C1BFD659A089CB04589B8849B7C7DEB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8DCCDF82C1BFD659A089CB04589B8849B7C7DEB9((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8DCCDF82C1BFD659A089CB04589B8849B7C7DEB9_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestGlbLoading__ctor_m0789B948B5B8FEC788D2D0E08C7A4E46006EEEA9 (TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string uri = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_uri_4(L_0);
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
// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading::get_RelativePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TestGltfLoading_get_RelativePath_m53D4B4BBB341B808686ED4593A20B9ABD948FE78 (TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * __this, const RuntimeMethod* method)
{
	{
		// public string RelativePath => relativePath.NormalizeSeparators();
		String_t* L_0 = __this->get_relativePath_4();
		String_t* L_1;
		L_1 = StringExtensions_NormalizeSeparators_m5DD054B7D69B3C99FE476D11573DE8E25C76BCC5(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading::get_AbsolutePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TestGltfLoading_get_AbsolutePath_m736C6EAE86B6B051ED4F99F865B166CA509D425E (TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string AbsolutePath => Path.Combine(Path.GetFullPath(Application.streamingAssetsPath), RelativePath);
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetFullPath_m4AECE56CB0187AD8375137200EDA24AE4F317963(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = TestGltfLoading_get_RelativePath_m53D4B4BBB341B808686ED4593A20B9ABD948FE78(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestGltfLoading_Start_m5859E2027B34C32AA633CC4CAF4598F9758F8267 (TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_m4347BDF6FCD41569509CE6DFC08C1144D8DAD2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_m4347BDF6FCD41569509CE6DFC08C1144D8DAD2BB((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_m4347BDF6FCD41569509CE6DFC08C1144D8DAD2BB_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestGltfLoading__ctor_mCD86F4B9B83C02D710296DCF0688B57DA3B3F5BC (TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81DABCE7A00E9EE8710C4BB662CF263893F315DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string relativePath = "GltfModels/Lantern/glTF/Lantern.gltf";
		__this->set_relativePath_4(_stringLiteral81DABCE7A00E9EE8710C4BB662CF263893F315DD);
		// private float ScaleFactor = 1.0f;
		__this->set_ScaleFactor_5((1.0f));
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_MoveNext_mD2433ED03D24800F122F312C1F94C8FF6A43C53D (U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m39083FB5D60B8C18258F4F3AB73015E6CAC10C72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8F75F12CC59E47D56CF3840D4C62C691BEEB7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructGltf_tEAEAD10FA805FB76C7B273EEC7E6631007AED6E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GltfUtility_t93E997E5437F844ABF7F1935BF325AF7F93A6A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA08EC04FE95641E702EC61CF4A536AFB6244FA89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m62C9A3D271C29AB749952F79DE2507CAE1BD237A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mE7881486E7CB980B4C8766B3A7CE6FEBABF63322_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A0192FA710F18F7767264EFA0D30E80C67917E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAC048E5FDFD99C765DD25991703B696DB6D02D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578 * V_1 = NULL;
	Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 9> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00e1;
			}
		}

IL_0018:
		{
			// Response response = new Response();
			Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F * L_4 = __this->get_address_of_U3CresponseU3E5__2_3();
			il2cpp_codegen_initobj(L_4, sizeof(Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F ));
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_006b;
				}
			}

IL_0028:
			{
				// response = await Utilities.Rest.GetAsync(uri, readResponseData: true);
				TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578 * L_6 = V_1;
				NullCheck(L_6);
				String_t* L_7 = L_6->get_uri_4();
				Task_1_t6FCCE11B3370FF5F979899901EF021E347D36299 * L_8;
				L_8 = Rest_GetAsync_m28561A077774AFD4E806153A72FA30BD3FBC14B3(L_7, (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL, (-1), (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *)NULL, (bool)1, (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E *)NULL, (bool)1, /*hidden argument*/NULL);
				NullCheck(L_8);
				TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3  L_9;
				L_9 = Task_1_GetAwaiter_mE7881486E7CB980B4C8766B3A7CE6FEBABF63322(L_8, /*hidden argument*/Task_1_GetAwaiter_mE7881486E7CB980B4C8766B3A7CE6FEBABF63322_RuntimeMethod_var);
				V_3 = L_9;
				bool L_10;
				L_10 = TaskAwaiter_1_get_IsCompleted_m62C9A3D271C29AB749952F79DE2507CAE1BD237A((TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m62C9A3D271C29AB749952F79DE2507CAE1BD237A_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0087;
				}
			}

IL_0048:
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->set_U3CU3E1__state_0(L_11);
				TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3  L_12 = V_3;
				__this->set_U3CU3Eu__1_5(L_12);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m39083FB5D60B8C18258F4F3AB73015E6CAC10C72((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_13, (TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 *)(&V_3), (U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m39083FB5D60B8C18258F4F3AB73015E6CAC10C72_RuntimeMethod_var);
				goto IL_01d3;
			}

IL_006b:
			{
				TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3  L_14 = __this->get_U3CU3Eu__1_5();
				V_3 = L_14;
				TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 * L_15 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 ));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
			}

IL_0087:
			{
				Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  L_17;
				L_17 = TaskAwaiter_1_GetResult_mA08EC04FE95641E702EC61CF4A536AFB6244FA89((TaskAwaiter_1_t640188FCF76FE5A53B37BB0BD9A7EC3F3066E4A3 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mA08EC04FE95641E702EC61CF4A536AFB6244FA89_RuntimeMethod_var);
				V_2 = L_17;
				Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F  L_18 = V_2;
				__this->set_U3CresponseU3E5__2_3(L_18);
				// }
				goto IL_00a4;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0098;
			}
			throw e;
		}

CATCH_0098:
		{ // begin catch(System.Exception)
			// Debug.LogError(e.Message);
			NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
			String_t* L_19;
			L_19 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_19, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a4;
		} // end catch (depth: 2)

IL_00a4:
		{
			// if (!response.Successful)
			Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F * L_20 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_21;
			L_21 = Response_get_Successful_m084F29E9C7EEA9EB39C6B54E903145F04E3403ED_inline((Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F *)L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00cb;
			}
		}

IL_00b1:
		{
			// Debug.LogError($"Failed to get glb model from {uri}");
			TestGlbLoading_tCCFF9CF109392DDC24089F1E4082F92AE24CB578 * L_22 = V_1;
			NullCheck(L_22);
			String_t* L_23 = L_22->get_uri_4();
			String_t* L_24;
			L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0A0192FA710F18F7767264EFA0D30E80C67917E2, L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_24, /*hidden argument*/NULL);
			// return;
			goto IL_01ad;
		}

IL_00cb:
		{
			// var gltfObject = GltfUtility.GetGltfObjectFromGlb(response.ResponseData);
			Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F * L_25 = __this->get_address_of_U3CresponseU3E5__2_3();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
			L_26 = Response_get_ResponseData_m56F68445EEAA6BB673C58885C310CEDF2938BDE7((Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F *)L_25, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GltfUtility_t93E997E5437F844ABF7F1935BF325AF7F93A6A14_il2cpp_TypeInfo_var);
			GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * L_27;
			L_27 = GltfUtility_GetGltfObjectFromGlb_m121711DE77D3BFD2AAAB60849E09EB72E8822EE2(L_26, /*hidden argument*/NULL);
			__this->set_U3CgltfObjectU3E5__3_4(L_27);
		}

IL_00e1:
		{
		}

IL_00e2:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_28 = V_0;
				if ((((int32_t)L_28) == ((int32_t)1)))
				{
					goto IL_0125;
				}
			}

IL_00e6:
			{
				// await gltfObject.ConstructAsync();
				GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * L_29 = __this->get_U3CgltfObjectU3E5__3_4();
				IL2CPP_RUNTIME_CLASS_INIT(ConstructGltf_tEAEAD10FA805FB76C7B273EEC7E6631007AED6E9_il2cpp_TypeInfo_var);
				Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * L_30;
				L_30 = ConstructGltf_ConstructAsync_m3E519AB41F9B237D922285AB736FF76FEC292547(L_29, /*hidden argument*/NULL);
				NullCheck(L_30);
				TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_31;
				L_31 = Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631(L_30, /*hidden argument*/Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var);
				V_4 = L_31;
				bool L_32;
				L_32 = TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E((TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_0142;
				}
			}

IL_0101:
			{
				int32_t L_33 = 1;
				V_0 = L_33;
				__this->set_U3CU3E1__state_0(L_33);
				TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_34 = V_4;
				__this->set_U3CU3Eu__2_6(L_34);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_35 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8F75F12CC59E47D56CF3840D4C62C691BEEB7D33((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_35, (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_4), (U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6_m8F75F12CC59E47D56CF3840D4C62C691BEEB7D33_RuntimeMethod_var);
				goto IL_01d3;
			}

IL_0125:
			{
				TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_36 = __this->get_U3CU3Eu__2_6();
				V_4 = L_36;
				TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * L_37 = __this->get_address_of_U3CU3Eu__2_6();
				il2cpp_codegen_initobj(L_37, sizeof(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B ));
				int32_t L_38 = (-1);
				V_0 = L_38;
				__this->set_U3CU3E1__state_0(L_38);
			}

IL_0142:
			{
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
				L_39 = TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2((TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var);
				// }
				goto IL_016d;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_014c;
			}
			throw e;
		}

CATCH_014c:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogError($"{e.Message}\n{e.StackTrace}");
			Exception_t * L_40 = V_5;
			NullCheck(L_40);
			String_t* L_41;
			L_41 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_40);
			Exception_t * L_42 = V_5;
			NullCheck(L_42);
			String_t* L_43;
			L_43 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_42);
			String_t* L_44;
			L_44 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_41, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_43, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_44, /*hidden argument*/NULL);
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01ad;
		} // end catch (depth: 2)

IL_016d:
		{
			// if (gltfObject != null)
			GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * L_45 = __this->get_U3CgltfObjectU3E5__3_4();
			if (!L_45)
			{
				goto IL_017f;
			}
		}

IL_0175:
		{
			// Debug.Log("Import successful");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0FAC048E5FDFD99C765DD25991703B696DB6D02D, /*hidden argument*/NULL);
		}

IL_017f:
		{
			goto IL_01ad;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0181;
		}
		throw e;
	}

CATCH_0181:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F * L_46 = __this->get_address_of_U3CresponseU3E5__2_3();
		il2cpp_codegen_initobj(L_46, sizeof(Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F ));
		__this->set_U3CgltfObjectU3E5__3_4((GltfObject_t5302D0C0673855995CA443BD390E910933697D68 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_47 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_48 = V_6;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_47, L_48, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01d3;
	} // end catch (depth: 1)

IL_01ad:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F * L_49 = __this->get_address_of_U3CresponseU3E5__2_3();
		il2cpp_codegen_initobj(L_49, sizeof(Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F ));
		__this->set_U3CgltfObjectU3E5__3_4((GltfObject_t5302D0C0673855995CA443BD390E910933697D68 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_50 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_50, /*hidden argument*/NULL);
	}

IL_01d3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__1_MoveNext_mD2433ED03D24800F122F312C1F94C8FF6A43C53D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 *>(__this + _offset);
	U3CStartU3Ed__1_MoveNext_mD2433ED03D24800F122F312C1F94C8FF6A43C53D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGlbLoading/<Start>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_SetStateMachine_mC8613ABB063CFA77854A27CCAF46F1F3250D1B53 (U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__1_SetStateMachine_mC8613ABB063CFA77854A27CCAF46F1F3250D1B53_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__1_t32A763583E62BD4F9775DA896EE1B35CB86CE4E6 *>(__this + _offset);
	U3CStartU3Ed__1_SetStateMachine_mC8613ABB063CFA77854A27CCAF46F1F3250D1B53(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7_MoveNext_mECE852746BCE6CD6FF46C32E9892E8B1BEE278AB (U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_mCB215DAC883B97D0A92135E37C4037BC9A1E7269_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GltfUtility_t93E997E5437F844ABF7F1935BF325AF7F93A6A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m887A3B0B2CC006FD70FD11D912790965EA1F04B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC33C2E9C5D38B765E23EB9CA19B9584E9F2154BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m206BF91573B5E68E758C864E002B6D76C82109DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAC048E5FDFD99C765DD25991703B696DB6D02D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF730CEDD21D96583D210F9CFDE9A9458928A5CE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * V_1 = NULL;
	String_t* V_2 = NULL;
	GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * V_3 = NULL;
	TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0054;
			}
		}

IL_0011:
		{
			// var path = AbsolutePath;
			TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4;
			L_4 = TestGltfLoading_get_AbsolutePath_m736C6EAE86B6B051ED4F99F865B166CA509D425E(L_3, /*hidden argument*/NULL);
			V_2 = L_4;
			// if (!File.Exists(path))
			String_t* L_5 = V_2;
			bool L_6;
			L_6 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0041;
			}
		}

IL_0020:
		{
			// Debug.LogError($"Unable to find the glTF object at {path}");
			String_t* L_7 = V_2;
			String_t* L_8;
			L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFF730CEDD21D96583D210F9CFDE9A9458928A5CE, L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_8, /*hidden argument*/NULL);
			// DebugText.SetActive(true);
			TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * L_9 = V_1;
			NullCheck(L_9);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_DebugText_6();
			NullCheck(L_10);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
			// return;
			goto IL_0169;
		}

IL_0041:
		{
			// DebugText.SetActive(false);
			TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * L_11 = V_1;
			NullCheck(L_11);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_11->get_DebugText_6();
			NullCheck(L_12);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
			// GltfObject gltfObject = null;
			__this->set_U3CgltfObjectU3E5__2_3((GltfObject_t5302D0C0673855995CA443BD390E910933697D68 *)NULL);
		}

IL_0054:
		{
		}

IL_0055:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_13 = V_0;
				if (!L_13)
				{
					goto IL_0092;
				}
			}

IL_0058:
			{
				// gltfObject = await GltfUtility.ImportGltfObjectFromPathAsync(path);
				String_t* L_14 = V_2;
				IL2CPP_RUNTIME_CLASS_INIT(GltfUtility_t93E997E5437F844ABF7F1935BF325AF7F93A6A14_il2cpp_TypeInfo_var);
				Task_1_t998606C5025BC04EA3600AEC85CA95703ED9801B * L_15;
				L_15 = GltfUtility_ImportGltfObjectFromPathAsync_mD79DBF21A9C0335A877DB2AD3E2B29240D98BBD3(L_14, /*hidden argument*/NULL);
				NullCheck(L_15);
				TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023  L_16;
				L_16 = Task_1_GetAwaiter_m206BF91573B5E68E758C864E002B6D76C82109DB(L_15, /*hidden argument*/Task_1_GetAwaiter_m206BF91573B5E68E758C864E002B6D76C82109DB_RuntimeMethod_var);
				V_4 = L_16;
				bool L_17;
				L_17 = TaskAwaiter_1_get_IsCompleted_mC33C2E9C5D38B765E23EB9CA19B9584E9F2154BD((TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mC33C2E9C5D38B765E23EB9CA19B9584E9F2154BD_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_00af;
				}
			}

IL_006e:
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->set_U3CU3E1__state_0(L_18);
				TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023  L_19 = V_4;
				__this->set_U3CU3Eu__1_4(L_19);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_mCB215DAC883B97D0A92135E37C4037BC9A1E7269((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_20, (TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 *)(&V_4), (U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023_TisU3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11_mCB215DAC883B97D0A92135E37C4037BC9A1E7269_RuntimeMethod_var);
				goto IL_0183;
			}

IL_0092:
			{
				TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023  L_21 = __this->get_U3CU3Eu__1_4();
				V_4 = L_21;
				TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 * L_22 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_22, sizeof(TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 ));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->set_U3CU3E1__state_0(L_23);
			}

IL_00af:
			{
				GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * L_24;
				L_24 = TaskAwaiter_1_GetResult_m887A3B0B2CC006FD70FD11D912790965EA1F04B1((TaskAwaiter_1_tEB6F4BF5D2DF67EC2B14C4C945369E361D10B023 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m887A3B0B2CC006FD70FD11D912790965EA1F04B1_RuntimeMethod_var);
				V_3 = L_24;
				GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * L_25 = V_3;
				__this->set_U3CgltfObjectU3E5__2_3(L_25);
				// gltfObject.GameObjectReference.transform.position = new Vector3(0.0f, 0.0f, 1.0f);
				GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * L_26 = __this->get_U3CgltfObjectU3E5__2_3();
				NullCheck(L_26);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
				L_27 = GltfObject_get_GameObjectReference_m3390D940BF4210863D4D326F333B9AE515A15B86_inline(L_26, /*hidden argument*/NULL);
				NullCheck(L_27);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
				L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
				memset((&L_29), 0, sizeof(L_29));
				Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_29), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
				NullCheck(L_28);
				Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_28, L_29, /*hidden argument*/NULL);
				// gltfObject.GameObjectReference.transform.localScale *= this.ScaleFactor;
				GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * L_30 = __this->get_U3CgltfObjectU3E5__2_3();
				NullCheck(L_30);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
				L_31 = GltfObject_get_GameObjectReference_m3390D940BF4210863D4D326F333B9AE515A15B86_inline(L_30, /*hidden argument*/NULL);
				NullCheck(L_31);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
				L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = L_32;
				NullCheck(L_33);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
				L_34 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_33, /*hidden argument*/NULL);
				TestGltfLoading_t68988844D95D79817DD80E42541E3446B739290A * L_35 = V_1;
				NullCheck(L_35);
				float L_36 = L_35->get_ScaleFactor_5();
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
				L_37 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, L_36, /*hidden argument*/NULL);
				NullCheck(L_33);
				Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_33, L_37, /*hidden argument*/NULL);
				// }
				goto IL_0135;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_010f;
			}
			throw e;
		}

CATCH_010f:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogError($"TestGltfLoading start failed - {e.Message}\n{e.StackTrace}");
			Exception_t * L_38 = V_5;
			NullCheck(L_38);
			String_t* L_39;
			L_39 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_38);
			Exception_t * L_40 = V_5;
			NullCheck(L_40);
			String_t* L_41;
			L_41 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_40);
			String_t* L_42;
			L_42 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B807265562180D08B57F933B8656F17E58BAC7)), L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_41, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_42, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		} // end catch (depth: 2)

IL_0135:
		{
			// if (gltfObject != null)
			GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * L_43 = __this->get_U3CgltfObjectU3E5__2_3();
			if (!L_43)
			{
				goto IL_0147;
			}
		}

IL_013d:
		{
			// Debug.Log("Import successful");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0FAC048E5FDFD99C765DD25991703B696DB6D02D, /*hidden argument*/NULL);
		}

IL_0147:
		{
			goto IL_0169;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0149;
		}
		throw e;
	}

CATCH_0149:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CgltfObjectU3E5__2_3((GltfObject_t5302D0C0673855995CA443BD390E910933697D68 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_44 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_45 = V_6;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_44, L_45, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0183;
	} // end catch (depth: 1)

IL_0169:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CgltfObjectU3E5__2_3((GltfObject_t5302D0C0673855995CA443BD390E910933697D68 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_46 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_46, /*hidden argument*/NULL);
	}

IL_0183:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__7_MoveNext_mECE852746BCE6CD6FF46C32E9892E8B1BEE278AB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 *>(__this + _offset);
	U3CStartU3Ed__7_MoveNext_mECE852746BCE6CD6FF46C32E9892E8B1BEE278AB(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Gltf.TestGltfLoading/<Start>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7_SetStateMachine_mA9FDE81AC3EE1A5028D0B0D22B97D054A6FBE0A3 (U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__7_SetStateMachine_mA9FDE81AC3EE1A5028D0B0D22B97D054A6FBE0A3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__7_tCF542CFF84CA84018175EC7B5685EE9C10773A11 *>(__this + _offset);
	U3CStartU3Ed__7_SetStateMachine_mA9FDE81AC3EE1A5028D0B0D22B97D054A6FBE0A3(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Response_get_Successful_m084F29E9C7EEA9EB39C6B54E903145F04E3403ED_inline (Response_t28984D8EB7725CF6EF8FABEA3002E3054C699B5F * __this, const RuntimeMethod* method)
{
	{
		// public bool Successful { get; }
		bool L_0 = __this->get_U3CSuccessfulU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GltfObject_get_GameObjectReference_m3390D940BF4210863D4D326F333B9AE515A15B86_inline (GltfObject_t5302D0C0673855995CA443BD390E910933697D68 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GameObjectReference { get; internal set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CGameObjectReferenceU3Ek__BackingField_21();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
