#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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
// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,#=z0MnGekwpRgFU7$iVW8X5$xonhEZvRaHEMXVHPyh9aO2kc52YdA==>
struct Dictionary_2_t049AB000068AC79B45EED8BCCAE47B23B0B18B72;
// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,#=zG9WBI4m7na9OshAewdvflELclh5D>
struct Dictionary_2_tD7BA2A0D4A15ABAD76816CADA4A47E4EED50BB77;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t6D9E31AD9163B3A97AA0E83AC606775912490ABD;
// System.EventHandler`1<Microsoft.Maps.Unity.MapSession>
struct EventHandler_1_t5A44536C29E4E6D13AE3EFBF556A08847DFE96DC;
// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin>
struct HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tBD7EB381E8B25356EF3AED6C41B65AECA6B91A19;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tB1588C2E431B5ADA40379D5DC18919A72BEA44F3;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t331224EB72BAB582E19076DBEBCE04C263DA6FEE;
// System.Collections.Generic.List`1<#=zCZTNcCQIQyHmdF3yzrf99HvCI3Q8>
struct List_1_t3583F7E200CA31239569F517D46EC6A79785FE7D;
// System.Collections.Generic.List`1<#=zXT6PAmOt3SpWxcIyXtV0HZNYSGH4>
struct List_1_t9784882413F9EEDBD78A33DB4E900C033610AF29;
// System.Collections.Generic.List`1<#=zcn8lNm8$im3OCUjLCJDAQvsHGNji>
struct List_1_tA1AC911A62FB80716188A6C2E74EC1CDA333C070;
// System.Collections.Generic.List`1<#=ziuJgwfIQN7Cq3ebdm5MMOxI9zsHK>
struct List_1_t33758A17F9C5272569ADB02F8230576D4AF1E6D6;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin>
struct List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115;
// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapRenderer>
struct List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId>
struct List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267;
// UniRx.ObserverNode`1<System.Int64>
struct ObserverNode_1_t7B9BC7E58E4E600F3C6C045FA743F1AC2F486CD6;
// OpenCvSharp.Ptr`1<OpenCvSharp.LineSegmentDetector>
struct Ptr_1_t1F0F7DF88FC351A4ACA390218F5ACAA95157CA08;
// OpenCvSharp.Ptr`1<OpenCvSharp.ML.LogisticRegression>
struct Ptr_1_tBE3DE38A24423D013B5A138B325B5FBBF9F1E388;
// OpenCvSharp.Ptr`1<OpenCvSharp.MSER>
struct Ptr_1_tFA61A5F8988CAE0F6FE7C6F58E02A81794482BBA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.Geospatial.TileId[]
struct TileIdU5BU5D_tC3C41979AF33FB8BA28A821B4FCE3507F85E37B0;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// #=zEgwucroqHQ3qyhQOBF$8hhRKBtqV
struct U23U3DzEgwucroqHQ3qyhQOBFU248hhRKBtqV_t975EF43C9578F598D9B1A0A4F8EBE23AA2100D30;
// #=zG9WBI4m7na9OshAewdvflELclh5D
struct U23U3DzG9WBI4m7na9OshAewdvflELclh5D_t4FCDFA6C716769365ABE1DBACA7528030D717DC3;
// #=zSGAjct8w61XD9NwbVtcamQwAVN4i
struct U23U3DzSGAjct8w61XD9NwbVtcamQwAVN4i_t63810C266FCF7349E740FEF3D49697C18C74AACC;
// #=zreTq2aMiQHwa4PeFRZDv3dFu3_uL
struct U23U3DzreTq2aMiQHwa4PeFRZDv3dFu3_uL_tD47C36C75E1BD177F00903A320F6D2DBD6AD678C;
// #=zslffm3rEpcrDGeF0LnKQktU=
struct U23U3Dzslffm3rEpcrDGeF0LnKQktUU3D_tF0EE0F1F72AE6E41707DB83400FD2C4A7245F2A4;
// #=zxNi94QYCEvGCRwW2p7FSSls0nuoJ
struct U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2;
// #=zz2WQAsO2UUEplIiiNuE7oQk=
struct U23U3Dzz2WQAsO2UUEplIiiNuE7oQkU3D_t0EE83925EB2ADE849F30C026B3E102D9250CCA6F;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66;
// Microsoft.Maps.Unity.ElevationTileLayerList
struct ElevationTileLayerList_t3EEC2F8696DA2541B15517E87F3C2B3EFC6E6B13;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t001D97000AA0178942D19FC52942472140472E5E;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual
struct ILostTrackingVisual_t99A2CB13B533663C1C5DB8F6729ECAD5F78E6658;
// Microsoft.Maps.Unity.IMapSceneAnimationController
struct IMapSceneAnimationController_t7AC166DE2CEE7970CFEAB67CFB1F81946ADD3148;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_tF1E8AAA822A4BC884BC20CAB4B84F5826BBE282C;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t279804348C19FFBAC1249ADF9359629F9AC1C873;
// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile
struct LostTrackingServiceProfile_t7C3FC2608D29FC4A0A7A2862D12C7BBD4F823069;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// Microsoft.Maps.Unity.MapLabelLayer
struct MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5;
// Microsoft.Maps.Unity.MapSession
struct MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E;
// OpenCvSharp.Mat
struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.String
struct String_t;
// System.Security.Cryptography.TailStream
struct TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Microsoft.Maps.Unity.TextureTileLayerList
struct TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8;
// System.Security.Cryptography.TripleDES
struct TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89;
// System.Collections.ListDictionaryInternal/DictionaryNode
struct DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C;
// OpenCvSharp.Mat/ColExprIndexer
struct ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F;
// OpenCvSharp.Mat/ColIndexer
struct ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F;
// OpenCvSharp.Mat/MatExprIndexer
struct MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E;
// OpenCvSharp.Mat/RowExprIndexer
struct RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F;
// OpenCvSharp.Mat/RowIndexer
struct RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVectorView
struct NOVTABLE IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// UniRx.ReactiveProperty`1<System.Int64>
struct ReactiveProperty_1_t7B454E2DCEBA9F8190D55C1C32B8F22E27741767  : public RuntimeObject
{
public:
	// T UniRx.ReactiveProperty`1::value
	int64_t ___value_1;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::root
	ObserverNode_1_t7B9BC7E58E4E600F3C6C045FA743F1AC2F486CD6 * ___root_2;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::last
	ObserverNode_1_t7B9BC7E58E4E600F3C6C045FA743F1AC2F486CD6 * ___last_3;
	// System.Boolean UniRx.ReactiveProperty`1::isDisposed
	bool ___isDisposed_4;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ReactiveProperty_1_t7B454E2DCEBA9F8190D55C1C32B8F22E27741767, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(ReactiveProperty_1_t7B454E2DCEBA9F8190D55C1C32B8F22E27741767, ___root_2)); }
	inline ObserverNode_1_t7B9BC7E58E4E600F3C6C045FA743F1AC2F486CD6 * get_root_2() const { return ___root_2; }
	inline ObserverNode_1_t7B9BC7E58E4E600F3C6C045FA743F1AC2F486CD6 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(ObserverNode_1_t7B9BC7E58E4E600F3C6C045FA743F1AC2F486CD6 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}

	inline static int32_t get_offset_of_last_3() { return static_cast<int32_t>(offsetof(ReactiveProperty_1_t7B454E2DCEBA9F8190D55C1C32B8F22E27741767, ___last_3)); }
	inline ObserverNode_1_t7B9BC7E58E4E600F3C6C045FA743F1AC2F486CD6 * get_last_3() const { return ___last_3; }
	inline ObserverNode_1_t7B9BC7E58E4E600F3C6C045FA743F1AC2F486CD6 ** get_address_of_last_3() { return &___last_3; }
	inline void set_last_3(ObserverNode_1_t7B9BC7E58E4E600F3C6C045FA743F1AC2F486CD6 * value)
	{
		___last_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___last_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(ReactiveProperty_1_t7B454E2DCEBA9F8190D55C1C32B8F22E27741767, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}
};

