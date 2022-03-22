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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52;
// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78;
// UniRx.AsyncReactiveCommand`1<UniRx.Unit>
struct AsyncReactiveCommand_1_t6105F2FD118C8FA94A411009549EE60B3321F1AD;
// UniRx.AsyncSubject`1<System.Net.HttpWebResponse>
struct AsyncSubject_1_t6132D716F7E348F2CAE222AB7746924E3E39D4DB;
// UniRx.AsyncSubject`1<System.IO.Stream>
struct AsyncSubject_1_t42D7EA1C3A90E89A4D77BD07521EF6FBA627D556;
// UniRx.AsyncSubject`1<UniRx.Unit>
struct AsyncSubject_1_tF58256BBE1EFF25B300AB0798FAC4A0A6CCDE713;
// UniRx.AsyncSubject`1<System.Net.WebResponse>
struct AsyncSubject_1_t729CC24660AD56DD435B0C3753B1990D0708BC76;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<UniRx.Unit,System.IObservable`1<UniRx.Unit>>
struct Func_2_t32664D37D0DED642EC952F12C92759082B6565D1;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t80970C26B61C899A37E146F69BC51E2443270FC1;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
// System.IObserver`1<UnityEngine.EventSystems.AxisEventData>
struct IObserver_1_t42A39E5044DE26D14070135277DA550082C37810;
// System.IObserver`1<UnityEngine.EventSystems.BaseEventData>
struct IObserver_1_t170F24629BEFCA0D2201FD84FF4D7E076460318E;
// System.IObserver`1<System.Boolean>
struct IObserver_1_t13B7A1F29887551144ADB3A244B44BF20C022DB5;
// System.IObserver`1<UnityEngine.Collider>
struct IObserver_1_t9EC7BB079166D5569F65AF25666CFE262C490593;
// System.IObserver`1<UnityEngine.Collider2D>
struct IObserver_1_tCE8A7502B4EE57191B1C8AC258C534269E75DA43;
// System.IObserver`1<UnityEngine.Collision>
struct IObserver_1_t8C0F5A513D82F35346810D3266B86BC7434B9613;
// System.IObserver`1<UnityEngine.Collision2D>
struct IObserver_1_t505D5DCFD7DBF9FA7A24EA4E498519D826FA42FE;
// System.IObserver`1<UniRx.CountChangedStatus>
struct IObserver_1_t23ED7BECF719D23801D3B70DD7566A48A7C42A03;
// System.IObserver`1<UnityEngine.GameObject>
struct IObserver_1_t0CE5840FFFA718B1D526462244531CD702E865B2;
// System.IObserver`1<System.Net.HttpWebResponse>
struct IObserver_1_tA21BE6FA63710813513530DC3D7F7A19C95CA09F;
// System.IObserver`1<System.Int32>
struct IObserver_1_tD7DD4DFC474D260BC2957E15FC6D935A58B7E1C4;
// System.IObserver`1<UnityEngine.Joint2D>
struct IObserver_1_t2C632F57F2DFAC668ED3BD068ACA9271B71502B8;
// System.IObserver`1<UniRx.Diagnostics.LogEntry>
struct IObserver_1_t08ABB5EA63D28193DED4805AEC3BC0B8ABD3FA4B;
// System.IObserver`1<UnityEngine.EventSystems.PointerEventData>
struct IObserver_1_t97A88F46DAB5C60073F6F81707F92AFF925D92F7;
// System.IObserver`1<System.Single>
struct IObserver_1_t5DA788B15E585CC91B6EEA3F2981B4626086EEB3;
// System.IObserver`1<System.IO.Stream>
struct IObserver_1_tF1AE16D7977F9FF5F4F89297F4EE411DCD1E563A;
// System.IObserver`1<UniRx.Unit>
struct IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D;
// System.IObserver`1<System.Net.WebResponse>
struct IObserver_1_tE8113DAA5DDC7C4A630B6C7B8991E3204812548F;
// System.IObserver`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct IObserver_1_tB2CAC2AAEC4B66D145D169A32624A14FCD2FD259;
// System.IObserver`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct IObserver_1_t69FBB0F210411CE23DF86FD0C2AD1B7017C44728;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>
struct IReadOnlyDictionary_2_t7C525B2249CC44A031989D4DB72D1792C5161AA1;
// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>
struct List_1_tA624903E1259A700E57AC71565033F4E3C8470F9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Net.WebCompletionSource`1/Result<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>
struct Result_t195C65AF03BEBA948FC7447896F66256BF6B068A;
// System.Net.WebCompletionSource`1/Result<System.Object>
struct Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141;
// System.Net.WebCompletionSource`1/Result<System.Net.WebRequestStream>
struct Result_tD24994935136C1148AF31B96B25C064E0AB2C108;
// System.Net.WebCompletionSource`1/Result<System.Net.WebResponseStream>
struct Result_tD1AF3F1F773C695879CA62244D8C92A77BCA54C1;
// UniRx.Operators.StartObservable`1<UniRx.Unit>
struct StartObservable_1_tF5AF27EAECDD3D183E8AACDE4D30B6217E1357BA;
// UniRx.Subject`1<UnityEngine.EventSystems.AxisEventData>
struct Subject_1_tE34912455217EBE5AB5E870D308CC0A719D8A704;
// UniRx.Subject`1<UnityEngine.EventSystems.BaseEventData>
struct Subject_1_t1BCC4FA6D13C4CCE506295F887AEACAD2E72AA9A;
// UniRx.Subject`1<System.Boolean>
struct Subject_1_t4DB7318932132674B68C24144B381077D26769D8;
// UniRx.Subject`1<UnityEngine.Collider>
struct Subject_1_tD965EF294C20753E870A8EAB74A0DB1E736006B2;
// UniRx.Subject`1<UnityEngine.Collider2D>
struct Subject_1_t33C517C306D2B65AE23B1A22BD2CA520E026DE03;
// UniRx.Subject`1<UnityEngine.Collision>
struct Subject_1_t6B8366CF73C35DC70A3A12B251850E3DAEB87C97;
// UniRx.Subject`1<UnityEngine.Collision2D>
struct Subject_1_tE80901D65FCBEF8156E3E7616CBCC9CCB3AC71C3;
// UniRx.Subject`1<UniRx.CountChangedStatus>
struct Subject_1_tD2CC4654812D40DD14310339AF3216F8CF03C0E5;
// UniRx.Subject`1<UnityEngine.GameObject>
struct Subject_1_tA39E72EC1754367BF279A748BEEF273F9A895048;
// UniRx.Subject`1<System.Int32>
struct Subject_1_t2B582391357D4ABA0874BF24E6158E35CDE83E1D;
// UniRx.Subject`1<UnityEngine.Joint2D>
struct Subject_1_tD9C384DED3E002D31B788EF7AAD644156E9CABEA;
// UniRx.Subject`1<UniRx.Diagnostics.LogEntry>
struct Subject_1_tDD4A599F699ACFBA67AB05F55D261D3AADB7636A;
// UniRx.Subject`1<UnityEngine.EventSystems.PointerEventData>
struct Subject_1_t0AD4A245D4F2C6C1ADFDA77A88DD78303101B833;
// UniRx.Subject`1<System.Single>
struct Subject_1_t9BAA5246AD728DF7805E05FF293E56A49ECB6A23;
// UniRx.Subject`1<UniRx.Unit>
struct Subject_1_tE07A1F75ADCA403FC109E43EC91E6C60352263E1;
// UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct Subject_1_t321089362BFDD9B78D889214AC2B830548378E2A;
// UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct Subject_1_t93D7AA3C0B7977AE7EEA9578BF2529DE3213E9CC;
// UniRx.Operators.TakeObservable`1<UniRx.Unit>
struct TakeObservable_1_t4C4AD7FAAD106CA08813F05F39500131D6C7EA6F;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IList`1<System.String>>
struct TaskFactory_1_t122F08ABF7264245C209BE2FC2A3B3B11F64713C;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct TaskFactory_1_t684F6242B761B753DB75EDAC629F65001D0256B7;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct TaskFactory_1_t70A4DF3233953F0D0ED0F4237B258F818093606A;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.Int32>>
struct TaskFactory_1_tAE919A7BAE255B9F6EF5F440E30D3AF6A9C9322E;
// System.Threading.Tasks.TaskFactory`1<System.Net.WebCompletionSource`1/Result<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>>
struct TaskFactory_1_t30180A268DB8033EA606341D6FAC983E15E18099;
// System.Threading.Tasks.TaskFactory`1<System.Net.WebCompletionSource`1/Result<System.Object>>
struct TaskFactory_1_t1F352098B3956311DF121015636A3493A7CA173A;
// System.Threading.Tasks.TaskFactory`1<System.Net.WebCompletionSource`1/Result<System.Net.WebRequestStream>>
struct TaskFactory_1_t249AC5073F43524FEA4D2153054AF386648CF778;
// System.Threading.Tasks.TaskFactory`1<System.Net.WebCompletionSource`1/Result<System.Net.WebResponseStream>>
struct TaskFactory_1_t498482B87677FA964B3E678A3CA60E9584FF93EA;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<System.IO.Stream>>
struct TaskFactory_1_t246F9BDEF33592E0326D9B8135A890130B538836;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<System.Net.WebResponse>>
struct TaskFactory_1_tFAEE1FDA7BFE8AC728AEE7FED19AC4C2DDE6880C;
// System.Threading.Tasks.TaskFactory`1<System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>>
struct TaskFactory_1_t42C9608CCE6E07FBC5D71980718AC1DD4FF97566;
// System.Threading.Tasks.TaskFactory`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>
struct TaskFactory_1_t9231E4B7637FE4099848562CC6931310B3BA473C;
// System.Threading.Tasks.TaskFactory`1<System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>>
struct TaskFactory_1_t9BD8C82E9068542A1D906D61829BD898F327C2C7;
// System.Threading.Tasks.TaskFactory`1<System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>>
struct TaskFactory_1_t24C7103FD18ED4192B8A05680C653AA476ECF485;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B;
// System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t85CC7C12483530E70260CE9EB34D6A29B19A9B4E;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB;
// System.Threading.Tasks.Task`1<System.Net.Sockets.Socket>
struct Task_1_tCE998B52193474E1E5055E937912C252EFFF111F;
// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t06484715029D51A4420723456D165BAC63798F8D;
// System.Threading.Tasks.Task`1<System.Net.WebResponse>
struct Task_1_t5E1291839AEFBDBE3699513D40515588EE167AB0;
// System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>
struct Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Net.Sockets.SendPacketsElement[]
struct SendPacketsElementU5BU5D_t3561DE4794CA0E485BDC621B4EEE2D54A769695B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIElements.UIRAtlasAllocator/AreaNode[]
struct AreaNodeU5BU5D_t7ABD91559A1A17A29524B3DC43207BFD9A8A7D37;
// UnityEngine.UIElements.UIRAtlasAllocator/Row[]
struct RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Net.BufferOffsetSize
struct BufferOffsetSize_t46A7671E4C06281BB2D4C4AC98A6263715BDAC71;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Exception
struct Exception_t;
// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_tDAF59F790028947925DE9798A35700F6B8EBF63D;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Net.WebOperation
struct WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_m1AB92B4A9230C801564B34A9F91CC596D1F596FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_m1F836228E8EE3E16DA8EDD019CD3B9DAD01798BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_mE5C69DE23899878934D02E28872D9C5DA77713B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_m4C42273866C5EB06933AF7EECE843B06037E79E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_m85F1E655EEC814327B3D808659FB77D1A131E3C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_mC4AF143A40C9684342AB667F45F1F66388D09AC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_m07D46BDDDF5BDC8621D83A858BA24EF6EBF77EB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_m731E382ACBB07675B0B4A1C0C02C3BF6399063F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_mE8B64676C97829C9C946208210986BEEEF73A149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_m0AD4ECD7D38075C348A7EBF55662A0F9D8D00B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_m3AD134620238DB2B233EC297129407373E0EB993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_mF14176AA01E3ECBD5B929C74861E186BD77111CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_m31392F72EF6F75F8F86FFB859F03AFE74A61ABC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_m5013CF376F69735C39B8FD7DDB2D8B36F8DE0DDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_mE6F0BD8858B51D033156D4CF3FA658B3853CF91C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Progress_m63EF6CD6E40D60FC77F5A6B36D252C45A10DA854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Progress_m82F2255467BDE00C392437F5640EECFFC27FFD67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_m19F09FBEBA869DFA8BF4A5B667CAFBE0F2C45E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_m99796E32654C1364FBA69D914D62BFA860648515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_m9EFF9BCDA1108525C98DD678F015E9E7D28FF3E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_GetResults_m84DBA18204059D9364921997CB2E88EFB7BAF27A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m8EEF680BF51BF4698332EA3A0EC6DA3BE80475EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m98D19A8FE67890830EB109D3BB8257FCAE76A4AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m78372DBE4F177F35DC3DF46F37BBEB79AF797324(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m78D1DF310E63719722F86C83A512DCF35728D4F2(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m71DB6DDEDCC8DB4230CCAF913BA6ECAAA9ABF6D4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mBCA3BB43C118936A44B20F8A8F83F1CAB59E7DB4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mD7DFCC1D0421F836CB3B4499AAEB89D5DAA229F5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m9F67F4B3AA2396D2CDE6EE93B3D3B1B1F2D99685(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mA7040C532ABD06DCBC2B397B09EB32EC4A9AF5EB(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m79A0FBC05E913306F00FE582D6AEF52CB4F6F0D6(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m9D9F6AE5C27EC4CEB0A3CC17C83048A39994C5F0(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m259594E576D8DE8D92DBA9A4EC9321BFA9006BCD(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m040A37BF97ECAB4FD4C51481285B1BA9F4DAD352(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF5D7D584EB42725EB00B767AB45D3C01D86179E6(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8DC9B66CF8C9CACC2DB3433EE8B997F9C73BF2BF(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m4F3F3BA173A376976E527252D3CE5EEDF2231931(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m92A4A761AEF5B205028083C5DB8D42D3130122D9(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m41A40F6B559BA6F942CEBB107DFAABA33D065595(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_mBF9B24A7C8F503AFC59278143056C87F8A1EE8B6() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mA60AE4CB25AC58A37E11E8304C023D38B640B85F() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_mCDCAF874CA48FAD12C3C50CC2F76FD425D82C060(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mFDEBAF5BE18872689664196233CDE3187ADD562B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m027C5E15C55C227EC7C2C18B4A4B63AAE8B8FC43(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
};

// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>
struct OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/AreaNode>
struct Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	AreaNodeU5BU5D_t7ABD91559A1A17A29524B3DC43207BFD9A8A7D37* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/Row>
struct Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// UniRx.Subject`1<UnityEngine.EventSystems.AxisEventData>
struct Subject_1_tE34912455217EBE5AB5E870D308CC0A719D8A704  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UnityEngine.EventSystems.BaseEventData>
struct Subject_1_t1BCC4FA6D13C4CCE506295F887AEACAD2E72AA9A  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<System.Boolean>
struct Subject_1_t4DB7318932132674B68C24144B381077D26769D8  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UnityEngine.Collider>
struct Subject_1_tD965EF294C20753E870A8EAB74A0DB1E736006B2  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UnityEngine.Collider2D>
struct Subject_1_t33C517C306D2B65AE23B1A22BD2CA520E026DE03  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UnityEngine.Collision>
struct Subject_1_t6B8366CF73C35DC70A3A12B251850E3DAEB87C97  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UnityEngine.Collision2D>
struct Subject_1_tE80901D65FCBEF8156E3E7616CBCC9CCB3AC71C3  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UniRx.CountChangedStatus>
struct Subject_1_tD2CC4654812D40DD14310339AF3216F8CF03C0E5  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UnityEngine.GameObject>
struct Subject_1_tA39E72EC1754367BF279A748BEEF273F9A895048  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<System.Int32>
struct Subject_1_t2B582391357D4ABA0874BF24E6158E35CDE83E1D  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UnityEngine.Joint2D>
struct Subject_1_tD9C384DED3E002D31B788EF7AAD644156E9CABEA  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UniRx.Diagnostics.LogEntry>
struct Subject_1_tDD4A599F699ACFBA67AB05F55D261D3AADB7636A  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UnityEngine.EventSystems.PointerEventData>
struct Subject_1_t0AD4A245D4F2C6C1ADFDA77A88DD78303101B833  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<System.Single>
struct Subject_1_t9BAA5246AD728DF7805E05FF293E56A49ECB6A23  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UniRx.Unit>
struct Subject_1_tE07A1F75ADCA403FC109E43EC91E6C60352263E1  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct Subject_1_t321089362BFDD9B78D889214AC2B830548378E2A  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct Subject_1_t93D7AA3C0B7977AE7EEA9578BF2529DE3213E9CC  : public RuntimeObject
{
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject* ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t* ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;
};

// UniRx.Subject`1/Subscription<UnityEngine.EventSystems.AxisEventData>
struct Subscription_t0925983D36BCA332541440C2D504C4D55E1D5D42  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tE34912455217EBE5AB5E870D308CC0A719D8A704* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UnityEngine.EventSystems.BaseEventData>
struct Subscription_tCA0C297D770B45AFA0435A8FB9F49C6ECB006028  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t1BCC4FA6D13C4CCE506295F887AEACAD2E72AA9A* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<System.Boolean>
struct Subscription_t8959F5EE0D45F4489FDFE4394D8E5C0912D25A00  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t4DB7318932132674B68C24144B381077D26769D8* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UnityEngine.Collider>
struct Subscription_tBFF822EEA46EE4DEAF4C2162AFB14F8058924A26  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tD965EF294C20753E870A8EAB74A0DB1E736006B2* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UnityEngine.Collider2D>
struct Subscription_t3FB7CFFC5782117E18B3DCCC83057D29F670F325  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t33C517C306D2B65AE23B1A22BD2CA520E026DE03* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UnityEngine.Collision>
struct Subscription_tB56138F76EA70EDE3B76900B67D19C886D6DC0DA  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t6B8366CF73C35DC70A3A12B251850E3DAEB87C97* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UnityEngine.Collision2D>
struct Subscription_t3FA2BFF3FAB4507AF7C2F8C5FF0C8BF48355EB9F  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tE80901D65FCBEF8156E3E7616CBCC9CCB3AC71C3* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UniRx.CountChangedStatus>
struct Subscription_t8A2236E3A17BB5F5BDB27F1121B9FAC602E10DA0  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tD2CC4654812D40DD14310339AF3216F8CF03C0E5* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UnityEngine.GameObject>
struct Subscription_tB92E60F6F70670324AEE6D4FF095834DE61CC2F1  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tA39E72EC1754367BF279A748BEEF273F9A895048* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.AsyncSubject`1/Subscription<System.Net.HttpWebResponse>
struct Subscription_t5FB62B463316EA785A112C735CA8160FE1DDF754  : public RuntimeObject
{
	// System.Object UniRx.AsyncSubject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.AsyncSubject`1<T> UniRx.AsyncSubject`1/Subscription::parent
	AsyncSubject_1_t6132D716F7E348F2CAE222AB7746924E3E39D4DB* ___parent_1;
	// System.IObserver`1<T> UniRx.AsyncSubject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<System.Int32>
struct Subscription_tD36B8866624E4A98B9BDD39427EB9E011B80E2D5  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t2B582391357D4ABA0874BF24E6158E35CDE83E1D* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UnityEngine.Joint2D>
struct Subscription_tFAECCBDAF558CFB10FEDC4503204151322BC73CC  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tD9C384DED3E002D31B788EF7AAD644156E9CABEA* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UniRx.Diagnostics.LogEntry>
struct Subscription_tE6471EE76521ACC43BDE12A232E02FD39B9D7F8C  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tDD4A599F699ACFBA67AB05F55D261D3AADB7636A* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UnityEngine.EventSystems.PointerEventData>
struct Subscription_t1E03D5069BB231B5ADDA28F034605753B89621D5  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t0AD4A245D4F2C6C1ADFDA77A88DD78303101B833* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<System.Single>
struct Subscription_t43595ACB866803D223B4C1F7B3713337771FEC28  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t9BAA5246AD728DF7805E05FF293E56A49ECB6A23* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.AsyncSubject`1/Subscription<System.IO.Stream>
struct Subscription_t7F35965DFF75C14F977D6EF86E8242A76E433653  : public RuntimeObject
{
	// System.Object UniRx.AsyncSubject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.AsyncSubject`1<T> UniRx.AsyncSubject`1/Subscription::parent
	AsyncSubject_1_t42D7EA1C3A90E89A4D77BD07521EF6FBA627D556* ___parent_1;
	// System.IObserver`1<T> UniRx.AsyncSubject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.AsyncReactiveCommand`1/Subscription<UniRx.Unit>
struct Subscription_t2339AF93A70AB287C3CB6F225E102571A86DA951  : public RuntimeObject
{
	// UniRx.AsyncReactiveCommand`1<T> UniRx.AsyncReactiveCommand`1/Subscription::parent
	AsyncReactiveCommand_1_t6105F2FD118C8FA94A411009549EE60B3321F1AD* ___parent_0;
	// System.Func`2<T,System.IObservable`1<UniRx.Unit>> UniRx.AsyncReactiveCommand`1/Subscription::asyncAction
	Func_2_t32664D37D0DED642EC952F12C92759082B6565D1* ___asyncAction_1;
};

// UniRx.AsyncSubject`1/Subscription<UniRx.Unit>
struct Subscription_tF0B967051F7B92EE48E6E0BBD1E9EF5F89D7CC02  : public RuntimeObject
{
	// System.Object UniRx.AsyncSubject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.AsyncSubject`1<T> UniRx.AsyncSubject`1/Subscription::parent
	AsyncSubject_1_tF58256BBE1EFF25B300AB0798FAC4A0A6CCDE713* ___parent_1;
	// System.IObserver`1<T> UniRx.AsyncSubject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UniRx.Unit>
struct Subscription_t2813E4F55B2F69A771335CA638342E9A8C75C72D  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tE07A1F75ADCA403FC109E43EC91E6C60352263E1* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.AsyncSubject`1/Subscription<System.Net.WebResponse>
struct Subscription_tDD106987EEBDFF28F1B9063F909CE6A9ABD94D1A  : public RuntimeObject
{
	// System.Object UniRx.AsyncSubject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.AsyncSubject`1<T> UniRx.AsyncSubject`1/Subscription::parent
	AsyncSubject_1_t729CC24660AD56DD435B0C3753B1990D0708BC76* ___parent_1;
	// System.IObserver`1<T> UniRx.AsyncSubject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct Subscription_t7088251AA04FFE3906105D56F1C5493B54C99B82  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t321089362BFDD9B78D889214AC2B830548378E2A* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// UniRx.Subject`1/Subscription<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct Subscription_t23235623AE19B523DA2AE8F999337B297F533E29  : public RuntimeObject
{
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject* ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t93D7AA3C0B7977AE7EEA9578BF2529DE3213E9CC* ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;
};

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9  : public RuntimeObject
{
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t* ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject* ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	VoidReferenceTypeParameter_tDAF59F790028947925DE9798A35700F6B8EBF63D* ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____startingContext_7;
};

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C  : public RuntimeObject
{
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t* ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject* ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____startingContext_7;
};

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82  : public RuntimeObject
{
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t* ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject* ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____startingContext_7;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
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

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UniRx.Operators.StartObservable`1/StartObserver<UniRx.Unit>
struct StartObserver_t3A2F30C3F9E49CDF4791BFB73AB7C6903760808F  : public OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A
{
	// UniRx.Operators.StartObservable`1<T> UniRx.Operators.StartObservable`1/StartObserver::parent
	StartObservable_1_tF5AF27EAECDD3D183E8AACDE4D30B6217E1357BA* ___parent_2;
};

// UniRx.Operators.TakeObservable`1/Take<UniRx.Unit>
struct Take_t4AACA62E3847A15122FD23FEB94FB74E6B0DAA7D  : public OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A
{
	// System.Int32 UniRx.Operators.TakeObservable`1/Take::rest
	int32_t ___rest_2;
};

// UniRx.Operators.TakeObservable`1/Take_<UniRx.Unit>
struct Take__t4C80CAAA30522F67A409B02D4DEFF2775147722B  : public OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A
{
	// UniRx.Operators.TakeObservable`1<T> UniRx.Operators.TakeObservable`1/Take_::parent
	TakeObservable_1_t4C4AD7FAAD106CA08813F05F39500131D6C7EA6F* ___parent_2;
	// System.Object UniRx.Operators.TakeObservable`1/Take_::gate
	RuntimeObject* ___gate_3;
};

// System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54  : public TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9
{
};

// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD  : public TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C
{
};

// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB  : public TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82
{
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.String>>
struct Task_1_tE69DA1161A2B6F05F75D32A5F89DF2D9F10EF725  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

struct Task_1_tE69DA1161A2B6F05F75D32A5F89DF2D9F10EF725_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t122F08ABF7264245C209BE2FC2A3B3B11F64713C* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

struct Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t684F6242B761B753DB75EDAC629F65001D0256B7* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_result_38;
};

struct Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t70A4DF3233953F0D0ED0F4237B258F818093606A* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Net.WebCompletionSource`1/Result<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>>
struct Task_1_t3AC2B3E584346DEAA050D1FD26C8F34842DEC3BE  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Result_t195C65AF03BEBA948FC7447896F66256BF6B068A* ___m_result_38;
};

struct Task_1_t3AC2B3E584346DEAA050D1FD26C8F34842DEC3BE_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t30180A268DB8033EA606341D6FAC983E15E18099* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Net.WebCompletionSource`1/Result<System.Object>>
struct Task_1_t97AD6E06503307BD6962E18D69C7CB9E86A6D1B8  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141* ___m_result_38;
};

struct Task_1_t97AD6E06503307BD6962E18D69C7CB9E86A6D1B8_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t1F352098B3956311DF121015636A3493A7CA173A* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Net.WebCompletionSource`1/Result<System.Net.WebRequestStream>>
struct Task_1_t0B2B7B8C88578A81553C2C77FE43E2B2E248EFE5  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Result_tD24994935136C1148AF31B96B25C064E0AB2C108* ___m_result_38;
};

struct Task_1_t0B2B7B8C88578A81553C2C77FE43E2B2E248EFE5_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t249AC5073F43524FEA4D2153054AF386648CF778* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Net.WebCompletionSource`1/Result<System.Net.WebResponseStream>>
struct Task_1_tE612DA1C06D282D474F6347B20556F078B1B2D40  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Result_tD1AF3F1F773C695879CA62244D8C92A77BCA54C1* ___m_result_38;
};

struct Task_1_tE612DA1C06D282D474F6347B20556F078B1B2D40_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t498482B87677FA964B3E678A3CA60E9584FF93EA* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.IO.Stream>>
struct Task_1_tDE97D4C00A60FDBFCF83F717E5EDABFBEF1E1656  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_t06484715029D51A4420723456D165BAC63798F8D* ___m_result_38;
};

struct Task_1_tDE97D4C00A60FDBFCF83F717E5EDABFBEF1E1656_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t246F9BDEF33592E0326D9B8135A890130B538836* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Net.WebResponse>>
struct Task_1_t76A029F0DAF4BADB0D2FB6E9C976AC090AEDCD60  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_t5E1291839AEFBDBE3699513D40515588EE167AB0* ___m_result_38;
};

struct Task_1_t76A029F0DAF4BADB0D2FB6E9C976AC090AEDCD60_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEE1FDA7BFE8AC728AEE7FED19AC4C2DDE6880C* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>>
struct Task_1_tB493F74D58DB1761E087206849D953E99D07600B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Tuple_4_tEBC96F3E32357E20775BD456F010C21BC580DEC9* ___m_result_38;
};

struct Task_1_tB493F74D58DB1761E087206849D953E99D07600B_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t42C9608CCE6E07FBC5D71980718AC1DD4FF97566* ___s_defaultFactory_39;
};

// System.ValueTuple`2<System.Boolean,System.Net.WebOperation>
struct ValueTuple_2_t0C1494128B94392C03DAEDA7AAFB7FDC53A2DFBE 
{
	// T1 System.ValueTuple`2::Item1
	bool ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9* ___Item2_1;
};

// System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>
struct ValueTuple_3_t6C5EE1D6FC24D28BEFABA73041F27430DA67F24D 
{
	// T1 System.ValueTuple`3::Item1
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	int32_t ___Item3_2;
};

// System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>
struct ValueTuple_5_tB20F533B613C3A284DF2DB06B100D3C182419098 
{
	// T1 System.ValueTuple`5::Item1
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	bool ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	bool ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	BufferOffsetSize_t46A7671E4C06281BB2D4C4AC98A6263715BDAC71* ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9* ___Item5_4;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Net.Sockets.IPPacketInformation
struct IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B 
{
	// System.Net.IPAddress System.Net.Sockets.IPPacketInformation::address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address_0;
	// System.Int32 System.Net.Sockets.IPPacketInformation::networkInterface
	int32_t ___networkInterface_1;
};
// Native definition for P/Invoke marshalling of System.Net.Sockets.IPPacketInformation
struct IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshaled_pinvoke
{
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address_0;
	int32_t ___networkInterface_1;
};
// Native definition for COM marshalling of System.Net.Sockets.IPPacketInformation
struct IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshaled_com
{
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address_0;
	int32_t ___networkInterface_1;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.__Il2CppComDelegate
struct __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D  : public Il2CppComObject
{
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Sockets.Socket>
struct AsyncTaskMethodBuilder_1_t80349F578B92358FF136535BF1BCE759FA15D19F 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tCE998B52193474E1E5055E937912C252EFFF111F* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t80349F578B92358FF136535BF1BCE759FA15D19F_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tCE998B52193474E1E5055E937912C252EFFF111F* ___s_defaultResultTask_0;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>
struct Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_result_38;
};

struct Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tAE919A7BAE255B9F6EF5F440E30D3AF6A9C9322E* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>
struct Task_1_tA032D8BE8DEA6A5172C016AFDAB7989E1FF89802  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ValueTuple_2_t0C1494128B94392C03DAEDA7AAFB7FDC53A2DFBE ___m_result_38;
};

struct Task_1_tA032D8BE8DEA6A5172C016AFDAB7989E1FF89802_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t9231E4B7637FE4099848562CC6931310B3BA473C* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>>
struct Task_1_t47619AB16377E9964219D5DD2EC9C831188EF5C3  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ValueTuple_3_t6C5EE1D6FC24D28BEFABA73041F27430DA67F24D ___m_result_38;
};

struct Task_1_t47619AB16377E9964219D5DD2EC9C831188EF5C3_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t9BD8C82E9068542A1D906D61829BD898F327C2C7* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>>
struct Task_1_tDEC1214BD64BD33C02FA14FAD8EAF76AD89C8192  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ValueTuple_5_tB20F533B613C3A284DF2DB06B100D3C182419098 ___m_result_38;
};

struct Task_1_tDEC1214BD64BD33C02FA14FAD8EAF76AD89C8192_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t24C7103FD18ED4192B8A05680C653AA476ECF485* ___s_defaultFactory_39;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::disposed
	bool ___disposed_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.SocketAsyncEventArgs::in_progress
	int32_t ___in_progress_2;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::remote_ep
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remote_ep_3;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::current_socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___current_socket_4;
	// System.Net.Sockets.SocketAsyncResult System.Net.Sockets.SocketAsyncEventArgs::socket_async_result
	SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* ___socket_async_result_5;
	// System.Exception System.Net.Sockets.SocketAsyncEventArgs::<ConnectByNameError>k__BackingField
	Exception_t* ___U3CConnectByNameErrorU3Ek__BackingField_6;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::<AcceptSocket>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CAcceptSocketU3Ek__BackingField_7;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<BytesTransferred>k__BackingField
	int32_t ___U3CBytesTransferredU3Ek__BackingField_8;
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::<DisconnectReuseSocket>k__BackingField
	bool ___U3CDisconnectReuseSocketU3Ek__BackingField_9;
	// System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.SocketAsyncEventArgs::<LastOperation>k__BackingField
	int32_t ___U3CLastOperationU3Ek__BackingField_10;
	// System.Net.Sockets.IPPacketInformation System.Net.Sockets.SocketAsyncEventArgs::<ReceiveMessageFromPacketInfo>k__BackingField
	IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B ___U3CReceiveMessageFromPacketInfoU3Ek__BackingField_11;
	// System.Net.Sockets.SendPacketsElement[] System.Net.Sockets.SocketAsyncEventArgs::<SendPacketsElements>k__BackingField
	SendPacketsElementU5BU5D_t3561DE4794CA0E485BDC621B4EEE2D54A769695B* ___U3CSendPacketsElementsU3Ek__BackingField_12;
	// System.Net.Sockets.TransmitFileOptions System.Net.Sockets.SocketAsyncEventArgs::<SendPacketsFlags>k__BackingField
	int32_t ___U3CSendPacketsFlagsU3Ek__BackingField_13;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<SendPacketsSendSize>k__BackingField
	int32_t ___U3CSendPacketsSendSizeU3Ek__BackingField_14;
	// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::<SocketError>k__BackingField
	int32_t ___U3CSocketErrorU3Ek__BackingField_15;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncEventArgs::<SocketFlags>k__BackingField
	int32_t ___U3CSocketFlagsU3Ek__BackingField_16;
	// System.Object System.Net.Sockets.SocketAsyncEventArgs::<UserToken>k__BackingField
	RuntimeObject* ___U3CUserTokenU3Ek__BackingField_17;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.SocketAsyncEventArgs::Completed
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___Completed_18;
	// System.Memory`1<System.Byte> System.Net.Sockets.SocketAsyncEventArgs::_buffer
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ____buffer_19;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::_offset
	int32_t ____offset_20;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::_count
	int32_t ____count_21;
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::_bufferIsExplicitArray
	bool ____bufferIsExplicitArray_22;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::_bufferList
	RuntimeObject* ____bufferList_23;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::_bufferListInternal
	List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ____bufferListInternal_24;
};

// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401  : public SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1::_builder
	AsyncTaskMethodBuilder_1_t80349F578B92358FF136535BF1BCE759FA15D19F ____builder_25;
	// System.Boolean System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1::_accessed
	bool ____accessed_26;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
IL2CPP_EXTERN_C  void AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);
IL2CPP_EXTERN_C  void AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);
IL2CPP_EXTERN_C  void AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);
IL2CPP_EXTERN_C  void AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);
IL2CPP_EXTERN_C  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);

// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_m90228BD7EC590080807C5E7F7CA59A8EF35B9AC1_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_mAAB1AD89D7338C3A73271E4BC0757E64DE2C7CEB_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_mCE7A2D0A8DAF2BA898C9B88F6D30393218ABF7BD_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_mE4FADF197D4BE822D0538892876181DD300957D6_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_mFFED84FD8661B05EF2B39E7C361B7E17328D9471_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F_gshared (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::Windows.Foundation.IAsyncOperation<TResult>.put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5_gshared (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __this, AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* ___handler0, const RuntimeMethod* method) ;
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncInfoAdapter_4_get_Completed_m878E32594EF72B81B8845AA425E4FB337F343507_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD_gshared (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_mC171DB7290D25FD80C9601E867B379DDE1F073EB_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_m3355E77DE938672BFA2C8E863C71940C825CD5AE_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_m3FF07063179C6736C9475D5CC58671346A92C8C5_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_m55DA0DC544D63BC6E411938CE43101BB3A6EEAA8_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_m0E463051E3EB8BC8739E28DDFE6F25CE051A860A_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2__ctor_m8146E8FC72CAB6D1979978BFD7B5E7529030EC0D_gshared (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mB8F0B8E12C7B028D90DD936B51D8FE3086396A2E_gshared (TaskToAsyncOperationWithProgressAdapter_2_t85CC7C12483530E70260CE9EB34D6A29B19A9B4E* __this, AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* ___handler0, const RuntimeMethod* method) ;
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncInfoAdapter_4_get_Progress_m8D81173A97E23F7B4F2836D64C8F2F03C3048772_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_m595DF0D751AF2DB18D1E41EEAC49A11F77E87D32_gshared (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m90B4F31967BCE96D8C486240948AB5EC205C5514_gshared (TaskToAsyncOperationWithProgressAdapter_2_t85CC7C12483530E70260CE9EB34D6A29B19A9B4E* __this, AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* ___handler0, const RuntimeMethod* method) ;
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncInfoAdapter_4_get_Completed_m592E20BBC9DE3B99B7579D7D0A36E327F065064C_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncOperationWithProgressAdapter_2_GetResults_m890DE99C7F3F64897C5A73F1BB3E1197CC407881_gshared (TaskToAsyncOperationWithProgressAdapter_2_t85CC7C12483530E70260CE9EB34D6A29B19A9B4E* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_m0BE85A0CBFB9CFC6C9FA7549A38770BF97EB8084_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_m0959AD3A8C74809B424AD91E51AF51D845862D48_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_m4B9E347ECB09B56F07157C049762C3CD60CB7BBE_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_m6145ABCAB2499D2E66D51B5828CCE6669BAF302B_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_m26BB16CA12E7792AF0CC0AF7F19FF0EB1531B306_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2__ctor_m1BF1E9A619FF77B9CCE37882F351E9E8CD4702EF_gshared (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57_gshared (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* ___handler0, const RuntimeMethod* method) ;
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncInfoAdapter_4_get_Progress_m3D0CAE01D92C283A4F123AA25CEA8E3C0A01D53C_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7_gshared (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585_gshared (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* ___handler0, const RuntimeMethod* method) ;
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncInfoAdapter_4_get_Completed_mCEE04D99FA0778BD6CF1BF3B902ADCB41950251A_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7_gshared (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, const RuntimeMethod* method) ;

// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_m31392F72EF6F75F8F86FFB859F03AFE74A61ABC9 (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_m90228BD7EC590080807C5E7F7CA59A8EF35B9AC1_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_m9EFF9BCDA1108525C98DD678F015E9E7D28FF3E2 (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_mAAB1AD89D7338C3A73271E4BC0757E64DE2C7CEB_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_ErrorCode()
inline Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_mF14176AA01E3ECBD5B929C74861E186BD77111CB (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_mCE7A2D0A8DAF2BA898C9B88F6D30393218ABF7BD_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_m1AB92B4A9230C801564B34A9F91CC596D1F596FA (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_mE4FADF197D4BE822D0538892876181DD300957D6_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_mC4AF143A40C9684342AB667F45F1F66388D09AC6 (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_mFFED84FD8661B05EF2B39E7C361B7E17328D9471_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::Windows.Foundation.IAsyncOperation<TResult>.put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
inline void TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5 (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __this, AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54*, AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*, const RuntimeMethod*))TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5_gshared)(__this, ___handler0, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Completed()
inline AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* TaskToAsyncInfoAdapter_4_get_Completed_m731E382ACBB07675B0B4A1C0C02C3BF6399063F2 (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_m878E32594EF72B81B8845AA425E4FB337F343507_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::GetResults()
inline bool TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54*, const RuntimeMethod*))TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD_gshared)(__this, method);
}
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_m5013CF376F69735C39B8FD7DDB2D8B36F8DE0DDE (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_mC171DB7290D25FD80C9601E867B379DDE1F073EB_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_m19F09FBEBA869DFA8BF4A5B667CAFBE0F2C45E80 (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_m3355E77DE938672BFA2C8E863C71940C825CD5AE_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_ErrorCode()
inline Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_m3AD134620238DB2B233EC297129407373E0EB993 (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_m3FF07063179C6736C9475D5CC58671346A92C8C5_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_m1F836228E8EE3E16DA8EDD019CD3B9DAD01798BF (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_m55DA0DC544D63BC6E411938CE43101BB3A6EEAA8_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_m4C42273866C5EB06933AF7EECE843B06037E79E0 (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_m0E463051E3EB8BC8739E28DDFE6F25CE051A860A_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationProgressHandler_2__ctor_mD98227E85B2F57C5936C14B67B1D972ECACF8390 (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationProgressHandler_2__ctor_m8146E8FC72CAB6D1979978BFD7B5E7529030EC0D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m98D19A8FE67890830EB109D3BB8257FCAE76A4AD (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __this, AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*, AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mB8F0B8E12C7B028D90DD936B51D8FE3086396A2E_gshared)(__this, ___handler0, method);
}
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Progress()
inline AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* TaskToAsyncInfoAdapter_4_get_Progress_m82F2255467BDE00C392437F5640EECFFC27FFD67 (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Progress_m8D81173A97E23F7B4F2836D64C8F2F03C3048772_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_m670C4D5F2F4B1975A305F79ED95BECB45287A01F (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_m595DF0D751AF2DB18D1E41EEAC49A11F77E87D32_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m8EEF680BF51BF4698332EA3A0EC6DA3BE80475EC (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __this, AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*, AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m90B4F31967BCE96D8C486240948AB5EC205C5514_gshared)(__this, ___handler0, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Completed()
inline AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* TaskToAsyncInfoAdapter_4_get_Completed_mE8B64676C97829C9C946208210986BEEEF73A149 (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_m592E20BBC9DE3B99B7579D7D0A36E327F065064C_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::GetResults()
inline RuntimeObject* TaskToAsyncOperationWithProgressAdapter_2_GetResults_m84DBA18204059D9364921997CB2E88EFB7BAF27A (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_GetResults_m890DE99C7F3F64897C5A73F1BB3E1197CC407881_gshared)(__this, method);
}
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_mE6F0BD8858B51D033156D4CF3FA658B3853CF91C (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_m0BE85A0CBFB9CFC6C9FA7549A38770BF97EB8084_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_m99796E32654C1364FBA69D914D62BFA860648515 (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_m0959AD3A8C74809B424AD91E51AF51D845862D48_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_ErrorCode()
inline Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_m0AD4ECD7D38075C348A7EBF55662A0F9D8D00B4F (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_m4B9E347ECB09B56F07157C049762C3CD60CB7BBE_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_mE5C69DE23899878934D02E28872D9C5DA77713B8 (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_m6145ABCAB2499D2E66D51B5828CCE6669BAF302B_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_m85F1E655EEC814327B3D808659FB77D1A131E3C7 (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_m26BB16CA12E7792AF0CC0AF7F19FF0EB1531B306_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationProgressHandler_2__ctor_m1BF1E9A619FF77B9CCE37882F351E9E8CD4702EF (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationProgressHandler_2__ctor_m1BF1E9A619FF77B9CCE37882F351E9E8CD4702EF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57 (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*, AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57_gshared)(__this, ___handler0, method);
}
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Progress()
inline AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* TaskToAsyncInfoAdapter_4_get_Progress_m63EF6CD6E40D60FC77F5A6B36D252C45A10DA854 (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Progress_m3D0CAE01D92C283A4F123AA25CEA8E3C0A01D53C_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7 (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585 (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*, AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585_gshared)(__this, ___handler0, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Completed()
inline AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* TaskToAsyncInfoAdapter_4_get_Completed_m07D46BDDDF5BDC8621D83A858BA24EF6EBF77EB8 (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_mCEE04D99FA0778BD6CF1BF3B902ADCB41950251A_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::GetResults()
inline uint32_t TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7 (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7_gshared)(__this, method);
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/AreaNode>
struct Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/Row>
struct Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.StartObservable`1/StartObserver<UniRx.Unit>
struct StartObserver_t3A2F30C3F9E49CDF4791BFB73AB7C6903760808F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StartObserver_t3A2F30C3F9E49CDF4791BFB73AB7C6903760808F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline StartObserver_t3A2F30C3F9E49CDF4791BFB73AB7C6903760808F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StartObserver_t3A2F30C3F9E49CDF4791BFB73AB7C6903760808F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StartObserver_t3A2F30C3F9E49CDF4791BFB73AB7C6903760808F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StartObserver_t3A2F30C3F9E49CDF4791BFB73AB7C6903760808F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StartObserver_t3A2F30C3F9E49CDF4791BFB73AB7C6903760808F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UnityEngine.EventSystems.AxisEventData>
struct Subject_1_tE34912455217EBE5AB5E870D308CC0A719D8A704_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_tE34912455217EBE5AB5E870D308CC0A719D8A704_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_tE34912455217EBE5AB5E870D308CC0A719D8A704_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_tE34912455217EBE5AB5E870D308CC0A719D8A704_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_tE34912455217EBE5AB5E870D308CC0A719D8A704(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_tE34912455217EBE5AB5E870D308CC0A719D8A704_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_tE34912455217EBE5AB5E870D308CC0A719D8A704_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UnityEngine.EventSystems.BaseEventData>
struct Subject_1_t1BCC4FA6D13C4CCE506295F887AEACAD2E72AA9A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_t1BCC4FA6D13C4CCE506295F887AEACAD2E72AA9A_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_t1BCC4FA6D13C4CCE506295F887AEACAD2E72AA9A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_t1BCC4FA6D13C4CCE506295F887AEACAD2E72AA9A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_t1BCC4FA6D13C4CCE506295F887AEACAD2E72AA9A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_t1BCC4FA6D13C4CCE506295F887AEACAD2E72AA9A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_t1BCC4FA6D13C4CCE506295F887AEACAD2E72AA9A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<System.Boolean>
struct Subject_1_t4DB7318932132674B68C24144B381077D26769D8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_t4DB7318932132674B68C24144B381077D26769D8_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_t4DB7318932132674B68C24144B381077D26769D8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_t4DB7318932132674B68C24144B381077D26769D8_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_t4DB7318932132674B68C24144B381077D26769D8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_t4DB7318932132674B68C24144B381077D26769D8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_t4DB7318932132674B68C24144B381077D26769D8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UnityEngine.Collider>
struct Subject_1_tD965EF294C20753E870A8EAB74A0DB1E736006B2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_tD965EF294C20753E870A8EAB74A0DB1E736006B2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_tD965EF294C20753E870A8EAB74A0DB1E736006B2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_tD965EF294C20753E870A8EAB74A0DB1E736006B2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_tD965EF294C20753E870A8EAB74A0DB1E736006B2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_tD965EF294C20753E870A8EAB74A0DB1E736006B2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_tD965EF294C20753E870A8EAB74A0DB1E736006B2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UnityEngine.Collider2D>
struct Subject_1_t33C517C306D2B65AE23B1A22BD2CA520E026DE03_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_t33C517C306D2B65AE23B1A22BD2CA520E026DE03_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_t33C517C306D2B65AE23B1A22BD2CA520E026DE03_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_t33C517C306D2B65AE23B1A22BD2CA520E026DE03_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_t33C517C306D2B65AE23B1A22BD2CA520E026DE03(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_t33C517C306D2B65AE23B1A22BD2CA520E026DE03_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_t33C517C306D2B65AE23B1A22BD2CA520E026DE03_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UnityEngine.Collision>
struct Subject_1_t6B8366CF73C35DC70A3A12B251850E3DAEB87C97_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_t6B8366CF73C35DC70A3A12B251850E3DAEB87C97_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_t6B8366CF73C35DC70A3A12B251850E3DAEB87C97_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_t6B8366CF73C35DC70A3A12B251850E3DAEB87C97_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_t6B8366CF73C35DC70A3A12B251850E3DAEB87C97(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_t6B8366CF73C35DC70A3A12B251850E3DAEB87C97_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_t6B8366CF73C35DC70A3A12B251850E3DAEB87C97_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UnityEngine.Collision2D>
struct Subject_1_tE80901D65FCBEF8156E3E7616CBCC9CCB3AC71C3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_tE80901D65FCBEF8156E3E7616CBCC9CCB3AC71C3_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_tE80901D65FCBEF8156E3E7616CBCC9CCB3AC71C3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_tE80901D65FCBEF8156E3E7616CBCC9CCB3AC71C3_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_tE80901D65FCBEF8156E3E7616CBCC9CCB3AC71C3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_tE80901D65FCBEF8156E3E7616CBCC9CCB3AC71C3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_tE80901D65FCBEF8156E3E7616CBCC9CCB3AC71C3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UniRx.CountChangedStatus>
struct Subject_1_tD2CC4654812D40DD14310339AF3216F8CF03C0E5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_tD2CC4654812D40DD14310339AF3216F8CF03C0E5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_tD2CC4654812D40DD14310339AF3216F8CF03C0E5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_tD2CC4654812D40DD14310339AF3216F8CF03C0E5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_tD2CC4654812D40DD14310339AF3216F8CF03C0E5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_tD2CC4654812D40DD14310339AF3216F8CF03C0E5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_tD2CC4654812D40DD14310339AF3216F8CF03C0E5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UnityEngine.GameObject>
struct Subject_1_tA39E72EC1754367BF279A748BEEF273F9A895048_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_tA39E72EC1754367BF279A748BEEF273F9A895048_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_tA39E72EC1754367BF279A748BEEF273F9A895048_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_tA39E72EC1754367BF279A748BEEF273F9A895048_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_tA39E72EC1754367BF279A748BEEF273F9A895048(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_tA39E72EC1754367BF279A748BEEF273F9A895048_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_tA39E72EC1754367BF279A748BEEF273F9A895048_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<System.Int32>
struct Subject_1_t2B582391357D4ABA0874BF24E6158E35CDE83E1D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_t2B582391357D4ABA0874BF24E6158E35CDE83E1D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_t2B582391357D4ABA0874BF24E6158E35CDE83E1D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_t2B582391357D4ABA0874BF24E6158E35CDE83E1D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_t2B582391357D4ABA0874BF24E6158E35CDE83E1D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_t2B582391357D4ABA0874BF24E6158E35CDE83E1D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_t2B582391357D4ABA0874BF24E6158E35CDE83E1D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UnityEngine.Joint2D>
struct Subject_1_tD9C384DED3E002D31B788EF7AAD644156E9CABEA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_tD9C384DED3E002D31B788EF7AAD644156E9CABEA_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_tD9C384DED3E002D31B788EF7AAD644156E9CABEA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_tD9C384DED3E002D31B788EF7AAD644156E9CABEA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_tD9C384DED3E002D31B788EF7AAD644156E9CABEA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_tD9C384DED3E002D31B788EF7AAD644156E9CABEA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_tD9C384DED3E002D31B788EF7AAD644156E9CABEA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UniRx.Diagnostics.LogEntry>
struct Subject_1_tDD4A599F699ACFBA67AB05F55D261D3AADB7636A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_tDD4A599F699ACFBA67AB05F55D261D3AADB7636A_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_tDD4A599F699ACFBA67AB05F55D261D3AADB7636A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_tDD4A599F699ACFBA67AB05F55D261D3AADB7636A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_tDD4A599F699ACFBA67AB05F55D261D3AADB7636A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_tDD4A599F699ACFBA67AB05F55D261D3AADB7636A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_tDD4A599F699ACFBA67AB05F55D261D3AADB7636A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UnityEngine.EventSystems.PointerEventData>
struct Subject_1_t0AD4A245D4F2C6C1ADFDA77A88DD78303101B833_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_t0AD4A245D4F2C6C1ADFDA77A88DD78303101B833_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_t0AD4A245D4F2C6C1ADFDA77A88DD78303101B833_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_t0AD4A245D4F2C6C1ADFDA77A88DD78303101B833_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_t0AD4A245D4F2C6C1ADFDA77A88DD78303101B833(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_t0AD4A245D4F2C6C1ADFDA77A88DD78303101B833_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_t0AD4A245D4F2C6C1ADFDA77A88DD78303101B833_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<System.Single>
struct Subject_1_t9BAA5246AD728DF7805E05FF293E56A49ECB6A23_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_t9BAA5246AD728DF7805E05FF293E56A49ECB6A23_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_t9BAA5246AD728DF7805E05FF293E56A49ECB6A23_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_t9BAA5246AD728DF7805E05FF293E56A49ECB6A23_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_t9BAA5246AD728DF7805E05FF293E56A49ECB6A23(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_t9BAA5246AD728DF7805E05FF293E56A49ECB6A23_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_t9BAA5246AD728DF7805E05FF293E56A49ECB6A23_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UniRx.Unit>
struct Subject_1_tE07A1F75ADCA403FC109E43EC91E6C60352263E1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_tE07A1F75ADCA403FC109E43EC91E6C60352263E1_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_tE07A1F75ADCA403FC109E43EC91E6C60352263E1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_tE07A1F75ADCA403FC109E43EC91E6C60352263E1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_tE07A1F75ADCA403FC109E43EC91E6C60352263E1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_tE07A1F75ADCA403FC109E43EC91E6C60352263E1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_tE07A1F75ADCA403FC109E43EC91E6C60352263E1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct Subject_1_t321089362BFDD9B78D889214AC2B830548378E2A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_t321089362BFDD9B78D889214AC2B830548378E2A_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_t321089362BFDD9B78D889214AC2B830548378E2A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_t321089362BFDD9B78D889214AC2B830548378E2A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_t321089362BFDD9B78D889214AC2B830548378E2A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_t321089362BFDD9B78D889214AC2B830548378E2A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_t321089362BFDD9B78D889214AC2B830548378E2A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct Subject_1_t93D7AA3C0B7977AE7EEA9578BF2529DE3213E9CC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_t93D7AA3C0B7977AE7EEA9578BF2529DE3213E9CC_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subject_1_t93D7AA3C0B7977AE7EEA9578BF2529DE3213E9CC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_t93D7AA3C0B7977AE7EEA9578BF2529DE3213E9CC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_t93D7AA3C0B7977AE7EEA9578BF2529DE3213E9CC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_t93D7AA3C0B7977AE7EEA9578BF2529DE3213E9CC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_t93D7AA3C0B7977AE7EEA9578BF2529DE3213E9CC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.EventSystems.AxisEventData>
struct Subscription_t0925983D36BCA332541440C2D504C4D55E1D5D42_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t0925983D36BCA332541440C2D504C4D55E1D5D42_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t0925983D36BCA332541440C2D504C4D55E1D5D42_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t0925983D36BCA332541440C2D504C4D55E1D5D42_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t0925983D36BCA332541440C2D504C4D55E1D5D42(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t0925983D36BCA332541440C2D504C4D55E1D5D42_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t0925983D36BCA332541440C2D504C4D55E1D5D42_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.EventSystems.BaseEventData>
struct Subscription_tCA0C297D770B45AFA0435A8FB9F49C6ECB006028_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tCA0C297D770B45AFA0435A8FB9F49C6ECB006028_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_tCA0C297D770B45AFA0435A8FB9F49C6ECB006028_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tCA0C297D770B45AFA0435A8FB9F49C6ECB006028_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tCA0C297D770B45AFA0435A8FB9F49C6ECB006028(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tCA0C297D770B45AFA0435A8FB9F49C6ECB006028_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tCA0C297D770B45AFA0435A8FB9F49C6ECB006028_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<System.Boolean>
struct Subscription_t8959F5EE0D45F4489FDFE4394D8E5C0912D25A00_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t8959F5EE0D45F4489FDFE4394D8E5C0912D25A00_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t8959F5EE0D45F4489FDFE4394D8E5C0912D25A00_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t8959F5EE0D45F4489FDFE4394D8E5C0912D25A00_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t8959F5EE0D45F4489FDFE4394D8E5C0912D25A00(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t8959F5EE0D45F4489FDFE4394D8E5C0912D25A00_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t8959F5EE0D45F4489FDFE4394D8E5C0912D25A00_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.Collider>
struct Subscription_tBFF822EEA46EE4DEAF4C2162AFB14F8058924A26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tBFF822EEA46EE4DEAF4C2162AFB14F8058924A26_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_tBFF822EEA46EE4DEAF4C2162AFB14F8058924A26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tBFF822EEA46EE4DEAF4C2162AFB14F8058924A26_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tBFF822EEA46EE4DEAF4C2162AFB14F8058924A26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tBFF822EEA46EE4DEAF4C2162AFB14F8058924A26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tBFF822EEA46EE4DEAF4C2162AFB14F8058924A26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.Collider2D>
struct Subscription_t3FB7CFFC5782117E18B3DCCC83057D29F670F325_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t3FB7CFFC5782117E18B3DCCC83057D29F670F325_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t3FB7CFFC5782117E18B3DCCC83057D29F670F325_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t3FB7CFFC5782117E18B3DCCC83057D29F670F325_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t3FB7CFFC5782117E18B3DCCC83057D29F670F325(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t3FB7CFFC5782117E18B3DCCC83057D29F670F325_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t3FB7CFFC5782117E18B3DCCC83057D29F670F325_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.Collision>
struct Subscription_tB56138F76EA70EDE3B76900B67D19C886D6DC0DA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tB56138F76EA70EDE3B76900B67D19C886D6DC0DA_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_tB56138F76EA70EDE3B76900B67D19C886D6DC0DA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tB56138F76EA70EDE3B76900B67D19C886D6DC0DA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tB56138F76EA70EDE3B76900B67D19C886D6DC0DA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tB56138F76EA70EDE3B76900B67D19C886D6DC0DA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tB56138F76EA70EDE3B76900B67D19C886D6DC0DA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.Collision2D>
struct Subscription_t3FA2BFF3FAB4507AF7C2F8C5FF0C8BF48355EB9F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t3FA2BFF3FAB4507AF7C2F8C5FF0C8BF48355EB9F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t3FA2BFF3FAB4507AF7C2F8C5FF0C8BF48355EB9F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t3FA2BFF3FAB4507AF7C2F8C5FF0C8BF48355EB9F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t3FA2BFF3FAB4507AF7C2F8C5FF0C8BF48355EB9F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t3FA2BFF3FAB4507AF7C2F8C5FF0C8BF48355EB9F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t3FA2BFF3FAB4507AF7C2F8C5FF0C8BF48355EB9F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UniRx.CountChangedStatus>
struct Subscription_t8A2236E3A17BB5F5BDB27F1121B9FAC602E10DA0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t8A2236E3A17BB5F5BDB27F1121B9FAC602E10DA0_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t8A2236E3A17BB5F5BDB27F1121B9FAC602E10DA0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t8A2236E3A17BB5F5BDB27F1121B9FAC602E10DA0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t8A2236E3A17BB5F5BDB27F1121B9FAC602E10DA0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t8A2236E3A17BB5F5BDB27F1121B9FAC602E10DA0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t8A2236E3A17BB5F5BDB27F1121B9FAC602E10DA0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.GameObject>
struct Subscription_tB92E60F6F70670324AEE6D4FF095834DE61CC2F1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tB92E60F6F70670324AEE6D4FF095834DE61CC2F1_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_tB92E60F6F70670324AEE6D4FF095834DE61CC2F1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tB92E60F6F70670324AEE6D4FF095834DE61CC2F1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tB92E60F6F70670324AEE6D4FF095834DE61CC2F1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tB92E60F6F70670324AEE6D4FF095834DE61CC2F1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tB92E60F6F70670324AEE6D4FF095834DE61CC2F1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1/Subscription<System.Net.HttpWebResponse>
struct Subscription_t5FB62B463316EA785A112C735CA8160FE1DDF754_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t5FB62B463316EA785A112C735CA8160FE1DDF754_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t5FB62B463316EA785A112C735CA8160FE1DDF754_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t5FB62B463316EA785A112C735CA8160FE1DDF754_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t5FB62B463316EA785A112C735CA8160FE1DDF754(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t5FB62B463316EA785A112C735CA8160FE1DDF754_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t5FB62B463316EA785A112C735CA8160FE1DDF754_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<System.Int32>
struct Subscription_tD36B8866624E4A98B9BDD39427EB9E011B80E2D5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tD36B8866624E4A98B9BDD39427EB9E011B80E2D5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_tD36B8866624E4A98B9BDD39427EB9E011B80E2D5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tD36B8866624E4A98B9BDD39427EB9E011B80E2D5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tD36B8866624E4A98B9BDD39427EB9E011B80E2D5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tD36B8866624E4A98B9BDD39427EB9E011B80E2D5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tD36B8866624E4A98B9BDD39427EB9E011B80E2D5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.Joint2D>
struct Subscription_tFAECCBDAF558CFB10FEDC4503204151322BC73CC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tFAECCBDAF558CFB10FEDC4503204151322BC73CC_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_tFAECCBDAF558CFB10FEDC4503204151322BC73CC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tFAECCBDAF558CFB10FEDC4503204151322BC73CC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tFAECCBDAF558CFB10FEDC4503204151322BC73CC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tFAECCBDAF558CFB10FEDC4503204151322BC73CC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tFAECCBDAF558CFB10FEDC4503204151322BC73CC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UniRx.Diagnostics.LogEntry>
struct Subscription_tE6471EE76521ACC43BDE12A232E02FD39B9D7F8C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tE6471EE76521ACC43BDE12A232E02FD39B9D7F8C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_tE6471EE76521ACC43BDE12A232E02FD39B9D7F8C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tE6471EE76521ACC43BDE12A232E02FD39B9D7F8C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tE6471EE76521ACC43BDE12A232E02FD39B9D7F8C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tE6471EE76521ACC43BDE12A232E02FD39B9D7F8C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tE6471EE76521ACC43BDE12A232E02FD39B9D7F8C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.EventSystems.PointerEventData>
struct Subscription_t1E03D5069BB231B5ADDA28F034605753B89621D5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t1E03D5069BB231B5ADDA28F034605753B89621D5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t1E03D5069BB231B5ADDA28F034605753B89621D5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t1E03D5069BB231B5ADDA28F034605753B89621D5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t1E03D5069BB231B5ADDA28F034605753B89621D5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t1E03D5069BB231B5ADDA28F034605753B89621D5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t1E03D5069BB231B5ADDA28F034605753B89621D5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<System.Single>
struct Subscription_t43595ACB866803D223B4C1F7B3713337771FEC28_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t43595ACB866803D223B4C1F7B3713337771FEC28_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t43595ACB866803D223B4C1F7B3713337771FEC28_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t43595ACB866803D223B4C1F7B3713337771FEC28_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t43595ACB866803D223B4C1F7B3713337771FEC28(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t43595ACB866803D223B4C1F7B3713337771FEC28_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t43595ACB866803D223B4C1F7B3713337771FEC28_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1/Subscription<System.IO.Stream>
struct Subscription_t7F35965DFF75C14F977D6EF86E8242A76E433653_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t7F35965DFF75C14F977D6EF86E8242A76E433653_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t7F35965DFF75C14F977D6EF86E8242A76E433653_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t7F35965DFF75C14F977D6EF86E8242A76E433653_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t7F35965DFF75C14F977D6EF86E8242A76E433653(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t7F35965DFF75C14F977D6EF86E8242A76E433653_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t7F35965DFF75C14F977D6EF86E8242A76E433653_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncReactiveCommand`1/Subscription<UniRx.Unit>
struct Subscription_t2339AF93A70AB287C3CB6F225E102571A86DA951_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t2339AF93A70AB287C3CB6F225E102571A86DA951_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t2339AF93A70AB287C3CB6F225E102571A86DA951_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t2339AF93A70AB287C3CB6F225E102571A86DA951_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t2339AF93A70AB287C3CB6F225E102571A86DA951(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t2339AF93A70AB287C3CB6F225E102571A86DA951_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t2339AF93A70AB287C3CB6F225E102571A86DA951_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1/Subscription<UniRx.Unit>
struct Subscription_tF0B967051F7B92EE48E6E0BBD1E9EF5F89D7CC02_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tF0B967051F7B92EE48E6E0BBD1E9EF5F89D7CC02_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_tF0B967051F7B92EE48E6E0BBD1E9EF5F89D7CC02_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tF0B967051F7B92EE48E6E0BBD1E9EF5F89D7CC02_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tF0B967051F7B92EE48E6E0BBD1E9EF5F89D7CC02(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tF0B967051F7B92EE48E6E0BBD1E9EF5F89D7CC02_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tF0B967051F7B92EE48E6E0BBD1E9EF5F89D7CC02_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UniRx.Unit>
struct Subscription_t2813E4F55B2F69A771335CA638342E9A8C75C72D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t2813E4F55B2F69A771335CA638342E9A8C75C72D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t2813E4F55B2F69A771335CA638342E9A8C75C72D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t2813E4F55B2F69A771335CA638342E9A8C75C72D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t2813E4F55B2F69A771335CA638342E9A8C75C72D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t2813E4F55B2F69A771335CA638342E9A8C75C72D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t2813E4F55B2F69A771335CA638342E9A8C75C72D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1/Subscription<System.Net.WebResponse>
struct Subscription_tDD106987EEBDFF28F1B9063F909CE6A9ABD94D1A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tDD106987EEBDFF28F1B9063F909CE6A9ABD94D1A_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_tDD106987EEBDFF28F1B9063F909CE6A9ABD94D1A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tDD106987EEBDFF28F1B9063F909CE6A9ABD94D1A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tDD106987EEBDFF28F1B9063F909CE6A9ABD94D1A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tDD106987EEBDFF28F1B9063F909CE6A9ABD94D1A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tDD106987EEBDFF28F1B9063F909CE6A9ABD94D1A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct Subscription_t7088251AA04FFE3906105D56F1C5493B54C99B82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t7088251AA04FFE3906105D56F1C5493B54C99B82_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t7088251AA04FFE3906105D56F1C5493B54C99B82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t7088251AA04FFE3906105D56F1C5493B54C99B82_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t7088251AA04FFE3906105D56F1C5493B54C99B82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t7088251AA04FFE3906105D56F1C5493B54C99B82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t7088251AA04FFE3906105D56F1C5493B54C99B82_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct Subscription_t23235623AE19B523DA2AE8F999337B297F533E29_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t23235623AE19B523DA2AE8F999337B297F533E29_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Subscription_t23235623AE19B523DA2AE8F999337B297F533E29_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t23235623AE19B523DA2AE8F999337B297F533E29_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t23235623AE19B523DA2AE8F999337B297F533E29(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t23235623AE19B523DA2AE8F999337B297F533E29_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t23235623AE19B523DA2AE8F999337B297F533E29_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.TakeObservable`1/Take<UniRx.Unit>
struct Take_t4AACA62E3847A15122FD23FEB94FB74E6B0DAA7D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Take_t4AACA62E3847A15122FD23FEB94FB74E6B0DAA7D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Take_t4AACA62E3847A15122FD23FEB94FB74E6B0DAA7D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Take_t4AACA62E3847A15122FD23FEB94FB74E6B0DAA7D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Take_t4AACA62E3847A15122FD23FEB94FB74E6B0DAA7D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Take_t4AACA62E3847A15122FD23FEB94FB74E6B0DAA7D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Take_t4AACA62E3847A15122FD23FEB94FB74E6B0DAA7D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.TakeObservable`1/Take_<UniRx.Unit>
struct Take__t4C80CAAA30522F67A409B02D4DEFF2775147722B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Take__t4C80CAAA30522F67A409B02D4DEFF2775147722B_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Take__t4C80CAAA30522F67A409B02D4DEFF2775147722B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Take__t4C80CAAA30522F67A409B02D4DEFF2775147722B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Take__t4C80CAAA30522F67A409B02D4DEFF2775147722B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Take__t4C80CAAA30522F67A409B02D4DEFF2775147722B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Take__t4C80CAAA30522F67A409B02D4DEFF2775147722B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper>, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D, IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9
{
	inline TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9*>(this);
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
		interfaceIds[0] = IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID;
		interfaceIds[1] = IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9::IID;

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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m4F3F3BA173A376976E527252D3CE5EEDF2231931(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_m31392F72EF6F75F8F86FFB859F03AFE74A61ABC9_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_m31392F72EF6F75F8F86FFB859F03AFE74A61ABC9(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_m31392F72EF6F75F8F86FFB859F03AFE74A61ABC9_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m92A4A761AEF5B205028083C5DB8D42D3130122D9(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_m9EFF9BCDA1108525C98DD678F015E9E7D28FF3E2_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_m9EFF9BCDA1108525C98DD678F015E9E7D28FF3E2(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_m9EFF9BCDA1108525C98DD678F015E9E7D28FF3E2_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m41A40F6B559BA6F942CEBB107DFAABA33D065595(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_mF14176AA01E3ECBD5B929C74861E186BD77111CB_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_mF14176AA01E3ECBD5B929C74861E186BD77111CB(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_mF14176AA01E3ECBD5B929C74861E186BD77111CB_RuntimeMethod_var);
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

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_mBF9B24A7C8F503AFC59278143056C87F8A1EE8B6() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_m1AB92B4A9230C801564B34A9F91CC596D1F596FA_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_m1AB92B4A9230C801564B34A9F91CC596D1F596FA(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_m1AB92B4A9230C801564B34A9F91CC596D1F596FA_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mA60AE4CB25AC58A37E11E8304C023D38B640B85F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_mC4AF143A40C9684342AB667F45F1F66388D09AC6_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_mC4AF143A40C9684342AB667F45F1F66388D09AC6(__thisValue, TaskToAsyncInfoAdapter_4_Close_mC4AF143A40C9684342AB667F45F1F66388D09AC6_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m040A37BF97ECAB4FD4C51481285B1BA9F4DAD352(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_il2cpp_TypeInfo_var);
				RuntimeObject* rcw = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D>(___handler0, __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
				intptr_t methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_RuntimeMethod_var);
				AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F(____handler0_unmarshaled, rcw, methodInfo, NULL);
				il2cpp_codegen_set_closed_delegate_invoke(____handler0_unmarshaled, rcw, (void*)AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_NativeInvoker);
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(rcw), IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __thisValue = (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54*)GetManagedObjectInline();
			TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF5D7D584EB42725EB00B767AB45D3C01D86179E6(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_m731E382ACBB07675B0B4A1C0C02C3BF6399063F2_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_m731E382ACBB07675B0B4A1C0C02C3BF6399063F2(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_m731E382ACBB07675B0B4A1C0C02C3BF6399063F2_RuntimeMethod_var);
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

		// Marshaling of return value back from managed representation
		IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->___m_target_2;

			if (target != NULL && returnValue->___delegates_13 == NULL && target->klass == __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject*>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8DC9B66CF8C9CACC2DB3433EE8B997F9C73BF2BF(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __thisValue = (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54*)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD(__thisValue, TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD_RuntimeMethod_var);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper>, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8
{
	inline TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8*>(this);
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
		interfaceIds[0] = IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID;
		interfaceIds[1] = IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8::IID;

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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m4F3F3BA173A376976E527252D3CE5EEDF2231931(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_m5013CF376F69735C39B8FD7DDB2D8B36F8DE0DDE_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_m5013CF376F69735C39B8FD7DDB2D8B36F8DE0DDE(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_m5013CF376F69735C39B8FD7DDB2D8B36F8DE0DDE_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m92A4A761AEF5B205028083C5DB8D42D3130122D9(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_m19F09FBEBA869DFA8BF4A5B667CAFBE0F2C45E80_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_m19F09FBEBA869DFA8BF4A5B667CAFBE0F2C45E80(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_m19F09FBEBA869DFA8BF4A5B667CAFBE0F2C45E80_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m41A40F6B559BA6F942CEBB107DFAABA33D065595(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_m3AD134620238DB2B233EC297129407373E0EB993_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_m3AD134620238DB2B233EC297129407373E0EB993(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_m3AD134620238DB2B233EC297129407373E0EB993_RuntimeMethod_var);
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

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_mBF9B24A7C8F503AFC59278143056C87F8A1EE8B6() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_m1F836228E8EE3E16DA8EDD019CD3B9DAD01798BF_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_m1F836228E8EE3E16DA8EDD019CD3B9DAD01798BF(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_m1F836228E8EE3E16DA8EDD019CD3B9DAD01798BF_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mA60AE4CB25AC58A37E11E8304C023D38B640B85F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_m4C42273866C5EB06933AF7EECE843B06037E79E0_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_m4C42273866C5EB06933AF7EECE843B06037E79E0(__thisValue, TaskToAsyncInfoAdapter_4_Close_m4C42273866C5EB06933AF7EECE843B06037E79E0_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m78372DBE4F177F35DC3DF46F37BBEB79AF797324(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m98D19A8FE67890830EB109D3BB8257FCAE76A4AD_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_il2cpp_TypeInfo_var);
				RuntimeObject* rcw = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D>(___handler0, __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
				intptr_t methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_RuntimeMethod_var);
				AsyncOperationProgressHandler_2__ctor_mD98227E85B2F57C5936C14B67B1D972ECACF8390(____handler0_unmarshaled, rcw, methodInfo, NULL);
				il2cpp_codegen_set_closed_delegate_invoke(____handler0_unmarshaled, rcw, (void*)AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_NativeInvoker);
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(rcw), IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m98D19A8FE67890830EB109D3BB8257FCAE76A4AD(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m98D19A8FE67890830EB109D3BB8257FCAE76A4AD_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m78D1DF310E63719722F86C83A512DCF35728D4F2(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Progress_m82F2255467BDE00C392437F5640EECFFC27FFD67_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Progress_m82F2255467BDE00C392437F5640EECFFC27FFD67(__thisValue, TaskToAsyncInfoAdapter_4_get_Progress_m82F2255467BDE00C392437F5640EECFFC27FFD67_RuntimeMethod_var);
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

		// Marshaling of return value back from managed representation
		IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->___m_target_2;

			if (target != NULL && returnValue->___delegates_13 == NULL && target->klass == __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject*>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m71DB6DDEDCC8DB4230CCAF913BA6ECAAA9ABF6D4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m8EEF680BF51BF4698332EA3A0EC6DA3BE80475EC_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_il2cpp_TypeInfo_var);
				RuntimeObject* rcw = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D>(___handler0, __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
				intptr_t methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_RuntimeMethod_var);
				AsyncOperationWithProgressCompletedHandler_2__ctor_m670C4D5F2F4B1975A305F79ED95BECB45287A01F(____handler0_unmarshaled, rcw, methodInfo, NULL);
				il2cpp_codegen_set_closed_delegate_invoke(____handler0_unmarshaled, rcw, (void*)AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_NativeInvoker);
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(rcw), IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m8EEF680BF51BF4698332EA3A0EC6DA3BE80475EC(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m8EEF680BF51BF4698332EA3A0EC6DA3BE80475EC_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mBCA3BB43C118936A44B20F8A8F83F1CAB59E7DB4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_mE8B64676C97829C9C946208210986BEEEF73A149_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_mE8B64676C97829C9C946208210986BEEEF73A149(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_mE8B64676C97829C9C946208210986BEEEF73A149_RuntimeMethod_var);
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

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->___m_target_2;

			if (target != NULL && returnValue->___delegates_13 == NULL && target->klass == __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject*>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mD7DFCC1D0421F836CB3B4499AAEB89D5DAA229F5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_GetResults_m84DBA18204059D9364921997CB2E88EFB7BAF27A_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationWithProgressAdapter_2_GetResults_m84DBA18204059D9364921997CB2E88EFB7BAF27A(__thisValue, TaskToAsyncOperationWithProgressAdapter_2_GetResults_m84DBA18204059D9364921997CB2E88EFB7BAF27A_RuntimeMethod_var);
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

		// Marshaling of return value back from managed representation
		IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper>, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C
{
	inline TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C*>(this);
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
		interfaceIds[0] = IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID;
		interfaceIds[1] = IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C::IID;

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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m4F3F3BA173A376976E527252D3CE5EEDF2231931(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_mE6F0BD8858B51D033156D4CF3FA658B3853CF91C_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_mE6F0BD8858B51D033156D4CF3FA658B3853CF91C(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_mE6F0BD8858B51D033156D4CF3FA658B3853CF91C_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m92A4A761AEF5B205028083C5DB8D42D3130122D9(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_m99796E32654C1364FBA69D914D62BFA860648515_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_m99796E32654C1364FBA69D914D62BFA860648515(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_m99796E32654C1364FBA69D914D62BFA860648515_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m41A40F6B559BA6F942CEBB107DFAABA33D065595(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_m0AD4ECD7D38075C348A7EBF55662A0F9D8D00B4F_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_m0AD4ECD7D38075C348A7EBF55662A0F9D8D00B4F(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_m0AD4ECD7D38075C348A7EBF55662A0F9D8D00B4F_RuntimeMethod_var);
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

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_mBF9B24A7C8F503AFC59278143056C87F8A1EE8B6() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_mE5C69DE23899878934D02E28872D9C5DA77713B8_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_mE5C69DE23899878934D02E28872D9C5DA77713B8(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_mE5C69DE23899878934D02E28872D9C5DA77713B8_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mA60AE4CB25AC58A37E11E8304C023D38B640B85F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_m85F1E655EEC814327B3D808659FB77D1A131E3C7_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_m85F1E655EEC814327B3D808659FB77D1A131E3C7(__thisValue, TaskToAsyncInfoAdapter_4_Close_m85F1E655EEC814327B3D808659FB77D1A131E3C7_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m9F67F4B3AA2396D2CDE6EE93B3D3B1B1F2D99685(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_il2cpp_TypeInfo_var);
				RuntimeObject* rcw = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D>(___handler0, __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
				intptr_t methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_RuntimeMethod_var);
				AsyncOperationProgressHandler_2__ctor_m1BF1E9A619FF77B9CCE37882F351E9E8CD4702EF(____handler0_unmarshaled, rcw, methodInfo, NULL);
				il2cpp_codegen_set_closed_delegate_invoke(____handler0_unmarshaled, rcw, (void*)AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_NativeInvoker);
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(rcw), IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mA7040C532ABD06DCBC2B397B09EB32EC4A9AF5EB(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Progress_m63EF6CD6E40D60FC77F5A6B36D252C45A10DA854_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Progress_m63EF6CD6E40D60FC77F5A6B36D252C45A10DA854(__thisValue, TaskToAsyncInfoAdapter_4_get_Progress_m63EF6CD6E40D60FC77F5A6B36D252C45A10DA854_RuntimeMethod_var);
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

		// Marshaling of return value back from managed representation
		IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->___m_target_2;

			if (target != NULL && returnValue->___delegates_13 == NULL && target->klass == __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject*>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m79A0FBC05E913306F00FE582D6AEF52CB4F6F0D6(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_il2cpp_TypeInfo_var);
				RuntimeObject* rcw = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D>(___handler0, __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
				intptr_t methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_RuntimeMethod_var);
				AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7(____handler0_unmarshaled, rcw, methodInfo, NULL);
				il2cpp_codegen_set_closed_delegate_invoke(____handler0_unmarshaled, rcw, (void*)AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_NativeInvoker);
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(rcw), IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m9D9F6AE5C27EC4CEB0A3CC17C83048A39994C5F0(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_m07D46BDDDF5BDC8621D83A858BA24EF6EBF77EB8_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_m07D46BDDDF5BDC8621D83A858BA24EF6EBF77EB8(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_m07D46BDDDF5BDC8621D83A858BA24EF6EBF77EB8_RuntimeMethod_var);
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

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->___m_target_2;

			if (target != NULL && returnValue->___delegates_13 == NULL && target->klass == __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject*>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m259594E576D8DE8D92DBA9A4EC9321BFA9006BCD(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7(__thisValue, TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7_RuntimeMethod_var);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.String>>
struct Task_1_tE69DA1161A2B6F05F75D32A5F89DF2D9F10EF725_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tE69DA1161A2B6F05F75D32A5F89DF2D9F10EF725_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tE69DA1161A2B6F05F75D32A5F89DF2D9F10EF725_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tE69DA1161A2B6F05F75D32A5F89DF2D9F10EF725_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tE69DA1161A2B6F05F75D32A5F89DF2D9F10EF725(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tE69DA1161A2B6F05F75D32A5F89DF2D9F10EF725_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tE69DA1161A2B6F05F75D32A5F89DF2D9F10EF725_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>
struct Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Net.WebCompletionSource`1/Result<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>>
struct Task_1_t3AC2B3E584346DEAA050D1FD26C8F34842DEC3BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t3AC2B3E584346DEAA050D1FD26C8F34842DEC3BE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t3AC2B3E584346DEAA050D1FD26C8F34842DEC3BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t3AC2B3E584346DEAA050D1FD26C8F34842DEC3BE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t3AC2B3E584346DEAA050D1FD26C8F34842DEC3BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t3AC2B3E584346DEAA050D1FD26C8F34842DEC3BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t3AC2B3E584346DEAA050D1FD26C8F34842DEC3BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Net.WebCompletionSource`1/Result<System.Object>>
struct Task_1_t97AD6E06503307BD6962E18D69C7CB9E86A6D1B8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t97AD6E06503307BD6962E18D69C7CB9E86A6D1B8_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t97AD6E06503307BD6962E18D69C7CB9E86A6D1B8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t97AD6E06503307BD6962E18D69C7CB9E86A6D1B8_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t97AD6E06503307BD6962E18D69C7CB9E86A6D1B8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t97AD6E06503307BD6962E18D69C7CB9E86A6D1B8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t97AD6E06503307BD6962E18D69C7CB9E86A6D1B8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Net.WebCompletionSource`1/Result<System.Net.WebRequestStream>>
struct Task_1_t0B2B7B8C88578A81553C2C77FE43E2B2E248EFE5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t0B2B7B8C88578A81553C2C77FE43E2B2E248EFE5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t0B2B7B8C88578A81553C2C77FE43E2B2E248EFE5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t0B2B7B8C88578A81553C2C77FE43E2B2E248EFE5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t0B2B7B8C88578A81553C2C77FE43E2B2E248EFE5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t0B2B7B8C88578A81553C2C77FE43E2B2E248EFE5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t0B2B7B8C88578A81553C2C77FE43E2B2E248EFE5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Net.WebCompletionSource`1/Result<System.Net.WebResponseStream>>
struct Task_1_tE612DA1C06D282D474F6347B20556F078B1B2D40_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tE612DA1C06D282D474F6347B20556F078B1B2D40_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tE612DA1C06D282D474F6347B20556F078B1B2D40_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tE612DA1C06D282D474F6347B20556F078B1B2D40_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tE612DA1C06D282D474F6347B20556F078B1B2D40(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tE612DA1C06D282D474F6347B20556F078B1B2D40_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tE612DA1C06D282D474F6347B20556F078B1B2D40_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.IO.Stream>>
struct Task_1_tDE97D4C00A60FDBFCF83F717E5EDABFBEF1E1656_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tDE97D4C00A60FDBFCF83F717E5EDABFBEF1E1656_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tDE97D4C00A60FDBFCF83F717E5EDABFBEF1E1656_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tDE97D4C00A60FDBFCF83F717E5EDABFBEF1E1656_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tDE97D4C00A60FDBFCF83F717E5EDABFBEF1E1656(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tDE97D4C00A60FDBFCF83F717E5EDABFBEF1E1656_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tDE97D4C00A60FDBFCF83F717E5EDABFBEF1E1656_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Net.WebResponse>>
struct Task_1_t76A029F0DAF4BADB0D2FB6E9C976AC090AEDCD60_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t76A029F0DAF4BADB0D2FB6E9C976AC090AEDCD60_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t76A029F0DAF4BADB0D2FB6E9C976AC090AEDCD60_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t76A029F0DAF4BADB0D2FB6E9C976AC090AEDCD60_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t76A029F0DAF4BADB0D2FB6E9C976AC090AEDCD60(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t76A029F0DAF4BADB0D2FB6E9C976AC090AEDCD60_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t76A029F0DAF4BADB0D2FB6E9C976AC090AEDCD60_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>>
struct Task_1_tB493F74D58DB1761E087206849D953E99D07600B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tB493F74D58DB1761E087206849D953E99D07600B_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tB493F74D58DB1761E087206849D953E99D07600B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tB493F74D58DB1761E087206849D953E99D07600B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tB493F74D58DB1761E087206849D953E99D07600B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tB493F74D58DB1761E087206849D953E99D07600B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tB493F74D58DB1761E087206849D953E99D07600B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>
struct Task_1_tA032D8BE8DEA6A5172C016AFDAB7989E1FF89802_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tA032D8BE8DEA6A5172C016AFDAB7989E1FF89802_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tA032D8BE8DEA6A5172C016AFDAB7989E1FF89802_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tA032D8BE8DEA6A5172C016AFDAB7989E1FF89802_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tA032D8BE8DEA6A5172C016AFDAB7989E1FF89802(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tA032D8BE8DEA6A5172C016AFDAB7989E1FF89802_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tA032D8BE8DEA6A5172C016AFDAB7989E1FF89802_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>>
struct Task_1_t47619AB16377E9964219D5DD2EC9C831188EF5C3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t47619AB16377E9964219D5DD2EC9C831188EF5C3_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t47619AB16377E9964219D5DD2EC9C831188EF5C3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t47619AB16377E9964219D5DD2EC9C831188EF5C3_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t47619AB16377E9964219D5DD2EC9C831188EF5C3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t47619AB16377E9964219D5DD2EC9C831188EF5C3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t47619AB16377E9964219D5DD2EC9C831188EF5C3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>>
struct Task_1_tDEC1214BD64BD33C02FA14FAD8EAF76AD89C8192_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tDEC1214BD64BD33C02FA14FAD8EAF76AD89C8192_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tDEC1214BD64BD33C02FA14FAD8EAF76AD89C8192_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tDEC1214BD64BD33C02FA14FAD8EAF76AD89C8192_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tDEC1214BD64BD33C02FA14FAD8EAF76AD89C8192(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tDEC1214BD64BD33C02FA14FAD8EAF76AD89C8192_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tDEC1214BD64BD33C02FA14FAD8EAF76AD89C8192_ComCallableWrapper(obj));
}
