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
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740;
// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object>
struct Dictionary_2_tE8D02A3D5DD039B176B8F64028DA5F0883237494;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t18E076B12814DFAAD91B5BC1B163AAFAC0CADEFD;
// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerMediator>
struct Dictionary_2_t291B24A32D56EF3668C17BE3EB217DC169FEA208;
// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData>
struct Dictionary_2_t7FD0832C19FA0775ABDACC388ADCF3870D6A0431;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_tAA6C1F6337C1D573AEC249E1B9B43BFCADF908F2;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.WindowsAzure.Storage.File.SharedAccessFilePolicy>>
struct IEnumerator_1_t269ECE248197CE7DE3EAFFB34B8C5F629E84655D;
// System.Collections.Generic.IEqualityComparer`1<System.Single>
struct IEqualityComparer_1_t0F7348B7C3DBAC2DFD60DA8607A8BCD442B3E713;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.WindowsAzure.Storage.File.SharedAccessFilePolicy>>
struct IList_1_tCE7AAF5283516C3E91CA98561CCF35506FBD2BF1;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tADF7F1C5FADE0AE6D00BC928B20C4B63DDC8A3AD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t51E625EDA46926814063BAC38407B110D9C48805;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Threading.IAsyncLocal>
struct List_1_tA7C2A3DF62733E04DA16EDD931856E01BE8283F0;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData>
struct List_1_t100F27E62C167F22F4A42070D36A3573D7D9BE6F;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences>
struct List_1_tCBCBEF6F158166FA069F2A5E93AA85B0D495324F;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.ExecuteCommandEvent>
struct ObjectPool_1_t58FACB77D1CC237FB39BCD540235D55E5E9ED75F;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.FocusEvent>
struct ObjectPool_1_t10DF1D7B915FABBA839F55B1C8F8A53EF636E395;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.FocusInEvent>
struct ObjectPool_1_t6EA833FFCBB94CBB4B4ECF190C617D0010F43887;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.FocusOutEvent>
struct ObjectPool_1_t11916664A294D85084603B0F15FA2E810B2BC5FF;
// UniRx.ObserverNode`1<System.Single>
struct ObserverNode_1_tC252641021D342564CA0489B2FB5FE0974C3F0D3;
// OpenCvSharp.Ptr`1<OpenCvSharp.DescriptorMatcher>
struct Ptr_1_t4B449523B99C9950A0BFD0D3385FEFF649FAD661;
// OpenCvSharp.Ptr`1<OpenCvSharp.XFeatures2D.FREAK>
struct Ptr_1_t944ED77539CB0C99E150C4723F44EA7311194075;
// OpenCvSharp.Ptr`1<OpenCvSharp.FastFeatureDetector>
struct Ptr_1_tF13017F5817FB961A558F8B17740A6921499A276;
// OpenCvSharp.Ptr`1<OpenCvSharp.FlannBasedMatcher>
struct Ptr_1_t9CB1CBB19EB6F4DB2D560C583EE6BE21EE0CAA9A;
// OpenCvSharp.Ptr`1<OpenCvSharp.FrameSource>
struct Ptr_1_tBC41660ADDACECCB0FBF328212282639F4BBAD2B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Net.CommandStream/PipelineEntry[]
struct PipelineEntryU5BU5D_tF96DE809CEDE1A15F1D069F027582F92EEE04CE4;
// Microsoft.WindowsAzure.Storage.AccessCondition
struct AccessCondition_tCB12BCFAC1FDAD0A31B7759FCF8299500BFE3998;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Microsoft.WindowsAzure.Storage.Core.Util.AsyncSemaphore
struct AsyncSemaphore_tEEC509DADBBD018743C67DCA186B2E357E9B2E82;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Microsoft.WindowsAzure.Storage.File.CloudFile
struct CloudFile_tFEAE3B0F02FCD5476B0F07FF335FC810D5843713;
// Microsoft.WindowsAzure.Storage.Core.Util.CounterEvent
struct CounterEvent_tCA6BB22D8ADE4388A3CE7D9A590DF9493B7E444F;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.Exception
struct Exception_t;
// Microsoft.WindowsAzure.Storage.File.FileProperties
struct FileProperties_t0AC884DF96C5B2FE05BC2057B87E5F65F34A7162;
// Microsoft.WindowsAzure.Storage.File.FileRequestOptions
struct FileRequestOptions_t34696F949558D1E38FBF5FBCB171ED85CC71DA10;
// System.Net.FileWebRequest
struct FileWebRequest_tD1A538307AB2949504F97926635635C573CDF49A;
// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF;
// UnityEngine.UIElements.FocusController
struct FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A;
// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0;
// Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine
struct GazePointerVisibilityStateMachine_t829B53127F69324F9A299CBDBFD43BD030B850B9;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPrimaryPointerSelector
struct IMixedRealityPrimaryPointerSelector_t58F81C082E82ACBFA6FECAD64AA2291DCF457C17;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Runtime.Remoting.Messaging.IllogicalCallContext
struct IllogicalCallContext_tBE27BC899B192B585D0D20F6A296DC5296C8BFD5;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t4BB407B088DB9FA68FE1EC2DB78D33F5BB4BDE9E;
// Microsoft.WindowsAzure.Storage.Core.Util.MD5Wrapper
struct MD5Wrapper_t297CDA4518C366A763739BB64C20E7011B4F159F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260;
// Microsoft.WindowsAzure.Storage.Core.MultiBufferMemoryStream
struct MultiBufferMemoryStream_tE6922785CF0A03068AB68524EDB307D9103476DB;
// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0;
// Microsoft.WindowsAzure.Storage.OperationContext
struct OperationContext_t6D35A85A0413F14F77EF549DBAE26C898DD72C88;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Microsoft.MixedReality.Toolkit.Input.PrimaryPointerChangedHandler
struct PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Net.ResponseDescription
struct ResponseDescription_t5A661AE824700CC3F19B5762F53AEB947B44AAC7;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58;
// System.Net.TlsStream
struct TlsStream_tBA812F5D23939D0595B505C10F46BAB6EEB7CB51;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Net.WebOperation
struct WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9;
// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B;
// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD;
// System.Dynamic.ExpandoObject/ExpandoData
struct ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult
struct PointerHitResult_t5AB425D6717A68B5A128693F8381F281D584D7D7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0;
struct Guid_t;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t66A0D1700F95C289C5585DDBAE26DFC77D58859F;
struct IMapView_2_t9D2747437C9AA7B4E96FB3342ED7D029757C9E32;
struct IPropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_ComCallableWrapper;
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18;
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48;
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05;
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct NOVTABLE IIterable_1_t699D5008117FC23B5ED4DD90FE640E53C79FD8A9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mCCAFE946731B7D39FD27411DAAD9CD782220BA91(IIterator_1_t66A0D1700F95C289C5585DDBAE26DFC77D58859F** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Object>
struct NOVTABLE IMap_2_t494B6570602D9C5F9B873907F0495866E277F8D6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m1B64C40ABCD479ED86B19467261CDF253067F646(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mDA65A6A2FDFCA3CD25909CE909CF1390DAFBAA22(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m096CD8612C549F5E0AF9F2B0B1C2BF238513CDFD(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m6B1516D11389BD5B38CFF8BB68A6F7D72A07D147(IMapView_2_t9D2747437C9AA7B4E96FB3342ED7D029757C9E32** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mF0EF5AA5EF11EDE704925A3EFFFC45D16C323EE6(Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mA469B291CAFA83B024EC82BF1BCA697E71789200(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mE7ADFD5EB02D04834AB925622D0E8CE0C3918542() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
};

// UniRx.ReactiveProperty`1<System.Single>
struct ReactiveProperty_1_tF8690E5578B7CCDCAA8769AFD4565CD759A8928C  : public RuntimeObject
{
	// T UniRx.ReactiveProperty`1::value
	float ___value_1;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::root
	ObserverNode_1_tC252641021D342564CA0489B2FB5FE0974C3F0D3* ___root_2;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::last
	ObserverNode_1_tC252641021D342564CA0489B2FB5FE0974C3F0D3* ___last_3;
	// System.Boolean UniRx.ReactiveProperty`1::isDisposed
	bool ___isDisposed_4;
};

struct ReactiveProperty_1_tF8690E5578B7CCDCAA8769AFD4565CD759A8928C_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<T> UniRx.ReactiveProperty`1::defaultEqualityComparer
	RuntimeObject* ___defaultEqualityComparer_0;
};

// Microsoft.WindowsAzure.Storage.Shared.Protocol.ResponseParsingBase`1<System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.WindowsAzure.Storage.File.SharedAccessFilePolicy>>
struct ResponseParsingBase_1_t85A2E7F12ABF3BD14D87F99908346060D296B140  : public RuntimeObject
{
	// System.Boolean Microsoft.WindowsAzure.Storage.Shared.Protocol.ResponseParsingBase`1::allObjectsParsed
	bool ___allObjectsParsed_0;
	// System.Collections.Generic.IList`1<T> Microsoft.WindowsAzure.Storage.Shared.Protocol.ResponseParsingBase`1::outstandingObjectsToParse
	RuntimeObject* ___outstandingObjectsToParse_1;
	// System.Xml.XmlReader Microsoft.WindowsAzure.Storage.Shared.Protocol.ResponseParsingBase`1::reader
	XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader_2;
	// System.Collections.Generic.IEnumerator`1<T> Microsoft.WindowsAzure.Storage.Shared.Protocol.ResponseParsingBase`1::parser
	RuntimeObject* ___parser_3;
	// System.Boolean Microsoft.WindowsAzure.Storage.Shared.Protocol.ResponseParsingBase`1::enumerableConsumed
	bool ___enumerableConsumed_4;
};

// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710  : public RuntimeObject
{
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____syncContext_0;
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContextNoFlow
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____syncContextNoFlow_1;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Threading.ExecutionContext::_logicalCallContext
	LogicalCallContext_t4BB407B088DB9FA68FE1EC2DB78D33F5BB4BDE9E* ____logicalCallContext_2;
	// System.Runtime.Remoting.Messaging.IllogicalCallContext System.Threading.ExecutionContext::_illogicalCallContext
	IllogicalCallContext_tBE27BC899B192B585D0D20F6A296DC5296C8BFD5* ____illogicalCallContext_3;
	// System.Threading.ExecutionContext/Flags System.Threading.ExecutionContext::_flags
	int32_t ____flags_4;
	// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object> System.Threading.ExecutionContext::_localValues
	Dictionary_2_tE8D02A3D5DD039B176B8F64028DA5F0883237494* ____localValues_5;
	// System.Collections.Generic.List`1<System.Threading.IAsyncLocal> System.Threading.ExecutionContext::_localChangeNotifications
	List_1_tA7C2A3DF62733E04DA16EDD931856E01BE8283F0* ____localChangeNotifications_6;
};

struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticFields
{
	// System.Threading.ExecutionContext System.Threading.ExecutionContext::s_dummyDefaultEC
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___s_dummyDefaultEC_7;
	// System.Threading.ExecutionContext System.Threading.ExecutionContext::Default
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___Default_8;
};

// System.Dynamic.ExpandoObject
struct ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012  : public RuntimeObject
{
	// System.Object System.Dynamic.ExpandoObject::LockObject
	RuntimeObject* ___LockObject_5;
	// System.Dynamic.ExpandoObject/ExpandoData System.Dynamic.ExpandoObject::_data
	ExpandoData_t82B13AAFF00D56FCEBF09B38052A91ADE30A19EA* ____data_6;
	// System.Int32 System.Dynamic.ExpandoObject::_count
	int32_t ____count_7;
	// System.ComponentModel.PropertyChangedEventHandler System.Dynamic.ExpandoObject::_propertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ____propertyChanged_9;
};

struct ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_StaticFields
{
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::s_expandoTryGetValue
	MethodInfo_t* ___s_expandoTryGetValue_0;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::s_expandoTrySetValue
	MethodInfo_t* ___s_expandoTrySetValue_1;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::s_expandoTryDeleteValue
	MethodInfo_t* ___s_expandoTryDeleteValue_2;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::s_expandoPromoteClass
	MethodInfo_t* ___s_expandoPromoteClass_3;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::s_expandoCheckVersion
	MethodInfo_t* ___s_expandoCheckVersion_4;
	// System.Object System.Dynamic.ExpandoObject::Uninitialized
	RuntimeObject* ___Uninitialized_8;
};

// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF  : public RuntimeObject
{
	// System.Int32 UnityEngine.UIElements.FocusChangeDirection::m_Value
	int32_t ___m_Value_3;
};

struct FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF_StaticFields
{
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<unspecified>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3CunspecifiedU3Ek__BackingField_0;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<none>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3CnoneU3Ek__BackingField_1;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<lastValue>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3ClastValueU3Ek__BackingField_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Microsoft.WindowsAzure.Storage.Shared.Protocol.AccessPolicyResponseBase`1<Microsoft.WindowsAzure.Storage.File.SharedAccessFilePolicy>
struct AccessPolicyResponseBase_1_t143AC51E3CF4A29AA7011DAEC4A3492DC72E84BB  : public ResponseParsingBase_1_t85A2E7F12ABF3BD14D87F99908346060D296B140
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// Windows.Foundation.DateTime
struct DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0 
{
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;
};

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B 
{
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;
};

// UniRx.FloatReactiveProperty
struct FloatReactiveProperty_tD6A23BCFC77C15ABCD85A70580B1F14DB9698583  : public ReactiveProperty_1_tF8690E5578B7CCDCAA8769AFD4565CD759A8928C
{
};

// Windows.Foundation.FoundationContract
struct FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928 
{
};

// System.Guid
struct Guid_t 
{
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
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Windows.Foundation.Point
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 
{
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;
};

// Windows.Foundation.Rect
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 
{
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;
};

// Windows.Foundation.Size
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 
{
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Boolean System.Net.WebResponse::m_IsFromCache
	bool ___m_IsFromCache_1;
};
// Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>
struct NOVTABLE IReference_1_tA0479FC0C3337FB721D1376BFE053FB66B702327 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA33ABF54ECFA6A7EC4AE6866184274EB907D192B(FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928* comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0  : public RuntimeObject
{
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;
};

// Microsoft.WindowsAzure.Storage.File.CloudFileStream
struct CloudFileStream_tBC49358739FA838BA603816A3EE832E77BD9733A  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
};

// UnityEngine.UIElements.EventBase
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase/EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5* ___m_Path_6;
	// UnityEngine.UIElements.EventBase/LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3* ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField_14;
};

struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;
};

// Microsoft.WindowsAzure.Storage.File.Protocol.FileAccessPolicyResponse
struct FileAccessPolicyResponse_tA9A47AF58332B3ABBAF3C0688C611CBCB12A1020  : public AccessPolicyResponseBase_1_t143AC51E3CF4A29AA7011DAEC4A3492DC72E84BB
{
};

// Microsoft.WindowsAzure.Storage.File.FileReadStreamBase
struct FileReadStreamBase_t8BF77B7F2D09E323490EE3E2A61DF28CFC7CA3FB  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// Microsoft.WindowsAzure.Storage.File.CloudFile Microsoft.WindowsAzure.Storage.File.FileReadStreamBase::file
	CloudFile_tFEAE3B0F02FCD5476B0F07FF335FC810D5843713* ___file_4;
	// Microsoft.WindowsAzure.Storage.File.FileProperties Microsoft.WindowsAzure.Storage.File.FileReadStreamBase::fileProperties
	FileProperties_t0AC884DF96C5B2FE05BC2057B87E5F65F34A7162* ___fileProperties_5;
	// System.Int64 Microsoft.WindowsAzure.Storage.File.FileReadStreamBase::currentOffset
	int64_t ___currentOffset_6;
	// Microsoft.WindowsAzure.Storage.Core.MultiBufferMemoryStream Microsoft.WindowsAzure.Storage.File.FileReadStreamBase::internalBuffer
	MultiBufferMemoryStream_tE6922785CF0A03068AB68524EDB307D9103476DB* ___internalBuffer_7;
	// System.Int32 Microsoft.WindowsAzure.Storage.File.FileReadStreamBase::streamMinimumReadSizeInBytes
	int32_t ___streamMinimumReadSizeInBytes_8;
	// Microsoft.WindowsAzure.Storage.AccessCondition Microsoft.WindowsAzure.Storage.File.FileReadStreamBase::accessCondition
	AccessCondition_tCB12BCFAC1FDAD0A31B7759FCF8299500BFE3998* ___accessCondition_9;
	// Microsoft.WindowsAzure.Storage.File.FileRequestOptions Microsoft.WindowsAzure.Storage.File.FileReadStreamBase::options
	FileRequestOptions_t34696F949558D1E38FBF5FBCB171ED85CC71DA10* ___options_10;
	// Microsoft.WindowsAzure.Storage.OperationContext Microsoft.WindowsAzure.Storage.File.FileReadStreamBase::operationContext
	OperationContext_t6D35A85A0413F14F77EF549DBAE26C898DD72C88* ___operationContext_11;
	// Microsoft.WindowsAzure.Storage.Core.Util.MD5Wrapper Microsoft.WindowsAzure.Storage.File.FileReadStreamBase::fileMD5
	MD5Wrapper_t297CDA4518C366A763739BB64C20E7011B4F159F* ___fileMD5_12;
	// System.Exception Microsoft.WindowsAzure.Storage.File.FileReadStreamBase::lastException
	Exception_t* ___lastException_13;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.Net.FileWebResponse
struct FileWebResponse_t596090F69B3D0207481CFE48C34ED757493A03D2  : public WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682
{
	// System.Boolean System.Net.FileWebResponse::m_closed
	bool ___m_closed_2;
	// System.Int64 System.Net.FileWebResponse::m_contentLength
	int64_t ___m_contentLength_3;
	// System.IO.FileAccess System.Net.FileWebResponse::m_fileAccess
	int32_t ___m_fileAccess_4;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::m_headers
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___m_headers_5;
	// System.IO.Stream System.Net.FileWebResponse::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_6;
	// System.Uri System.Net.FileWebResponse::m_uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_uri_7;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};
// Windows.UI.Xaml.Data.INotifyPropertyChanged
struct NOVTABLE INotifyPropertyChanged_t292A6C9EDE9F32E829CBDEB7C95133DCF531F615 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyPropertyChanged_add_PropertyChanged_mAF86332B7BB5D8F6AA70C93D04368805A8AEC33D(IPropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_ComCallableWrapper* ___handler0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyPropertyChanged_remove_PropertyChanged_mF3FC08FE655FB3573550B3E6C42DDD670B24EF18(EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0) = 0;
};
// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___value0ArraySize, Guid_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___value0ArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___value0ArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___value0ArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___value0ArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___value0ArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___value0) = 0;
};

// System.Net.NetworkStreamWrapper
struct NetworkStreamWrapper_tE8C6B35509D3406DFB51F2D36E52CF6C5EFAB029  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Net.Sockets.TcpClient System.Net.NetworkStreamWrapper::_client
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ____client_4;
	// System.Net.Sockets.NetworkStream System.Net.NetworkStreamWrapper::_networkStream
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* ____networkStream_5;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.Net.WebReadStream
struct WebReadStream_tA0E8969A97C6FE537A2DDF2040A64AFE63F04C86  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Net.WebOperation System.Net.WebReadStream::<Operation>k__BackingField
	WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9* ___U3COperationU3Ek__BackingField_4;
	// System.IO.Stream System.Net.WebReadStream::<InnerStream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CInnerStreamU3Ek__BackingField_5;
	// System.Boolean System.Net.WebReadStream::disposed
	bool ___disposed_6;
};

// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.ExecuteCommandEvent>
struct EventBase_1_t936FBB91106E2CC02C8E88DBC1573C1C892035C3  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;
};

struct EventBase_1_t936FBB91106E2CC02C8E88DBC1573C1C892035C3_StaticFields
{
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t58FACB77D1CC237FB39BCD540235D55E5E9ED75F* ___s_Pool_16;
};

// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.FocusEvent>
struct EventBase_1_t7187CB27405B98ED004503ABE606225C50E656A0  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;
};

struct EventBase_1_t7187CB27405B98ED004503ABE606225C50E656A0_StaticFields
{
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t10DF1D7B915FABBA839F55B1C8F8A53EF636E395* ___s_Pool_16;
};

// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.FocusInEvent>
struct EventBase_1_t01A865DB5F1B17F837A1670705B7579323F76216  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;
};

struct EventBase_1_t01A865DB5F1B17F837A1670705B7579323F76216_StaticFields
{
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t6EA833FFCBB94CBB4B4ECF190C617D0010F43887* ___s_Pool_16;
};

// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.FocusOutEvent>
struct EventBase_1_tB1ABC1F6948DC48F8C711F9C36E4D0DC9F158F05  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;
};

struct EventBase_1_tB1ABC1F6948DC48F8C711F9C36E4D0DC9F158F05_StaticFields
{
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t11916664A294D85084603B0F15FA2E810B2BC5FF* ___s_Pool_16;
};

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t* ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t51E625EDA46926814063BAC38407B110D9C48805* ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_tADF7F1C5FADE0AE6D00BC928B20C4B63DDC8A3AD* ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t18E076B12814DFAAD91B5BC1B163AAFAC0CADEFD* ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3CEventListenersU3Ek__BackingField_18;
};

struct BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1_StaticFields
{
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___TraverseEventSystemHandlerHierarchyPerfMarker_19;
};

// System.Net.CommandStream
struct CommandStream_tE12108C15BBCC8F52FB53DC1EE3EDB2537E4F123  : public NetworkStreamWrapper_tE8C6B35509D3406DFB51F2D36E52CF6C5EFAB029
{
	// System.Boolean System.Net.CommandStream::_recoverableFailure
	bool ____recoverableFailure_8;
	// System.Net.WebRequest System.Net.CommandStream::_request
	WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* ____request_9;
	// System.Boolean System.Net.CommandStream::_isAsync
	bool ____isAsync_10;
	// System.Boolean System.Net.CommandStream::_aborted
	bool ____aborted_11;
	// System.Net.CommandStream/PipelineEntry[] System.Net.CommandStream::_commands
	PipelineEntryU5BU5D_tF96DE809CEDE1A15F1D069F027582F92EEE04CE4* ____commands_12;
	// System.Int32 System.Net.CommandStream::_index
	int32_t ____index_13;
	// System.Boolean System.Net.CommandStream::_doRead
	bool ____doRead_14;
	// System.Boolean System.Net.CommandStream::_doSend
	bool ____doSend_15;
	// System.Net.ResponseDescription System.Net.CommandStream::_currentResponseDescription
	ResponseDescription_t5A661AE824700CC3F19B5762F53AEB947B44AAC7* ____currentResponseDescription_16;
	// System.String System.Net.CommandStream::_abortReason
	String_t* ____abortReason_17;
	// System.String System.Net.CommandStream::_buffer
	String_t* ____buffer_18;
	// System.Text.Encoding System.Net.CommandStream::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_19;
	// System.Text.Decoder System.Net.CommandStream::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_20;
};

struct CommandStream_tE12108C15BBCC8F52FB53DC1EE3EDB2537E4F123_StaticFields
{
	// System.AsyncCallback System.Net.CommandStream::s_writeCallbackDelegate
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___s_writeCallbackDelegate_6;
	// System.AsyncCallback System.Net.CommandStream::s_readCallbackDelegate
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___s_readCallbackDelegate_7;
};

// OpenCvSharp.DisposableObject
struct DisposableObject_t02C4093A95C57EBD24739E30A8DB4830C0CB9D41  : public RuntimeObject
{
	// System.Boolean OpenCvSharp.DisposableObject::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;
	// System.Boolean OpenCvSharp.DisposableObject::<IsEnabledDispose>k__BackingField
	bool ___U3CIsEnabledDisposeU3Ek__BackingField_1;
	// System.Runtime.InteropServices.GCHandle OpenCvSharp.DisposableObject::dataHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___dataHandle_2;
	// System.IntPtr OpenCvSharp.DisposableObject::<AllocatedMemory>k__BackingField
	intptr_t ___U3CAllocatedMemoryU3Ek__BackingField_3;
	// System.Int64 OpenCvSharp.DisposableObject::<AllocatedMemorySize>k__BackingField
	int64_t ___U3CAllocatedMemorySizeU3Ek__BackingField_4;
};

// Microsoft.WindowsAzure.Storage.File.FileReadStream
struct FileReadStream_t97B20231413378AFF828ECDBE74BCE739EECDC5B  : public FileReadStreamBase_t8BF77B7F2D09E323490EE3E2A61DF28CFC7CA3FB
{
};

// System.Net.FileWebStream
struct FileWebStream_t4F9875530A08D3E605D048A4A9686A970E61D3A5  : public FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8
{
	// System.Net.FileWebRequest System.Net.FileWebStream::m_request
	FileWebRequest_tD1A538307AB2949504F97926635635C573CDF49A* ___m_request_21;
};

// Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase
struct FileWriteStreamBase_t8AAC4B8681936A372D9AF358B64FA01A50A55E0D  : public CloudFileStream_tBC49358739FA838BA603816A3EE832E77BD9733A
{
	// Microsoft.WindowsAzure.Storage.File.CloudFile Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::file
	CloudFile_tFEAE3B0F02FCD5476B0F07FF335FC810D5843713* ___file_4;
	// System.Int64 Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::fileSize
	int64_t ___fileSize_5;
	// System.Boolean Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::newFile
	bool ___newFile_6;
	// System.Int64 Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::currentOffset
	int64_t ___currentOffset_7;
	// System.Int64 Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::currentFileOffset
	int64_t ___currentFileOffset_8;
	// System.Int32 Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::streamWriteSizeInBytes
	int32_t ___streamWriteSizeInBytes_9;
	// Microsoft.WindowsAzure.Storage.Core.MultiBufferMemoryStream Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::internalBuffer
	MultiBufferMemoryStream_tE6922785CF0A03068AB68524EDB307D9103476DB* ___internalBuffer_10;
	// Microsoft.WindowsAzure.Storage.AccessCondition Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::accessCondition
	AccessCondition_tCB12BCFAC1FDAD0A31B7759FCF8299500BFE3998* ___accessCondition_11;
	// Microsoft.WindowsAzure.Storage.File.FileRequestOptions Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::options
	FileRequestOptions_t34696F949558D1E38FBF5FBCB171ED85CC71DA10* ___options_12;
	// Microsoft.WindowsAzure.Storage.OperationContext Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::operationContext
	OperationContext_t6D35A85A0413F14F77EF549DBAE26C898DD72C88* ___operationContext_13;
	// Microsoft.WindowsAzure.Storage.Core.Util.CounterEvent Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::noPendingWritesEvent
	CounterEvent_tCA6BB22D8ADE4388A3CE7D9A590DF9493B7E444F* ___noPendingWritesEvent_14;
	// Microsoft.WindowsAzure.Storage.Core.Util.MD5Wrapper Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::fileMD5
	MD5Wrapper_t297CDA4518C366A763739BB64C20E7011B4F159F* ___fileMD5_15;
	// Microsoft.WindowsAzure.Storage.Core.Util.MD5Wrapper Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::rangeMD5
	MD5Wrapper_t297CDA4518C366A763739BB64C20E7011B4F159F* ___rangeMD5_16;
	// Microsoft.WindowsAzure.Storage.Core.Util.AsyncSemaphore Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::parallelOperationSemaphore
	AsyncSemaphore_tEEC509DADBBD018743C67DCA186B2E357E9B2E82* ___parallelOperationSemaphore_17;
	// System.Exception modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::lastException
	Exception_t* ___lastException_18;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::committed
	bool ___committed_19;
	// System.Boolean Microsoft.WindowsAzure.Storage.File.FileWriteStreamBase::disposed
	bool ___disposed_20;
};

// System.Net.FixedSizeReadStream
struct FixedSizeReadStream_t36A722CECAA40C689D9604980ECB1FF98343B251  : public WebReadStream_tA0E8969A97C6FE537A2DDF2040A64AFE63F04C86
{
	// System.Int64 System.Net.FixedSizeReadStream::<ContentLength>k__BackingField
	int64_t ___U3CContentLengthU3Ek__BackingField_7;
	// System.Int64 System.Net.FixedSizeReadStream::position
	int64_t ___position_8;
};

// UnityEngine.UIElements.CommandEventBase`1<UnityEngine.UIElements.ExecuteCommandEvent>
struct CommandEventBase_1_tC61C876047FB1C3B000DE161F2EA5CE6EAF19952  : public EventBase_1_t936FBB91106E2CC02C8E88DBC1573C1C892035C3
{
	// System.String UnityEngine.UIElements.CommandEventBase`1::m_CommandName
	String_t* ___m_CommandName_18;
};

// UnityEngine.UIElements.FocusEventBase`1<UnityEngine.UIElements.FocusEvent>
struct FocusEventBase_1_t26C6D9D6518CF73A14D460E73B00F842D4C8FD3A  : public EventBase_1_t7187CB27405B98ED004503ABE606225C50E656A0
{
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusEventBase`1::<relatedTarget>k__BackingField
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___U3CrelatedTargetU3Ek__BackingField_18;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusEventBase`1::<direction>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3CdirectionU3Ek__BackingField_19;
	// UnityEngine.UIElements.FocusController UnityEngine.UIElements.FocusEventBase`1::<focusController>k__BackingField
	FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A* ___U3CfocusControllerU3Ek__BackingField_20;
	// System.Boolean UnityEngine.UIElements.FocusEventBase`1::<IsFocusDelegated>k__BackingField
	bool ___U3CIsFocusDelegatedU3Ek__BackingField_21;
};

// UnityEngine.UIElements.FocusEventBase`1<UnityEngine.UIElements.FocusInEvent>
struct FocusEventBase_1_t1F27FAA60011E82AD2DB0EA212CE4C0D7BF7B022  : public EventBase_1_t01A865DB5F1B17F837A1670705B7579323F76216
{
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusEventBase`1::<relatedTarget>k__BackingField
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___U3CrelatedTargetU3Ek__BackingField_18;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusEventBase`1::<direction>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3CdirectionU3Ek__BackingField_19;
	// UnityEngine.UIElements.FocusController UnityEngine.UIElements.FocusEventBase`1::<focusController>k__BackingField
	FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A* ___U3CfocusControllerU3Ek__BackingField_20;
	// System.Boolean UnityEngine.UIElements.FocusEventBase`1::<IsFocusDelegated>k__BackingField
	bool ___U3CIsFocusDelegatedU3Ek__BackingField_21;
};

// UnityEngine.UIElements.FocusEventBase`1<UnityEngine.UIElements.FocusOutEvent>
struct FocusEventBase_1_t31D2BDBFCEFBA91BDD440E4380A0D10EFAA665C2  : public EventBase_1_tB1ABC1F6948DC48F8C711F9C36E4D0DC9F158F05
{
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusEventBase`1::<relatedTarget>k__BackingField
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___U3CrelatedTargetU3Ek__BackingField_18;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusEventBase`1::<direction>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3CdirectionU3Ek__BackingField_19;
	// UnityEngine.UIElements.FocusController UnityEngine.UIElements.FocusEventBase`1::<focusController>k__BackingField
	FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A* ___U3CfocusControllerU3Ek__BackingField_20;
	// System.Boolean UnityEngine.UIElements.FocusEventBase`1::<IsFocusDelegated>k__BackingField
	bool ___U3CIsFocusDelegatedU3Ek__BackingField_21;
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6  : public BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;
};

// OpenCvSharp.DisposableCvObject
struct DisposableCvObject_tA8CD143EDE29DDF4EA4F227AD4A2609FE6081184  : public DisposableObject_t02C4093A95C57EBD24739E30A8DB4830C0CB9D41
{
	// System.IntPtr OpenCvSharp.DisposableCvObject::ptr
	intptr_t ___ptr_5;
	// System.Boolean OpenCvSharp.DisposableCvObject::disposed
	bool ___disposed_6;
};

// Microsoft.WindowsAzure.Storage.File.FileWriteStream
struct FileWriteStream_t986AEC084F41B8A7BABE914D834D51964A1A9E75  : public FileWriteStreamBase_t8AAC4B8681936A372D9AF358B64FA01A50A55E0D
{
};

// System.Net.FtpControlStream
struct FtpControlStream_tEB060EF4E06E99909915AE726E1C3098C4F6E888  : public CommandStream_tE12108C15BBCC8F52FB53DC1EE3EDB2537E4F123
{
	// System.Net.Sockets.Socket System.Net.FtpControlStream::_dataSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____dataSocket_21;
	// System.Net.IPEndPoint System.Net.FtpControlStream::_passiveEndPoint
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ____passiveEndPoint_22;
	// System.Net.TlsStream System.Net.FtpControlStream::_tlsStream
	TlsStream_tBA812F5D23939D0595B505C10F46BAB6EEB7CB51* ____tlsStream_23;
	// System.Text.StringBuilder System.Net.FtpControlStream::_bannerMessage
	StringBuilder_t* ____bannerMessage_24;
	// System.Text.StringBuilder System.Net.FtpControlStream::_welcomeMessage
	StringBuilder_t* ____welcomeMessage_25;
	// System.Text.StringBuilder System.Net.FtpControlStream::_exitMessage
	StringBuilder_t* ____exitMessage_26;
	// System.WeakReference System.Net.FtpControlStream::_credentials
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____credentials_27;
	// System.String System.Net.FtpControlStream::_currentTypeSetting
	String_t* ____currentTypeSetting_28;
	// System.Int64 System.Net.FtpControlStream::_contentLength
	int64_t ____contentLength_29;
	// System.DateTime System.Net.FtpControlStream::_lastModified
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____lastModified_30;
	// System.Boolean System.Net.FtpControlStream::_dataHandshakeStarted
	bool ____dataHandshakeStarted_31;
	// System.String System.Net.FtpControlStream::_loginDirectory
	String_t* ____loginDirectory_32;
	// System.String System.Net.FtpControlStream::_establishedServerDirectory
	String_t* ____establishedServerDirectory_33;
	// System.String System.Net.FtpControlStream::_requestedServerDirectory
	String_t* ____requestedServerDirectory_34;
	// System.Uri System.Net.FtpControlStream::_responseUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____responseUri_35;
	// System.Net.FtpLoginState System.Net.FtpControlStream::_loginState
	uint8_t ____loginState_36;
	// System.Net.FtpStatusCode System.Net.FtpControlStream::StatusCode
	int32_t ___StatusCode_37;
	// System.String System.Net.FtpControlStream::StatusLine
	String_t* ___StatusLine_38;
};

struct FtpControlStream_tEB060EF4E06E99909915AE726E1C3098C4F6E888_StaticFields
{
	// System.AsyncCallback System.Net.FtpControlStream::s_acceptCallbackDelegate
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___s_acceptCallbackDelegate_39;
	// System.AsyncCallback System.Net.FtpControlStream::s_connectCallbackDelegate
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___s_connectCallbackDelegate_40;
	// System.AsyncCallback System.Net.FtpControlStream::s_SSLHandshakeCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___s_SSLHandshakeCallback_41;
};

// OpenCvSharp.Algorithm
struct Algorithm_tC1ED5F17F0E5A53D5A7A47679D98C0E0B7D8F111  : public DisposableCvObject_tA8CD143EDE29DDF4EA4F227AD4A2609FE6081184
{
};

// UnityEngine.UIElements.ExecuteCommandEvent
struct ExecuteCommandEvent_t41D5C771261998F58E01612B66E1EF60C100F6D4  : public CommandEventBase_1_tC61C876047FB1C3B000DE161F2EA5CE6EAF19952
{
};

// OpenCvSharp.FileNode
struct FileNode_t72D4B6FE6534A0E8BA1BE4B6E0459B97B897EDD5  : public DisposableCvObject_tA8CD143EDE29DDF4EA4F227AD4A2609FE6081184
{
	// System.Boolean OpenCvSharp.FileNode::disposed
	bool ___disposed_7;
};

// OpenCvSharp.FileStorage
struct FileStorage_tDC615858CCF423435BCBB3D7AC459311D9BB3058  : public DisposableCvObject_tA8CD143EDE29DDF4EA4F227AD4A2609FE6081184
{
	// System.Boolean OpenCvSharp.FileStorage::disposed
	bool ___disposed_7;
};

// UnityEngine.UIElements.FocusEvent
struct FocusEvent_tC285901ACF2EA5EB98D216AC0ADD95937DBBD40F  : public FocusEventBase_1_t26C6D9D6518CF73A14D460E73B00F842D4C8FD3A
{
};

// UnityEngine.UIElements.FocusInEvent
struct FocusInEvent_tC1179D309FE58E4766E94687240513A96F08AFBE  : public FocusEventBase_1_t1F27FAA60011E82AD2DB0EA212CE4C0D7BF7B022
{
};

// UnityEngine.UIElements.FocusOutEvent
struct FocusOutEvent_t5CC3AC57C2BEFAD0E0A7E73FE6314F0F63DFFD2C  : public FocusEventBase_1_t31D2BDBFCEFBA91BDD440E4380A0D10EFAA665C2
{
};

// Microsoft.MixedReality.Toolkit.Input.FocusProvider
struct FocusProvider_tEEF86E18CCBE98201AC24C4940680374AE46F0A1  : public BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6
{
	// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pointers
	Dictionary_2_t7FD0832C19FA0775ABDACC388ADCF3870D6A0431* ___pointers_21;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pendingOverallFocusEnterSet
	HashSet_1_tAA6C1F6337C1D573AEC249E1B9B43BFCADF908F2* ___pendingOverallFocusEnterSet_22;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pendingOverallFocusExitSet
	Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* ___pendingOverallFocusExitSet_23;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pendingPointerSpecificFocusChange
	List_1_t100F27E62C167F22F4A42070D36A3573D7D9BE6F* ___pendingPointerSpecificFocusChange_24;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerMediator> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pointerMediators
	Dictionary_2_t291B24A32D56EF3668C17BE3EB217DC169FEA208* ___pointerMediators_25;
	// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult Microsoft.MixedReality.Toolkit.Input.FocusProvider::hitResult3d
	PointerHitResult_t5AB425D6717A68B5A128693F8381F281D584D7D7* ___hitResult3d_26;
	// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult Microsoft.MixedReality.Toolkit.Input.FocusProvider::hitResultUi
	PointerHitResult_t5AB425D6717A68B5A128693F8381F281D584D7D7* ___hitResultUi_27;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.FocusProvider::inputSystemProfile
	MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260* ___inputSystemProfile_28;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider::maxQuerySceneResults
	int32_t ___maxQuerySceneResults_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider::shouldUseGraphicsRaycast
	bool ___shouldUseGraphicsRaycast_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_31;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider::<NumNearPointersActive>k__BackingField
	int32_t ___U3CNumNearPointersActiveU3Ek__BackingField_32;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider::<NumFarPointersActive>k__BackingField
	int32_t ___U3CNumFarPointersActiveU3Ek__BackingField_33;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusProvider::primaryPointer
	RuntimeObject* ___primaryPointer_34;
	// System.String Microsoft.MixedReality.Toolkit.Input.FocusProvider::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_35;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.FocusProvider::focusLayerMasks
	LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___focusLayerMasks_36;
	// UnityEngine.RenderTexture Microsoft.MixedReality.Toolkit.Input.FocusProvider::uiRaycastCameraTargetTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___uiRaycastCameraTargetTexture_37;
	// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Input.FocusProvider::uiRaycastCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___uiRaycastCamera_38;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider::newUiRaycastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newUiRaycastPosition_39;
	// Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine Microsoft.MixedReality.Toolkit.Input.FocusProvider::gazePointerStateMachine
	GazePointerVisibilityStateMachine_t829B53127F69324F9A299CBDBFD43BD030B850B9* ___gazePointerStateMachine_40;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPrimaryPointerSelector Microsoft.MixedReality.Toolkit.Input.FocusProvider::primaryPointerSelector
	RuntimeObject* ___primaryPointerSelector_41;
	// Microsoft.MixedReality.Toolkit.Input.PrimaryPointerChangedHandler Microsoft.MixedReality.Toolkit.Input.FocusProvider::PrimaryPointerChanged
	PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8* ___PrimaryPointerChanged_42;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.FocusProvider::gazeProviderPointingData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___gazeProviderPointingData_45;
	// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult Microsoft.MixedReality.Toolkit.Input.FocusProvider::gazeHitResult
	PointerHitResult_t5AB425D6717A68B5A128693F8381F281D584D7D7* ___gazeHitResult_46;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences> Microsoft.MixedReality.Toolkit.Input.FocusProvider::customPointerBehaviors
	List_1_tCBCBEF6F158166FA069F2A5E93AA85B0D495324F* ___customPointerBehaviors_66;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider::<GazePointerBehavior>k__BackingField
	int32_t ___U3CGazePointerBehaviorU3Ek__BackingField_67;
};

struct FocusProvider_tEEF86E18CCBE98201AC24C4940680374AE46F0A1_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_43;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdateGazeProviderPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateGazeProviderPerfMarker_44;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::GetFocusedObjectPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetFocusedObjectPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::TryGetFocusDetailsPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___TryGetFocusDetailsPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::TryOverrideFocusDetailsPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___TryOverrideFocusDetailsPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::GenerateNewPointerIdPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GenerateNewPointerIdPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RegisterPointerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RegisterPointerPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RegisterPointersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RegisterPointersPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UnregisterPointerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UnregisterPointerPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::TryGetPointerDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___TryGetPointerDataPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdatePointersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePointersPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdatePointerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePointerPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::GetPrioritizedHitResultPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetPrioritizedHitResultPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::ReconcilePointersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ReconcilePointersPerfMarker_58;
	// UnityEngine.Collider[] Microsoft.MixedReality.Toolkit.Input.FocusProvider::colliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___colliders_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::QueryScenePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___QueryScenePerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RaycastGraphicsPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaycastGraphicsPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RaycastGraphicsStepPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaycastGraphicsStepPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdateFocusedObjectsPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateFocusedObjectsPerfMarker_63;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::OnSourceDetectedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnSourceDetectedPerfMarker_64;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::OnSourceLostPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnSourceLostPerfMarker_65;
};

// OpenCvSharp.FrameSource
struct FrameSource_tF585AC05E5691A4E9E17F3D5C679509FA7D36C8E  : public DisposableCvObject_tA8CD143EDE29DDF4EA4F227AD4A2609FE6081184
{
};

// OpenCvSharp.DescriptorMatcher
struct DescriptorMatcher_tA06DF7B968F45D457096656FC7435D438D99F162  : public Algorithm_tC1ED5F17F0E5A53D5A7A47679D98C0E0B7D8F111
{
	// System.Boolean OpenCvSharp.DescriptorMatcher::disposed
	bool ___disposed_7;
	// OpenCvSharp.Ptr`1<OpenCvSharp.DescriptorMatcher> OpenCvSharp.DescriptorMatcher::detectorPtr
	Ptr_1_t4B449523B99C9950A0BFD0D3385FEFF649FAD661* ___detectorPtr_8;
};

// OpenCvSharp.Feature2D
struct Feature2D_tD03992106F4A34710C6A9E9B8696BD57DFE58964  : public Algorithm_tC1ED5F17F0E5A53D5A7A47679D98C0E0B7D8F111
{
	// System.Boolean OpenCvSharp.Feature2D::disposed
	bool ___disposed_7;
};

// OpenCvSharp.FrameSourceImpl
struct FrameSourceImpl_t99C5D2977477BD8473099A6D13616D2B1F19AA8A  : public FrameSource_tF585AC05E5691A4E9E17F3D5C679509FA7D36C8E
{
	// System.Boolean OpenCvSharp.FrameSourceImpl::disposed
	bool ___disposed_7;
	// OpenCvSharp.Ptr`1<OpenCvSharp.FrameSource> OpenCvSharp.FrameSourceImpl::ptrObj
	Ptr_1_tBC41660ADDACECCB0FBF328212282639F4BBAD2B* ___ptrObj_8;
};

// OpenCvSharp.XFeatures2D.FREAK
struct FREAK_tA5A3B530DD9DBED124262B8EF9E79A4B11A60968  : public Feature2D_tD03992106F4A34710C6A9E9B8696BD57DFE58964
{
	// System.Boolean OpenCvSharp.XFeatures2D.FREAK::disposed
	bool ___disposed_8;
	// OpenCvSharp.Ptr`1<OpenCvSharp.XFeatures2D.FREAK> OpenCvSharp.XFeatures2D.FREAK::ptrObj
	Ptr_1_t944ED77539CB0C99E150C4723F44EA7311194075* ___ptrObj_9;
};

// OpenCvSharp.FastFeatureDetector
struct FastFeatureDetector_t61110AEBC2FF53DFB9E9E0D9E67292B620C0C9AD  : public Feature2D_tD03992106F4A34710C6A9E9B8696BD57DFE58964
{
	// System.Boolean OpenCvSharp.FastFeatureDetector::disposed
	bool ___disposed_8;
	// OpenCvSharp.Ptr`1<OpenCvSharp.FastFeatureDetector> OpenCvSharp.FastFeatureDetector::ptrObj
	Ptr_1_tF13017F5817FB961A558F8B17740A6921499A276* ___ptrObj_9;
};

// OpenCvSharp.FlannBasedMatcher
struct FlannBasedMatcher_t04EF787DE85528B0385DB96E38B7E755761D6C4F  : public DescriptorMatcher_tA06DF7B968F45D457096656FC7435D438D99F162
{
	// System.Boolean OpenCvSharp.FlannBasedMatcher::disposed
	bool ___disposed_9;
	// OpenCvSharp.Ptr`1<OpenCvSharp.FlannBasedMatcher> OpenCvSharp.FlannBasedMatcher::detectorPtr
	Ptr_1_t9CB1CBB19EB6F4DB2D560C583EE6BE21EE0CAA9A* ___detectorPtr_10;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IMap_2_Lookup_m1B64C40ABCD479ED86B19467261CDF253067F646_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mDA65A6A2FDFCA3CD25909CE909CF1390DAFBAA22_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m096CD8612C549F5E0AF9F2B0B1C2BF238513CDFD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m6B1516D11389BD5B38CFF8BB68A6F7D72A07D147_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t9D2747437C9AA7B4E96FB3342ED7D029757C9E32** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mF0EF5AA5EF11EDE704925A3EFFFC45D16C323EE6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_mA469B291CAFA83B024EC82BF1BCA697E71789200_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0);
il2cpp_hresult_t IMap_2_Clear_mE7ADFD5EB02D04834AB925622D0E8CE0C3918542_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mCCAFE946731B7D39FD27411DAAD9CD782220BA91_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t66A0D1700F95C289C5585DDBAE26DFC77D58859F** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t INotifyPropertyChanged_add_PropertyChanged_mAF86332B7BB5D8F6AA70C93D04368805A8AEC33D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IPropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_ComCallableWrapper* ___handler0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* comReturnValue);
il2cpp_hresult_t INotifyPropertyChanged_remove_PropertyChanged_mF3FC08FE655FB3573550B3E6C42DDD670B24EF18_ComCallableWrapperProjectedMethod(RuntimeObject* __this, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0);



// COM Callable Wrapper for UnityEngine.UIElements.ExecuteCommandEvent
struct ExecuteCommandEvent_t41D5C771261998F58E01612B66E1EF60C100F6D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ExecuteCommandEvent_t41D5C771261998F58E01612B66E1EF60C100F6D4_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline ExecuteCommandEvent_t41D5C771261998F58E01612B66E1EF60C100F6D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ExecuteCommandEvent_t41D5C771261998F58E01612B66E1EF60C100F6D4_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ExecuteCommandEvent_t41D5C771261998F58E01612B66E1EF60C100F6D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ExecuteCommandEvent_t41D5C771261998F58E01612B66E1EF60C100F6D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ExecuteCommandEvent_t41D5C771261998F58E01612B66E1EF60C100F6D4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Dynamic.ExpandoObject
struct ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_ComCallableWrapper>, IMap_2_t494B6570602D9C5F9B873907F0495866E277F8D6, IIterable_1_t699D5008117FC23B5ED4DD90FE640E53C79FD8A9, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, INotifyPropertyChanged_t292A6C9EDE9F32E829CBDEB7C95133DCF531F615
{
	inline ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t494B6570602D9C5F9B873907F0495866E277F8D6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t494B6570602D9C5F9B873907F0495866E277F8D6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t699D5008117FC23B5ED4DD90FE640E53C79FD8A9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t699D5008117FC23B5ED4DD90FE640E53C79FD8A9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &INotifyPropertyChanged_t292A6C9EDE9F32E829CBDEB7C95133DCF531F615::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<INotifyPropertyChanged_t292A6C9EDE9F32E829CBDEB7C95133DCF531F615*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_t494B6570602D9C5F9B873907F0495866E277F8D6::IID;
		interfaceIds[1] = IIterable_1_t699D5008117FC23B5ED4DD90FE640E53C79FD8A9::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = INotifyPropertyChanged_t292A6C9EDE9F32E829CBDEB7C95133DCF531F615::IID;

		*iidCount = 4;
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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m1B64C40ABCD479ED86B19467261CDF253067F646(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m1B64C40ABCD479ED86B19467261CDF253067F646_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mDA65A6A2FDFCA3CD25909CE909CF1390DAFBAA22(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mDA65A6A2FDFCA3CD25909CE909CF1390DAFBAA22_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m096CD8612C549F5E0AF9F2B0B1C2BF238513CDFD(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m096CD8612C549F5E0AF9F2B0B1C2BF238513CDFD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m6B1516D11389BD5B38CFF8BB68A6F7D72A07D147(IMapView_2_t9D2747437C9AA7B4E96FB3342ED7D029757C9E32** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m6B1516D11389BD5B38CFF8BB68A6F7D72A07D147_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mF0EF5AA5EF11EDE704925A3EFFFC45D16C323EE6(Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mF0EF5AA5EF11EDE704925A3EFFFC45D16C323EE6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mA469B291CAFA83B024EC82BF1BCA697E71789200(Il2CppHString ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_mA469B291CAFA83B024EC82BF1BCA697E71789200_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mE7ADFD5EB02D04834AB925622D0E8CE0C3918542() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mE7ADFD5EB02D04834AB925622D0E8CE0C3918542_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mCCAFE946731B7D39FD27411DAAD9CD782220BA91(IIterator_1_t66A0D1700F95C289C5585DDBAE26DFC77D58859F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mCCAFE946731B7D39FD27411DAAD9CD782220BA91_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL INotifyPropertyChanged_add_PropertyChanged_mAF86332B7BB5D8F6AA70C93D04368805A8AEC33D(IPropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_ComCallableWrapper* ___handler0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* comReturnValue) IL2CPP_OVERRIDE
	{
		return INotifyPropertyChanged_add_PropertyChanged_mAF86332B7BB5D8F6AA70C93D04368805A8AEC33D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___handler0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL INotifyPropertyChanged_remove_PropertyChanged_mF3FC08FE655FB3573550B3E6C42DDD670B24EF18(EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0) IL2CPP_OVERRIDE
	{
		return INotifyPropertyChanged_remove_PropertyChanged_mF3FC08FE655FB3573550B3E6C42DDD670B24EF18_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___token0);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ExpandoObject_t74F67096810BE9395E3E97BB892A8EFA264A3012_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.XFeatures2D.FREAK
struct FREAK_tA5A3B530DD9DBED124262B8EF9E79A4B11A60968_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FREAK_tA5A3B530DD9DBED124262B8EF9E79A4B11A60968_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FREAK_tA5A3B530DD9DBED124262B8EF9E79A4B11A60968_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FREAK_tA5A3B530DD9DBED124262B8EF9E79A4B11A60968_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FREAK_tA5A3B530DD9DBED124262B8EF9E79A4B11A60968(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FREAK_tA5A3B530DD9DBED124262B8EF9E79A4B11A60968_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FREAK_tA5A3B530DD9DBED124262B8EF9E79A4B11A60968_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.FastFeatureDetector
struct FastFeatureDetector_t61110AEBC2FF53DFB9E9E0D9E67292B620C0C9AD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FastFeatureDetector_t61110AEBC2FF53DFB9E9E0D9E67292B620C0C9AD_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FastFeatureDetector_t61110AEBC2FF53DFB9E9E0D9E67292B620C0C9AD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FastFeatureDetector_t61110AEBC2FF53DFB9E9E0D9E67292B620C0C9AD_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FastFeatureDetector_t61110AEBC2FF53DFB9E9E0D9E67292B620C0C9AD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FastFeatureDetector_t61110AEBC2FF53DFB9E9E0D9E67292B620C0C9AD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FastFeatureDetector_t61110AEBC2FF53DFB9E9E0D9E67292B620C0C9AD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.Feature2D
struct Feature2D_tD03992106F4A34710C6A9E9B8696BD57DFE58964_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Feature2D_tD03992106F4A34710C6A9E9B8696BD57DFE58964_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Feature2D_tD03992106F4A34710C6A9E9B8696BD57DFE58964_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Feature2D_tD03992106F4A34710C6A9E9B8696BD57DFE58964_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Feature2D_tD03992106F4A34710C6A9E9B8696BD57DFE58964(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Feature2D_tD03992106F4A34710C6A9E9B8696BD57DFE58964_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Feature2D_tD03992106F4A34710C6A9E9B8696BD57DFE58964_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.WindowsAzure.Storage.File.Protocol.FileAccessPolicyResponse
struct FileAccessPolicyResponse_tA9A47AF58332B3ABBAF3C0688C611CBCB12A1020_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileAccessPolicyResponse_tA9A47AF58332B3ABBAF3C0688C611CBCB12A1020_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FileAccessPolicyResponse_tA9A47AF58332B3ABBAF3C0688C611CBCB12A1020_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileAccessPolicyResponse_tA9A47AF58332B3ABBAF3C0688C611CBCB12A1020_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileAccessPolicyResponse_tA9A47AF58332B3ABBAF3C0688C611CBCB12A1020(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileAccessPolicyResponse_tA9A47AF58332B3ABBAF3C0688C611CBCB12A1020_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileAccessPolicyResponse_tA9A47AF58332B3ABBAF3C0688C611CBCB12A1020_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.FileNode
struct FileNode_t72D4B6FE6534A0E8BA1BE4B6E0459B97B897EDD5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileNode_t72D4B6FE6534A0E8BA1BE4B6E0459B97B897EDD5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FileNode_t72D4B6FE6534A0E8BA1BE4B6E0459B97B897EDD5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileNode_t72D4B6FE6534A0E8BA1BE4B6E0459B97B897EDD5_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileNode_t72D4B6FE6534A0E8BA1BE4B6E0459B97B897EDD5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileNode_t72D4B6FE6534A0E8BA1BE4B6E0459B97B897EDD5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileNode_t72D4B6FE6534A0E8BA1BE4B6E0459B97B897EDD5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.WindowsAzure.Storage.File.FileReadStream
struct FileReadStream_t97B20231413378AFF828ECDBE74BCE739EECDC5B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileReadStream_t97B20231413378AFF828ECDBE74BCE739EECDC5B_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FileReadStream_t97B20231413378AFF828ECDBE74BCE739EECDC5B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileReadStream_t97B20231413378AFF828ECDBE74BCE739EECDC5B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileReadStream_t97B20231413378AFF828ECDBE74BCE739EECDC5B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileReadStream_t97B20231413378AFF828ECDBE74BCE739EECDC5B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileReadStream_t97B20231413378AFF828ECDBE74BCE739EECDC5B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.FileStorage
struct FileStorage_tDC615858CCF423435BCBB3D7AC459311D9BB3058_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileStorage_tDC615858CCF423435BCBB3D7AC459311D9BB3058_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FileStorage_tDC615858CCF423435BCBB3D7AC459311D9BB3058_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileStorage_tDC615858CCF423435BCBB3D7AC459311D9BB3058_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileStorage_tDC615858CCF423435BCBB3D7AC459311D9BB3058(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileStorage_tDC615858CCF423435BCBB3D7AC459311D9BB3058_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileStorage_tDC615858CCF423435BCBB3D7AC459311D9BB3058_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FileWebResponse
struct FileWebResponse_t596090F69B3D0207481CFE48C34ED757493A03D2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileWebResponse_t596090F69B3D0207481CFE48C34ED757493A03D2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FileWebResponse_t596090F69B3D0207481CFE48C34ED757493A03D2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileWebResponse_t596090F69B3D0207481CFE48C34ED757493A03D2_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileWebResponse_t596090F69B3D0207481CFE48C34ED757493A03D2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileWebResponse_t596090F69B3D0207481CFE48C34ED757493A03D2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileWebResponse_t596090F69B3D0207481CFE48C34ED757493A03D2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FileWebStream
struct FileWebStream_t4F9875530A08D3E605D048A4A9686A970E61D3A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileWebStream_t4F9875530A08D3E605D048A4A9686A970E61D3A5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FileWebStream_t4F9875530A08D3E605D048A4A9686A970E61D3A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileWebStream_t4F9875530A08D3E605D048A4A9686A970E61D3A5_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileWebStream_t4F9875530A08D3E605D048A4A9686A970E61D3A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileWebStream_t4F9875530A08D3E605D048A4A9686A970E61D3A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileWebStream_t4F9875530A08D3E605D048A4A9686A970E61D3A5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.WindowsAzure.Storage.File.FileWriteStream
struct FileWriteStream_t986AEC084F41B8A7BABE914D834D51964A1A9E75_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileWriteStream_t986AEC084F41B8A7BABE914D834D51964A1A9E75_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FileWriteStream_t986AEC084F41B8A7BABE914D834D51964A1A9E75_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileWriteStream_t986AEC084F41B8A7BABE914D834D51964A1A9E75_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileWriteStream_t986AEC084F41B8A7BABE914D834D51964A1A9E75(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileWriteStream_t986AEC084F41B8A7BABE914D834D51964A1A9E75_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileWriteStream_t986AEC084F41B8A7BABE914D834D51964A1A9E75_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FixedSizeReadStream
struct FixedSizeReadStream_t36A722CECAA40C689D9604980ECB1FF98343B251_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FixedSizeReadStream_t36A722CECAA40C689D9604980ECB1FF98343B251_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FixedSizeReadStream_t36A722CECAA40C689D9604980ECB1FF98343B251_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FixedSizeReadStream_t36A722CECAA40C689D9604980ECB1FF98343B251_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FixedSizeReadStream_t36A722CECAA40C689D9604980ECB1FF98343B251(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FixedSizeReadStream_t36A722CECAA40C689D9604980ECB1FF98343B251_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FixedSizeReadStream_t36A722CECAA40C689D9604980ECB1FF98343B251_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.FlannBasedMatcher
struct FlannBasedMatcher_t04EF787DE85528B0385DB96E38B7E755761D6C4F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FlannBasedMatcher_t04EF787DE85528B0385DB96E38B7E755761D6C4F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FlannBasedMatcher_t04EF787DE85528B0385DB96E38B7E755761D6C4F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FlannBasedMatcher_t04EF787DE85528B0385DB96E38B7E755761D6C4F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FlannBasedMatcher_t04EF787DE85528B0385DB96E38B7E755761D6C4F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FlannBasedMatcher_t04EF787DE85528B0385DB96E38B7E755761D6C4F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FlannBasedMatcher_t04EF787DE85528B0385DB96E38B7E755761D6C4F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.FloatReactiveProperty
struct FloatReactiveProperty_tD6A23BCFC77C15ABCD85A70580B1F14DB9698583_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FloatReactiveProperty_tD6A23BCFC77C15ABCD85A70580B1F14DB9698583_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FloatReactiveProperty_tD6A23BCFC77C15ABCD85A70580B1F14DB9698583_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FloatReactiveProperty_tD6A23BCFC77C15ABCD85A70580B1F14DB9698583_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FloatReactiveProperty_tD6A23BCFC77C15ABCD85A70580B1F14DB9698583(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FloatReactiveProperty_tD6A23BCFC77C15ABCD85A70580B1F14DB9698583_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FloatReactiveProperty_tD6A23BCFC77C15ABCD85A70580B1F14DB9698583_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.FocusEvent
struct FocusEvent_tC285901ACF2EA5EB98D216AC0ADD95937DBBD40F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FocusEvent_tC285901ACF2EA5EB98D216AC0ADD95937DBBD40F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FocusEvent_tC285901ACF2EA5EB98D216AC0ADD95937DBBD40F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FocusEvent_tC285901ACF2EA5EB98D216AC0ADD95937DBBD40F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FocusEvent_tC285901ACF2EA5EB98D216AC0ADD95937DBBD40F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FocusEvent_tC285901ACF2EA5EB98D216AC0ADD95937DBBD40F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FocusEvent_tC285901ACF2EA5EB98D216AC0ADD95937DBBD40F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.FocusInEvent
struct FocusInEvent_tC1179D309FE58E4766E94687240513A96F08AFBE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FocusInEvent_tC1179D309FE58E4766E94687240513A96F08AFBE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FocusInEvent_tC1179D309FE58E4766E94687240513A96F08AFBE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FocusInEvent_tC1179D309FE58E4766E94687240513A96F08AFBE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FocusInEvent_tC1179D309FE58E4766E94687240513A96F08AFBE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FocusInEvent_tC1179D309FE58E4766E94687240513A96F08AFBE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FocusInEvent_tC1179D309FE58E4766E94687240513A96F08AFBE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.FocusOutEvent
struct FocusOutEvent_t5CC3AC57C2BEFAD0E0A7E73FE6314F0F63DFFD2C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FocusOutEvent_t5CC3AC57C2BEFAD0E0A7E73FE6314F0F63DFFD2C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FocusOutEvent_t5CC3AC57C2BEFAD0E0A7E73FE6314F0F63DFFD2C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FocusOutEvent_t5CC3AC57C2BEFAD0E0A7E73FE6314F0F63DFFD2C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FocusOutEvent_t5CC3AC57C2BEFAD0E0A7E73FE6314F0F63DFFD2C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FocusOutEvent_t5CC3AC57C2BEFAD0E0A7E73FE6314F0F63DFFD2C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FocusOutEvent_t5CC3AC57C2BEFAD0E0A7E73FE6314F0F63DFFD2C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.FocusProvider
struct FocusProvider_tEEF86E18CCBE98201AC24C4940680374AE46F0A1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FocusProvider_tEEF86E18CCBE98201AC24C4940680374AE46F0A1_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FocusProvider_tEEF86E18CCBE98201AC24C4940680374AE46F0A1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FocusProvider_tEEF86E18CCBE98201AC24C4940680374AE46F0A1_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FocusProvider_tEEF86E18CCBE98201AC24C4940680374AE46F0A1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FocusProvider_tEEF86E18CCBE98201AC24C4940680374AE46F0A1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FocusProvider_tEEF86E18CCBE98201AC24C4940680374AE46F0A1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.FoundationContract
struct FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928_ComCallableWrapper>, IReference_1_tA0479FC0C3337FB721D1376BFE053FB66B702327, IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF
{
	inline FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_tA0479FC0C3337FB721D1376BFE053FB66B702327::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tA0479FC0C3337FB721D1376BFE053FB66B702327*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF*>(this);
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
		interfaceIds[0] = IReference_1_tA0479FC0C3337FB721D1376BFE053FB66B702327::IID;
		interfaceIds[1] = IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID;

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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA33ABF54ECFA6A7EC4AE6866184274EB907D192B(FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928 returnValue;
		try
		{
			returnValue = *static_cast<FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928*>(UnBox(GetManagedObjectInline(), FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) IL2CPP_OVERRIDE
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
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) IL2CPP_OVERRIDE
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
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___value0ArraySize, Guid_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___value0ArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___value0ArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___value0ArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___value0ArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___value0ArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FoundationContract_tD753052C4152B2AE11AF3D9BA5BF63BA73609928_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.FrameSourceImpl
struct FrameSourceImpl_t99C5D2977477BD8473099A6D13616D2B1F19AA8A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FrameSourceImpl_t99C5D2977477BD8473099A6D13616D2B1F19AA8A_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FrameSourceImpl_t99C5D2977477BD8473099A6D13616D2B1F19AA8A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FrameSourceImpl_t99C5D2977477BD8473099A6D13616D2B1F19AA8A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FrameSourceImpl_t99C5D2977477BD8473099A6D13616D2B1F19AA8A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FrameSourceImpl_t99C5D2977477BD8473099A6D13616D2B1F19AA8A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FrameSourceImpl_t99C5D2977477BD8473099A6D13616D2B1F19AA8A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FtpControlStream
struct FtpControlStream_tEB060EF4E06E99909915AE726E1C3098C4F6E888_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FtpControlStream_tEB060EF4E06E99909915AE726E1C3098C4F6E888_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline FtpControlStream_tEB060EF4E06E99909915AE726E1C3098C4F6E888_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FtpControlStream_tEB060EF4E06E99909915AE726E1C3098C4F6E888_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FtpControlStream_tEB060EF4E06E99909915AE726E1C3098C4F6E888(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FtpControlStream_tEB060EF4E06E99909915AE726E1C3098C4F6E888_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FtpControlStream_tEB060EF4E06E99909915AE726E1C3098C4F6E888_ComCallableWrapper(obj));
}