struct ReactiveProperty_1_t7B454E2DCEBA9F8190D55C1C32B8F22E27741767_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<T> UniRx.ReactiveProperty`1::defaultEqualityComparer
	RuntimeObject* ___defaultEqualityComparer_0;

public:
	inline static int32_t get_offset_of_defaultEqualityComparer_0() { return static_cast<int32_t>(offsetof(ReactiveProperty_1_t7B454E2DCEBA9F8190D55C1C32B8F22E27741767_StaticFields, ___defaultEqualityComparer_0)); }
	inline RuntimeObject* get_defaultEqualityComparer_0() const { return ___defaultEqualityComparer_0; }
	inline RuntimeObject** get_address_of_defaultEqualityComparer_0() { return &___defaultEqualityComparer_0; }
	inline void set_defaultEqualityComparer_0(RuntimeObject* value)
	{
		___defaultEqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEqualityComparer_0), (void*)value);
	}
};


// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};


// System.Collections.Specialized.ListDictionary
struct ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * ___head_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;
	// System.Object System.Collections.Specialized.ListDictionary::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___head_0)); }
	inline DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * get_head_0() const { return ___head_0; }
	inline DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_3), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A  : public RuntimeObject
{
public:
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal::head
	DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * ___head_0;
	// System.Int32 System.Collections.ListDictionaryInternal::version
	int32_t ___version_1;
	// System.Int32 System.Collections.ListDictionaryInternal::count
	int32_t ___count_2;
	// System.Object System.Collections.ListDictionaryInternal::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___head_0)); }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * get_head_0() const { return ___head_0; }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899  : public RuntimeObject
{
public:
	// System.Collections.IList System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::_list
	RuntimeObject* ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899, ____list_0)); }
	inline RuntimeObject* get__list_0() const { return ____list_0; }
	inline RuntimeObject** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(RuntimeObject* value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
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

// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____methodKeys_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodKeys_2), (void*)value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
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

// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==
struct U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D 
{
public:
	// System.Double #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=z8Kw8kQk=
	double ___U23U3Dz8Kw8kQkU3D_7;
	// System.Double #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zd7Ui1iM=
	double ___U23U3Dzd7Ui1iMU3D_8;
	// System.Double #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zz$tDAJU=
	double ___U23U3DzzU24tDAJUU3D_9;

public:
	inline static int32_t get_offset_of_U23U3Dz8Kw8kQkU3D_7() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D, ___U23U3Dz8Kw8kQkU3D_7)); }
	inline double get_U23U3Dz8Kw8kQkU3D_7() const { return ___U23U3Dz8Kw8kQkU3D_7; }
	inline double* get_address_of_U23U3Dz8Kw8kQkU3D_7() { return &___U23U3Dz8Kw8kQkU3D_7; }
	inline void set_U23U3Dz8Kw8kQkU3D_7(double value)
	{
		___U23U3Dz8Kw8kQkU3D_7 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzd7Ui1iMU3D_8() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D, ___U23U3Dzd7Ui1iMU3D_8)); }
	inline double get_U23U3Dzd7Ui1iMU3D_8() const { return ___U23U3Dzd7Ui1iMU3D_8; }
	inline double* get_address_of_U23U3Dzd7Ui1iMU3D_8() { return &___U23U3Dzd7Ui1iMU3D_8; }
	inline void set_U23U3Dzd7Ui1iMU3D_8(double value)
	{
		___U23U3Dzd7Ui1iMU3D_8 = value;
	}

	inline static int32_t get_offset_of_U23U3DzzU24tDAJUU3D_9() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D, ___U23U3DzzU24tDAJUU3D_9)); }
	inline double get_U23U3DzzU24tDAJUU3D_9() const { return ___U23U3DzzU24tDAJUU3D_9; }
	inline double* get_address_of_U23U3DzzU24tDAJUU3D_9() { return &___U23U3DzzU24tDAJUU3D_9; }
	inline void set_U23U3DzzU24tDAJUU3D_9(double value)
	{
		___U23U3DzzU24tDAJUU3D_9 = value;
	}
};

struct U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields
{
public:
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zesqA6EI=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3DzesqA6EIU3D_0;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zv9PICU0=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3Dzv9PICU0U3D_1;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zMe1FeQo=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3DzMe1FeQoU3D_2;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=z_wxtDSI=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3Dz_wxtDSIU3D_3;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zpkj8nAE=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3Dzpkj8nAEU3D_4;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zwdgcWN4=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3DzwdgcWN4U3D_5;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zCiJrol8=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3DzCiJrol8U3D_6;

public:
	inline static int32_t get_offset_of_U23U3DzesqA6EIU3D_0() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3DzesqA6EIU3D_0)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3DzesqA6EIU3D_0() const { return ___U23U3DzesqA6EIU3D_0; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3DzesqA6EIU3D_0() { return &___U23U3DzesqA6EIU3D_0; }
	inline void set_U23U3DzesqA6EIU3D_0(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3DzesqA6EIU3D_0 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzv9PICU0U3D_1() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3Dzv9PICU0U3D_1)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3Dzv9PICU0U3D_1() const { return ___U23U3Dzv9PICU0U3D_1; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3Dzv9PICU0U3D_1() { return &___U23U3Dzv9PICU0U3D_1; }
	inline void set_U23U3Dzv9PICU0U3D_1(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3Dzv9PICU0U3D_1 = value;
	}

	inline static int32_t get_offset_of_U23U3DzMe1FeQoU3D_2() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3DzMe1FeQoU3D_2)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3DzMe1FeQoU3D_2() const { return ___U23U3DzMe1FeQoU3D_2; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3DzMe1FeQoU3D_2() { return &___U23U3DzMe1FeQoU3D_2; }
	inline void set_U23U3DzMe1FeQoU3D_2(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3DzMe1FeQoU3D_2 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz_wxtDSIU3D_3() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3Dz_wxtDSIU3D_3)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3Dz_wxtDSIU3D_3() const { return ___U23U3Dz_wxtDSIU3D_3; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3Dz_wxtDSIU3D_3() { return &___U23U3Dz_wxtDSIU3D_3; }
	inline void set_U23U3Dz_wxtDSIU3D_3(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3Dz_wxtDSIU3D_3 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzpkj8nAEU3D_4() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3Dzpkj8nAEU3D_4)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3Dzpkj8nAEU3D_4() const { return ___U23U3Dzpkj8nAEU3D_4; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3Dzpkj8nAEU3D_4() { return &___U23U3Dzpkj8nAEU3D_4; }
	inline void set_U23U3Dzpkj8nAEU3D_4(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3Dzpkj8nAEU3D_4 = value;
	}

	inline static int32_t get_offset_of_U23U3DzwdgcWN4U3D_5() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3DzwdgcWN4U3D_5)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3DzwdgcWN4U3D_5() const { return ___U23U3DzwdgcWN4U3D_5; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3DzwdgcWN4U3D_5() { return &___U23U3DzwdgcWN4U3D_5; }
	inline void set_U23U3DzwdgcWN4U3D_5(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3DzwdgcWN4U3D_5 = value;
	}

	inline static int32_t get_offset_of_U23U3DzCiJrol8U3D_6() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3DzCiJrol8U3D_6)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3DzCiJrol8U3D_6() const { return ___U23U3DzCiJrol8U3D_6; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3DzCiJrol8U3D_6() { return &___U23U3DzCiJrol8U3D_6; }
	inline void set_U23U3DzCiJrol8U3D_6(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3DzCiJrol8U3D_6 = value;
	}
};


// #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=
struct U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B 
{
public:
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zAgay4aA=
	double ___U23U3DzAgay4aAU3D_2;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=z7kHv$4U=
	double ___U23U3Dz7kHvU244UU3D_3;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zUbZ6BJM=
	double ___U23U3DzUbZ6BJMU3D_4;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zKvzwkvw=
	double ___U23U3DzKvzwkvwU3D_5;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=z_bWHoJU=
	double ___U23U3Dz_bWHoJUU3D_6;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zoLpGtjY=
	double ___U23U3DzoLpGtjYU3D_7;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=z0O9XGAY=
	double ___U23U3Dz0O9XGAYU3D_8;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zRI3FGYY=
	double ___U23U3DzRI3FGYYU3D_9;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zecW6PvY=
	double ___U23U3DzecW6PvYU3D_10;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zhRjflL8=
	double ___U23U3DzhRjflL8U3D_11;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zC4a_$xE=
	double ___U23U3DzC4a_U24xEU3D_12;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zVN23tYs=
	double ___U23U3DzVN23tYsU3D_13;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=z42K_Ujk=
	double ___U23U3Dz42K_UjkU3D_14;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zYMZlUOQ=
	double ___U23U3DzYMZlUOQU3D_15;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=z0cC2tTU=
	double ___U23U3Dz0cC2tTUU3D_16;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zzoRqnvY=
	double ___U23U3DzzoRqnvYU3D_17;

public:
	inline static int32_t get_offset_of_U23U3DzAgay4aAU3D_2() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzAgay4aAU3D_2)); }
	inline double get_U23U3DzAgay4aAU3D_2() const { return ___U23U3DzAgay4aAU3D_2; }
	inline double* get_address_of_U23U3DzAgay4aAU3D_2() { return &___U23U3DzAgay4aAU3D_2; }
	inline void set_U23U3DzAgay4aAU3D_2(double value)
	{
		___U23U3DzAgay4aAU3D_2 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz7kHvU244UU3D_3() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3Dz7kHvU244UU3D_3)); }
	inline double get_U23U3Dz7kHvU244UU3D_3() const { return ___U23U3Dz7kHvU244UU3D_3; }
	inline double* get_address_of_U23U3Dz7kHvU244UU3D_3() { return &___U23U3Dz7kHvU244UU3D_3; }
	inline void set_U23U3Dz7kHvU244UU3D_3(double value)
	{
		___U23U3Dz7kHvU244UU3D_3 = value;
	}

	inline static int32_t get_offset_of_U23U3DzUbZ6BJMU3D_4() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzUbZ6BJMU3D_4)); }
	inline double get_U23U3DzUbZ6BJMU3D_4() const { return ___U23U3DzUbZ6BJMU3D_4; }
	inline double* get_address_of_U23U3DzUbZ6BJMU3D_4() { return &___U23U3DzUbZ6BJMU3D_4; }
	inline void set_U23U3DzUbZ6BJMU3D_4(double value)
	{
		___U23U3DzUbZ6BJMU3D_4 = value;
	}

	inline static int32_t get_offset_of_U23U3DzKvzwkvwU3D_5() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzKvzwkvwU3D_5)); }
	inline double get_U23U3DzKvzwkvwU3D_5() const { return ___U23U3DzKvzwkvwU3D_5; }
	inline double* get_address_of_U23U3DzKvzwkvwU3D_5() { return &___U23U3DzKvzwkvwU3D_5; }
	inline void set_U23U3DzKvzwkvwU3D_5(double value)
	{
		___U23U3DzKvzwkvwU3D_5 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz_bWHoJUU3D_6() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3Dz_bWHoJUU3D_6)); }
	inline double get_U23U3Dz_bWHoJUU3D_6() const { return ___U23U3Dz_bWHoJUU3D_6; }
	inline double* get_address_of_U23U3Dz_bWHoJUU3D_6() { return &___U23U3Dz_bWHoJUU3D_6; }
	inline void set_U23U3Dz_bWHoJUU3D_6(double value)
	{
		___U23U3Dz_bWHoJUU3D_6 = value;
	}

	inline static int32_t get_offset_of_U23U3DzoLpGtjYU3D_7() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzoLpGtjYU3D_7)); }
	inline double get_U23U3DzoLpGtjYU3D_7() const { return ___U23U3DzoLpGtjYU3D_7; }
	inline double* get_address_of_U23U3DzoLpGtjYU3D_7() { return &___U23U3DzoLpGtjYU3D_7; }
	inline void set_U23U3DzoLpGtjYU3D_7(double value)
	{
		___U23U3DzoLpGtjYU3D_7 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz0O9XGAYU3D_8() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3Dz0O9XGAYU3D_8)); }
	inline double get_U23U3Dz0O9XGAYU3D_8() const { return ___U23U3Dz0O9XGAYU3D_8; }
	inline double* get_address_of_U23U3Dz0O9XGAYU3D_8() { return &___U23U3Dz0O9XGAYU3D_8; }
	inline void set_U23U3Dz0O9XGAYU3D_8(double value)
	{
		___U23U3Dz0O9XGAYU3D_8 = value;
	}

	inline static int32_t get_offset_of_U23U3DzRI3FGYYU3D_9() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzRI3FGYYU3D_9)); }
	inline double get_U23U3DzRI3FGYYU3D_9() const { return ___U23U3DzRI3FGYYU3D_9; }
	inline double* get_address_of_U23U3DzRI3FGYYU3D_9() { return &___U23U3DzRI3FGYYU3D_9; }
	inline void set_U23U3DzRI3FGYYU3D_9(double value)
	{
		___U23U3DzRI3FGYYU3D_9 = value;
	}

	inline static int32_t get_offset_of_U23U3DzecW6PvYU3D_10() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzecW6PvYU3D_10)); }
	inline double get_U23U3DzecW6PvYU3D_10() const { return ___U23U3DzecW6PvYU3D_10; }
	inline double* get_address_of_U23U3DzecW6PvYU3D_10() { return &___U23U3DzecW6PvYU3D_10; }
	inline void set_U23U3DzecW6PvYU3D_10(double value)
	{
		___U23U3DzecW6PvYU3D_10 = value;
	}

	inline static int32_t get_offset_of_U23U3DzhRjflL8U3D_11() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzhRjflL8U3D_11)); }
	inline double get_U23U3DzhRjflL8U3D_11() const { return ___U23U3DzhRjflL8U3D_11; }
	inline double* get_address_of_U23U3DzhRjflL8U3D_11() { return &___U23U3DzhRjflL8U3D_11; }
	inline void set_U23U3DzhRjflL8U3D_11(double value)
	{
		___U23U3DzhRjflL8U3D_11 = value;
	}

	inline static int32_t get_offset_of_U23U3DzC4a_U24xEU3D_12() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzC4a_U24xEU3D_12)); }
	inline double get_U23U3DzC4a_U24xEU3D_12() const { return ___U23U3DzC4a_U24xEU3D_12; }
	inline double* get_address_of_U23U3DzC4a_U24xEU3D_12() { return &___U23U3DzC4a_U24xEU3D_12; }
	inline void set_U23U3DzC4a_U24xEU3D_12(double value)
	{
		___U23U3DzC4a_U24xEU3D_12 = value;
	}

	inline static int32_t get_offset_of_U23U3DzVN23tYsU3D_13() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzVN23tYsU3D_13)); }
	inline double get_U23U3DzVN23tYsU3D_13() const { return ___U23U3DzVN23tYsU3D_13; }
	inline double* get_address_of_U23U3DzVN23tYsU3D_13() { return &___U23U3DzVN23tYsU3D_13; }
	inline void set_U23U3DzVN23tYsU3D_13(double value)
	{
		___U23U3DzVN23tYsU3D_13 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz42K_UjkU3D_14() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3Dz42K_UjkU3D_14)); }
	inline double get_U23U3Dz42K_UjkU3D_14() const { return ___U23U3Dz42K_UjkU3D_14; }
	inline double* get_address_of_U23U3Dz42K_UjkU3D_14() { return &___U23U3Dz42K_UjkU3D_14; }
	inline void set_U23U3Dz42K_UjkU3D_14(double value)
	{
		___U23U3Dz42K_UjkU3D_14 = value;
	}

	inline static int32_t get_offset_of_U23U3DzYMZlUOQU3D_15() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzYMZlUOQU3D_15)); }
	inline double get_U23U3DzYMZlUOQU3D_15() const { return ___U23U3DzYMZlUOQU3D_15; }
	inline double* get_address_of_U23U3DzYMZlUOQU3D_15() { return &___U23U3DzYMZlUOQU3D_15; }
	inline void set_U23U3DzYMZlUOQU3D_15(double value)
	{
		___U23U3DzYMZlUOQU3D_15 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz0cC2tTUU3D_16() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3Dz0cC2tTUU3D_16)); }
	inline double get_U23U3Dz0cC2tTUU3D_16() const { return ___U23U3Dz0cC2tTUU3D_16; }
	inline double* get_address_of_U23U3Dz0cC2tTUU3D_16() { return &___U23U3Dz0cC2tTUU3D_16; }
	inline void set_U23U3Dz0cC2tTUU3D_16(double value)
	{
		___U23U3Dz0cC2tTUU3D_16 = value;
	}

	inline static int32_t get_offset_of_U23U3DzzoRqnvYU3D_17() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzzoRqnvYU3D_17)); }
	inline double get_U23U3DzzoRqnvYU3D_17() const { return ___U23U3DzzoRqnvYU3D_17; }
	inline double* get_address_of_U23U3DzzoRqnvYU3D_17() { return &___U23U3DzzoRqnvYU3D_17; }
	inline void set_U23U3DzzoRqnvYU3D_17(double value)
	{
		___U23U3DzzoRqnvYU3D_17 = value;
	}
};

struct U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B_StaticFields
{
public:
	// #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw= #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zVxPCo6E=
	U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  ___U23U3DzVxPCo6EU3D_0;
	// #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw= #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zesqA6EI=
	U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  ___U23U3DzesqA6EIU3D_1;

public:
	inline static int32_t get_offset_of_U23U3DzVxPCo6EU3D_0() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B_StaticFields, ___U23U3DzVxPCo6EU3D_0)); }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  get_U23U3DzVxPCo6EU3D_0() const { return ___U23U3DzVxPCo6EU3D_0; }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B * get_address_of_U23U3DzVxPCo6EU3D_0() { return &___U23U3DzVxPCo6EU3D_0; }
	inline void set_U23U3DzVxPCo6EU3D_0(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  value)
	{
		___U23U3DzVxPCo6EU3D_0 = value;
	}

	inline static int32_t get_offset_of_U23U3DzesqA6EIU3D_1() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B_StaticFields, ___U23U3DzesqA6EIU3D_1)); }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  get_U23U3DzesqA6EIU3D_1() const { return ___U23U3DzesqA6EIU3D_1; }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B * get_address_of_U23U3DzesqA6EIU3D_1() { return &___U23U3DzesqA6EIU3D_1; }
	inline void set_U23U3DzesqA6EIU3D_1(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  value)
	{
		___U23U3DzesqA6EIU3D_1 = value;
	}
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
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


// System.Guid
struct Guid_t 
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


// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08, ___KeyValue_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_4), (void*)value);
	}
};


// Microsoft.Geospatial.LatLon
struct LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 
{
public:
	// System.Double Microsoft.Geospatial.LatLon::#=zM9rQiaQjFSiD3YTuh6A49Cj9ONBU
	double ___U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8;
	// System.Double Microsoft.Geospatial.LatLon::#=zlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh
	double ___U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9;

public:
	inline static int32_t get_offset_of_U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8() { return static_cast<int32_t>(offsetof(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99, ___U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8)); }
	inline double get_U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8() const { return ___U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8; }
	inline double* get_address_of_U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8() { return &___U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8; }
	inline void set_U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8(double value)
	{
		___U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8 = value;
	}

	inline static int32_t get_offset_of_U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9() { return static_cast<int32_t>(offsetof(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99, ___U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9)); }
	inline double get_U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9() const { return ___U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9; }
	inline double* get_address_of_U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9() { return &___U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9; }
	inline void set_U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9(double value)
	{
		___U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9 = value;
	}
};

struct LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99_StaticFields
{
public:
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::MinValue
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___MinValue_4;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::MaxValue
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___MaxValue_5;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::Origin
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___Origin_7;

public:
	inline static int32_t get_offset_of_MinValue_4() { return static_cast<int32_t>(offsetof(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99_StaticFields, ___MinValue_4)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_MinValue_4() const { return ___MinValue_4; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_MinValue_4() { return &___MinValue_4; }
	inline void set_MinValue_4(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___MinValue_4 = value;
	}

	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99_StaticFields, ___MaxValue_5)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_MaxValue_5() const { return ___MaxValue_5; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_Origin_7() { return static_cast<int32_t>(offsetof(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99_StaticFields, ___Origin_7)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_Origin_7() const { return ___Origin_7; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_Origin_7() { return &___Origin_7; }
	inline void set_Origin_7(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___Origin_7 = value;
	}
};


// Microsoft.Maps.Unity.LatLonWrapper
struct LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE 
{
public:
	// System.Double Microsoft.Maps.Unity.LatLonWrapper::_latitude
	double ____latitude_0;
	// System.Double Microsoft.Maps.Unity.LatLonWrapper::_longitude
	double ____longitude_1;

public:
	inline static int32_t get_offset_of__latitude_0() { return static_cast<int32_t>(offsetof(LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE, ____latitude_0)); }
	inline double get__latitude_0() const { return ____latitude_0; }
	inline double* get_address_of__latitude_0() { return &____latitude_0; }
	inline void set__latitude_0(double value)
	{
		____latitude_0 = value;
	}

	inline static int32_t get_offset_of__longitude_1() { return static_cast<int32_t>(offsetof(LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE, ____longitude_1)); }
	inline double get__longitude_1() const { return ____longitude_1; }
	inline double* get_address_of__longitude_1() { return &____longitude_1; }
	inline void set__longitude_1(double value)
	{
		____longitude_1 = value;
	}
};


// UniRx.LongReactiveProperty
struct LongReactiveProperty_t40470A4C9A80D7269C75240D9E81B308BF052730  : public ReactiveProperty_1_t7B454E2DCEBA9F8190D55C1C32B8F22E27741767
{
public:

public:
};


// System.Runtime.Remoting.Messaging.MCMDictionary
struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MCMDictionary::InternalKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalKeys_4;

public:
	inline static int32_t get_offset_of_InternalKeys_4() { return static_cast<int32_t>(offsetof(MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_StaticFields, ___InternalKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalKeys_4() const { return ___InternalKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalKeys_4() { return &___InternalKeys_4; }
	inline void set_InternalKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalKeys_4), (void*)value);
	}
};


// Mono.Security.Cryptography.MD2
struct MD2_t9D20CEB2C863922737CE4F279D80B0D4E7AEEB50  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Mono.Security.Cryptography.MD2
struct MD2_tD2ECFF2E7CD137AF136BC822DA2A7ECEAF3B0E7B  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Mono.Security.Cryptography.MD4
struct MD4_t80647CC3422D7B2C41A8EE3E8772B523AEE3B478  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Mono.Security.Cryptography.MD4
struct MD4_tFCEEF148AD7E7BAF7744F6FFEE57A9B95F4EE0FD  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// System.Security.Cryptography.MD5
struct MD5_t6B7B1C4D40C383D0AD84BB8DDE4DE4B29BA627FB  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Microsoft.Geospatial.MercatorCoordinate
struct MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 
{
public:
	// System.Double Microsoft.Geospatial.MercatorCoordinate::#=zZiSXMMOVFjuJD0Eoeg==
	double ___U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5;
	// System.Double Microsoft.Geospatial.MercatorCoordinate::#=zhxc26YlVuwTTuvztIg==
	double ___U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6;

public:
	inline static int32_t get_offset_of_U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5() { return static_cast<int32_t>(offsetof(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36, ___U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5)); }
	inline double get_U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5() const { return ___U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5; }
	inline double* get_address_of_U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5() { return &___U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5; }
	inline void set_U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5(double value)
	{
		___U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6() { return static_cast<int32_t>(offsetof(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36, ___U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6)); }
	inline double get_U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6() const { return ___U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6; }
	inline double* get_address_of_U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6() { return &___U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6; }
	inline void set_U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6(double value)
	{
		___U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6 = value;
	}
};

struct MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36_StaticFields
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorCoordinate::Origin
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___Origin_4;

public:
	inline static int32_t get_offset_of_Origin_4() { return static_cast<int32_t>(offsetof(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36_StaticFields, ___Origin_4)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_Origin_4() const { return ___Origin_4; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_Origin_4() { return &___Origin_4; }
	inline void set_Origin_4(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___Origin_4 = value;
	}
};


// OpenCvSharp.Point
struct Point_t01E6005639EC24B31B70D05F7FF25DC232A23396 
{
public:
	// System.Int32 OpenCvSharp.Point::X
	int32_t ___X_0;
	// System.Int32 OpenCvSharp.Point::Y
	int32_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_t01E6005639EC24B31B70D05F7FF25DC232A23396, ___X_0)); }
	inline int32_t get_X_0() const { return ___X_0; }
	inline int32_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int32_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_t01E6005639EC24B31B70D05F7FF25DC232A23396, ___Y_1)); }
	inline int32_t get_Y_1() const { return ___Y_1; }
	inline int32_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int32_t value)
	{
		___Y_1 = value;
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___isEnabled_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution
struct ClippingVolumeDistanceTextureResolution_t3345711BB6C44F3F31DFD99BDFD7585E158FF2D1 
{
public:
	// System.Int32 Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClippingVolumeDistanceTextureResolution_t3345711BB6C44F3F31DFD99BDFD7585E158FF2D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.DisposableObject
struct DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115  : public RuntimeObject
{
public:
	// System.Boolean OpenCvSharp.DisposableObject::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;
	// System.Boolean OpenCvSharp.DisposableObject::<IsEnabledDispose>k__BackingField
	bool ___U3CIsEnabledDisposeU3Ek__BackingField_1;
	// System.Runtime.InteropServices.GCHandle OpenCvSharp.DisposableObject::dataHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___dataHandle_2;
	// System.IntPtr OpenCvSharp.DisposableObject::<AllocatedMemory>k__BackingField
	intptr_t ___U3CAllocatedMemoryU3Ek__BackingField_3;
	// System.Int64 OpenCvSharp.DisposableObject::<AllocatedMemorySize>k__BackingField
	int64_t ___U3CAllocatedMemorySizeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CIsDisposedU3Ek__BackingField_0)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_0() const { return ___U3CIsDisposedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_0() { return &___U3CIsDisposedU3Ek__BackingField_0; }
	inline void set_U3CIsDisposedU3Ek__BackingField_0(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsEnabledDisposeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CIsEnabledDisposeU3Ek__BackingField_1)); }
	inline bool get_U3CIsEnabledDisposeU3Ek__BackingField_1() const { return ___U3CIsEnabledDisposeU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsEnabledDisposeU3Ek__BackingField_1() { return &___U3CIsEnabledDisposeU3Ek__BackingField_1; }
	inline void set_U3CIsEnabledDisposeU3Ek__BackingField_1(bool value)
	{
		___U3CIsEnabledDisposeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_dataHandle_2() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___dataHandle_2)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_dataHandle_2() const { return ___dataHandle_2; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_dataHandle_2() { return &___dataHandle_2; }
	inline void set_dataHandle_2(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___dataHandle_2 = value;
	}

	inline static int32_t get_offset_of_U3CAllocatedMemoryU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CAllocatedMemoryU3Ek__BackingField_3)); }
	inline intptr_t get_U3CAllocatedMemoryU3Ek__BackingField_3() const { return ___U3CAllocatedMemoryU3Ek__BackingField_3; }
	inline intptr_t* get_address_of_U3CAllocatedMemoryU3Ek__BackingField_3() { return &___U3CAllocatedMemoryU3Ek__BackingField_3; }
	inline void set_U3CAllocatedMemoryU3Ek__BackingField_3(intptr_t value)
	{
		___U3CAllocatedMemoryU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAllocatedMemorySizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CAllocatedMemorySizeU3Ek__BackingField_4)); }
	inline int64_t get_U3CAllocatedMemorySizeU3Ek__BackingField_4() const { return ___U3CAllocatedMemorySizeU3Ek__BackingField_4; }
	inline int64_t* get_address_of_U3CAllocatedMemorySizeU3Ek__BackingField_4() { return &___U3CAllocatedMemorySizeU3Ek__BackingField_4; }
	inline void set_U3CAllocatedMemorySizeU3Ek__BackingField_4(int64_t value)
	{
		___U3CAllocatedMemorySizeU3Ek__BackingField_4 = value;
	}
};


// Microsoft.Geospatial.GeoBoundingBox
struct GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756 
{
public:
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.GeoBoundingBox::#=z8vNo1CRG2vBQpVDkWbisVcs=
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.GeoBoundingBox::#=zawmIxZRnx5qJ7mYZRaVLNRM=
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1;

public:
	inline static int32_t get_offset_of_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() { return static_cast<int32_t>(offsetof(GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756, ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() const { return ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() { return &___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0; }
	inline void set_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0 = value;
	}

	inline static int32_t get_offset_of_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() { return static_cast<int32_t>(offsetof(GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756, ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() const { return ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() { return &___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1; }
	inline void set_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1 = value;
	}
};


// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776  : public KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08
{
public:
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.MACTripleDES::m_encryptor
	RuntimeObject* ___m_encryptor_5;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.MACTripleDES::_cs
	CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * ____cs_6;
	// System.Security.Cryptography.TailStream System.Security.Cryptography.MACTripleDES::_ts
	TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C * ____ts_7;
	// System.Int32 System.Security.Cryptography.MACTripleDES::m_bytesPerBlock
	int32_t ___m_bytesPerBlock_8;
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::des
	TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 * ___des_9;

public:
	inline static int32_t get_offset_of_m_encryptor_5() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ___m_encryptor_5)); }
	inline RuntimeObject* get_m_encryptor_5() const { return ___m_encryptor_5; }
	inline RuntimeObject** get_address_of_m_encryptor_5() { return &___m_encryptor_5; }
	inline void set_m_encryptor_5(RuntimeObject* value)
	{
		___m_encryptor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encryptor_5), (void*)value);
	}

	inline static int32_t get_offset_of__cs_6() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ____cs_6)); }
	inline CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * get__cs_6() const { return ____cs_6; }
	inline CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 ** get_address_of__cs_6() { return &____cs_6; }
	inline void set__cs_6(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * value)
	{
		____cs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cs_6), (void*)value);
	}

	inline static int32_t get_offset_of__ts_7() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ____ts_7)); }
	inline TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C * get__ts_7() const { return ____ts_7; }
	inline TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C ** get_address_of__ts_7() { return &____ts_7; }
	inline void set__ts_7(TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C * value)
	{
		____ts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_bytesPerBlock_8() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ___m_bytesPerBlock_8)); }
	inline int32_t get_m_bytesPerBlock_8() const { return ___m_bytesPerBlock_8; }
	inline int32_t* get_address_of_m_bytesPerBlock_8() { return &___m_bytesPerBlock_8; }
	inline void set_m_bytesPerBlock_8(int32_t value)
	{
		___m_bytesPerBlock_8 = value;
	}

	inline static int32_t get_offset_of_des_9() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ___des_9)); }
	inline TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 * get_des_9() const { return ___des_9; }
	inline TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 ** get_address_of_des_9() { return &___des_9; }
	inline void set_des_9(TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 * value)
	{
		___des_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___des_9), (void*)value);
	}
};


// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1  : public MD2_t9D20CEB2C863922737CE4F279D80B0D4E7AEEB50
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___state_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___checksum_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checksum_5), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___buffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_6), (void*)value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___x_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_8), (void*)value);
	}
};

struct MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PI_SUBST_9), (void*)value);
	}
};


// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE  : public MD2_tD2ECFF2E7CD137AF136BC822DA2A7ECEAF3B0E7B
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___state_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___checksum_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checksum_5), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___buffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_6), (void*)value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___x_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_8), (void*)value);
	}
};

struct MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PI_SUBST_9), (void*)value);
	}
};


// Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8  : public MD4_t80647CC3422D7B2C41A8EE3E8772B523AEE3B478
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___state_4)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___count_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___count_6), (void*)value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___x_7)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_7), (void*)value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___digest_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digest_8), (void*)value);
	}
};


// Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9  : public MD4_tFCEEF148AD7E7BAF7744F6FFEE57A9B95F4EE0FD
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___state_4)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___count_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___count_6), (void*)value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___x_7)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_7), (void*)value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___digest_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digest_8), (void*)value);
	}
};


// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1  : public MD5_t6B7B1C4D40C383D0AD84BB8DDE4DE4B29BA627FB
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ____H_4)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____H_4), (void*)value);
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ___buff_5)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_5), (void*)value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ___count_6)); }
	inline uint64_t get_count_6() const { return ___count_6; }
	inline uint64_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(uint64_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ____ProcessingBuffer_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__ProcessingBuffer_7() const { return ____ProcessingBuffer_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__ProcessingBuffer_7() { return &____ProcessingBuffer_7; }
	inline void set__ProcessingBuffer_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____ProcessingBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ProcessingBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

struct MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___K_9;

public:
	inline static int32_t get_offset_of_K_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_StaticFields, ___K_9)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_K_9() const { return ___K_9; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_K_9() { return &___K_9; }
	inline void set_K_9(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___K_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___K_9), (void*)value);
	}
};


// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E  : public RuntimeObject
{
public:
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_lock
	RuntimeObject * ___m_lock_2;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_eventObj
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_eventObj_3;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_combinedState
	int32_t ___m_combinedState_4;

public:
	inline static int32_t get_offset_of_m_lock_2() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_lock_2)); }
	inline RuntimeObject * get_m_lock_2() const { return ___m_lock_2; }
	inline RuntimeObject ** get_address_of_m_lock_2() { return &___m_lock_2; }
	inline void set_m_lock_2(RuntimeObject * value)
	{
		___m_lock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lock_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventObj_3() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_eventObj_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_eventObj_3() const { return ___m_eventObj_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_eventObj_3() { return &___m_eventObj_3; }
	inline void set_m_eventObj_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_eventObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventObj_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_combinedState_4() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_combinedState_4)); }
	inline int32_t get_m_combinedState_4() const { return ___m_combinedState_4; }
	inline int32_t* get_address_of_m_combinedState_4() { return &___m_combinedState_4; }
	inline void set_m_combinedState_4(int32_t value)
	{
		___m_combinedState_4 = value;
	}
};

struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.ManualResetEventSlim::s_cancellationTokenCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_cancellationTokenCallback_14;

public:
	inline static int32_t get_offset_of_s_cancellationTokenCallback_14() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields, ___s_cancellationTokenCallback_14)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_cancellationTokenCallback_14() const { return ___s_cancellationTokenCallback_14; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_cancellationTokenCallback_14() { return &___s_cancellationTokenCallback_14; }
	inline void set_s_cancellationTokenCallback_14(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_cancellationTokenCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cancellationTokenCallback_14), (void*)value);
	}
};


// Microsoft.Maps.Unity.MapColliderType
struct MapColliderType_tE7909A74CF517EFEFA49447D029B468BC4A73399 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapColliderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapColliderType_tE7909A74CF517EFEFA49447D029B468BC4A73399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Maps.Unity.MapShape
struct MapShape_t1C138EF2615DAA47C99368471D6EE2646167C059 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapShape::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapShape_t1C138EF2615DAA47C99368471D6EE2646167C059, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Maps.Unity.MapTerrainType
struct MapTerrainType_t55A58790E54C87DDF264AD343EBC6EAA8323DCF7 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapTerrainType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapTerrainType_t55A58790E54C87DDF264AD343EBC6EAA8323DCF7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Geospatial.MercatorBoundingBox
struct MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03 
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingBox::#=z8vNo1CRG2vBQpVDkWbisVcs=
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingBox::#=zawmIxZRnx5qJ7mYZRaVLNRM=
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1;

public:
	inline static int32_t get_offset_of_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03, ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() const { return ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() { return &___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0; }
	inline void set_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0 = value;
	}

	inline static int32_t get_offset_of_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03, ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() const { return ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() { return &___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1; }
	inline void set_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1 = value;
	}
};


// Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C 
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingCircle::#=zl2AfWUmGU_IqPuYXBQ==
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0;
	// System.Double Microsoft.Geospatial.MercatorBoundingCircle::#=zc37$sc8kxBHiP6w$PQ==
	double ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1;
	// System.Double Microsoft.Geospatial.MercatorBoundingCircle::#=zRAcdN3$gQZX6NH2qoA==
	double ___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2;
	// System.Boolean Microsoft.Geospatial.MercatorBoundingCircle::#=zR5ago14eUqlO4KcI__EsCyoXddyqgA4QjA==
	bool ___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingCircle::#=z7D6$m5$sMXA8
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dz7D6U24m5U24sMXA8_4;

public:
	inline static int32_t get_offset_of_U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C, ___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0() const { return ___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0() { return &___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0; }
	inline void set_U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C, ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1)); }
	inline double get_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1() const { return ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1; }
	inline double* get_address_of_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1() { return &___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1; }
	inline void set_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1(double value)
	{
		___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1 = value;
	}

	inline static int32_t get_offset_of_U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C, ___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2)); }
	inline double get_U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2() const { return ___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2; }
	inline double* get_address_of_U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2() { return &___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2; }
	inline void set_U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2(double value)
	{
		___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2 = value;
	}

	inline static int32_t get_offset_of_U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C, ___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3)); }
	inline bool get_U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3() const { return ___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3; }
	inline bool* get_address_of_U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3() { return &___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3; }
	inline void set_U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3(bool value)
	{
		___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz7D6U24m5U24sMXA8_4() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C, ___U23U3Dz7D6U24m5U24sMXA8_4)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3Dz7D6U24m5U24sMXA8_4() const { return ___U23U3Dz7D6U24m5U24sMXA8_4; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3Dz7D6U24m5U24sMXA8_4() { return &___U23U3Dz7D6U24m5U24sMXA8_4; }
	inline void set_U23U3Dz7D6U24m5U24sMXA8_4(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3Dz7D6U24m5U24sMXA8_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C_marshaled_pinvoke
{
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0;
	double ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1;
	double ___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2;
	int32_t ___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3;
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dz7D6U24m5U24sMXA8_4;
};
// Native definition for COM marshalling of Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C_marshaled_com
{
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0;
	double ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1;
	double ___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2;
	int32_t ___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3;
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dz7D6U24m5U24sMXA8_4;
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

// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPhraseRecognized_1), (void*)value);
	}
};


// OpenCvSharp.PixelConnectivity
struct PixelConnectivity_t59801D168BC072DFF91808BCED090FEDCAE45B56 
{
public:
	// System.Int32 OpenCvSharp.PixelConnectivity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PixelConnectivity_t59801D168BC072DFF91808BCED090FEDCAE45B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
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


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
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
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) = 0;
};

// #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY
struct U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9 
{
public:
	// UnityEngine.Vector3 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=z_kPbVnY=
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U23U3Dz_kPbVnYU3D_7;
	// System.Single #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zXUkqn3Y=
	float ___U23U3DzXUkqn3YU3D_8;
	// UnityEngine.Vector3 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=z_sVA0vw=
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U23U3Dz_sVA0vwU3D_9;
	// UnityEngine.Plane #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zQyoCHGhkuSw4
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___U23U3DzQyoCHGhkuSw4_10;
	// UnityEngine.Plane #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zIMcVLblzvxeL
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___U23U3DzIMcVLblzvxeL_11;
	// UnityEngine.Vector2 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=ziMvp0jG_FlTuKkNiUgdN6WA=
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12;
	// UnityEngine.Vector2 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zc37$sc8kxBHiP6w$PQ==
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13;

public:
	inline static int32_t get_offset_of_U23U3Dz_kPbVnYU3D_7() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3Dz_kPbVnYU3D_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U23U3Dz_kPbVnYU3D_7() const { return ___U23U3Dz_kPbVnYU3D_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U23U3Dz_kPbVnYU3D_7() { return &___U23U3Dz_kPbVnYU3D_7; }
	inline void set_U23U3Dz_kPbVnYU3D_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U23U3Dz_kPbVnYU3D_7 = value;
	}

	inline static int32_t get_offset_of_U23U3DzXUkqn3YU3D_8() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3DzXUkqn3YU3D_8)); }
	inline float get_U23U3DzXUkqn3YU3D_8() const { return ___U23U3DzXUkqn3YU3D_8; }
	inline float* get_address_of_U23U3DzXUkqn3YU3D_8() { return &___U23U3DzXUkqn3YU3D_8; }
	inline void set_U23U3DzXUkqn3YU3D_8(float value)
	{
		___U23U3DzXUkqn3YU3D_8 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz_sVA0vwU3D_9() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3Dz_sVA0vwU3D_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U23U3Dz_sVA0vwU3D_9() const { return ___U23U3Dz_sVA0vwU3D_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U23U3Dz_sVA0vwU3D_9() { return &___U23U3Dz_sVA0vwU3D_9; }
	inline void set_U23U3Dz_sVA0vwU3D_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U23U3Dz_sVA0vwU3D_9 = value;
	}

	inline static int32_t get_offset_of_U23U3DzQyoCHGhkuSw4_10() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3DzQyoCHGhkuSw4_10)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_U23U3DzQyoCHGhkuSw4_10() const { return ___U23U3DzQyoCHGhkuSw4_10; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_U23U3DzQyoCHGhkuSw4_10() { return &___U23U3DzQyoCHGhkuSw4_10; }
	inline void set_U23U3DzQyoCHGhkuSw4_10(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___U23U3DzQyoCHGhkuSw4_10 = value;
	}

	inline static int32_t get_offset_of_U23U3DzIMcVLblzvxeL_11() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3DzIMcVLblzvxeL_11)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_U23U3DzIMcVLblzvxeL_11() const { return ___U23U3DzIMcVLblzvxeL_11; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_U23U3DzIMcVLblzvxeL_11() { return &___U23U3DzIMcVLblzvxeL_11; }
	inline void set_U23U3DzIMcVLblzvxeL_11(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___U23U3DzIMcVLblzvxeL_11 = value;
	}

	inline static int32_t get_offset_of_U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12() const { return ___U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12() { return &___U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12; }
	inline void set_U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13() const { return ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13() { return &___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13; }
	inline void set_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13 = value;
	}
};

struct U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields
{
public:
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zmC5gzRiOKryV
	int32_t ___U23U3DzmC5gzRiOKryV_0;
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zGySVj_Y1c9LYgCTlK$OQFVI=
	int32_t ___U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1;
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zIC9bMCQa_cbi
	int32_t ___U23U3DzIC9bMCQa_cbi_2;
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=z5mDuj30zA_YNnswRiw==
	int32_t ___U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3;
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zrw7wll5rxjTK
	int32_t ___U23U3Dzrw7wll5rxjTK_4;
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=z$uxlDagiBO5N
	int32_t ___U23U3DzU24uxlDagiBO5N_5;
	// UnityEngine.Vector4[] #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=z0Dv4zEvOVwLgd2iDLg==
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6;

public:
	inline static int32_t get_offset_of_U23U3DzmC5gzRiOKryV_0() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3DzmC5gzRiOKryV_0)); }
	inline int32_t get_U23U3DzmC5gzRiOKryV_0() const { return ___U23U3DzmC5gzRiOKryV_0; }
	inline int32_t* get_address_of_U23U3DzmC5gzRiOKryV_0() { return &___U23U3DzmC5gzRiOKryV_0; }
	inline void set_U23U3DzmC5gzRiOKryV_0(int32_t value)
	{
		___U23U3DzmC5gzRiOKryV_0 = value;
	}

	inline static int32_t get_offset_of_U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1)); }
	inline int32_t get_U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1() const { return ___U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1; }
	inline int32_t* get_address_of_U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1() { return &___U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1; }
	inline void set_U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1(int32_t value)
	{
		___U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1 = value;
	}

	inline static int32_t get_offset_of_U23U3DzIC9bMCQa_cbi_2() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3DzIC9bMCQa_cbi_2)); }
	inline int32_t get_U23U3DzIC9bMCQa_cbi_2() const { return ___U23U3DzIC9bMCQa_cbi_2; }
	inline int32_t* get_address_of_U23U3DzIC9bMCQa_cbi_2() { return &___U23U3DzIC9bMCQa_cbi_2; }
	inline void set_U23U3DzIC9bMCQa_cbi_2(int32_t value)
	{
		___U23U3DzIC9bMCQa_cbi_2 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3)); }
	inline int32_t get_U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3() const { return ___U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3; }
	inline int32_t* get_address_of_U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3() { return &___U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3; }
	inline void set_U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3(int32_t value)
	{
		___U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzrw7wll5rxjTK_4() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3Dzrw7wll5rxjTK_4)); }
	inline int32_t get_U23U3Dzrw7wll5rxjTK_4() const { return ___U23U3Dzrw7wll5rxjTK_4; }
	inline int32_t* get_address_of_U23U3Dzrw7wll5rxjTK_4() { return &___U23U3Dzrw7wll5rxjTK_4; }
	inline void set_U23U3Dzrw7wll5rxjTK_4(int32_t value)
	{
		___U23U3Dzrw7wll5rxjTK_4 = value;
	}

	inline static int32_t get_offset_of_U23U3DzU24uxlDagiBO5N_5() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3DzU24uxlDagiBO5N_5)); }
	inline int32_t get_U23U3DzU24uxlDagiBO5N_5() const { return ___U23U3DzU24uxlDagiBO5N_5; }
	inline int32_t* get_address_of_U23U3DzU24uxlDagiBO5N_5() { return &___U23U3DzU24uxlDagiBO5N_5; }
	inline void set_U23U3DzU24uxlDagiBO5N_5(int32_t value)
	{
		___U23U3DzU24uxlDagiBO5N_5 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6() const { return ___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6() { return &___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6; }
	inline void set_U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419  : public BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_9;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_10;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t331224EB72BAB582E19076DBEBCE04C263DA6FEE * ___postponedActions_11;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_tB1588C2E431B5ADA40379D5DC18919A72BEA44F3 * ___postponedObjectActions_12;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t6D9E31AD9163B3A97AA0E83AC606775912490ABD * ___U3CEventHandlersByTypeU3Ek__BackingField_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___eventExecutionDepth_9)); }
	inline int32_t get_eventExecutionDepth_9() const { return ___eventExecutionDepth_9; }
	inline int32_t* get_address_of_eventExecutionDepth_9() { return &___eventExecutionDepth_9; }
	inline void set_eventExecutionDepth_9(int32_t value)
	{
		___eventExecutionDepth_9 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___eventSystemHandlerType_10)); }
	inline Type_t * get_eventSystemHandlerType_10() const { return ___eventSystemHandlerType_10; }
	inline Type_t ** get_address_of_eventSystemHandlerType_10() { return &___eventSystemHandlerType_10; }
	inline void set_eventSystemHandlerType_10(Type_t * value)
	{
		___eventSystemHandlerType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_10), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___postponedActions_11)); }
	inline List_1_t331224EB72BAB582E19076DBEBCE04C263DA6FEE * get_postponedActions_11() const { return ___postponedActions_11; }
	inline List_1_t331224EB72BAB582E19076DBEBCE04C263DA6FEE ** get_address_of_postponedActions_11() { return &___postponedActions_11; }
	inline void set_postponedActions_11(List_1_t331224EB72BAB582E19076DBEBCE04C263DA6FEE * value)
	{
		___postponedActions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_11), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___postponedObjectActions_12)); }
	inline List_1_tB1588C2E431B5ADA40379D5DC18919A72BEA44F3 * get_postponedObjectActions_12() const { return ___postponedObjectActions_12; }
	inline List_1_tB1588C2E431B5ADA40379D5DC18919A72BEA44F3 ** get_address_of_postponedObjectActions_12() { return &___postponedObjectActions_12; }
	inline void set_postponedObjectActions_12(List_1_tB1588C2E431B5ADA40379D5DC18919A72BEA44F3 * value)
	{
		___postponedObjectActions_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___U3CEventHandlersByTypeU3Ek__BackingField_13)); }
	inline Dictionary_2_t6D9E31AD9163B3A97AA0E83AC606775912490ABD * get_U3CEventHandlersByTypeU3Ek__BackingField_13() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline Dictionary_2_t6D9E31AD9163B3A97AA0E83AC606775912490ABD ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return &___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_13(Dictionary_2_t6D9E31AD9163B3A97AA0E83AC606775912490ABD * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___U3CEventListenersU3Ek__BackingField_14)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_14() const { return ___U3CEventListenersU3Ek__BackingField_14; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_14() { return &___U3CEventListenersU3Ek__BackingField_14; }
	inline void set_U3CEventListenersU3Ek__BackingField_14(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_14), (void*)value);
	}
};

struct BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_15;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419_StaticFields, ___enableDanglingHandlerDiagnostics_8)); }
	inline bool get_enableDanglingHandlerDiagnostics_8() const { return ___enableDanglingHandlerDiagnostics_8; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_8() { return &___enableDanglingHandlerDiagnostics_8; }
	inline void set_enableDanglingHandlerDiagnostics_8(bool value)
	{
		___enableDanglingHandlerDiagnostics_8 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_15() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_tD0F7842E1D71880D9B448BF5472BCFD22EB0C273  : public BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseExtensionService_tD0F7842E1D71880D9B448BF5472BCFD22EB0C273, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// OpenCvSharp.DisposableCvObject
struct DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775  : public DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115
{
public:
	// System.IntPtr OpenCvSharp.DisposableCvObject::ptr
	intptr_t ___ptr_5;
	// System.Boolean OpenCvSharp.DisposableCvObject::disposed
	bool ___disposed_6;

public:
	inline static int32_t get_offset_of_ptr_5() { return static_cast<int32_t>(offsetof(DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775, ___ptr_5)); }
	inline intptr_t get_ptr_5() const { return ___ptr_5; }
	inline intptr_t* get_address_of_ptr_5() { return &___ptr_5; }
	inline void set_ptr_5(intptr_t value)
	{
		___ptr_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F  : public PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_2), (void*)value);
	}
};


// OpenCvSharp.Algorithm
struct Algorithm_tC4A4CDF1E6D67536644FA6E277CC963E1848B83E  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tE610AEADB105DC3093B76E8BF1DA11EE1BFA3954  : public BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tE610AEADB105DC3093B76E8BF1DA11EE1BFA3954, ___U3CRegistrarU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_16() const { return ___U3CRegistrarU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_16() { return &___U3CRegistrarU3Ek__BackingField_16; }
	inline void set_U3CRegistrarU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_16), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// OpenCvSharp.Flann.IndexParams
struct IndexParams_t757848381F913A5F9B2BAA24675ACAD253BFEE8B  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.Flann.IndexParams::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(IndexParams_t757848381F913A5F9B2BAA24675ACAD253BFEE8B, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// OpenCvSharp.LineIterator
struct LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.LineIterator::disposed
	bool ___disposed_7;
	// OpenCvSharp.Mat OpenCvSharp.LineIterator::img
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___img_8;
	// OpenCvSharp.Point OpenCvSharp.LineIterator::pt1
	Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  ___pt1_9;
	// OpenCvSharp.Point OpenCvSharp.LineIterator::pt2
	Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  ___pt2_10;
	// OpenCvSharp.PixelConnectivity OpenCvSharp.LineIterator::connectivity
	int32_t ___connectivity_11;
	// System.Boolean OpenCvSharp.LineIterator::leftToRight
	bool ___leftToRight_12;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_img_8() { return static_cast<int32_t>(offsetof(LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6, ___img_8)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_img_8() const { return ___img_8; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_img_8() { return &___img_8; }
	inline void set_img_8(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___img_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img_8), (void*)value);
	}

	inline static int32_t get_offset_of_pt1_9() { return static_cast<int32_t>(offsetof(LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6, ___pt1_9)); }
	inline Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  get_pt1_9() const { return ___pt1_9; }
	inline Point_t01E6005639EC24B31B70D05F7FF25DC232A23396 * get_address_of_pt1_9() { return &___pt1_9; }
	inline void set_pt1_9(Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  value)
	{
		___pt1_9 = value;
	}

	inline static int32_t get_offset_of_pt2_10() { return static_cast<int32_t>(offsetof(LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6, ___pt2_10)); }
	inline Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  get_pt2_10() const { return ___pt2_10; }
	inline Point_t01E6005639EC24B31B70D05F7FF25DC232A23396 * get_address_of_pt2_10() { return &___pt2_10; }
	inline void set_pt2_10(Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  value)
	{
		___pt2_10 = value;
	}

	inline static int32_t get_offset_of_connectivity_11() { return static_cast<int32_t>(offsetof(LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6, ___connectivity_11)); }
	inline int32_t get_connectivity_11() const { return ___connectivity_11; }
	inline int32_t* get_address_of_connectivity_11() { return &___connectivity_11; }
	inline void set_connectivity_11(int32_t value)
	{
		___connectivity_11 = value;
	}

	inline static int32_t get_offset_of_leftToRight_12() { return static_cast<int32_t>(offsetof(LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6, ___leftToRight_12)); }
	inline bool get_leftToRight_12() const { return ___leftToRight_12; }
	inline bool* get_address_of_leftToRight_12() { return &___leftToRight_12; }
	inline void set_leftToRight_12(bool value)
	{
		___leftToRight_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84  : public BaseExtensionService_tD0F7842E1D71880D9B448BF5472BCFD22EB0C273
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<TrackingLost>k__BackingField
	bool ___U3CTrackingLostU3Ek__BackingField_9;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingLost>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTrackingLostU3Ek__BackingField_10;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingRestored>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTrackingRestoredU3Ek__BackingField_11;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::profile
	LostTrackingServiceProfile_t7C3FC2608D29FC4A0A7A2862D12C7BBD4F823069 * ___profile_12;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::visual
	RuntimeObject* ___visual_13;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::cullingMaskOnTrackingLost
	int32_t ___cullingMaskOnTrackingLost_14;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::timeScaleOnTrackingLost
	float ___timeScaleOnTrackingLost_15;

public:
	inline static int32_t get_offset_of_U3CTrackingLostU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84, ___U3CTrackingLostU3Ek__BackingField_9)); }
	inline bool get_U3CTrackingLostU3Ek__BackingField_9() const { return ___U3CTrackingLostU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CTrackingLostU3Ek__BackingField_9() { return &___U3CTrackingLostU3Ek__BackingField_9; }
	inline void set_U3CTrackingLostU3Ek__BackingField_9(bool value)
	{
		___U3CTrackingLostU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3COnTrackingLostU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84, ___U3COnTrackingLostU3Ek__BackingField_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTrackingLostU3Ek__BackingField_10() const { return ___U3COnTrackingLostU3Ek__BackingField_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTrackingLostU3Ek__BackingField_10() { return &___U3COnTrackingLostU3Ek__BackingField_10; }
	inline void set_U3COnTrackingLostU3Ek__BackingField_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTrackingLostU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingLostU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnTrackingRestoredU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84, ___U3COnTrackingRestoredU3Ek__BackingField_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTrackingRestoredU3Ek__BackingField_11() const { return ___U3COnTrackingRestoredU3Ek__BackingField_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTrackingRestoredU3Ek__BackingField_11() { return &___U3COnTrackingRestoredU3Ek__BackingField_11; }
	inline void set_U3COnTrackingRestoredU3Ek__BackingField_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTrackingRestoredU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingRestoredU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_profile_12() { return static_cast<int32_t>(offsetof(LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84, ___profile_12)); }
	inline LostTrackingServiceProfile_t7C3FC2608D29FC4A0A7A2862D12C7BBD4F823069 * get_profile_12() const { return ___profile_12; }
	inline LostTrackingServiceProfile_t7C3FC2608D29FC4A0A7A2862D12C7BBD4F823069 ** get_address_of_profile_12() { return &___profile_12; }
	inline void set_profile_12(LostTrackingServiceProfile_t7C3FC2608D29FC4A0A7A2862D12C7BBD4F823069 * value)
	{
		___profile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_12), (void*)value);
	}

	inline static int32_t get_offset_of_visual_13() { return static_cast<int32_t>(offsetof(LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84, ___visual_13)); }
	inline RuntimeObject* get_visual_13() const { return ___visual_13; }
	inline RuntimeObject** get_address_of_visual_13() { return &___visual_13; }
	inline void set_visual_13(RuntimeObject* value)
	{
		___visual_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visual_13), (void*)value);
	}

	inline static int32_t get_offset_of_cullingMaskOnTrackingLost_14() { return static_cast<int32_t>(offsetof(LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84, ___cullingMaskOnTrackingLost_14)); }
	inline int32_t get_cullingMaskOnTrackingLost_14() const { return ___cullingMaskOnTrackingLost_14; }
	inline int32_t* get_address_of_cullingMaskOnTrackingLost_14() { return &___cullingMaskOnTrackingLost_14; }
	inline void set_cullingMaskOnTrackingLost_14(int32_t value)
	{
		___cullingMaskOnTrackingLost_14 = value;
	}

	inline static int32_t get_offset_of_timeScaleOnTrackingLost_15() { return static_cast<int32_t>(offsetof(LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84, ___timeScaleOnTrackingLost_15)); }
	inline float get_timeScaleOnTrackingLost_15() const { return ___timeScaleOnTrackingLost_15; }
	inline float* get_address_of_timeScaleOnTrackingLost_15() { return &___timeScaleOnTrackingLost_15; }
	inline void set_timeScaleOnTrackingLost_15(float value)
	{
		___timeScaleOnTrackingLost_15 = value;
	}
};

struct LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisualPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DisableTrackingLostVisualPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisualPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___EnableTrackingLostVisualPerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetTrackingLostPerfMarker_18;

public:
	inline static int32_t get_offset_of_DisableTrackingLostVisualPerfMarker_16() { return static_cast<int32_t>(offsetof(LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84_StaticFields, ___DisableTrackingLostVisualPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DisableTrackingLostVisualPerfMarker_16() const { return ___DisableTrackingLostVisualPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DisableTrackingLostVisualPerfMarker_16() { return &___DisableTrackingLostVisualPerfMarker_16; }
	inline void set_DisableTrackingLostVisualPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DisableTrackingLostVisualPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_EnableTrackingLostVisualPerfMarker_17() { return static_cast<int32_t>(offsetof(LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84_StaticFields, ___EnableTrackingLostVisualPerfMarker_17)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_EnableTrackingLostVisualPerfMarker_17() const { return ___EnableTrackingLostVisualPerfMarker_17; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_EnableTrackingLostVisualPerfMarker_17() { return &___EnableTrackingLostVisualPerfMarker_17; }
	inline void set_EnableTrackingLostVisualPerfMarker_17(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___EnableTrackingLostVisualPerfMarker_17 = value;
	}

	inline static int32_t get_offset_of_SetTrackingLostPerfMarker_18() { return static_cast<int32_t>(offsetof(LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84_StaticFields, ___SetTrackingLostPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetTrackingLostPerfMarker_18() const { return ___SetTrackingLostPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetTrackingLostPerfMarker_18() { return &___SetTrackingLostPerfMarker_18; }
	inline void set_SetTrackingLostPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetTrackingLostPerfMarker_18 = value;
	}
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// OpenCvSharp.Mat
struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.Mat::disposed
	bool ___disposed_7;
	// OpenCvSharp.Mat/MatExprIndexer OpenCvSharp.Mat::matExprIndexer
	MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * ___matExprIndexer_9;
	// OpenCvSharp.Mat/ColExprIndexer OpenCvSharp.Mat::colExprIndexer
	ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * ___colExprIndexer_10;
	// OpenCvSharp.Mat/RowExprIndexer OpenCvSharp.Mat::rowExprIndexer
	RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * ___rowExprIndexer_11;
	// OpenCvSharp.Mat/ColIndexer OpenCvSharp.Mat::colIndexer
	ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * ___colIndexer_12;
	// OpenCvSharp.Mat/RowIndexer OpenCvSharp.Mat::rowIndexer
	RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * ___rowIndexer_13;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_matExprIndexer_9() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___matExprIndexer_9)); }
	inline MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * get_matExprIndexer_9() const { return ___matExprIndexer_9; }
	inline MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E ** get_address_of_matExprIndexer_9() { return &___matExprIndexer_9; }
	inline void set_matExprIndexer_9(MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * value)
	{
		___matExprIndexer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matExprIndexer_9), (void*)value);
	}

	inline static int32_t get_offset_of_colExprIndexer_10() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___colExprIndexer_10)); }
	inline ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * get_colExprIndexer_10() const { return ___colExprIndexer_10; }
	inline ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F ** get_address_of_colExprIndexer_10() { return &___colExprIndexer_10; }
	inline void set_colExprIndexer_10(ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * value)
	{
		___colExprIndexer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colExprIndexer_10), (void*)value);
	}

	inline static int32_t get_offset_of_rowExprIndexer_11() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___rowExprIndexer_11)); }
	inline RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * get_rowExprIndexer_11() const { return ___rowExprIndexer_11; }
	inline RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F ** get_address_of_rowExprIndexer_11() { return &___rowExprIndexer_11; }
	inline void set_rowExprIndexer_11(RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * value)
	{
		___rowExprIndexer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowExprIndexer_11), (void*)value);
	}

	inline static int32_t get_offset_of_colIndexer_12() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___colIndexer_12)); }
	inline ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * get_colIndexer_12() const { return ___colIndexer_12; }
	inline ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F ** get_address_of_colIndexer_12() { return &___colIndexer_12; }
	inline void set_colIndexer_12(ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * value)
	{
		___colIndexer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colIndexer_12), (void*)value);
	}

	inline static int32_t get_offset_of_rowIndexer_13() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___rowIndexer_13)); }
	inline RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * get_rowIndexer_13() const { return ___rowIndexer_13; }
	inline RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 ** get_address_of_rowIndexer_13() { return &___rowIndexer_13; }
	inline void set_rowIndexer_13(RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * value)
	{
		___rowIndexer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowIndexer_13), (void*)value);
	}
};

struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_StaticFields
{
public:
	// System.Int32 OpenCvSharp.Mat::SizeOf
	int32_t ___SizeOf_8;

public:
	inline static int32_t get_offset_of_SizeOf_8() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_StaticFields, ___SizeOf_8)); }
	inline int32_t get_SizeOf_8() const { return ___SizeOf_8; }
	inline int32_t* get_address_of_SizeOf_8() { return &___SizeOf_8; }
	inline void set_SizeOf_8(int32_t value)
	{
		___SizeOf_8 = value;
	}
};


// OpenCvSharp.Face.FaceRecognizer
struct FaceRecognizer_t893F64528D1F2177CEEE7BF3124E56C9E7D81806  : public Algorithm_tC4A4CDF1E6D67536644FA6E277CC963E1848B83E
{
public:
	// System.IntPtr OpenCvSharp.Face.FaceRecognizer::smartPointer
	intptr_t ___smartPointer_7;
	// System.Boolean OpenCvSharp.Face.FaceRecognizer::disposed
	bool ___disposed_8;

public:
	inline static int32_t get_offset_of_smartPointer_7() { return static_cast<int32_t>(offsetof(FaceRecognizer_t893F64528D1F2177CEEE7BF3124E56C9E7D81806, ___smartPointer_7)); }
	inline intptr_t get_smartPointer_7() const { return ___smartPointer_7; }
	inline intptr_t* get_address_of_smartPointer_7() { return &___smartPointer_7; }
	inline void set_smartPointer_7(intptr_t value)
	{
		___smartPointer_7 = value;
	}

	inline static int32_t get_offset_of_disposed_8() { return static_cast<int32_t>(offsetof(FaceRecognizer_t893F64528D1F2177CEEE7BF3124E56C9E7D81806, ___disposed_8)); }
	inline bool get_disposed_8() const { return ___disposed_8; }
	inline bool* get_address_of_disposed_8() { return &___disposed_8; }
	inline void set_disposed_8(bool value)
	{
		___disposed_8 = value;
	}
};


// OpenCvSharp.Feature2D
struct Feature2D_t88C845FDF6FFB98BB50E9EBAA89BC8EB004E33D7  : public Algorithm_tC4A4CDF1E6D67536644FA6E277CC963E1848B83E
{
public:
	// System.Boolean OpenCvSharp.Feature2D::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Feature2D_t88C845FDF6FFB98BB50E9EBAA89BC8EB004E33D7, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// OpenCvSharp.LineSegmentDetector
struct LineSegmentDetector_tFBBD5FACB16B4A9035828D83C41B1467A5971E11  : public Algorithm_tC4A4CDF1E6D67536644FA6E277CC963E1848B83E
{
public:
	// System.Boolean OpenCvSharp.LineSegmentDetector::disposed
	bool ___disposed_7;
	// OpenCvSharp.Ptr`1<OpenCvSharp.LineSegmentDetector> OpenCvSharp.LineSegmentDetector::ptrObj
	Ptr_1_t1F0F7DF88FC351A4ACA390218F5ACAA95157CA08 * ___ptrObj_8;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(LineSegmentDetector_tFBBD5FACB16B4A9035828D83C41B1467A5971E11, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_ptrObj_8() { return static_cast<int32_t>(offsetof(LineSegmentDetector_tFBBD5FACB16B4A9035828D83C41B1467A5971E11, ___ptrObj_8)); }
	inline Ptr_1_t1F0F7DF88FC351A4ACA390218F5ACAA95157CA08 * get_ptrObj_8() const { return ___ptrObj_8; }
	inline Ptr_1_t1F0F7DF88FC351A4ACA390218F5ACAA95157CA08 ** get_address_of_ptrObj_8() { return &___ptrObj_8; }
	inline void set_ptrObj_8(Ptr_1_t1F0F7DF88FC351A4ACA390218F5ACAA95157CA08 * value)
	{
		___ptrObj_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ptrObj_8), (void*)value);
	}
};


// OpenCvSharp.Flann.LinearIndexParams
struct LinearIndexParams_t867C3D5B0ED408B1E3E5FC7676908320330A9A1A  : public IndexParams_t757848381F913A5F9B2BAA24675ACAD253BFEE8B
{
public:
	// System.Boolean OpenCvSharp.Flann.LinearIndexParams::disposed
	bool ___disposed_8;

public:
	inline static int32_t get_offset_of_disposed_8() { return static_cast<int32_t>(offsetof(LinearIndexParams_t867C3D5B0ED408B1E3E5FC7676908320330A9A1A, ___disposed_8)); }
	inline bool get_disposed_8() const { return ___disposed_8; }
	inline bool* get_address_of_disposed_8() { return &___disposed_8; }
	inline void set_disposed_8(bool value)
	{
		___disposed_8 = value;
	}
};


// MapRaycastProvider
struct MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989  : public BaseCoreSystem_tE610AEADB105DC3093B76E8BF1DA11EE1BFA3954
{
public:
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapRenderer> MapRaycastProvider::_mapRenderers
	List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * ____mapRenderers_17;

public:
	inline static int32_t get_offset_of__mapRenderers_17() { return static_cast<int32_t>(offsetof(MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989, ____mapRenderers_17)); }
	inline List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * get__mapRenderers_17() const { return ____mapRenderers_17; }
	inline List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 ** get_address_of__mapRenderers_17() { return &____mapRenderers_17; }
	inline void set__mapRenderers_17(List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * value)
	{
		____mapRenderers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapRenderers_17), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// OpenCvSharp.ML.StatModel
struct StatModel_tE39D5C1438221D87AA07255AC944654825D101F9  : public Algorithm_tC4A4CDF1E6D67536644FA6E277CC963E1848B83E
{
public:

public:
};


// OpenCvSharp.Face.LBPHFaceRecognizer
struct LBPHFaceRecognizer_tA9E6452EFC3896DC25B89CE52BCC69FE73018BDF  : public FaceRecognizer_t893F64528D1F2177CEEE7BF3124E56C9E7D81806
{
public:

public:
};


// OpenCvSharp.ML.LogisticRegression
struct LogisticRegression_tC685911F2DB95237F290AB3D7684B65DFD797082  : public StatModel_tE39D5C1438221D87AA07255AC944654825D101F9
{
public:
	// System.Boolean OpenCvSharp.ML.LogisticRegression::disposed
	bool ___disposed_7;
	// OpenCvSharp.Ptr`1<OpenCvSharp.ML.LogisticRegression> OpenCvSharp.ML.LogisticRegression::ptrObj
	Ptr_1_tBE3DE38A24423D013B5A138B325B5FBBF9F1E388 * ___ptrObj_8;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(LogisticRegression_tC685911F2DB95237F290AB3D7684B65DFD797082, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_ptrObj_8() { return static_cast<int32_t>(offsetof(LogisticRegression_tC685911F2DB95237F290AB3D7684B65DFD797082, ___ptrObj_8)); }
	inline Ptr_1_tBE3DE38A24423D013B5A138B325B5FBBF9F1E388 * get_ptrObj_8() const { return ___ptrObj_8; }
	inline Ptr_1_tBE3DE38A24423D013B5A138B325B5FBBF9F1E388 ** get_address_of_ptrObj_8() { return &___ptrObj_8; }
	inline void set_ptrObj_8(Ptr_1_tBE3DE38A24423D013B5A138B325B5FBBF9F1E388 * value)
	{
		___ptrObj_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ptrObj_8), (void*)value);
	}
};


// OpenCvSharp.MSER
struct MSER_tFB82F4B2B382D0FF872164C6B211925FEAFABE20  : public Feature2D_t88C845FDF6FFB98BB50E9EBAA89BC8EB004E33D7
{
public:
	// System.Boolean OpenCvSharp.MSER::disposed
	bool ___disposed_8;
	// OpenCvSharp.Ptr`1<OpenCvSharp.MSER> OpenCvSharp.MSER::ptrObj
	Ptr_1_tFA61A5F8988CAE0F6FE7C6F58E02A81794482BBA * ___ptrObj_9;

public:
	inline static int32_t get_offset_of_disposed_8() { return static_cast<int32_t>(offsetof(MSER_tFB82F4B2B382D0FF872164C6B211925FEAFABE20, ___disposed_8)); }
	inline bool get_disposed_8() const { return ___disposed_8; }
	inline bool* get_address_of_disposed_8() { return &___disposed_8; }
	inline void set_disposed_8(bool value)
	{
		___disposed_8 = value;
	}

	inline static int32_t get_offset_of_ptrObj_9() { return static_cast<int32_t>(offsetof(MSER_tFB82F4B2B382D0FF872164C6B211925FEAFABE20, ___ptrObj_9)); }
	inline Ptr_1_tFA61A5F8988CAE0F6FE7C6F58E02A81794482BBA * get_ptrObj_9() const { return ___ptrObj_9; }
	inline Ptr_1_tFA61A5F8988CAE0F6FE7C6F58E02A81794482BBA ** get_address_of_ptrObj_9() { return &___ptrObj_9; }
	inline void set_ptrObj_9(Ptr_1_tFA61A5F8988CAE0F6FE7C6F58E02A81794482BBA * value)
	{
		___ptrObj_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ptrObj_9), (void*)value);
	}
};


// Microsoft.Maps.Unity.MapRendererBase
struct MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Mesh> Microsoft.Maps.Unity.MapRendererBase::#=zyvWJptMsGvQYOmwzQQ==
	List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * ___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::#=zgLYW_oB1Bmf8
	bool ___U23U3DzgLYW_oB1Bmf8_9;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::_version
	int32_t ____version_11;
	// Microsoft.Maps.Unity.MapSession Microsoft.Maps.Unity.MapRendererBase::_mapSession
	MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * ____mapSession_12;
	// Microsoft.Maps.Unity.MapSession Microsoft.Maps.Unity.MapRendererBase::#=zilyv5B6UxfpN
	MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * ___U23U3Dzilyv5B6UxfpN_13;
	// System.String Microsoft.Maps.Unity.MapRendererBase::#=zIwlFIzVTk1bahUD98w==
	String_t* ___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14;
	// UnityEngine.Color Microsoft.Maps.Unity.MapRendererBase::_mapEdgeColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____mapEdgeColor_15;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_mapEdgeColorFadeDistance
	float ____mapEdgeColorFadeDistance_16;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_detailOffset
	float ____detailOffset_17;
	// Microsoft.Maps.Unity.LatLonWrapper Microsoft.Maps.Unity.MapRendererBase::_center
	LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE  ____center_18;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_zoomLevel
	float ____zoomLevel_19;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_minimumZoomLevel
	float ____minimumZoomLevel_20;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_maximumZoomLevel
	float ____maximumZoomLevel_21;
	// Microsoft.Maps.Unity.MapTerrainType Microsoft.Maps.Unity.MapRendererBase::_mapTerrainType
	int32_t ____mapTerrainType_22;
	// Microsoft.Maps.Unity.MapShape Microsoft.Maps.Unity.MapRendererBase::_mapShape
	int32_t ____mapShape_23;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=zglzr$NfYA8gy8qXUGy7jTpo=
	double ___U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24;
	// UnityEngine.Vector2 Microsoft.Maps.Unity.MapRendererBase::_localMapDimension
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____localMapDimension_25;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_localMapRadius
	float ____localMapRadius_26;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_localMapBaseHeight
	float ____localMapBaseHeight_27;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::#=zqKyyv6nTzCzyiBh8bHEY6Nc=
	float ___U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::#=zGUWZE_0nMZYj
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U23U3DzGUWZE_0nMZYj_29;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::#=zp9lbXTWvMSmA0k_TEQ==
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::#=zL3vZk1pnYgEWKBlf_w==
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::#=zBLfz2MYFue$$l2UvVg==
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32;
	// Microsoft.Geospatial.GeoBoundingBox Microsoft.Maps.Unity.MapRendererBase::#=zIIQnC376dsSOzdD8EQ==
	GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756  ___U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33;
	// UnityEngine.Texture2D Microsoft.Maps.Unity.MapRendererBase::#=z8POMnU2KO6Ye
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U23U3Dz8POMnU2KO6Ye_34;
	// UnityEngine.Camera Microsoft.Maps.Unity.MapRendererBase::#=z9VIXQ0bkqz8rsspyOvsw1RM=
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_elevationScale
	float ____elevationScale_36;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_castShadows
	bool ____castShadows_37;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_receiveShadows
	bool ____receiveShadows_38;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_enableMrtkMaterialIntegration
	bool ____enableMrtkMaterialIntegration_39;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::_terrainMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____terrainMaterial_40;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zWyvPN7olV3vQtg7OafwQt$A=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zcbOZrgU6I1H2jVMKcvPfgKA=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zcWzpUwpbuVFGtArGRhP7wTE=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_isClippingVolumeWallEnabled
	bool ____isClippingVolumeWallEnabled_44;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::_clippingVolumeMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____clippingVolumeMaterial_45;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zniRhOY9yyJnMhhhG8alvSLxfxueK
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zTIqKs1aEHRH$$jWntQ==
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zbjjNK00sLTMIej8v8Q==
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zDq5QGH7IlHPX
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzDq5QGH7IlHPX_49;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zW$qNkR8ZJBhllEacyKnc00Y=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zuNJT9UHX8n8$tWNM59cHigE=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zGXUfOHV4rxXf
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzGXUfOHV4rxXf_52;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=z8dqN2EFS8IXkhgqvug==
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zT9JVwRpOhamZ4lMrKzqNo12gx0JN
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54;
	// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution Microsoft.Maps.Unity.MapRendererBase::_clippingVolumeDistanceTextureResolution
	int32_t ____clippingVolumeDistanceTextureResolution_55;
	// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution Microsoft.Maps.Unity.MapRendererBase::#=z1X5BSg16x38NSSZZqh1i0r0=
	int32_t ___U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56;
	// Microsoft.Maps.Unity.TextureTileLayerList Microsoft.Maps.Unity.MapRendererBase::_textureTileLayers
	TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8 * ____textureTileLayers_57;
	// Microsoft.Maps.Unity.ElevationTileLayerList Microsoft.Maps.Unity.MapRendererBase::_elevationTileLayers
	ElevationTileLayerList_t3EEC2F8696DA2541B15517E87F3C2B3EFC6E6B13 * ____elevationTileLayers_59;
	// #=zSGAjct8w61XD9NwbVtcamQwAVN4i Microsoft.Maps.Unity.MapRendererBase::#=zmti9cAx_YIgb
	U23U3DzSGAjct8w61XD9NwbVtcamQwAVN4i_t63810C266FCF7349E740FEF3D49697C18C74AACC * ___U23U3Dzmti9cAx_YIgb_60;
	// System.Nullable`1<System.Boolean> Microsoft.Maps.Unity.MapRendererBase::#=zBIBiHxvhve7ilGYGNQ==
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_hideTileLayerComponents
	bool ____hideTileLayerComponents_62;
	// System.EventHandler Microsoft.Maps.Unity.MapRendererBase::#=z6jYcfOg=
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___U23U3Dz6jYcfOgU3D_63;
	// System.EventHandler Microsoft.Maps.Unity.MapRendererBase::#=z6liJx8R_Bl8G
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___U23U3Dz6liJx8R_Bl8G_64;
	// System.EventHandler`1<Microsoft.Maps.Unity.MapSession> Microsoft.Maps.Unity.MapRendererBase::#=zkMk5z3BcGtOV
	EventHandler_1_t5A44536C29E4E6D13AE3EFBF556A08847DFE96DC * ___U23U3DzkMk5z3BcGtOV_65;
	// UnityEngine.MaterialPropertyBlock Microsoft.Maps.Unity.MapRendererBase::#=zQbmqyqiS3L5Sj_vxiHXXeZ8=
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66;
	// UnityEngine.MaterialPropertyBlock Microsoft.Maps.Unity.MapRendererBase::#=zmwiOFXn7lCHUEqUzKcBXlP1beBhN
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67;
	// UnityEngine.RenderTextureFormat Microsoft.Maps.Unity.MapRendererBase::#=zAndzma3OFyUrYCgJAQqWdrk0IRPE
	int32_t ___U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70;
	// UnityEngine.Camera Microsoft.Maps.Unity.MapRendererBase::#=ze1sqwcaKaOLnVQsmEnmgbsI=
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71;
	// UnityEngine.GameObject Microsoft.Maps.Unity.MapRendererBase::#=zGW3SHu0LTmVV9doR7S$umdBQ5DxA
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72;
	// UnityEngine.Rendering.CommandBuffer Microsoft.Maps.Unity.MapRendererBase::#=znBC6tEc5L7YpnfvWNsJ74e9Le_vA
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73;
	// UnityEngine.RenderTexture Microsoft.Maps.Unity.MapRendererBase::#=zq044YgL5T$$TLOcGtihvFzo=
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74;
	// System.Object Microsoft.Maps.Unity.MapRendererBase::#=zaj$xoH5w7v$C
	RuntimeObject * ___U23U3DzajU24xoH5w7vU24C_75;
	// #=zslffm3rEpcrDGeF0LnKQktU= Microsoft.Maps.Unity.MapRendererBase::#=zZXj3$30dbmxb
	U23U3Dzslffm3rEpcrDGeF0LnKQktUU3D_tF0EE0F1F72AE6E41707DB83400FD2C4A7245F2A4 * ___U23U3DzZXj3U2430dbmxb_76;
	// #=zxNi94QYCEvGCRwW2p7FSSls0nuoJ Microsoft.Maps.Unity.MapRendererBase::#=zCSl6lpg_zQnK
	U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * ___U23U3DzCSl6lpg_zQnK_77;
	// #=zreTq2aMiQHwa4PeFRZDv3dFu3_uL Microsoft.Maps.Unity.MapRendererBase::#=znYMlaPjR$LEd40z3ZD$WzyI=
	U23U3DzreTq2aMiQHwa4PeFRZDv3dFu3_uL_tD47C36C75E1BD177F00903A320F6D2DBD6AD678C * ___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78;
	// #=zEgwucroqHQ3qyhQOBF$8hhRKBtqV Microsoft.Maps.Unity.MapRendererBase::#=zmgnslVO2h8hT
	U23U3DzEgwucroqHQ3qyhQOBFU248hhRKBtqV_t975EF43C9578F598D9B1A0A4F8EBE23AA2100D30 * ___U23U3DzmgnslVO2h8hT_79;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::#=zq90mNM3U$G0SLAq6b5y_DKRn8wAe
	bool ___U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80;
	// Microsoft.Maps.Unity.MapLabelLayer Microsoft.Maps.Unity.MapRendererBase::#=z77IlqDE4FhBi
	MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * ___U23U3Dz77IlqDE4FhBi_81;
	// Microsoft.Maps.Unity.MapLabelLayer Microsoft.Maps.Unity.MapRendererBase::#=zwwPGp4vA29TV
	MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * ___U23U3DzwwPGp4vA29TV_82;
	// #=zxNi94QYCEvGCRwW2p7FSSls0nuoJ Microsoft.Maps.Unity.MapRendererBase::#=zXi$QkIanoVsG
	U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * ___U23U3DzXiU24QkIanoVsG_83;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zemVScALLWE3T
	int32_t ___U23U3DzemVScALLWE3T_84;
	// Microsoft.Geospatial.MercatorBoundingBox Microsoft.Maps.Unity.MapRendererBase::#=zhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8w==
	MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  ___U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85;
	// Microsoft.Geospatial.MercatorBoundingBox Microsoft.Maps.Unity.MapRendererBase::#=znaTvLz6wHTrYa_ncy0MlTLpd7BQP
	MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  ___U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86;
	// Microsoft.Geospatial.MercatorBoundingCircle Microsoft.Maps.Unity.MapRendererBase::#=zeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAc=
	MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C  ___U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87;
	// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId> Microsoft.Maps.Unity.MapRendererBase::#=zvDxjcsI3cFacBKDQXFrmmjUzOqCY
	List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * ___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=zhDTqz$x5f0jFsAHPVA==
	double ___U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=zy5KnEEq2ZWAaQDAFdA==
	double ___U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90;
	// Microsoft.Geospatial.LatLon Microsoft.Maps.Unity.MapRendererBase::#=zvho7ZuVajrwVbdC_oA==
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91;
	// Microsoft.Geospatial.LatLon Microsoft.Maps.Unity.MapRendererBase::#=zJQ$gE$05cggu$FQ3og==
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Maps.Unity.MapRendererBase::#=zWWpX$AUc1vs_WSIS8VpAg8wQBxs2
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Maps.Unity.MapRendererBase::#=zMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPs=
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=z0SS3O_7_EgadxOLfXWQq__wLfcwe
	double ___U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=zQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjM=
	double ___U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=zF7zGt23XK$W9_XKLI7O5fmcQ6_XRA32utQ==
	double ___U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97;
	// UnityEngine.Vector2 Microsoft.Maps.Unity.MapRendererBase::#=zI20pFJEuZbxFS3brVA==
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::#=zrqXq$5WTq17VXFtVAg==
	float ___U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::#=zIjH1r19CxdnhXhQRRg==
	float ___U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== Microsoft.Maps.Unity.MapRendererBase::#=zEiWXvGQUryvxQkqIN_4SDcU=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101;
	// #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw= Microsoft.Maps.Unity.MapRendererBase::#=zSdCM6PN23WfyeImkTVNB3V8=
	U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  ___U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102;
	// UnityEngine.Vector3 Microsoft.Maps.Unity.MapRendererBase::#=z5WrGpL_yNVbmrOX47xb$MyeUEyOY
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=z$pcLGu4Njq_L1RuEaoIj6v0=
	double ___U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=z297P$HkTtI6$MLGRDkHQZVE=
	double ___U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::#=zR9G$gMZJGslLE4yeoA==
	float ___U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::#=ztXNDWQsHkpo1z_TEJunTj40=
	float ___U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107;
	// #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY Microsoft.Maps.Unity.MapRendererBase::#=zZvtfcKEIhrS48URVJd1Ezr8=
	U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9  ___U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108;
	// System.Collections.Generic.List`1<System.String> Microsoft.Maps.Unity.MapRendererBase::#=zBlrl2rmQWqzFOvoFQg6R4E0=
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109;
	// System.Collections.Generic.List`1<System.String> Microsoft.Maps.Unity.MapRendererBase::#=zYcr5tmTLFR2$tQCtq$EvqeE=
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::#=z4WgwZkn2I81GxWAvxw==
	bool ___U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=z9MQ6wF3$JrGjI3S6r1je$MwbmgMJ
	int32_t ___U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zPccfKmXdast_gctwgd32VJDbJUwXXhct8A==
	int32_t ___U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zptUnw_Y0toZvB70nCiuMWQY=
	int32_t ___U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zWgobBQev2_2N
	int32_t ___U23U3DzWgobBQev2_2N_115;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zWy6Ib_RKRbTJMtiXMQ==
	int32_t ___U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zf5JVrq84WLAZPtRy4g==
	int32_t ___U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zlpNrgFMBVTT81__gKA==
	int32_t ___U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zf7fY5k2$RDspRfbuFw==
	int32_t ___U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zJx2CtSyDIS4sDNKd0oHTHIH$U0yT
	int32_t ___U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zKNn5W5xgVY0qpfkbArR3nhA=
	int32_t ___U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zD9JApHtXzS7k
	int32_t ___U23U3DzD9JApHtXzS7k_122;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zDgmDJDdpeIH43MNIOXE9rOM=
	int32_t ___U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zoZ4V9Salbg54fKz9ZN2$wp8=
	int32_t ___U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zRkWhHeZI5CEb
	int32_t ___U23U3DzRkWhHeZI5CEb_125;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zsVFGVy17LrIO
	int32_t ___U23U3DzsVFGVy17LrIO_126;
	// UnityEngine.Texture2D Microsoft.Maps.Unity.MapRendererBase::#=zz2E5U6SNwniS
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U23U3Dzz2E5U6SNwniS_127;
	// #=zz2WQAsO2UUEplIiiNuE7oQk= Microsoft.Maps.Unity.MapRendererBase::#=zreEnTofAT$DCpHxeVg==
	U23U3Dzz2WQAsO2UUEplIiiNuE7oQkU3D_t0EE83925EB2ADE849F30C026B3E102D9250CCA6F * ___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128;
	// System.Collections.Generic.List`1<#=ziuJgwfIQN7Cq3ebdm5MMOxI9zsHK> Microsoft.Maps.Unity.MapRendererBase::#=z0FIVAoiwIYc$8digYnCRKNs=
	List_1_t33758A17F9C5272569ADB02F8230576D4AF1E6D6 * ___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129;
	// System.Collections.Generic.List`1<#=zXT6PAmOt3SpWxcIyXtV0HZNYSGH4> Microsoft.Maps.Unity.MapRendererBase::#=zoZsBrxdUtCvN6rmQ0Sdd$BW4a3SoLI0iYA==
	List_1_t9784882413F9EEDBD78A33DB4E900C033610AF29 * ___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130;
	// System.Collections.Generic.List`1<#=zcn8lNm8$im3OCUjLCJDAQvsHGNji> Microsoft.Maps.Unity.MapRendererBase::#=znIYyFhREtYmg1P5LUsg5WXQ=
	List_1_tA1AC911A62FB80716188A6C2E74EC1CDA333C070 * ___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131;
	// System.Collections.Generic.List`1<#=zCZTNcCQIQyHmdF3yzrf99HvCI3Q8> Microsoft.Maps.Unity.MapRendererBase::#=zjAEKP41cMa26mK1WHmvT_obC$Nb7
	List_1_t3583F7E200CA31239569F517D46EC6A79785FE7D * ___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132;
	// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId> Microsoft.Maps.Unity.MapRendererBase::#=zArvDp8QoaN_$rUHAEQ==
	List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * ___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133;
	// UnityEngine.Vector4[] Microsoft.Maps.Unity.MapRendererBase::#=zqmewxhIrNjasEbniEw==
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134;
	// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,#=z0MnGekwpRgFU7$iVW8X5$xonhEZvRaHEMXVHPyh9aO2kc52YdA==> Microsoft.Maps.Unity.MapRendererBase::#=z5M1FRXD$gLHWxwCIYw==
	Dictionary_2_t049AB000068AC79B45EED8BCCAE47B23B0B18B72 * ___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135;
	// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,#=zG9WBI4m7na9OshAewdvflELclh5D> Microsoft.Maps.Unity.MapRendererBase::#=zCmJRGE8fZ8dIE5$50Iz4TK6D58dC
	Dictionary_2_tD7BA2A0D4A15ABAD76816CADA4A47E4EED50BB77 * ___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::#=z8xZAEAcKvnXQAkbKePRTyv4=
	bool ___U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137;

public:
	inline static int32_t get_offset_of_U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5)); }
	inline List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * get_U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5() const { return ___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5; }
	inline List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B ** get_address_of_U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5() { return &___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5; }
	inline void set_U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * value)
	{
		___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzgLYW_oB1Bmf8_9() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzgLYW_oB1Bmf8_9)); }
	inline bool get_U23U3DzgLYW_oB1Bmf8_9() const { return ___U23U3DzgLYW_oB1Bmf8_9; }
	inline bool* get_address_of_U23U3DzgLYW_oB1Bmf8_9() { return &___U23U3DzgLYW_oB1Bmf8_9; }
	inline void set_U23U3DzgLYW_oB1Bmf8_9(bool value)
	{
		___U23U3DzgLYW_oB1Bmf8_9 = value;
	}

	inline static int32_t get_offset_of__version_11() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____version_11)); }
	inline int32_t get__version_11() const { return ____version_11; }
	inline int32_t* get_address_of__version_11() { return &____version_11; }
	inline void set__version_11(int32_t value)
	{
		____version_11 = value;
	}

	inline static int32_t get_offset_of__mapSession_12() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____mapSession_12)); }
	inline MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * get__mapSession_12() const { return ____mapSession_12; }
	inline MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E ** get_address_of__mapSession_12() { return &____mapSession_12; }
	inline void set__mapSession_12(MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * value)
	{
		____mapSession_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapSession_12), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzilyv5B6UxfpN_13() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzilyv5B6UxfpN_13)); }
	inline MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * get_U23U3Dzilyv5B6UxfpN_13() const { return ___U23U3Dzilyv5B6UxfpN_13; }
	inline MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E ** get_address_of_U23U3Dzilyv5B6UxfpN_13() { return &___U23U3Dzilyv5B6UxfpN_13; }
	inline void set_U23U3Dzilyv5B6UxfpN_13(MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * value)
	{
		___U23U3Dzilyv5B6UxfpN_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzilyv5B6UxfpN_13), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14)); }
	inline String_t* get_U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14() const { return ___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14; }
	inline String_t** get_address_of_U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14() { return &___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14; }
	inline void set_U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14(String_t* value)
	{
		___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14), (void*)value);
	}

	inline static int32_t get_offset_of__mapEdgeColor_15() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____mapEdgeColor_15)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__mapEdgeColor_15() const { return ____mapEdgeColor_15; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__mapEdgeColor_15() { return &____mapEdgeColor_15; }
	inline void set__mapEdgeColor_15(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____mapEdgeColor_15 = value;
	}

	inline static int32_t get_offset_of__mapEdgeColorFadeDistance_16() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____mapEdgeColorFadeDistance_16)); }
	inline float get__mapEdgeColorFadeDistance_16() const { return ____mapEdgeColorFadeDistance_16; }
	inline float* get_address_of__mapEdgeColorFadeDistance_16() { return &____mapEdgeColorFadeDistance_16; }
	inline void set__mapEdgeColorFadeDistance_16(float value)
	{
		____mapEdgeColorFadeDistance_16 = value;
	}

	inline static int32_t get_offset_of__detailOffset_17() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____detailOffset_17)); }
	inline float get__detailOffset_17() const { return ____detailOffset_17; }
	inline float* get_address_of__detailOffset_17() { return &____detailOffset_17; }
	inline void set__detailOffset_17(float value)
	{
		____detailOffset_17 = value;
	}

	inline static int32_t get_offset_of__center_18() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____center_18)); }
	inline LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE  get__center_18() const { return ____center_18; }
	inline LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE * get_address_of__center_18() { return &____center_18; }
	inline void set__center_18(LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE  value)
	{
		____center_18 = value;
	}

	inline static int32_t get_offset_of__zoomLevel_19() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____zoomLevel_19)); }
	inline float get__zoomLevel_19() const { return ____zoomLevel_19; }
	inline float* get_address_of__zoomLevel_19() { return &____zoomLevel_19; }
	inline void set__zoomLevel_19(float value)
	{
		____zoomLevel_19 = value;
	}

	inline static int32_t get_offset_of__minimumZoomLevel_20() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____minimumZoomLevel_20)); }
	inline float get__minimumZoomLevel_20() const { return ____minimumZoomLevel_20; }
	inline float* get_address_of__minimumZoomLevel_20() { return &____minimumZoomLevel_20; }
	inline void set__minimumZoomLevel_20(float value)
	{
		____minimumZoomLevel_20 = value;
	}

	inline static int32_t get_offset_of__maximumZoomLevel_21() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____maximumZoomLevel_21)); }
	inline float get__maximumZoomLevel_21() const { return ____maximumZoomLevel_21; }
	inline float* get_address_of__maximumZoomLevel_21() { return &____maximumZoomLevel_21; }
	inline void set__maximumZoomLevel_21(float value)
	{
		____maximumZoomLevel_21 = value;
	}

	inline static int32_t get_offset_of__mapTerrainType_22() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____mapTerrainType_22)); }
	inline int32_t get__mapTerrainType_22() const { return ____mapTerrainType_22; }
	inline int32_t* get_address_of__mapTerrainType_22() { return &____mapTerrainType_22; }
	inline void set__mapTerrainType_22(int32_t value)
	{
		____mapTerrainType_22 = value;
	}

	inline static int32_t get_offset_of__mapShape_23() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____mapShape_23)); }
	inline int32_t get__mapShape_23() const { return ____mapShape_23; }
	inline int32_t* get_address_of__mapShape_23() { return &____mapShape_23; }
	inline void set__mapShape_23(int32_t value)
	{
		____mapShape_23 = value;
	}

	inline static int32_t get_offset_of_U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24)); }
	inline double get_U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24() const { return ___U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24; }
	inline double* get_address_of_U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24() { return &___U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24; }
	inline void set_U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24(double value)
	{
		___U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24 = value;
	}

	inline static int32_t get_offset_of__localMapDimension_25() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____localMapDimension_25)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__localMapDimension_25() const { return ____localMapDimension_25; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__localMapDimension_25() { return &____localMapDimension_25; }
	inline void set__localMapDimension_25(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____localMapDimension_25 = value;
	}

	inline static int32_t get_offset_of__localMapRadius_26() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____localMapRadius_26)); }
	inline float get__localMapRadius_26() const { return ____localMapRadius_26; }
	inline float* get_address_of__localMapRadius_26() { return &____localMapRadius_26; }
	inline void set__localMapRadius_26(float value)
	{
		____localMapRadius_26 = value;
	}

	inline static int32_t get_offset_of__localMapBaseHeight_27() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____localMapBaseHeight_27)); }
	inline float get__localMapBaseHeight_27() const { return ____localMapBaseHeight_27; }
	inline float* get_address_of__localMapBaseHeight_27() { return &____localMapBaseHeight_27; }
	inline void set__localMapBaseHeight_27(float value)
	{
		____localMapBaseHeight_27 = value;
	}

	inline static int32_t get_offset_of_U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28)); }
	inline float get_U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28() const { return ___U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28; }
	inline float* get_address_of_U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28() { return &___U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28; }
	inline void set_U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28(float value)
	{
		___U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28 = value;
	}

	inline static int32_t get_offset_of_U23U3DzGUWZE_0nMZYj_29() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzGUWZE_0nMZYj_29)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U23U3DzGUWZE_0nMZYj_29() const { return ___U23U3DzGUWZE_0nMZYj_29; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U23U3DzGUWZE_0nMZYj_29() { return &___U23U3DzGUWZE_0nMZYj_29; }
	inline void set_U23U3DzGUWZE_0nMZYj_29(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U23U3DzGUWZE_0nMZYj_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzGUWZE_0nMZYj_29), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30() const { return ___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30() { return &___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30; }
	inline void set_U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31() const { return ___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31() { return &___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31; }
	inline void set_U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32() const { return ___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32() { return &___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32; }
	inline void set_U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33)); }
	inline GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756  get_U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33() const { return ___U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33; }
	inline GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756 * get_address_of_U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33() { return &___U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33; }
	inline void set_U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33(GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756  value)
	{
		___U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz8POMnU2KO6Ye_34() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz8POMnU2KO6Ye_34)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U23U3Dz8POMnU2KO6Ye_34() const { return ___U23U3Dz8POMnU2KO6Ye_34; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U23U3Dz8POMnU2KO6Ye_34() { return &___U23U3Dz8POMnU2KO6Ye_34; }
	inline void set_U23U3Dz8POMnU2KO6Ye_34(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U23U3Dz8POMnU2KO6Ye_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz8POMnU2KO6Ye_34), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35() const { return ___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35() { return &___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35; }
	inline void set_U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35), (void*)value);
	}

	inline static int32_t get_offset_of__elevationScale_36() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____elevationScale_36)); }
	inline float get__elevationScale_36() const { return ____elevationScale_36; }
	inline float* get_address_of__elevationScale_36() { return &____elevationScale_36; }
	inline void set__elevationScale_36(float value)
	{
		____elevationScale_36 = value;
	}

	inline static int32_t get_offset_of__castShadows_37() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____castShadows_37)); }
	inline bool get__castShadows_37() const { return ____castShadows_37; }
	inline bool* get_address_of__castShadows_37() { return &____castShadows_37; }
	inline void set__castShadows_37(bool value)
	{
		____castShadows_37 = value;
	}

	inline static int32_t get_offset_of__receiveShadows_38() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____receiveShadows_38)); }
	inline bool get__receiveShadows_38() const { return ____receiveShadows_38; }
	inline bool* get_address_of__receiveShadows_38() { return &____receiveShadows_38; }
	inline void set__receiveShadows_38(bool value)
	{
		____receiveShadows_38 = value;
	}

	inline static int32_t get_offset_of__enableMrtkMaterialIntegration_39() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____enableMrtkMaterialIntegration_39)); }
	inline bool get__enableMrtkMaterialIntegration_39() const { return ____enableMrtkMaterialIntegration_39; }
	inline bool* get_address_of__enableMrtkMaterialIntegration_39() { return &____enableMrtkMaterialIntegration_39; }
	inline void set__enableMrtkMaterialIntegration_39(bool value)
	{
		____enableMrtkMaterialIntegration_39 = value;
	}

	inline static int32_t get_offset_of__terrainMaterial_40() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____terrainMaterial_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__terrainMaterial_40() const { return ____terrainMaterial_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__terrainMaterial_40() { return &____terrainMaterial_40; }
	inline void set__terrainMaterial_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____terrainMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____terrainMaterial_40), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41() const { return ___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41() { return &___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41; }
	inline void set_U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42() const { return ___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42() { return &___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42; }
	inline void set_U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43() const { return ___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43() { return &___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43; }
	inline void set_U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43), (void*)value);
	}

	inline static int32_t get_offset_of__isClippingVolumeWallEnabled_44() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____isClippingVolumeWallEnabled_44)); }
	inline bool get__isClippingVolumeWallEnabled_44() const { return ____isClippingVolumeWallEnabled_44; }
	inline bool* get_address_of__isClippingVolumeWallEnabled_44() { return &____isClippingVolumeWallEnabled_44; }
	inline void set__isClippingVolumeWallEnabled_44(bool value)
	{
		____isClippingVolumeWallEnabled_44 = value;
	}

	inline static int32_t get_offset_of__clippingVolumeMaterial_45() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____clippingVolumeMaterial_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__clippingVolumeMaterial_45() const { return ____clippingVolumeMaterial_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__clippingVolumeMaterial_45() { return &____clippingVolumeMaterial_45; }
	inline void set__clippingVolumeMaterial_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____clippingVolumeMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clippingVolumeMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46() const { return ___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46() { return &___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46; }
	inline void set_U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47() const { return ___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47() { return &___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47; }
	inline void set_U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48() const { return ___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48() { return &___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48; }
	inline void set_U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzDq5QGH7IlHPX_49() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzDq5QGH7IlHPX_49)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzDq5QGH7IlHPX_49() const { return ___U23U3DzDq5QGH7IlHPX_49; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzDq5QGH7IlHPX_49() { return &___U23U3DzDq5QGH7IlHPX_49; }
	inline void set_U23U3DzDq5QGH7IlHPX_49(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzDq5QGH7IlHPX_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzDq5QGH7IlHPX_49), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50() const { return ___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50() { return &___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50; }
	inline void set_U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51() const { return ___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51() { return &___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51; }
	inline void set_U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzGXUfOHV4rxXf_52() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzGXUfOHV4rxXf_52)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzGXUfOHV4rxXf_52() const { return ___U23U3DzGXUfOHV4rxXf_52; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzGXUfOHV4rxXf_52() { return &___U23U3DzGXUfOHV4rxXf_52; }
	inline void set_U23U3DzGXUfOHV4rxXf_52(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzGXUfOHV4rxXf_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzGXUfOHV4rxXf_52), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53() const { return ___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53() { return &___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53; }
	inline void set_U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54() const { return ___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54() { return &___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54; }
	inline void set_U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54), (void*)value);
	}

	inline static int32_t get_offset_of__clippingVolumeDistanceTextureResolution_55() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____clippingVolumeDistanceTextureResolution_55)); }
	inline int32_t get__clippingVolumeDistanceTextureResolution_55() const { return ____clippingVolumeDistanceTextureResolution_55; }
	inline int32_t* get_address_of__clippingVolumeDistanceTextureResolution_55() { return &____clippingVolumeDistanceTextureResolution_55; }
	inline void set__clippingVolumeDistanceTextureResolution_55(int32_t value)
	{
		____clippingVolumeDistanceTextureResolution_55 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56)); }
	inline int32_t get_U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56() const { return ___U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56; }
	inline int32_t* get_address_of_U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56() { return &___U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56; }
	inline void set_U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56(int32_t value)
	{
		___U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56 = value;
	}

	inline static int32_t get_offset_of__textureTileLayers_57() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____textureTileLayers_57)); }
	inline TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8 * get__textureTileLayers_57() const { return ____textureTileLayers_57; }
	inline TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8 ** get_address_of__textureTileLayers_57() { return &____textureTileLayers_57; }
	inline void set__textureTileLayers_57(TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8 * value)
	{
		____textureTileLayers_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textureTileLayers_57), (void*)value);
	}

	inline static int32_t get_offset_of__elevationTileLayers_59() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____elevationTileLayers_59)); }
	inline ElevationTileLayerList_t3EEC2F8696DA2541B15517E87F3C2B3EFC6E6B13 * get__elevationTileLayers_59() const { return ____elevationTileLayers_59; }
	inline ElevationTileLayerList_t3EEC2F8696DA2541B15517E87F3C2B3EFC6E6B13 ** get_address_of__elevationTileLayers_59() { return &____elevationTileLayers_59; }
	inline void set__elevationTileLayers_59(ElevationTileLayerList_t3EEC2F8696DA2541B15517E87F3C2B3EFC6E6B13 * value)
	{
		____elevationTileLayers_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elevationTileLayers_59), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzmti9cAx_YIgb_60() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzmti9cAx_YIgb_60)); }
	inline U23U3DzSGAjct8w61XD9NwbVtcamQwAVN4i_t63810C266FCF7349E740FEF3D49697C18C74AACC * get_U23U3Dzmti9cAx_YIgb_60() const { return ___U23U3Dzmti9cAx_YIgb_60; }
	inline U23U3DzSGAjct8w61XD9NwbVtcamQwAVN4i_t63810C266FCF7349E740FEF3D49697C18C74AACC ** get_address_of_U23U3Dzmti9cAx_YIgb_60() { return &___U23U3Dzmti9cAx_YIgb_60; }
	inline void set_U23U3Dzmti9cAx_YIgb_60(U23U3DzSGAjct8w61XD9NwbVtcamQwAVN4i_t63810C266FCF7349E740FEF3D49697C18C74AACC * value)
	{
		___U23U3Dzmti9cAx_YIgb_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzmti9cAx_YIgb_60), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61() const { return ___U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61() { return &___U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61; }
	inline void set_U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61 = value;
	}

	inline static int32_t get_offset_of__hideTileLayerComponents_62() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____hideTileLayerComponents_62)); }
	inline bool get__hideTileLayerComponents_62() const { return ____hideTileLayerComponents_62; }
	inline bool* get_address_of__hideTileLayerComponents_62() { return &____hideTileLayerComponents_62; }
	inline void set__hideTileLayerComponents_62(bool value)
	{
		____hideTileLayerComponents_62 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz6jYcfOgU3D_63() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz6jYcfOgU3D_63)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_U23U3Dz6jYcfOgU3D_63() const { return ___U23U3Dz6jYcfOgU3D_63; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_U23U3Dz6jYcfOgU3D_63() { return &___U23U3Dz6jYcfOgU3D_63; }
	inline void set_U23U3Dz6jYcfOgU3D_63(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___U23U3Dz6jYcfOgU3D_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz6jYcfOgU3D_63), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz6liJx8R_Bl8G_64() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz6liJx8R_Bl8G_64)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_U23U3Dz6liJx8R_Bl8G_64() const { return ___U23U3Dz6liJx8R_Bl8G_64; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_U23U3Dz6liJx8R_Bl8G_64() { return &___U23U3Dz6liJx8R_Bl8G_64; }
	inline void set_U23U3Dz6liJx8R_Bl8G_64(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___U23U3Dz6liJx8R_Bl8G_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz6liJx8R_Bl8G_64), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzkMk5z3BcGtOV_65() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzkMk5z3BcGtOV_65)); }
	inline EventHandler_1_t5A44536C29E4E6D13AE3EFBF556A08847DFE96DC * get_U23U3DzkMk5z3BcGtOV_65() const { return ___U23U3DzkMk5z3BcGtOV_65; }
	inline EventHandler_1_t5A44536C29E4E6D13AE3EFBF556A08847DFE96DC ** get_address_of_U23U3DzkMk5z3BcGtOV_65() { return &___U23U3DzkMk5z3BcGtOV_65; }
	inline void set_U23U3DzkMk5z3BcGtOV_65(EventHandler_1_t5A44536C29E4E6D13AE3EFBF556A08847DFE96DC * value)
	{
		___U23U3DzkMk5z3BcGtOV_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzkMk5z3BcGtOV_65), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66() const { return ___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66() { return &___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66; }
	inline void set_U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67() const { return ___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67() { return &___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67; }
	inline void set_U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70)); }
	inline int32_t get_U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70() const { return ___U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70; }
	inline int32_t* get_address_of_U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70() { return &___U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70; }
	inline void set_U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70(int32_t value)
	{
		___U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70 = value;
	}

	inline static int32_t get_offset_of_U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71() const { return ___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71() { return &___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71; }
	inline void set_U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72() const { return ___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72() { return &___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72; }
	inline void set_U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73)); }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * get_U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73() const { return ___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73; }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 ** get_address_of_U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73() { return &___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73; }
	inline void set_U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * value)
	{
		___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74() const { return ___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74() { return &___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74; }
	inline void set_U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzajU24xoH5w7vU24C_75() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzajU24xoH5w7vU24C_75)); }
	inline RuntimeObject * get_U23U3DzajU24xoH5w7vU24C_75() const { return ___U23U3DzajU24xoH5w7vU24C_75; }
	inline RuntimeObject ** get_address_of_U23U3DzajU24xoH5w7vU24C_75() { return &___U23U3DzajU24xoH5w7vU24C_75; }
	inline void set_U23U3DzajU24xoH5w7vU24C_75(RuntimeObject * value)
	{
		___U23U3DzajU24xoH5w7vU24C_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzajU24xoH5w7vU24C_75), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzZXj3U2430dbmxb_76() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzZXj3U2430dbmxb_76)); }
	inline U23U3Dzslffm3rEpcrDGeF0LnKQktUU3D_tF0EE0F1F72AE6E41707DB83400FD2C4A7245F2A4 * get_U23U3DzZXj3U2430dbmxb_76() const { return ___U23U3DzZXj3U2430dbmxb_76; }
	inline U23U3Dzslffm3rEpcrDGeF0LnKQktUU3D_tF0EE0F1F72AE6E41707DB83400FD2C4A7245F2A4 ** get_address_of_U23U3DzZXj3U2430dbmxb_76() { return &___U23U3DzZXj3U2430dbmxb_76; }
	inline void set_U23U3DzZXj3U2430dbmxb_76(U23U3Dzslffm3rEpcrDGeF0LnKQktUU3D_tF0EE0F1F72AE6E41707DB83400FD2C4A7245F2A4 * value)
	{
		___U23U3DzZXj3U2430dbmxb_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzZXj3U2430dbmxb_76), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzCSl6lpg_zQnK_77() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzCSl6lpg_zQnK_77)); }
	inline U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * get_U23U3DzCSl6lpg_zQnK_77() const { return ___U23U3DzCSl6lpg_zQnK_77; }
	inline U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 ** get_address_of_U23U3DzCSl6lpg_zQnK_77() { return &___U23U3DzCSl6lpg_zQnK_77; }
	inline void set_U23U3DzCSl6lpg_zQnK_77(U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * value)
	{
		___U23U3DzCSl6lpg_zQnK_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzCSl6lpg_zQnK_77), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78)); }
	inline U23U3DzreTq2aMiQHwa4PeFRZDv3dFu3_uL_tD47C36C75E1BD177F00903A320F6D2DBD6AD678C * get_U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78() const { return ___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78; }
	inline U23U3DzreTq2aMiQHwa4PeFRZDv3dFu3_uL_tD47C36C75E1BD177F00903A320F6D2DBD6AD678C ** get_address_of_U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78() { return &___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78; }
	inline void set_U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78(U23U3DzreTq2aMiQHwa4PeFRZDv3dFu3_uL_tD47C36C75E1BD177F00903A320F6D2DBD6AD678C * value)
	{
		___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzmgnslVO2h8hT_79() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzmgnslVO2h8hT_79)); }
	inline U23U3DzEgwucroqHQ3qyhQOBFU248hhRKBtqV_t975EF43C9578F598D9B1A0A4F8EBE23AA2100D30 * get_U23U3DzmgnslVO2h8hT_79() const { return ___U23U3DzmgnslVO2h8hT_79; }
	inline U23U3DzEgwucroqHQ3qyhQOBFU248hhRKBtqV_t975EF43C9578F598D9B1A0A4F8EBE23AA2100D30 ** get_address_of_U23U3DzmgnslVO2h8hT_79() { return &___U23U3DzmgnslVO2h8hT_79; }
	inline void set_U23U3DzmgnslVO2h8hT_79(U23U3DzEgwucroqHQ3qyhQOBFU248hhRKBtqV_t975EF43C9578F598D9B1A0A4F8EBE23AA2100D30 * value)
	{
		___U23U3DzmgnslVO2h8hT_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzmgnslVO2h8hT_79), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80)); }
	inline bool get_U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80() const { return ___U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80; }
	inline bool* get_address_of_U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80() { return &___U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80; }
	inline void set_U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80(bool value)
	{
		___U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz77IlqDE4FhBi_81() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz77IlqDE4FhBi_81)); }
	inline MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * get_U23U3Dz77IlqDE4FhBi_81() const { return ___U23U3Dz77IlqDE4FhBi_81; }
	inline MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 ** get_address_of_U23U3Dz77IlqDE4FhBi_81() { return &___U23U3Dz77IlqDE4FhBi_81; }
	inline void set_U23U3Dz77IlqDE4FhBi_81(MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * value)
	{
		___U23U3Dz77IlqDE4FhBi_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz77IlqDE4FhBi_81), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzwwPGp4vA29TV_82() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzwwPGp4vA29TV_82)); }
	inline MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * get_U23U3DzwwPGp4vA29TV_82() const { return ___U23U3DzwwPGp4vA29TV_82; }
	inline MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 ** get_address_of_U23U3DzwwPGp4vA29TV_82() { return &___U23U3DzwwPGp4vA29TV_82; }
	inline void set_U23U3DzwwPGp4vA29TV_82(MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * value)
	{
		___U23U3DzwwPGp4vA29TV_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzwwPGp4vA29TV_82), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzXiU24QkIanoVsG_83() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzXiU24QkIanoVsG_83)); }
	inline U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * get_U23U3DzXiU24QkIanoVsG_83() const { return ___U23U3DzXiU24QkIanoVsG_83; }
	inline U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 ** get_address_of_U23U3DzXiU24QkIanoVsG_83() { return &___U23U3DzXiU24QkIanoVsG_83; }
	inline void set_U23U3DzXiU24QkIanoVsG_83(U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * value)
	{
		___U23U3DzXiU24QkIanoVsG_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzXiU24QkIanoVsG_83), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzemVScALLWE3T_84() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzemVScALLWE3T_84)); }
	inline int32_t get_U23U3DzemVScALLWE3T_84() const { return ___U23U3DzemVScALLWE3T_84; }
	inline int32_t* get_address_of_U23U3DzemVScALLWE3T_84() { return &___U23U3DzemVScALLWE3T_84; }
	inline void set_U23U3DzemVScALLWE3T_84(int32_t value)
	{
		___U23U3DzemVScALLWE3T_84 = value;
	}

	inline static int32_t get_offset_of_U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85)); }
	inline MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  get_U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85() const { return ___U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85; }
	inline MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03 * get_address_of_U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85() { return &___U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85; }
	inline void set_U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85(MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  value)
	{
		___U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85 = value;
	}

	inline static int32_t get_offset_of_U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86)); }
	inline MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  get_U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86() const { return ___U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86; }
	inline MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03 * get_address_of_U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86() { return &___U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86; }
	inline void set_U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86(MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  value)
	{
		___U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86 = value;
	}

	inline static int32_t get_offset_of_U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87)); }
	inline MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C  get_U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87() const { return ___U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87; }
	inline MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C * get_address_of_U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87() { return &___U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87; }
	inline void set_U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C  value)
	{
		___U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87 = value;
	}

	inline static int32_t get_offset_of_U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88)); }
	inline List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * get_U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88() const { return ___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88; }
	inline List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 ** get_address_of_U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88() { return &___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88; }
	inline void set_U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88(List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * value)
	{
		___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89)); }
	inline double get_U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89() const { return ___U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89; }
	inline double* get_address_of_U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89() { return &___U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89; }
	inline void set_U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89(double value)
	{
		___U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90)); }
	inline double get_U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90() const { return ___U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90; }
	inline double* get_address_of_U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90() { return &___U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90; }
	inline void set_U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90(double value)
	{
		___U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91() const { return ___U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91() { return &___U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91; }
	inline void set_U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91 = value;
	}

	inline static int32_t get_offset_of_U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92() const { return ___U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92() { return &___U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92; }
	inline void set_U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92 = value;
	}

	inline static int32_t get_offset_of_U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93() const { return ___U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93() { return &___U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93; }
	inline void set_U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93 = value;
	}

	inline static int32_t get_offset_of_U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94() const { return ___U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94() { return &___U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94; }
	inline void set_U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95)); }
	inline double get_U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95() const { return ___U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95; }
	inline double* get_address_of_U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95() { return &___U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95; }
	inline void set_U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95(double value)
	{
		___U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95 = value;
	}

	inline static int32_t get_offset_of_U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96)); }
	inline double get_U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96() const { return ___U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96; }
	inline double* get_address_of_U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96() { return &___U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96; }
	inline void set_U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96(double value)
	{
		___U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96 = value;
	}

	inline static int32_t get_offset_of_U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97)); }
	inline double get_U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97() const { return ___U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97; }
	inline double* get_address_of_U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97() { return &___U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97; }
	inline void set_U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97(double value)
	{
		___U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97 = value;
	}

	inline static int32_t get_offset_of_U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98() const { return ___U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98() { return &___U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98; }
	inline void set_U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98 = value;
	}

	inline static int32_t get_offset_of_U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99)); }
	inline float get_U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99() const { return ___U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99; }
	inline float* get_address_of_U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99() { return &___U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99; }
	inline void set_U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99(float value)
	{
		___U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99 = value;
	}

	inline static int32_t get_offset_of_U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100)); }
	inline float get_U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100() const { return ___U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100; }
	inline float* get_address_of_U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100() { return &___U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100; }
	inline void set_U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100(float value)
	{
		___U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100 = value;
	}

	inline static int32_t get_offset_of_U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101() const { return ___U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101() { return &___U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101; }
	inline void set_U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101 = value;
	}

	inline static int32_t get_offset_of_U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102)); }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  get_U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102() const { return ___U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102; }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B * get_address_of_U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102() { return &___U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102; }
	inline void set_U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  value)
	{
		___U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103() const { return ___U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103() { return &___U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103; }
	inline void set_U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103 = value;
	}

	inline static int32_t get_offset_of_U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104)); }
	inline double get_U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104() const { return ___U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104; }
	inline double* get_address_of_U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104() { return &___U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104; }
	inline void set_U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104(double value)
	{
		___U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105)); }
	inline double get_U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105() const { return ___U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105; }
	inline double* get_address_of_U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105() { return &___U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105; }
	inline void set_U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105(double value)
	{
		___U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105 = value;
	}

	inline static int32_t get_offset_of_U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106)); }
	inline float get_U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106() const { return ___U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106; }
	inline float* get_address_of_U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106() { return &___U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106; }
	inline void set_U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106(float value)
	{
		___U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106 = value;
	}

	inline static int32_t get_offset_of_U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107)); }
	inline float get_U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107() const { return ___U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107; }
	inline float* get_address_of_U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107() { return &___U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107; }
	inline void set_U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107(float value)
	{
		___U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107 = value;
	}

	inline static int32_t get_offset_of_U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108)); }
	inline U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9  get_U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108() const { return ___U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108; }
	inline U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9 * get_address_of_U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108() { return &___U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108; }
	inline void set_U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9  value)
	{
		___U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108 = value;
	}

	inline static int32_t get_offset_of_U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109() const { return ___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109() { return &___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109; }
	inline void set_U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110() const { return ___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110() { return &___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110; }
	inline void set_U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111)); }
	inline bool get_U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111() const { return ___U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111; }
	inline bool* get_address_of_U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111() { return &___U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111; }
	inline void set_U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111(bool value)
	{
		___U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112)); }
	inline int32_t get_U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112() const { return ___U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112; }
	inline int32_t* get_address_of_U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112() { return &___U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112; }
	inline void set_U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112(int32_t value)
	{
		___U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112 = value;
	}

	inline static int32_t get_offset_of_U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113)); }
	inline int32_t get_U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113() const { return ___U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113; }
	inline int32_t* get_address_of_U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113() { return &___U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113; }
	inline void set_U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113(int32_t value)
	{
		___U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113 = value;
	}

	inline static int32_t get_offset_of_U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114)); }
	inline int32_t get_U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114() const { return ___U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114; }
	inline int32_t* get_address_of_U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114() { return &___U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114; }
	inline void set_U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114(int32_t value)
	{
		___U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114 = value;
	}

	inline static int32_t get_offset_of_U23U3DzWgobBQev2_2N_115() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzWgobBQev2_2N_115)); }
	inline int32_t get_U23U3DzWgobBQev2_2N_115() const { return ___U23U3DzWgobBQev2_2N_115; }
	inline int32_t* get_address_of_U23U3DzWgobBQev2_2N_115() { return &___U23U3DzWgobBQev2_2N_115; }
	inline void set_U23U3DzWgobBQev2_2N_115(int32_t value)
	{
		___U23U3DzWgobBQev2_2N_115 = value;
	}

	inline static int32_t get_offset_of_U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116)); }
	inline int32_t get_U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116() const { return ___U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116; }
	inline int32_t* get_address_of_U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116() { return &___U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116; }
	inline void set_U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116(int32_t value)
	{
		___U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117)); }
	inline int32_t get_U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117() const { return ___U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117; }
	inline int32_t* get_address_of_U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117() { return &___U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117; }
	inline void set_U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117(int32_t value)
	{
		___U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117 = value;
	}

	inline static int32_t get_offset_of_U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118)); }
	inline int32_t get_U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118() const { return ___U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118; }
	inline int32_t* get_address_of_U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118() { return &___U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118; }
	inline void set_U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118(int32_t value)
	{
		___U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119)); }
	inline int32_t get_U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119() const { return ___U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119; }
	inline int32_t* get_address_of_U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119() { return &___U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119; }
	inline void set_U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119(int32_t value)
	{
		___U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119 = value;
	}

	inline static int32_t get_offset_of_U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120)); }
	inline int32_t get_U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120() const { return ___U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120; }
	inline int32_t* get_address_of_U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120() { return &___U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120; }
	inline void set_U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120(int32_t value)
	{
		___U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120 = value;
	}

	inline static int32_t get_offset_of_U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121)); }
	inline int32_t get_U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121() const { return ___U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121; }
	inline int32_t* get_address_of_U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121() { return &___U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121; }
	inline void set_U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121(int32_t value)
	{
		___U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121 = value;
	}

	inline static int32_t get_offset_of_U23U3DzD9JApHtXzS7k_122() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzD9JApHtXzS7k_122)); }
	inline int32_t get_U23U3DzD9JApHtXzS7k_122() const { return ___U23U3DzD9JApHtXzS7k_122; }
	inline int32_t* get_address_of_U23U3DzD9JApHtXzS7k_122() { return &___U23U3DzD9JApHtXzS7k_122; }
	inline void set_U23U3DzD9JApHtXzS7k_122(int32_t value)
	{
		___U23U3DzD9JApHtXzS7k_122 = value;
	}

	inline static int32_t get_offset_of_U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123)); }
	inline int32_t get_U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123() const { return ___U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123; }
	inline int32_t* get_address_of_U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123() { return &___U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123; }
	inline void set_U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123(int32_t value)
	{
		___U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123 = value;
	}

	inline static int32_t get_offset_of_U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124)); }
	inline int32_t get_U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124() const { return ___U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124; }
	inline int32_t* get_address_of_U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124() { return &___U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124; }
	inline void set_U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124(int32_t value)
	{
		___U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124 = value;
	}

	inline static int32_t get_offset_of_U23U3DzRkWhHeZI5CEb_125() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzRkWhHeZI5CEb_125)); }
	inline int32_t get_U23U3DzRkWhHeZI5CEb_125() const { return ___U23U3DzRkWhHeZI5CEb_125; }
	inline int32_t* get_address_of_U23U3DzRkWhHeZI5CEb_125() { return &___U23U3DzRkWhHeZI5CEb_125; }
	inline void set_U23U3DzRkWhHeZI5CEb_125(int32_t value)
	{
		___U23U3DzRkWhHeZI5CEb_125 = value;
	}

	inline static int32_t get_offset_of_U23U3DzsVFGVy17LrIO_126() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzsVFGVy17LrIO_126)); }
	inline int32_t get_U23U3DzsVFGVy17LrIO_126() const { return ___U23U3DzsVFGVy17LrIO_126; }
	inline int32_t* get_address_of_U23U3DzsVFGVy17LrIO_126() { return &___U23U3DzsVFGVy17LrIO_126; }
	inline void set_U23U3DzsVFGVy17LrIO_126(int32_t value)
	{
		___U23U3DzsVFGVy17LrIO_126 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzz2E5U6SNwniS_127() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzz2E5U6SNwniS_127)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U23U3Dzz2E5U6SNwniS_127() const { return ___U23U3Dzz2E5U6SNwniS_127; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U23U3Dzz2E5U6SNwniS_127() { return &___U23U3Dzz2E5U6SNwniS_127; }
	inline void set_U23U3Dzz2E5U6SNwniS_127(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U23U3Dzz2E5U6SNwniS_127 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzz2E5U6SNwniS_127), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128)); }
	inline U23U3Dzz2WQAsO2UUEplIiiNuE7oQkU3D_t0EE83925EB2ADE849F30C026B3E102D9250CCA6F * get_U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128() const { return ___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128; }
	inline U23U3Dzz2WQAsO2UUEplIiiNuE7oQkU3D_t0EE83925EB2ADE849F30C026B3E102D9250CCA6F ** get_address_of_U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128() { return &___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128; }
	inline void set_U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128(U23U3Dzz2WQAsO2UUEplIiiNuE7oQkU3D_t0EE83925EB2ADE849F30C026B3E102D9250CCA6F * value)
	{
		___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129)); }
	inline List_1_t33758A17F9C5272569ADB02F8230576D4AF1E6D6 * get_U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129() const { return ___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129; }
	inline List_1_t33758A17F9C5272569ADB02F8230576D4AF1E6D6 ** get_address_of_U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129() { return &___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129; }
	inline void set_U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129(List_1_t33758A17F9C5272569ADB02F8230576D4AF1E6D6 * value)
	{
		___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130)); }
	inline List_1_t9784882413F9EEDBD78A33DB4E900C033610AF29 * get_U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130() const { return ___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130; }
	inline List_1_t9784882413F9EEDBD78A33DB4E900C033610AF29 ** get_address_of_U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130() { return &___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130; }
	inline void set_U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130(List_1_t9784882413F9EEDBD78A33DB4E900C033610AF29 * value)
	{
		___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131)); }
	inline List_1_tA1AC911A62FB80716188A6C2E74EC1CDA333C070 * get_U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131() const { return ___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131; }
	inline List_1_tA1AC911A62FB80716188A6C2E74EC1CDA333C070 ** get_address_of_U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131() { return &___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131; }
	inline void set_U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131(List_1_tA1AC911A62FB80716188A6C2E74EC1CDA333C070 * value)
	{
		___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132)); }
	inline List_1_t3583F7E200CA31239569F517D46EC6A79785FE7D * get_U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132() const { return ___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132; }
	inline List_1_t3583F7E200CA31239569F517D46EC6A79785FE7D ** get_address_of_U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132() { return &___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132; }
	inline void set_U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132(List_1_t3583F7E200CA31239569F517D46EC6A79785FE7D * value)
	{
		___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133)); }
	inline List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * get_U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133() const { return ___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133; }
	inline List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 ** get_address_of_U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133() { return &___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133; }
	inline void set_U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133(List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * value)
	{
		___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzqmewxhIrNjasEbniEwU3DU3D_134() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U23U3DzqmewxhIrNjasEbniEwU3DU3D_134() const { return ___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U23U3DzqmewxhIrNjasEbniEwU3DU3D_134() { return &___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134; }
	inline void set_U23U3DzqmewxhIrNjasEbniEwU3DU3D_134(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135)); }
	inline Dictionary_2_t049AB000068AC79B45EED8BCCAE47B23B0B18B72 * get_U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135() const { return ___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135; }
	inline Dictionary_2_t049AB000068AC79B45EED8BCCAE47B23B0B18B72 ** get_address_of_U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135() { return &___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135; }
	inline void set_U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135(Dictionary_2_t049AB000068AC79B45EED8BCCAE47B23B0B18B72 * value)
	{
		___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136)); }
	inline Dictionary_2_tD7BA2A0D4A15ABAD76816CADA4A47E4EED50BB77 * get_U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136() const { return ___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136; }
	inline Dictionary_2_tD7BA2A0D4A15ABAD76816CADA4A47E4EED50BB77 ** get_address_of_U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136() { return &___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136; }
	inline void set_U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136(Dictionary_2_tD7BA2A0D4A15ABAD76816CADA4A47E4EED50BB77 * value)
	{
		___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137)); }
	inline bool get_U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137() const { return ___U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137; }
	inline bool* get_address_of_U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137() { return &___U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137; }
	inline void set_U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137(bool value)
	{
		___U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137 = value;
	}
};

struct MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zZK0NGiSrhmqWxM883dLqzCc=
	int32_t ___U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4;
	// UnityEngine.Vector4 Microsoft.Maps.Unity.MapRendererBase::#=zarNE$Eo3TaEq
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___U23U3DzarNEU24Eo3TaEq_6;
	// UnityEngine.Vector4[] Microsoft.Maps.Unity.MapRendererBase::#=zOKoBm4ptVYAw
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U23U3DzOKoBm4ptVYAw_7;
	// Microsoft.Geospatial.TileId[] Microsoft.Maps.Unity.MapRendererBase::#=znhcFo87j$bVhk9B5UXDpxpo=
	TileIdU5BU5D_tC3C41979AF33FB8BA28A821B4FCE3507F85E37B0* ___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8;
	// System.Int32[] Microsoft.Maps.Unity.MapRendererBase::#=zIR4s3$6qob3hRrzQFg==
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68;
	// System.Int32[] Microsoft.Maps.Unity.MapRendererBase::#=zqr7OagjczdNsTZJ65qc6aGI=
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69;
	// UnityEngine.Vector3[] Microsoft.Maps.Unity.MapRendererBase::#=z6gHO_9ErE4ryiadCFb4vsnQ=
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138;
	// #=zG9WBI4m7na9OshAewdvflELclh5D Microsoft.Maps.Unity.MapRendererBase::#=zZJQz4lF60wzg
	U23U3DzG9WBI4m7na9OshAewdvflELclh5D_t4FCDFA6C716769365ABE1DBACA7528030D717DC3 * ___U23U3DzZJQz4lF60wzg_139;
	// UnityEngine.Vector2[] Microsoft.Maps.Unity.MapRendererBase::#=zphuOuP$FTruL
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___U23U3DzphuOuPU24FTruL_140;

public:
	inline static int32_t get_offset_of_U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4)); }
	inline int32_t get_U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4() const { return ___U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4; }
	inline int32_t* get_address_of_U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4() { return &___U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4; }
	inline void set_U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4(int32_t value)
	{
		___U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4 = value;
	}

	inline static int32_t get_offset_of_U23U3DzarNEU24Eo3TaEq_6() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzarNEU24Eo3TaEq_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_U23U3DzarNEU24Eo3TaEq_6() const { return ___U23U3DzarNEU24Eo3TaEq_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_U23U3DzarNEU24Eo3TaEq_6() { return &___U23U3DzarNEU24Eo3TaEq_6; }
	inline void set_U23U3DzarNEU24Eo3TaEq_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___U23U3DzarNEU24Eo3TaEq_6 = value;
	}

	inline static int32_t get_offset_of_U23U3DzOKoBm4ptVYAw_7() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzOKoBm4ptVYAw_7)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U23U3DzOKoBm4ptVYAw_7() const { return ___U23U3DzOKoBm4ptVYAw_7; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U23U3DzOKoBm4ptVYAw_7() { return &___U23U3DzOKoBm4ptVYAw_7; }
	inline void set_U23U3DzOKoBm4ptVYAw_7(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U23U3DzOKoBm4ptVYAw_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzOKoBm4ptVYAw_7), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8)); }
	inline TileIdU5BU5D_tC3C41979AF33FB8BA28A821B4FCE3507F85E37B0* get_U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8() const { return ___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8; }
	inline TileIdU5BU5D_tC3C41979AF33FB8BA28A821B4FCE3507F85E37B0** get_address_of_U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8() { return &___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8; }
	inline void set_U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8(TileIdU5BU5D_tC3C41979AF33FB8BA28A821B4FCE3507F85E37B0* value)
	{
		___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68() const { return ___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68() { return &___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68; }
	inline void set_U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69() const { return ___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69() { return &___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69; }
	inline void set_U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138() const { return ___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138() { return &___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138; }
	inline void set_U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzZJQz4lF60wzg_139() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzZJQz4lF60wzg_139)); }
	inline U23U3DzG9WBI4m7na9OshAewdvflELclh5D_t4FCDFA6C716769365ABE1DBACA7528030D717DC3 * get_U23U3DzZJQz4lF60wzg_139() const { return ___U23U3DzZJQz4lF60wzg_139; }
	inline U23U3DzG9WBI4m7na9OshAewdvflELclh5D_t4FCDFA6C716769365ABE1DBACA7528030D717DC3 ** get_address_of_U23U3DzZJQz4lF60wzg_139() { return &___U23U3DzZJQz4lF60wzg_139; }
	inline void set_U23U3DzZJQz4lF60wzg_139(U23U3DzG9WBI4m7na9OshAewdvflELclh5D_t4FCDFA6C716769365ABE1DBACA7528030D717DC3 * value)
	{
		___U23U3DzZJQz4lF60wzg_139 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzZJQz4lF60wzg_139), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzphuOuPU24FTruL_140() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzphuOuPU24FTruL_140)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_U23U3DzphuOuPU24FTruL_140() const { return ___U23U3DzphuOuPU24FTruL_140; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_U23U3DzphuOuPU24FTruL_140() { return &___U23U3DzphuOuPU24FTruL_140; }
	inline void set_U23U3DzphuOuPU24FTruL_140(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___U23U3DzphuOuPU24FTruL_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzphuOuPU24FTruL_140), (void*)value);
	}
};


// Microsoft.Maps.Unity.MapRenderer
struct MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8  : public MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E
{
public:
	// Microsoft.Maps.Unity.MapColliderType Microsoft.Maps.Unity.MapRenderer::_mapColliderType
	int32_t ____mapColliderType_141;
	// Microsoft.Maps.Unity.MapColliderType Microsoft.Maps.Unity.MapRenderer::_previousMapColliderType
	int32_t ____previousMapColliderType_142;
	// UnityEngine.Collider Microsoft.Maps.Unity.MapRenderer::_mapCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ____mapCollider_143;
	// UnityEngine.BoxCollider Microsoft.Maps.Unity.MapRenderer::_mapBoxCollider
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ____mapBoxCollider_144;
	// Microsoft.Maps.Unity.IMapSceneAnimationController Microsoft.Maps.Unity.MapRenderer::_activeMapSceneAnimationController
	RuntimeObject* ____activeMapSceneAnimationController_145;
	// System.Boolean Microsoft.Maps.Unity.MapRenderer::_checkChildMapPins
	bool ____checkChildMapPins_146;
	// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinChildrenSet
	HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * ____mapPinChildrenSet_147;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_lastMapPinsInView
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____lastMapPinsInView_148;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinsInView
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____mapPinsInView_149;
	// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_currentChildrenMapPins
	HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * ____currentChildrenMapPins_150;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinChildrenToRemove
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____mapPinChildrenToRemove_151;
	// System.EventHandler Microsoft.Maps.Unity.MapRenderer::AfterUpdate
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AfterUpdate_152;

public:
	inline static int32_t get_offset_of__mapColliderType_141() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapColliderType_141)); }
	inline int32_t get__mapColliderType_141() const { return ____mapColliderType_141; }
	inline int32_t* get_address_of__mapColliderType_141() { return &____mapColliderType_141; }
	inline void set__mapColliderType_141(int32_t value)
	{
		____mapColliderType_141 = value;
	}

	inline static int32_t get_offset_of__previousMapColliderType_142() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____previousMapColliderType_142)); }
	inline int32_t get__previousMapColliderType_142() const { return ____previousMapColliderType_142; }
	inline int32_t* get_address_of__previousMapColliderType_142() { return &____previousMapColliderType_142; }
	inline void set__previousMapColliderType_142(int32_t value)
	{
		____previousMapColliderType_142 = value;
	}

	inline static int32_t get_offset_of__mapCollider_143() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapCollider_143)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get__mapCollider_143() const { return ____mapCollider_143; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of__mapCollider_143() { return &____mapCollider_143; }
	inline void set__mapCollider_143(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		____mapCollider_143 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapCollider_143), (void*)value);
	}

	inline static int32_t get_offset_of__mapBoxCollider_144() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapBoxCollider_144)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get__mapBoxCollider_144() const { return ____mapBoxCollider_144; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of__mapBoxCollider_144() { return &____mapBoxCollider_144; }
	inline void set__mapBoxCollider_144(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		____mapBoxCollider_144 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapBoxCollider_144), (void*)value);
	}

	inline static int32_t get_offset_of__activeMapSceneAnimationController_145() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____activeMapSceneAnimationController_145)); }
	inline RuntimeObject* get__activeMapSceneAnimationController_145() const { return ____activeMapSceneAnimationController_145; }
	inline RuntimeObject** get_address_of__activeMapSceneAnimationController_145() { return &____activeMapSceneAnimationController_145; }
	inline void set__activeMapSceneAnimationController_145(RuntimeObject* value)
	{
		____activeMapSceneAnimationController_145 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeMapSceneAnimationController_145), (void*)value);
	}

	inline static int32_t get_offset_of__checkChildMapPins_146() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____checkChildMapPins_146)); }
	inline bool get__checkChildMapPins_146() const { return ____checkChildMapPins_146; }
	inline bool* get_address_of__checkChildMapPins_146() { return &____checkChildMapPins_146; }
	inline void set__checkChildMapPins_146(bool value)
	{
		____checkChildMapPins_146 = value;
	}

	inline static int32_t get_offset_of__mapPinChildrenSet_147() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinChildrenSet_147)); }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * get__mapPinChildrenSet_147() const { return ____mapPinChildrenSet_147; }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E ** get_address_of__mapPinChildrenSet_147() { return &____mapPinChildrenSet_147; }
	inline void set__mapPinChildrenSet_147(HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * value)
	{
		____mapPinChildrenSet_147 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinChildrenSet_147), (void*)value);
	}

	inline static int32_t get_offset_of__lastMapPinsInView_148() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____lastMapPinsInView_148)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__lastMapPinsInView_148() const { return ____lastMapPinsInView_148; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__lastMapPinsInView_148() { return &____lastMapPinsInView_148; }
	inline void set__lastMapPinsInView_148(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____lastMapPinsInView_148 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastMapPinsInView_148), (void*)value);
	}

	inline static int32_t get_offset_of__mapPinsInView_149() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinsInView_149)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__mapPinsInView_149() const { return ____mapPinsInView_149; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__mapPinsInView_149() { return &____mapPinsInView_149; }
	inline void set__mapPinsInView_149(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____mapPinsInView_149 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinsInView_149), (void*)value);
	}

	inline static int32_t get_offset_of__currentChildrenMapPins_150() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____currentChildrenMapPins_150)); }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * get__currentChildrenMapPins_150() const { return ____currentChildrenMapPins_150; }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E ** get_address_of__currentChildrenMapPins_150() { return &____currentChildrenMapPins_150; }
	inline void set__currentChildrenMapPins_150(HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * value)
	{
		____currentChildrenMapPins_150 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentChildrenMapPins_150), (void*)value);
	}

	inline static int32_t get_offset_of__mapPinChildrenToRemove_151() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinChildrenToRemove_151)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__mapPinChildrenToRemove_151() const { return ____mapPinChildrenToRemove_151; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__mapPinChildrenToRemove_151() { return &____mapPinChildrenToRemove_151; }
	inline void set__mapPinChildrenToRemove_151(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____mapPinChildrenToRemove_151 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinChildrenToRemove_151), (void*)value);
	}

	inline static int32_t get_offset_of_AfterUpdate_152() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ___AfterUpdate_152)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AfterUpdate_152() const { return ___AfterUpdate_152; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AfterUpdate_152() { return &___AfterUpdate_152; }
	inline void set_AfterUpdate_152(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AfterUpdate_152 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AfterUpdate_152), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);


// System.Object System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::GetAt(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, uint32_t ___index0, const RuntimeMethod* method);
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::IndexOf(System.Object,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, RuntimeObject * ___value0, uint32_t* ___index1, const RuntimeMethod* method);
// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.Face.LBPHFaceRecognizer
struct LBPHFaceRecognizer_tA9E6452EFC3896DC25B89CE52BCC69FE73018BDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LBPHFaceRecognizer_tA9E6452EFC3896DC25B89CE52BCC69FE73018BDF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LBPHFaceRecognizer_tA9E6452EFC3896DC25B89CE52BCC69FE73018BDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LBPHFaceRecognizer_tA9E6452EFC3896DC25B89CE52BCC69FE73018BDF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LBPHFaceRecognizer_tA9E6452EFC3896DC25B89CE52BCC69FE73018BDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LBPHFaceRecognizer_tA9E6452EFC3896DC25B89CE52BCC69FE73018BDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LBPHFaceRecognizer_tA9E6452EFC3896DC25B89CE52BCC69FE73018BDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.LineIterator
struct LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LineIterator_t260BDF587D95D30DDD564B3291480BDC4862C2D6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.LineSegmentDetector
struct LineSegmentDetector_tFBBD5FACB16B4A9035828D83C41B1467A5971E11_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LineSegmentDetector_tFBBD5FACB16B4A9035828D83C41B1467A5971E11_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LineSegmentDetector_tFBBD5FACB16B4A9035828D83C41B1467A5971E11_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LineSegmentDetector_tFBBD5FACB16B4A9035828D83C41B1467A5971E11_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LineSegmentDetector_tFBBD5FACB16B4A9035828D83C41B1467A5971E11(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LineSegmentDetector_tFBBD5FACB16B4A9035828D83C41B1467A5971E11_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LineSegmentDetector_tFBBD5FACB16B4A9035828D83C41B1467A5971E11_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.Flann.LinearIndexParams
struct LinearIndexParams_t867C3D5B0ED408B1E3E5FC7676908320330A9A1A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LinearIndexParams_t867C3D5B0ED408B1E3E5FC7676908320330A9A1A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LinearIndexParams_t867C3D5B0ED408B1E3E5FC7676908320330A9A1A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LinearIndexParams_t867C3D5B0ED408B1E3E5FC7676908320330A9A1A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LinearIndexParams_t867C3D5B0ED408B1E3E5FC7676908320330A9A1A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LinearIndexParams_t867C3D5B0ED408B1E3E5FC7676908320330A9A1A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LinearIndexParams_t867C3D5B0ED408B1E3E5FC7676908320330A9A1A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Specialized.ListDictionary
struct ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper>, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject * returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2(__thisValue, ___index0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		Il2CppIInspectable* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		RuntimeObject * ____value0_unmarshaled = NULL;
		if (___value0 != NULL)
		{
			____value0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____value0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____value0_unmarshaled), Il2CppIInspectable::IID, ___value0);
			}
		}
		else
		{
			____value0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___index1' to managed representation
		uint32_t ____index1_empty = 0;

		// Managed method invocation
		bool returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD(__thisValue, ____value0_unmarshaled, (&____index1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___index1' back from managed representation
		*___index1 = ____index1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.ML.LogisticRegression
struct LogisticRegression_tC685911F2DB95237F290AB3D7684B65DFD797082_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LogisticRegression_tC685911F2DB95237F290AB3D7684B65DFD797082_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LogisticRegression_tC685911F2DB95237F290AB3D7684B65DFD797082_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LogisticRegression_tC685911F2DB95237F290AB3D7684B65DFD797082_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LogisticRegression_tC685911F2DB95237F290AB3D7684B65DFD797082(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LogisticRegression_tC685911F2DB95237F290AB3D7684B65DFD797082_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LogisticRegression_tC685911F2DB95237F290AB3D7684B65DFD797082_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.LongReactiveProperty
struct LongReactiveProperty_t40470A4C9A80D7269C75240D9E81B308BF052730_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LongReactiveProperty_t40470A4C9A80D7269C75240D9E81B308BF052730_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LongReactiveProperty_t40470A4C9A80D7269C75240D9E81B308BF052730_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LongReactiveProperty_t40470A4C9A80D7269C75240D9E81B308BF052730_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LongReactiveProperty_t40470A4C9A80D7269C75240D9E81B308BF052730(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LongReactiveProperty_t40470A4C9A80D7269C75240D9E81B308BF052730_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LongReactiveProperty_t40470A4C9A80D7269C75240D9E81B308BF052730_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LostTrackingService_tD360AEEE0FB76F0CBEAE338D98A6713B1610EC84_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.MACTripleDES
struct MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MCMDictionary
struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD2Managed
struct MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD5CryptoServiceProvider_t042545E5D468A5A1B77802D72DA002AE28DA6CC1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MSER
struct MSER_tFB82F4B2B382D0FF872164C6B211925FEAFABE20_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MSER_tFB82F4B2B382D0FF872164C6B211925FEAFABE20_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MSER_tFB82F4B2B382D0FF872164C6B211925FEAFABE20_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MSER_tFB82F4B2B382D0FF872164C6B211925FEAFABE20_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MSER_tFB82F4B2B382D0FF872164C6B211925FEAFABE20(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MSER_tFB82F4B2B382D0FF872164C6B211925FEAFABE20_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MSER_tFB82F4B2B382D0FF872164C6B211925FEAFABE20_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MapRaycastProvider
struct MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Maps.Unity.MapRenderer
struct MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>, IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.Mat
struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper(obj));
}
