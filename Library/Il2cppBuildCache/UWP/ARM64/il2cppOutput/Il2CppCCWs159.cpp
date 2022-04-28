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
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833;
// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410;
// UniRx.AsyncReactiveCommand`1<UniRx.Unit>
struct AsyncReactiveCommand_1_tBBD772E5C7F02F6C56786212217FCFFD9628D6F4;
// UniRx.AsyncSubject`1<System.Net.HttpWebResponse>
struct AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48;
// UniRx.AsyncSubject`1<System.IO.Stream>
struct AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA;
// UniRx.AsyncSubject`1<UniRx.Unit>
struct AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073;
// UniRx.AsyncSubject`1<System.Net.WebResponse>
struct AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Queue.CloudQueueMessage>>>
struct Func_2_tA1D6C68C35D77C43F9B9E3FA51E7AF5F634B46AC;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.File.FileRange>>>
struct Func_2_tB688CB3D2D09BA6A6F05DFB5830D6884A1311323;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.ListBlockItem>>>
struct Func_2_tFCCD9A040D4E8E0F126DC4D6A628C1559D15A11E;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.PageDiffRange>>>
struct Func_2_tF3F4832DBA7B52CE7D1403243621C9A5B3877C4F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.PageRange>>>
struct Func_2_t9AC62F470512A7610B9D591C9D899F20B4989344;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>>
struct Func_2_t54A561A4AF51A625BA853F0FF360C1D9B9A88335;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Microsoft.WindowsAzure.Storage.Table.TableResult>>>
struct Func_2_t4C1C1275679982CA672A0B0C0E965AFFED43CC76;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>>
struct Func_2_tE187E0BCF41E1FE0B7BF044B872E83C52A237F24;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>>
struct Func_2_t54C79DECAB14B9BBEF36C9E8C732F001BD402A25;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>>>
struct Func_2_t0527DF848D546C7F6C33FFD08D9B2EF2CB95A9C0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.Unity.IObjectAnchorsTrackingResult>>>
struct Func_2_t976CE25F1D8A8480A1F2321851D31CEF3F377AA2;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>>
struct Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Nullable`1<System.Boolean>>>
struct Func_2_t7F7874C6B2276E7FC5073E905B3EED74E1037DA9;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTime>>>
struct Func_2_t2AA85AA4FED4C8D675B84FC620EA1978E40DA8F4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTimeOffset>>>
struct Func_2_tA018FC5D002C25B7967A776F21DE4E4DAB194B7A;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Nullable`1<System.Decimal>>>
struct Func_2_t263281236E64D3A7DD1F1702178CB039F9E88A0F;
// System.Func`2<UniRx.Unit,System.IObservable`1<UniRx.Unit>>
struct Func_2_tDC12E27B4C26D075DFC536D5FE29AB4BC1FBADE7;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
// System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Queue.CloudQueueMessage>
struct IEnumerable_1_tC6AF2B4E478E3B77F784C935DCD96FB347A2942F;
// System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.File.FileRange>
struct IEnumerable_1_t466789D4458C7CDB0D73BFE87C844BF2621B3D05;
// System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.ListBlockItem>
struct IEnumerable_1_tF21AE0DCCB71AD453A308B8A5ECF8E69F6AC8F72;
// System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.PageDiffRange>
struct IEnumerable_1_t29B7682AE35F6DA9C74E6F17D39CD5A198BEF1EE;
// System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.PageRange>
struct IEnumerable_1_t9C013B9524D0676EAB279FB3EE6F832C0830875B;
// System.Collections.Generic.IList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>
struct IList_1_tF3A4AB672A89CA6913D837AAFE4093E01920C4E4;
// System.Collections.Generic.IList`1<Microsoft.WindowsAzure.Storage.Table.TableResult>
struct IList_1_t8FECB64E4672EFBD17E108E9B41F9FC5BA7B9F46;
// System.IObserver`1<UnityEngine.EventSystems.AxisEventData>
struct IObserver_1_t26C1576FA134DC0F65D83759DCA332017A4307BD;
// System.IObserver`1<UnityEngine.EventSystems.BaseEventData>
struct IObserver_1_t01A67CE69E7C24C2C472361E991A51A862BD1AF9;
// System.IObserver`1<System.Boolean>
struct IObserver_1_t4F5148C316DBF705C535277299AA3CE650D666A2;
// System.IObserver`1<UnityEngine.Collider>
struct IObserver_1_t2BD501236434D02EE17A788BD9F4CC83D4A55EFB;
// System.IObserver`1<UnityEngine.Collider2D>
struct IObserver_1_t1D758BB058B3A4EF8FA2AB5DE37CDDF1BFE72FEA;
// System.IObserver`1<UnityEngine.Collision>
struct IObserver_1_t0324A9BC449FF152BAB1D2BD1E210B48017EA68C;
// System.IObserver`1<UnityEngine.Collision2D>
struct IObserver_1_t6E7F8FC024408DCB42D1ADCF2491B01CDC6BEBB3;
// System.IObserver`1<UniRx.CountChangedStatus>
struct IObserver_1_t889A304F571EBA2A9EC8E7EFCF3E31F5077E74B6;
// System.IObserver`1<UnityEngine.GameObject>
struct IObserver_1_t0D7D5CDFD263956614C203F43D1828A3F6686FE8;
// System.IObserver`1<System.Net.HttpWebResponse>
struct IObserver_1_t5726780C1BD20319E330C4A5F56E4B4B6852F71B;
// System.IObserver`1<System.Int32>
struct IObserver_1_tE89C553FD131136E5B3A939C88EBC84A9E488494;
// System.IObserver`1<UnityEngine.Joint2D>
struct IObserver_1_t7757AF8D0AFD67162D632AFFA122EA10D39E460E;
// System.IObserver`1<UniRx.Diagnostics.LogEntry>
struct IObserver_1_t64CE8F27815FB4E300EA548DA5F399AB1C6F9BF9;
// System.IObserver`1<UnityEngine.EventSystems.PointerEventData>
struct IObserver_1_t43AAD4C490EDDBF85357F7A7CAE32FD0790B44DC;
// System.IObserver`1<System.Single>
struct IObserver_1_t80641E1189BA506062F410327BFA2DE117F75F26;
// System.IObserver`1<System.IO.Stream>
struct IObserver_1_tA9694BD4A1339AB6742AE59E2CCD5440D0282603;
// System.IObserver`1<UniRx.Unit>
struct IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01;
// System.IObserver`1<System.Net.WebResponse>
struct IObserver_1_t875BB9EF65716CF70D9633BD771C6C70B2E51D3E;
// System.IObserver`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct IObserver_1_t774DF7703DD3A0336FE05E26AB7280A78262BEB0;
// System.IObserver`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct IObserver_1_tAB387F3715C060214583670285316F49A3C9F7AE;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>
struct IReadOnlyDictionary_2_tADCBCF434BAC9B710FF2D559D37A89DEB44B6B31;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>
struct List_1_t94D20E999D5878CA5816C173D33C1DAB90F7E277;
// System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.Unity.IObjectAnchorsTrackingResult>
struct List_1_t1355082C0889D915F1D5619A5B8D7F6423D60481;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// UniRx.Subject`1<UnityEngine.EventSystems.AxisEventData>
struct Subject_1_tCDC0071A2AC232E2C51B2EBE69876BDA54787981;
// UniRx.Subject`1<UnityEngine.EventSystems.BaseEventData>
struct Subject_1_t9BB5D85896CEF2BEC1A3B8D0DF01A6D1DDB41F87;
// UniRx.Subject`1<System.Boolean>
struct Subject_1_t9E1A1851411051847454A5EE4138A4DBFF54C829;
// UniRx.Subject`1<UnityEngine.Collider>
struct Subject_1_t587FC7472448A8C6FBAA24984159F4F6E949E9E1;
// UniRx.Subject`1<UnityEngine.Collider2D>
struct Subject_1_tC5F14A9865DDFF03A8D9296269C3D5CA0DD0E266;
// UniRx.Subject`1<UnityEngine.Collision>
struct Subject_1_tEDF11620D854B4EFAC646B02B0B8988424D63C71;
// UniRx.Subject`1<UnityEngine.Collision2D>
struct Subject_1_t0543666D5A0D035575F77DFF6D870BC05290329B;
// UniRx.Subject`1<UniRx.CountChangedStatus>
struct Subject_1_t306ADA31A9A67B6E5D7F357D8C7D8AAE43065DD7;
// UniRx.Subject`1<UnityEngine.GameObject>
struct Subject_1_tA6A667CA9550A168645F203DFDAAE14381AF4DF2;
// UniRx.Subject`1<System.Int32>
struct Subject_1_t7C95FC72D57C55A8F15DCE23B8BAAA357ABF49F3;
// UniRx.Subject`1<UnityEngine.Joint2D>
struct Subject_1_t066814DFBF6C2DB8CEA02F2DF5708815325E3FD9;
// UniRx.Subject`1<UniRx.Diagnostics.LogEntry>
struct Subject_1_t0E00F624A01D5D6055A5F2CCAA235C8C25CDB35C;
// UniRx.Subject`1<UnityEngine.EventSystems.PointerEventData>
struct Subject_1_t43D455C11225BF625EDCA9C35DE4C827788BEC2C;
// UniRx.Subject`1<System.Single>
struct Subject_1_tB0D47F79394E62B7BF76A7413244409F19688B74;
// UniRx.Subject`1<UniRx.Unit>
struct Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365;
// UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690;
// UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36;
// UniRx.Operators.TakeObservable`1<UniRx.Unit>
struct TakeObservable_1_t091A79FBB24907D90E80E40A94594DD016AD513F;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Queue.CloudQueueMessage>>
struct TaskFactory_1_tB0FF746C78C8FE72FC7AF914FCA4C9C66F72CD5E;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.File.FileRange>>
struct TaskFactory_1_t4451B9150E747D08C1636A24824D7FDD786CA0D1;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.ListBlockItem>>
struct TaskFactory_1_tD9F0DDB6233D849257BE996E19DA6E121A753D51;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.PageDiffRange>>
struct TaskFactory_1_t833A609E2E8BB381ABF29DBD957195153798FCB7;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.PageRange>>
struct TaskFactory_1_tA7100B50951CE1C7B4A0D4386633EB7DDA3D3819;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct TaskFactory_1_tFD390DDAFFD4B372C51F6CFB7F7A0873EF7200C1;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IList`1<Microsoft.WindowsAzure.Storage.Table.TableResult>>
struct TaskFactory_1_t3FFF7343DD6E0F0B485AEFD86B42876788CBF654;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct TaskFactory_1_tABFF418183013AF8073F598F239C6AD95170512F;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>
struct TaskFactory_1_t16798E1BC9EACF7B402647F9EDAD7EE2A453AC47;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>>
struct TaskFactory_1_t66DA8358F605911E52E78FA3BAC1833BF97B1B33;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.Unity.IObjectAnchorsTrackingResult>>
struct TaskFactory_1_t3214600B20E066B83DCF760A83FE52FE246B7645;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.Boolean>>
struct TaskFactory_1_tD53BC8C9C6C045AC24BE8590BE44C93D6FDC2120;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.DateTime>>
struct TaskFactory_1_t711F88FCEDAA21D2551B3702C19CDB1CD148D1A3;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.DateTimeOffset>>
struct TaskFactory_1_t02ADF9C29405A5FBA1961BA47C2A28405266AB55;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.Decimal>>
struct TaskFactory_1_t716568BA9F72A8FB412DED62F76760DA959C1B30;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C;
// System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tEAFCDD13476943BF99DFC9BA2FFBA729999F23DE;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_m750C55F7BD2954E109F2DCE2C44CCC1D40F80104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_mC0880CF2CCB9BA9DFC0A9FA347FDECA717E93C07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_mC94B71F3F2289FB7BC45F71E7271F54B6DF4CB11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_m73D27EDC995149EF44B3805FD8440C2723F8590F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_m9DEFAE3466E0942AF5C3B613BE50C3FF22FFE47A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_mCF79C5A0CAF7B28BED635275892CDDFDFE05AB5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_m6F5458DDA05EC75D4C3774C4E2F1635B404C9F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_m7D5ABE2831C85E1980E85ED7E890194486B3D44B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_mCFD13665F25FE8FDE697685A977D6AD80451B928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_m1F5650F2C7293DE3D71EF1597527B3CFF20E28FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_mC2A33A410F738922DBE587AF21784CCA4E26109F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_mC3D22C84608E07996CA81F4505DAF8E35DF93AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_m5606103EEEC0C5CCA33B9AFB991BA6C5EA9A6BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_m6B11AC1DEC95655729E1A54E031D1647F0CAD39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_m85C884BF337D9D5230832FFAB2E0D3FB5B3DC867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Progress_m18B773C9A7C5615FDC4C1122128FEDCB4905F88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Progress_m633097FA3C0A26ACAE4D5FC19DF0D12C43EE1C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_m48E9DADC92E479763D3B2737B4EC07E20D01B41C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_mCA548B4B3A483C1000143BE8F469054E537C7683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_mEB7A427430E166EA6099EBC0454ABE15761F2F37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_GetResults_m8BC6CCF731AB8A80917C2987C80B916A7ECEC4FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_mDB47EA7DF7293EADE3135E3BB4AFE55EC7AB7E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m27086D69E97C66984E7C0ACE861D68921D5AF3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_mBC6183A763190D7A90AC3695ABA5695BA36C856A(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mE2D4B228CE53F99221609445BE370DDFCE36E6B1(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m175060E2E21B33EF1970DD606F09B7DF584D798D(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mC86F0CF355BA73A8EDDBDAE24D74C5879DA6FBBA(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m0F646662AC31DEE0CE961AFADC7973E48F97C5B9(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m0377F4567A96FDBBDB5965FBC39543CB067FBC44(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m56432550918918419AD9E3C4C6628C1761816138(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m543BD227353BA50F701DDE984A8B401788B0B43C(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mEDC3E8F6D24BF8D62A67B5CCF13C77258C3D7FB8(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mA5979B888030B4A4C8E751DBEEF4305A3CE37292(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7656E1FBD07F1A33A8BABCA2DFC7FB61231A0958(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF8AED96C1879988554BA949E0718A6174C3117F5(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m33CB8132B6D0D81238F6BE90A9D3F1F13AB422AD(bool* comReturnValue) = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m970326E6407CE3EC1CF64E69994517B316028691(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mF5A8C72B170E0798C7D1709BFD0E501FDF566349(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m257651767765E9EB93F950F3ADA01F4ACF8A2D59(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>
struct OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3  : public RuntimeObject
{
public:
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_0), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3, ___cancel_1)); }
	inline RuntimeObject* get_cancel_1() const { return ___cancel_1; }
	inline RuntimeObject** get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(RuntimeObject* value)
	{
		___cancel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_1), (void*)value);
	}
};


// UniRx.Subject`1<UniRx.Unit>
struct Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject * ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t * ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;

public:
	inline static int32_t get_offset_of_observerLock_0() { return static_cast<int32_t>(offsetof(Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365, ___observerLock_0)); }
	inline RuntimeObject * get_observerLock_0() const { return ___observerLock_0; }
	inline RuntimeObject ** get_address_of_observerLock_0() { return &___observerLock_0; }
	inline void set_observerLock_0(RuntimeObject * value)
	{
		___observerLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerLock_0), (void*)value);
	}

	inline static int32_t get_offset_of_isStopped_1() { return static_cast<int32_t>(offsetof(Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365, ___isStopped_1)); }
	inline bool get_isStopped_1() const { return ___isStopped_1; }
	inline bool* get_address_of_isStopped_1() { return &___isStopped_1; }
	inline void set_isStopped_1(bool value)
	{
		___isStopped_1 = value;
	}

	inline static int32_t get_offset_of_isDisposed_2() { return static_cast<int32_t>(offsetof(Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365, ___isDisposed_2)); }
	inline bool get_isDisposed_2() const { return ___isDisposed_2; }
	inline bool* get_address_of_isDisposed_2() { return &___isDisposed_2; }
	inline void set_isDisposed_2(bool value)
	{
		___isDisposed_2 = value;
	}

	inline static int32_t get_offset_of_lastError_3() { return static_cast<int32_t>(offsetof(Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365, ___lastError_3)); }
	inline Exception_t * get_lastError_3() const { return ___lastError_3; }
	inline Exception_t ** get_address_of_lastError_3() { return &___lastError_3; }
	inline void set_lastError_3(Exception_t * value)
	{
		___lastError_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastError_3), (void*)value);
	}

	inline static int32_t get_offset_of_outObserver_4() { return static_cast<int32_t>(offsetof(Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365, ___outObserver_4)); }
	inline RuntimeObject* get_outObserver_4() const { return ___outObserver_4; }
	inline RuntimeObject** get_address_of_outObserver_4() { return &___outObserver_4; }
	inline void set_outObserver_4(RuntimeObject* value)
	{
		___outObserver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outObserver_4), (void*)value);
	}
};


// UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject * ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t * ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;

public:
	inline static int32_t get_offset_of_observerLock_0() { return static_cast<int32_t>(offsetof(Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690, ___observerLock_0)); }
	inline RuntimeObject * get_observerLock_0() const { return ___observerLock_0; }
	inline RuntimeObject ** get_address_of_observerLock_0() { return &___observerLock_0; }
	inline void set_observerLock_0(RuntimeObject * value)
	{
		___observerLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerLock_0), (void*)value);
	}

	inline static int32_t get_offset_of_isStopped_1() { return static_cast<int32_t>(offsetof(Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690, ___isStopped_1)); }
	inline bool get_isStopped_1() const { return ___isStopped_1; }
	inline bool* get_address_of_isStopped_1() { return &___isStopped_1; }
	inline void set_isStopped_1(bool value)
	{
		___isStopped_1 = value;
	}

	inline static int32_t get_offset_of_isDisposed_2() { return static_cast<int32_t>(offsetof(Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690, ___isDisposed_2)); }
	inline bool get_isDisposed_2() const { return ___isDisposed_2; }
	inline bool* get_address_of_isDisposed_2() { return &___isDisposed_2; }
	inline void set_isDisposed_2(bool value)
	{
		___isDisposed_2 = value;
	}

	inline static int32_t get_offset_of_lastError_3() { return static_cast<int32_t>(offsetof(Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690, ___lastError_3)); }
	inline Exception_t * get_lastError_3() const { return ___lastError_3; }
	inline Exception_t ** get_address_of_lastError_3() { return &___lastError_3; }
	inline void set_lastError_3(Exception_t * value)
	{
		___lastError_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastError_3), (void*)value);
	}

	inline static int32_t get_offset_of_outObserver_4() { return static_cast<int32_t>(offsetof(Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690, ___outObserver_4)); }
	inline RuntimeObject* get_outObserver_4() const { return ___outObserver_4; }
	inline RuntimeObject** get_address_of_outObserver_4() { return &___outObserver_4; }
	inline void set_outObserver_4(RuntimeObject* value)
	{
		___outObserver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outObserver_4), (void*)value);
	}
};


// UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1::observerLock
	RuntimeObject * ___observerLock_0;
	// System.Boolean UniRx.Subject`1::isStopped
	bool ___isStopped_1;
	// System.Boolean UniRx.Subject`1::isDisposed
	bool ___isDisposed_2;
	// System.Exception UniRx.Subject`1::lastError
	Exception_t * ___lastError_3;
	// System.IObserver`1<T> UniRx.Subject`1::outObserver
	RuntimeObject* ___outObserver_4;

public:
	inline static int32_t get_offset_of_observerLock_0() { return static_cast<int32_t>(offsetof(Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36, ___observerLock_0)); }
	inline RuntimeObject * get_observerLock_0() const { return ___observerLock_0; }
	inline RuntimeObject ** get_address_of_observerLock_0() { return &___observerLock_0; }
	inline void set_observerLock_0(RuntimeObject * value)
	{
		___observerLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerLock_0), (void*)value);
	}

	inline static int32_t get_offset_of_isStopped_1() { return static_cast<int32_t>(offsetof(Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36, ___isStopped_1)); }
	inline bool get_isStopped_1() const { return ___isStopped_1; }
	inline bool* get_address_of_isStopped_1() { return &___isStopped_1; }
	inline void set_isStopped_1(bool value)
	{
		___isStopped_1 = value;
	}

	inline static int32_t get_offset_of_isDisposed_2() { return static_cast<int32_t>(offsetof(Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36, ___isDisposed_2)); }
	inline bool get_isDisposed_2() const { return ___isDisposed_2; }
	inline bool* get_address_of_isDisposed_2() { return &___isDisposed_2; }
	inline void set_isDisposed_2(bool value)
	{
		___isDisposed_2 = value;
	}

	inline static int32_t get_offset_of_lastError_3() { return static_cast<int32_t>(offsetof(Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36, ___lastError_3)); }
	inline Exception_t * get_lastError_3() const { return ___lastError_3; }
	inline Exception_t ** get_address_of_lastError_3() { return &___lastError_3; }
	inline void set_lastError_3(Exception_t * value)
	{
		___lastError_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastError_3), (void*)value);
	}

	inline static int32_t get_offset_of_outObserver_4() { return static_cast<int32_t>(offsetof(Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36, ___outObserver_4)); }
	inline RuntimeObject* get_outObserver_4() const { return ___outObserver_4; }
	inline RuntimeObject** get_address_of_outObserver_4() { return &___outObserver_4; }
	inline void set_outObserver_4(RuntimeObject* value)
	{
		___outObserver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outObserver_4), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UnityEngine.EventSystems.AxisEventData>
struct Subscription_tC9887D60E2BEA79A8D35ED9AC2CD643F91F7F202  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tCDC0071A2AC232E2C51B2EBE69876BDA54787981 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_tC9887D60E2BEA79A8D35ED9AC2CD643F91F7F202, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_tC9887D60E2BEA79A8D35ED9AC2CD643F91F7F202, ___parent_1)); }
	inline Subject_1_tCDC0071A2AC232E2C51B2EBE69876BDA54787981 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_tCDC0071A2AC232E2C51B2EBE69876BDA54787981 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_tCDC0071A2AC232E2C51B2EBE69876BDA54787981 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_tC9887D60E2BEA79A8D35ED9AC2CD643F91F7F202, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UnityEngine.EventSystems.BaseEventData>
struct Subscription_t52590B62C3C60746AE7904A79DA3A6FD0ACEB03F  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t9BB5D85896CEF2BEC1A3B8D0DF01A6D1DDB41F87 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t52590B62C3C60746AE7904A79DA3A6FD0ACEB03F, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t52590B62C3C60746AE7904A79DA3A6FD0ACEB03F, ___parent_1)); }
	inline Subject_1_t9BB5D85896CEF2BEC1A3B8D0DF01A6D1DDB41F87 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_t9BB5D85896CEF2BEC1A3B8D0DF01A6D1DDB41F87 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_t9BB5D85896CEF2BEC1A3B8D0DF01A6D1DDB41F87 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t52590B62C3C60746AE7904A79DA3A6FD0ACEB03F, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<System.Boolean>
struct Subscription_tD620E42CF3126F1AF5247C75C39E69CA59280C1C  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t9E1A1851411051847454A5EE4138A4DBFF54C829 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_tD620E42CF3126F1AF5247C75C39E69CA59280C1C, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_tD620E42CF3126F1AF5247C75C39E69CA59280C1C, ___parent_1)); }
	inline Subject_1_t9E1A1851411051847454A5EE4138A4DBFF54C829 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_t9E1A1851411051847454A5EE4138A4DBFF54C829 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_t9E1A1851411051847454A5EE4138A4DBFF54C829 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_tD620E42CF3126F1AF5247C75C39E69CA59280C1C, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UnityEngine.Collider>
struct Subscription_t0994D65C2F3CCB0DB2FAF2A633E15E3CFDE85FA0  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t587FC7472448A8C6FBAA24984159F4F6E949E9E1 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t0994D65C2F3CCB0DB2FAF2A633E15E3CFDE85FA0, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t0994D65C2F3CCB0DB2FAF2A633E15E3CFDE85FA0, ___parent_1)); }
	inline Subject_1_t587FC7472448A8C6FBAA24984159F4F6E949E9E1 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_t587FC7472448A8C6FBAA24984159F4F6E949E9E1 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_t587FC7472448A8C6FBAA24984159F4F6E949E9E1 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t0994D65C2F3CCB0DB2FAF2A633E15E3CFDE85FA0, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UnityEngine.Collider2D>
struct Subscription_t322F29DF5E80CCB719B653E567533A4FB66D503C  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tC5F14A9865DDFF03A8D9296269C3D5CA0DD0E266 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t322F29DF5E80CCB719B653E567533A4FB66D503C, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t322F29DF5E80CCB719B653E567533A4FB66D503C, ___parent_1)); }
	inline Subject_1_tC5F14A9865DDFF03A8D9296269C3D5CA0DD0E266 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_tC5F14A9865DDFF03A8D9296269C3D5CA0DD0E266 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_tC5F14A9865DDFF03A8D9296269C3D5CA0DD0E266 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t322F29DF5E80CCB719B653E567533A4FB66D503C, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UnityEngine.Collision>
struct Subscription_t55E4D1E5AAE5F500B1E8510344704F74B30FE33E  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tEDF11620D854B4EFAC646B02B0B8988424D63C71 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t55E4D1E5AAE5F500B1E8510344704F74B30FE33E, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t55E4D1E5AAE5F500B1E8510344704F74B30FE33E, ___parent_1)); }
	inline Subject_1_tEDF11620D854B4EFAC646B02B0B8988424D63C71 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_tEDF11620D854B4EFAC646B02B0B8988424D63C71 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_tEDF11620D854B4EFAC646B02B0B8988424D63C71 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t55E4D1E5AAE5F500B1E8510344704F74B30FE33E, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UnityEngine.Collision2D>
struct Subscription_tC5CC8A52FDA5EFE05E5BAB0341FCAF75D524D8CC  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t0543666D5A0D035575F77DFF6D870BC05290329B * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_tC5CC8A52FDA5EFE05E5BAB0341FCAF75D524D8CC, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_tC5CC8A52FDA5EFE05E5BAB0341FCAF75D524D8CC, ___parent_1)); }
	inline Subject_1_t0543666D5A0D035575F77DFF6D870BC05290329B * get_parent_1() const { return ___parent_1; }
	inline Subject_1_t0543666D5A0D035575F77DFF6D870BC05290329B ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_t0543666D5A0D035575F77DFF6D870BC05290329B * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_tC5CC8A52FDA5EFE05E5BAB0341FCAF75D524D8CC, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UniRx.CountChangedStatus>
struct Subscription_tE30D1B89270F6A3272D2F4B94A376CB4DE9B51E4  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t306ADA31A9A67B6E5D7F357D8C7D8AAE43065DD7 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_tE30D1B89270F6A3272D2F4B94A376CB4DE9B51E4, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_tE30D1B89270F6A3272D2F4B94A376CB4DE9B51E4, ___parent_1)); }
	inline Subject_1_t306ADA31A9A67B6E5D7F357D8C7D8AAE43065DD7 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_t306ADA31A9A67B6E5D7F357D8C7D8AAE43065DD7 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_t306ADA31A9A67B6E5D7F357D8C7D8AAE43065DD7 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_tE30D1B89270F6A3272D2F4B94A376CB4DE9B51E4, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UnityEngine.GameObject>
struct Subscription_t5B4EF2E35C8288FE483BA74B7C0D1F7E3A3A992C  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tA6A667CA9550A168645F203DFDAAE14381AF4DF2 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t5B4EF2E35C8288FE483BA74B7C0D1F7E3A3A992C, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t5B4EF2E35C8288FE483BA74B7C0D1F7E3A3A992C, ___parent_1)); }
	inline Subject_1_tA6A667CA9550A168645F203DFDAAE14381AF4DF2 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_tA6A667CA9550A168645F203DFDAAE14381AF4DF2 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_tA6A667CA9550A168645F203DFDAAE14381AF4DF2 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t5B4EF2E35C8288FE483BA74B7C0D1F7E3A3A992C, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.AsyncSubject`1/Subscription<System.Net.HttpWebResponse>
struct Subscription_tF8FDCEAB1CECD3B01DDF0472251BA4B4AD0039BE  : public RuntimeObject
{
public:
	// System.Object UniRx.AsyncSubject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.AsyncSubject`1<T> UniRx.AsyncSubject`1/Subscription::parent
	AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48 * ___parent_1;
	// System.IObserver`1<T> UniRx.AsyncSubject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_tF8FDCEAB1CECD3B01DDF0472251BA4B4AD0039BE, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_tF8FDCEAB1CECD3B01DDF0472251BA4B4AD0039BE, ___parent_1)); }
	inline AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48 * get_parent_1() const { return ___parent_1; }
	inline AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_tF8FDCEAB1CECD3B01DDF0472251BA4B4AD0039BE, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<System.Int32>
struct Subscription_t634E8E585B9C16871BA244AE51DE15E1B266C03C  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t7C95FC72D57C55A8F15DCE23B8BAAA357ABF49F3 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t634E8E585B9C16871BA244AE51DE15E1B266C03C, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t634E8E585B9C16871BA244AE51DE15E1B266C03C, ___parent_1)); }
	inline Subject_1_t7C95FC72D57C55A8F15DCE23B8BAAA357ABF49F3 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_t7C95FC72D57C55A8F15DCE23B8BAAA357ABF49F3 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_t7C95FC72D57C55A8F15DCE23B8BAAA357ABF49F3 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t634E8E585B9C16871BA244AE51DE15E1B266C03C, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UnityEngine.Joint2D>
struct Subscription_t584D5C5534283EA9C89B7C60A578B87B61AD4AC0  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t066814DFBF6C2DB8CEA02F2DF5708815325E3FD9 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t584D5C5534283EA9C89B7C60A578B87B61AD4AC0, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t584D5C5534283EA9C89B7C60A578B87B61AD4AC0, ___parent_1)); }
	inline Subject_1_t066814DFBF6C2DB8CEA02F2DF5708815325E3FD9 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_t066814DFBF6C2DB8CEA02F2DF5708815325E3FD9 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_t066814DFBF6C2DB8CEA02F2DF5708815325E3FD9 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t584D5C5534283EA9C89B7C60A578B87B61AD4AC0, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UniRx.Diagnostics.LogEntry>
struct Subscription_t0AB6D343A72EADFC7BF0EA73A939BE8185A58907  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t0E00F624A01D5D6055A5F2CCAA235C8C25CDB35C * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t0AB6D343A72EADFC7BF0EA73A939BE8185A58907, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t0AB6D343A72EADFC7BF0EA73A939BE8185A58907, ___parent_1)); }
	inline Subject_1_t0E00F624A01D5D6055A5F2CCAA235C8C25CDB35C * get_parent_1() const { return ___parent_1; }
	inline Subject_1_t0E00F624A01D5D6055A5F2CCAA235C8C25CDB35C ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_t0E00F624A01D5D6055A5F2CCAA235C8C25CDB35C * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t0AB6D343A72EADFC7BF0EA73A939BE8185A58907, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UnityEngine.EventSystems.PointerEventData>
struct Subscription_tA626BE6E1517D6297F0007EADB747CE1836F5D86  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t43D455C11225BF625EDCA9C35DE4C827788BEC2C * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_tA626BE6E1517D6297F0007EADB747CE1836F5D86, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_tA626BE6E1517D6297F0007EADB747CE1836F5D86, ___parent_1)); }
	inline Subject_1_t43D455C11225BF625EDCA9C35DE4C827788BEC2C * get_parent_1() const { return ___parent_1; }
	inline Subject_1_t43D455C11225BF625EDCA9C35DE4C827788BEC2C ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_t43D455C11225BF625EDCA9C35DE4C827788BEC2C * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_tA626BE6E1517D6297F0007EADB747CE1836F5D86, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<System.Single>
struct Subscription_t2A321239200BA9C843754A5430403323969FEF09  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tB0D47F79394E62B7BF76A7413244409F19688B74 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t2A321239200BA9C843754A5430403323969FEF09, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t2A321239200BA9C843754A5430403323969FEF09, ___parent_1)); }
	inline Subject_1_tB0D47F79394E62B7BF76A7413244409F19688B74 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_tB0D47F79394E62B7BF76A7413244409F19688B74 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_tB0D47F79394E62B7BF76A7413244409F19688B74 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t2A321239200BA9C843754A5430403323969FEF09, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.AsyncSubject`1/Subscription<System.IO.Stream>
struct Subscription_t2C4379E15FA1723C10F6B1A5CB8F290B0638B907  : public RuntimeObject
{
public:
	// System.Object UniRx.AsyncSubject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.AsyncSubject`1<T> UniRx.AsyncSubject`1/Subscription::parent
	AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA * ___parent_1;
	// System.IObserver`1<T> UniRx.AsyncSubject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t2C4379E15FA1723C10F6B1A5CB8F290B0638B907, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t2C4379E15FA1723C10F6B1A5CB8F290B0638B907, ___parent_1)); }
	inline AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA * get_parent_1() const { return ___parent_1; }
	inline AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t2C4379E15FA1723C10F6B1A5CB8F290B0638B907, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.AsyncReactiveCommand`1/Subscription<UniRx.Unit>
struct Subscription_t2BBBDE781E0037411E11AA396DEBFEE16C2DC1EF  : public RuntimeObject
{
public:
	// UniRx.AsyncReactiveCommand`1<T> UniRx.AsyncReactiveCommand`1/Subscription::parent
	AsyncReactiveCommand_1_tBBD772E5C7F02F6C56786212217FCFFD9628D6F4 * ___parent_0;
	// System.Func`2<T,System.IObservable`1<UniRx.Unit>> UniRx.AsyncReactiveCommand`1/Subscription::asyncAction
	Func_2_tDC12E27B4C26D075DFC536D5FE29AB4BC1FBADE7 * ___asyncAction_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(Subscription_t2BBBDE781E0037411E11AA396DEBFEE16C2DC1EF, ___parent_0)); }
	inline AsyncReactiveCommand_1_tBBD772E5C7F02F6C56786212217FCFFD9628D6F4 * get_parent_0() const { return ___parent_0; }
	inline AsyncReactiveCommand_1_tBBD772E5C7F02F6C56786212217FCFFD9628D6F4 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(AsyncReactiveCommand_1_tBBD772E5C7F02F6C56786212217FCFFD9628D6F4 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_asyncAction_1() { return static_cast<int32_t>(offsetof(Subscription_t2BBBDE781E0037411E11AA396DEBFEE16C2DC1EF, ___asyncAction_1)); }
	inline Func_2_tDC12E27B4C26D075DFC536D5FE29AB4BC1FBADE7 * get_asyncAction_1() const { return ___asyncAction_1; }
	inline Func_2_tDC12E27B4C26D075DFC536D5FE29AB4BC1FBADE7 ** get_address_of_asyncAction_1() { return &___asyncAction_1; }
	inline void set_asyncAction_1(Func_2_tDC12E27B4C26D075DFC536D5FE29AB4BC1FBADE7 * value)
	{
		___asyncAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncAction_1), (void*)value);
	}
};


// UniRx.AsyncSubject`1/Subscription<UniRx.Unit>
struct Subscription_tF6A47C63A24A9CD0DFEE2043E8E766246E5CAC21  : public RuntimeObject
{
public:
	// System.Object UniRx.AsyncSubject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.AsyncSubject`1<T> UniRx.AsyncSubject`1/Subscription::parent
	AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073 * ___parent_1;
	// System.IObserver`1<T> UniRx.AsyncSubject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_tF6A47C63A24A9CD0DFEE2043E8E766246E5CAC21, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_tF6A47C63A24A9CD0DFEE2043E8E766246E5CAC21, ___parent_1)); }
	inline AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073 * get_parent_1() const { return ___parent_1; }
	inline AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_tF6A47C63A24A9CD0DFEE2043E8E766246E5CAC21, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UniRx.Unit>
struct Subscription_t1ECE7BA88FBC8A49757B0B514E12D3299E0C1EAB  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t1ECE7BA88FBC8A49757B0B514E12D3299E0C1EAB, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t1ECE7BA88FBC8A49757B0B514E12D3299E0C1EAB, ___parent_1)); }
	inline Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t1ECE7BA88FBC8A49757B0B514E12D3299E0C1EAB, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.AsyncSubject`1/Subscription<System.Net.WebResponse>
struct Subscription_tFF9793FAC6DD2B763EAA7D7EB888C0D3228888B1  : public RuntimeObject
{
public:
	// System.Object UniRx.AsyncSubject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.AsyncSubject`1<T> UniRx.AsyncSubject`1/Subscription::parent
	AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F * ___parent_1;
	// System.IObserver`1<T> UniRx.AsyncSubject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_tFF9793FAC6DD2B763EAA7D7EB888C0D3228888B1, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_tFF9793FAC6DD2B763EAA7D7EB888C0D3228888B1, ___parent_1)); }
	inline AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F * get_parent_1() const { return ___parent_1; }
	inline AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_tFF9793FAC6DD2B763EAA7D7EB888C0D3228888B1, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct Subscription_t0A25C79A3C7FCFBDABA93441C62DF6A6455E3F12  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_t0A25C79A3C7FCFBDABA93441C62DF6A6455E3F12, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_t0A25C79A3C7FCFBDABA93441C62DF6A6455E3F12, ___parent_1)); }
	inline Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_t0A25C79A3C7FCFBDABA93441C62DF6A6455E3F12, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
	}
};


// UniRx.Subject`1/Subscription<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct Subscription_tE6F53716137C28AE4E65B4646ABF309F2F3C2DA8  : public RuntimeObject
{
public:
	// System.Object UniRx.Subject`1/Subscription::gate
	RuntimeObject * ___gate_0;
	// UniRx.Subject`1<T> UniRx.Subject`1/Subscription::parent
	Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36 * ___parent_1;
	// System.IObserver`1<T> UniRx.Subject`1/Subscription::unsubscribeTarget
	RuntimeObject* ___unsubscribeTarget_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(Subscription_tE6F53716137C28AE4E65B4646ABF309F2F3C2DA8, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(Subscription_tE6F53716137C28AE4E65B4646ABF309F2F3C2DA8, ___parent_1)); }
	inline Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36 * get_parent_1() const { return ___parent_1; }
	inline Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_unsubscribeTarget_2() { return static_cast<int32_t>(offsetof(Subscription_tE6F53716137C28AE4E65B4646ABF309F2F3C2DA8, ___unsubscribeTarget_2)); }
	inline RuntimeObject* get_unsubscribeTarget_2() const { return ___unsubscribeTarget_2; }
	inline RuntimeObject** get_address_of_unsubscribeTarget_2() { return &___unsubscribeTarget_2; }
	inline void set_unsubscribeTarget_2(RuntimeObject* value)
	{
		___unsubscribeTarget_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unsubscribeTarget_2), (void*)value);
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

// System.__Il2CppComObject


// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct KeyValuePair_2_t948C50E8FE965948E1FC56DE18DC30E8AE20D8F3 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t948C50E8FE965948E1FC56DE18DC30E8AE20D8F3, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t948C50E8FE965948E1FC56DE18DC30E8AE20D8F3, ___value_1)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_value_1() const { return ___value_1; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
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


// UniRx.Operators.TakeObservable`1/Take<UniRx.Unit>
struct Take_tB14025DDC3DED745679EA80263B64A7B00573308  : public OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3
{
public:
	// System.Int32 UniRx.Operators.TakeObservable`1/Take::rest
	int32_t ___rest_2;

public:
	inline static int32_t get_offset_of_rest_2() { return static_cast<int32_t>(offsetof(Take_tB14025DDC3DED745679EA80263B64A7B00573308, ___rest_2)); }
	inline int32_t get_rest_2() const { return ___rest_2; }
	inline int32_t* get_address_of_rest_2() { return &___rest_2; }
	inline void set_rest_2(int32_t value)
	{
		___rest_2 = value;
	}
};


// UniRx.Operators.TakeObservable`1/Take_<UniRx.Unit>
struct Take__t1838AEF5B16CE78898E8325999BD880635280DCA  : public OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3
{
public:
	// UniRx.Operators.TakeObservable`1<T> UniRx.Operators.TakeObservable`1/Take_::parent
	TakeObservable_1_t091A79FBB24907D90E80E40A94594DD016AD513F * ___parent_2;
	// System.Object UniRx.Operators.TakeObservable`1/Take_::gate
	RuntimeObject * ___gate_3;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(Take__t1838AEF5B16CE78898E8325999BD880635280DCA, ___parent_2)); }
	inline TakeObservable_1_t091A79FBB24907D90E80E40A94594DD016AD513F * get_parent_2() const { return ___parent_2; }
	inline TakeObservable_1_t091A79FBB24907D90E80E40A94594DD016AD513F ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(TakeObservable_1_t091A79FBB24907D90E80E40A94594DD016AD513F * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(Take__t1838AEF5B16CE78898E8325999BD880635280DCA, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_3), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
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


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
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


// System.__Il2CppComDelegate
struct __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66  : public Il2CppComObject
{
public:

public:
};


// System.Nullable`1<System.DateTime>
struct Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Decimal>
struct Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E 
{
public:
	// T System.Nullable`1::value
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E, ___value_0)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_value_0() const { return ___value_0; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t * ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject * ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 * ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____startingContext_7;

public:
	inline static int32_t get_offset_of__cancelTokenSource_0() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____cancelTokenSource_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__cancelTokenSource_0() const { return ____cancelTokenSource_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__cancelTokenSource_0() { return &____cancelTokenSource_0; }
	inline void set__cancelTokenSource_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____cancelTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cancelTokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____id_1)); }
	inline uint32_t get__id_1() const { return ____id_1; }
	inline uint32_t* get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(uint32_t value)
	{
		____id_1 = value;
	}

	inline static int32_t get_offset_of__error_2() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____error_2)); }
	inline Exception_t * get__error_2() const { return ____error_2; }
	inline Exception_t ** get_address_of__error_2() { return &____error_2; }
	inline void set__error_2(Exception_t * value)
	{
		____error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_2), (void*)value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__dataContainer_4() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____dataContainer_4)); }
	inline RuntimeObject * get__dataContainer_4() const { return ____dataContainer_4; }
	inline RuntimeObject ** get_address_of__dataContainer_4() { return &____dataContainer_4; }
	inline void set__dataContainer_4(RuntimeObject * value)
	{
		____dataContainer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataContainer_4), (void*)value);
	}

	inline static int32_t get_offset_of__completedHandler_5() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____completedHandler_5)); }
	inline AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * get__completedHandler_5() const { return ____completedHandler_5; }
	inline AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 ** get_address_of__completedHandler_5() { return &____completedHandler_5; }
	inline void set__completedHandler_5(AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * value)
	{
		____completedHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of__progressHandler_6() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____progressHandler_6)); }
	inline VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 * get__progressHandler_6() const { return ____progressHandler_6; }
	inline VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 ** get_address_of__progressHandler_6() { return &____progressHandler_6; }
	inline void set__progressHandler_6(VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 * value)
	{
		____progressHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of__startingContext_7() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____startingContext_7)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__startingContext_7() const { return ____startingContext_7; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__startingContext_7() { return &____startingContext_7; }
	inline void set__startingContext_7(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____startingContext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startingContext_7), (void*)value);
	}
};


// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t * ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject * ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____startingContext_7;

public:
	inline static int32_t get_offset_of__cancelTokenSource_0() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____cancelTokenSource_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__cancelTokenSource_0() const { return ____cancelTokenSource_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__cancelTokenSource_0() { return &____cancelTokenSource_0; }
	inline void set__cancelTokenSource_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____cancelTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cancelTokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____id_1)); }
	inline uint32_t get__id_1() const { return ____id_1; }
	inline uint32_t* get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(uint32_t value)
	{
		____id_1 = value;
	}

	inline static int32_t get_offset_of__error_2() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____error_2)); }
	inline Exception_t * get__error_2() const { return ____error_2; }
	inline Exception_t ** get_address_of__error_2() { return &____error_2; }
	inline void set__error_2(Exception_t * value)
	{
		____error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_2), (void*)value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__dataContainer_4() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____dataContainer_4)); }
	inline RuntimeObject * get__dataContainer_4() const { return ____dataContainer_4; }
	inline RuntimeObject ** get_address_of__dataContainer_4() { return &____dataContainer_4; }
	inline void set__dataContainer_4(RuntimeObject * value)
	{
		____dataContainer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataContainer_4), (void*)value);
	}

	inline static int32_t get_offset_of__completedHandler_5() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____completedHandler_5)); }
	inline AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * get__completedHandler_5() const { return ____completedHandler_5; }
	inline AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 ** get_address_of__completedHandler_5() { return &____completedHandler_5; }
	inline void set__completedHandler_5(AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * value)
	{
		____completedHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of__progressHandler_6() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____progressHandler_6)); }
	inline AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * get__progressHandler_6() const { return ____progressHandler_6; }
	inline AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 ** get_address_of__progressHandler_6() { return &____progressHandler_6; }
	inline void set__progressHandler_6(AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * value)
	{
		____progressHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of__startingContext_7() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____startingContext_7)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__startingContext_7() const { return ____startingContext_7; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__startingContext_7() { return &____startingContext_7; }
	inline void set__startingContext_7(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____startingContext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startingContext_7), (void*)value);
	}
};


// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t * ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject * ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____startingContext_7;

public:
	inline static int32_t get_offset_of__cancelTokenSource_0() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____cancelTokenSource_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__cancelTokenSource_0() const { return ____cancelTokenSource_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__cancelTokenSource_0() { return &____cancelTokenSource_0; }
	inline void set__cancelTokenSource_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____cancelTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cancelTokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____id_1)); }
	inline uint32_t get__id_1() const { return ____id_1; }
	inline uint32_t* get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(uint32_t value)
	{
		____id_1 = value;
	}

	inline static int32_t get_offset_of__error_2() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____error_2)); }
	inline Exception_t * get__error_2() const { return ____error_2; }
	inline Exception_t ** get_address_of__error_2() { return &____error_2; }
	inline void set__error_2(Exception_t * value)
	{
		____error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_2), (void*)value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__dataContainer_4() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____dataContainer_4)); }
	inline RuntimeObject * get__dataContainer_4() const { return ____dataContainer_4; }
	inline RuntimeObject ** get_address_of__dataContainer_4() { return &____dataContainer_4; }
	inline void set__dataContainer_4(RuntimeObject * value)
	{
		____dataContainer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataContainer_4), (void*)value);
	}

	inline static int32_t get_offset_of__completedHandler_5() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____completedHandler_5)); }
	inline AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * get__completedHandler_5() const { return ____completedHandler_5; }
	inline AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 ** get_address_of__completedHandler_5() { return &____completedHandler_5; }
	inline void set__completedHandler_5(AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * value)
	{
		____completedHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of__progressHandler_6() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____progressHandler_6)); }
	inline AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * get__progressHandler_6() const { return ____progressHandler_6; }
	inline AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 ** get_address_of__progressHandler_6() { return &____progressHandler_6; }
	inline void set__progressHandler_6(AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * value)
	{
		____progressHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of__startingContext_7() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____startingContext_7)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__startingContext_7() const { return ____startingContext_7; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__startingContext_7() { return &____startingContext_7; }
	inline void set__startingContext_7(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____startingContext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startingContext_7), (void*)value);
	}
};


// Windows.Foundation.AsyncStatus
struct AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
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
struct Delegate_t  : public RuntimeObject
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
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

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

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
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
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

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

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
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


// System.Nullable`1<System.DateTimeOffset>
struct Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7 
{
public:
	// T System.Nullable`1::value
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7, ___value_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_value_0() const { return ___value_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3  : public TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB
{
public:

public:
};


// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A  : public TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D
{
public:

public:
};


// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5  : public TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5
{
public:

public:
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Queue.CloudQueueMessage>>
struct Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tB0FF746C78C8FE72FC7AF914FCA4C9C66F72CD5E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tA1D6C68C35D77C43F9B9E3FA51E7AF5F634B46AC * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tB0FF746C78C8FE72FC7AF914FCA4C9C66F72CD5E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tB0FF746C78C8FE72FC7AF914FCA4C9C66F72CD5E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tB0FF746C78C8FE72FC7AF914FCA4C9C66F72CD5E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tA1D6C68C35D77C43F9B9E3FA51E7AF5F634B46AC * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tA1D6C68C35D77C43F9B9E3FA51E7AF5F634B46AC ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tA1D6C68C35D77C43F9B9E3FA51E7AF5F634B46AC * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.File.FileRange>>
struct Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4451B9150E747D08C1636A24824D7FDD786CA0D1 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tB688CB3D2D09BA6A6F05DFB5830D6884A1311323 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t4451B9150E747D08C1636A24824D7FDD786CA0D1 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t4451B9150E747D08C1636A24824D7FDD786CA0D1 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t4451B9150E747D08C1636A24824D7FDD786CA0D1 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tB688CB3D2D09BA6A6F05DFB5830D6884A1311323 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tB688CB3D2D09BA6A6F05DFB5830D6884A1311323 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tB688CB3D2D09BA6A6F05DFB5830D6884A1311323 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.ListBlockItem>>
struct Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tD9F0DDB6233D849257BE996E19DA6E121A753D51 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tFCCD9A040D4E8E0F126DC4D6A628C1559D15A11E * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tD9F0DDB6233D849257BE996E19DA6E121A753D51 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tD9F0DDB6233D849257BE996E19DA6E121A753D51 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tD9F0DDB6233D849257BE996E19DA6E121A753D51 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tFCCD9A040D4E8E0F126DC4D6A628C1559D15A11E * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tFCCD9A040D4E8E0F126DC4D6A628C1559D15A11E ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tFCCD9A040D4E8E0F126DC4D6A628C1559D15A11E * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.PageDiffRange>>
struct Task_1_t118880C5C896B508E6D2A1C71522654323815E2C  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t118880C5C896B508E6D2A1C71522654323815E2C, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t118880C5C896B508E6D2A1C71522654323815E2C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t833A609E2E8BB381ABF29DBD957195153798FCB7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF3F4832DBA7B52CE7D1403243621C9A5B3877C4F * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t118880C5C896B508E6D2A1C71522654323815E2C_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t833A609E2E8BB381ABF29DBD957195153798FCB7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t833A609E2E8BB381ABF29DBD957195153798FCB7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t833A609E2E8BB381ABF29DBD957195153798FCB7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t118880C5C896B508E6D2A1C71522654323815E2C_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tF3F4832DBA7B52CE7D1403243621C9A5B3877C4F * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tF3F4832DBA7B52CE7D1403243621C9A5B3877C4F ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tF3F4832DBA7B52CE7D1403243621C9A5B3877C4F * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.PageRange>>
struct Task_1_tD510636E354779BC348B56B79EFD426514EE3556  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tD510636E354779BC348B56B79EFD426514EE3556, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tD510636E354779BC348B56B79EFD426514EE3556_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tA7100B50951CE1C7B4A0D4386633EB7DDA3D3819 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9AC62F470512A7610B9D591C9D899F20B4989344 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tD510636E354779BC348B56B79EFD426514EE3556_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tA7100B50951CE1C7B4A0D4386633EB7DDA3D3819 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tA7100B50951CE1C7B4A0D4386633EB7DDA3D3819 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tA7100B50951CE1C7B4A0D4386633EB7DDA3D3819 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tD510636E354779BC348B56B79EFD426514EE3556_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t9AC62F470512A7610B9D591C9D899F20B4989344 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t9AC62F470512A7610B9D591C9D899F20B4989344 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t9AC62F470512A7610B9D591C9D899F20B4989344 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD390DDAFFD4B372C51F6CFB7F7A0873EF7200C1 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t54A561A4AF51A625BA853F0FF360C1D9B9A88335 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tFD390DDAFFD4B372C51F6CFB7F7A0873EF7200C1 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tFD390DDAFFD4B372C51F6CFB7F7A0873EF7200C1 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tFD390DDAFFD4B372C51F6CFB7F7A0873EF7200C1 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t54A561A4AF51A625BA853F0FF360C1D9B9A88335 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t54A561A4AF51A625BA853F0FF360C1D9B9A88335 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t54A561A4AF51A625BA853F0FF360C1D9B9A88335 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Microsoft.WindowsAzure.Storage.Table.TableResult>>
struct Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3FFF7343DD6E0F0B485AEFD86B42876788CBF654 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t4C1C1275679982CA672A0B0C0E965AFFED43CC76 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t3FFF7343DD6E0F0B485AEFD86B42876788CBF654 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t3FFF7343DD6E0F0B485AEFD86B42876788CBF654 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t3FFF7343DD6E0F0B485AEFD86B42876788CBF654 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t4C1C1275679982CA672A0B0C0E965AFFED43CC76 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t4C1C1275679982CA672A0B0C0E965AFFED43CC76 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t4C1C1275679982CA672A0B0C0E965AFFED43CC76 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tABFF418183013AF8073F598F239C6AD95170512F * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tE187E0BCF41E1FE0B7BF044B872E83C52A237F24 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tABFF418183013AF8073F598F239C6AD95170512F * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tABFF418183013AF8073F598F239C6AD95170512F ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tABFF418183013AF8073F598F239C6AD95170512F * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tE187E0BCF41E1FE0B7BF044B872E83C52A237F24 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tE187E0BCF41E1FE0B7BF044B872E83C52A237F24 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tE187E0BCF41E1FE0B7BF044B872E83C52A237F24 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>
struct Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	KeyValuePair_2_t948C50E8FE965948E1FC56DE18DC30E8AE20D8F3  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC, ___m_result_22)); }
	inline KeyValuePair_2_t948C50E8FE965948E1FC56DE18DC30E8AE20D8F3  get_m_result_22() const { return ___m_result_22; }
	inline KeyValuePair_2_t948C50E8FE965948E1FC56DE18DC30E8AE20D8F3 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(KeyValuePair_2_t948C50E8FE965948E1FC56DE18DC30E8AE20D8F3  value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_22))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_22))->___value_1), (void*)NULL);
		#endif
	}
};

struct Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16798E1BC9EACF7B402647F9EDAD7EE2A453AC47 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t54C79DECAB14B9BBEF36C9E8C732F001BD402A25 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16798E1BC9EACF7B402647F9EDAD7EE2A453AC47 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16798E1BC9EACF7B402647F9EDAD7EE2A453AC47 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16798E1BC9EACF7B402647F9EDAD7EE2A453AC47 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t54C79DECAB14B9BBEF36C9E8C732F001BD402A25 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t54C79DECAB14B9BBEF36C9E8C732F001BD402A25 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t54C79DECAB14B9BBEF36C9E8C732F001BD402A25 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>>
struct Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_t94D20E999D5878CA5816C173D33C1DAB90F7E277 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41, ___m_result_22)); }
	inline List_1_t94D20E999D5878CA5816C173D33C1DAB90F7E277 * get_m_result_22() const { return ___m_result_22; }
	inline List_1_t94D20E999D5878CA5816C173D33C1DAB90F7E277 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(List_1_t94D20E999D5878CA5816C173D33C1DAB90F7E277 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t66DA8358F605911E52E78FA3BAC1833BF97B1B33 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t0527DF848D546C7F6C33FFD08D9B2EF2CB95A9C0 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t66DA8358F605911E52E78FA3BAC1833BF97B1B33 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t66DA8358F605911E52E78FA3BAC1833BF97B1B33 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t66DA8358F605911E52E78FA3BAC1833BF97B1B33 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t0527DF848D546C7F6C33FFD08D9B2EF2CB95A9C0 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t0527DF848D546C7F6C33FFD08D9B2EF2CB95A9C0 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t0527DF848D546C7F6C33FFD08D9B2EF2CB95A9C0 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.Unity.IObjectAnchorsTrackingResult>>
struct Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_t1355082C0889D915F1D5619A5B8D7F6423D60481 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754, ___m_result_22)); }
	inline List_1_t1355082C0889D915F1D5619A5B8D7F6423D60481 * get_m_result_22() const { return ___m_result_22; }
	inline List_1_t1355082C0889D915F1D5619A5B8D7F6423D60481 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(List_1_t1355082C0889D915F1D5619A5B8D7F6423D60481 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3214600B20E066B83DCF760A83FE52FE246B7645 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t976CE25F1D8A8480A1F2321851D31CEF3F377AA2 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t3214600B20E066B83DCF760A83FE52FE246B7645 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t3214600B20E066B83DCF760A83FE52FE246B7645 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t3214600B20E066B83DCF760A83FE52FE246B7645 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t976CE25F1D8A8480A1F2321851D31CEF3F377AA2 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t976CE25F1D8A8480A1F2321851D31CEF3F377AA2 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t976CE25F1D8A8480A1F2321851D31CEF3F377AA2 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B, ___m_result_22)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_result_22() const { return ___m_result_22; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Nullable`1<System.Boolean>>
struct Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635, ___m_result_22)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_result_22() const { return ___m_result_22; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tD53BC8C9C6C045AC24BE8590BE44C93D6FDC2120 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t7F7874C6B2276E7FC5073E905B3EED74E1037DA9 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tD53BC8C9C6C045AC24BE8590BE44C93D6FDC2120 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tD53BC8C9C6C045AC24BE8590BE44C93D6FDC2120 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tD53BC8C9C6C045AC24BE8590BE44C93D6FDC2120 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t7F7874C6B2276E7FC5073E905B3EED74E1037DA9 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t7F7874C6B2276E7FC5073E905B3EED74E1037DA9 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t7F7874C6B2276E7FC5073E905B3EED74E1037DA9 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTime>>
struct Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829, ___m_result_22)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_m_result_22() const { return ___m_result_22; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t711F88FCEDAA21D2551B3702C19CDB1CD148D1A3 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2AA85AA4FED4C8D675B84FC620EA1978E40DA8F4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t711F88FCEDAA21D2551B3702C19CDB1CD148D1A3 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t711F88FCEDAA21D2551B3702C19CDB1CD148D1A3 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t711F88FCEDAA21D2551B3702C19CDB1CD148D1A3 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t2AA85AA4FED4C8D675B84FC620EA1978E40DA8F4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t2AA85AA4FED4C8D675B84FC620EA1978E40DA8F4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t2AA85AA4FED4C8D675B84FC620EA1978E40DA8F4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Nullable`1<System.Decimal>>
struct Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1, ___m_result_22)); }
	inline Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  get_m_result_22() const { return ___m_result_22; }
	inline Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t716568BA9F72A8FB412DED62F76760DA959C1B30 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t263281236E64D3A7DD1F1702178CB039F9E88A0F * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t716568BA9F72A8FB412DED62F76760DA959C1B30 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t716568BA9F72A8FB412DED62F76760DA959C1B30 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t716568BA9F72A8FB412DED62F76760DA959C1B30 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t263281236E64D3A7DD1F1702178CB039F9E88A0F * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t263281236E64D3A7DD1F1702178CB039F9E88A0F ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t263281236E64D3A7DD1F1702178CB039F9E88A0F * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};

// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m66B4DB488CAE8CD259581D1CCAB94FBFA05BC733(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m9393658D0FD28BE7960FBB531A31A1E1CB106F80(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m0C4F0079B788C88A5A572A827AAACA0B3BB233C5(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m55A00D21BF943DA94D606044A66295FEF77139EE() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_m186908B02D6E9850DB3376510E0C3FB99B891FBB() = 0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTimeOffset>>
struct Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675, ___m_result_22)); }
	inline Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  get_m_result_22() const { return ___m_result_22; }
	inline Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t02ADF9C29405A5FBA1961BA47C2A28405266AB55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tA018FC5D002C25B7967A776F21DE4E4DAB194B7A * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t02ADF9C29405A5FBA1961BA47C2A28405266AB55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t02ADF9C29405A5FBA1961BA47C2A28405266AB55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t02ADF9C29405A5FBA1961BA47C2A28405266AB55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tA018FC5D002C25B7967A776F21DE4E4DAB194B7A * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tA018FC5D002C25B7967A776F21DE4E4DAB194B7A ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tA018FC5D002C25B7967A776F21DE4E4DAB194B7A * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
IL2CPP_EXTERN_C  void AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
IL2CPP_EXTERN_C  void AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);;
IL2CPP_EXTERN_C  void AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
IL2CPP_EXTERN_C  void AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);;
IL2CPP_EXTERN_C  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;

// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_mD59604827A00FDB75E0D7AFABFFAAF3AB39C6455_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_m5F3E4B7BA3F2EBEF85E0E2D6945194B6C70E3EA0_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_m0DDC17943C1DD5893D5A733BC178F5AE619AB254_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_m89A14530D2D11434DEEC77BC011670EEA066D40E_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_m9BA8C8964AB0690C41C46BFAB8B5480325916A9A_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::Windows.Foundation.IAsyncOperation<TResult>.put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64_gshared (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __this, AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * ___handler0, const RuntimeMethod* method);
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncInfoAdapter_4_get_Completed_m2966D277AD62C61C4986116CFBAD99F1687D0AEC_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA_gshared (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __this, const RuntimeMethod* method);
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_m3E24A763BD1C4B1A42E9AFDEF4931A9D527F3E18_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_m7EFD629CE0B021E64491A331118D59008BFE0C16_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_mBEA2162DDDFBD9FF36E685E04B1F97E8A36A6F3B_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_mE1B3E4C9F07339867F54B9D51A66E52F63008ACB_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_mAB9459977A157FD50FEEF7C4811407FA906D74FB_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mC58E993B3948220A27FB5C2528BD6F104842BC8B_gshared (TaskToAsyncOperationWithProgressAdapter_2_tEAFCDD13476943BF99DFC9BA2FFBA729999F23DE * __this, AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87 * ___handler0, const RuntimeMethod* method);
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncInfoAdapter_4_get_Progress_mC0FEA4A047544656B6A07AFEE34671D276473F52_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m28369391F441964E38A0053E665C874F70821AF1_gshared (TaskToAsyncOperationWithProgressAdapter_2_tEAFCDD13476943BF99DFC9BA2FFBA729999F23DE * __this, AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A * ___handler0, const RuntimeMethod* method);
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncInfoAdapter_4_get_Completed_m37DE107A0FE72222C9B56E39CA0FF446D967080F_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncOperationWithProgressAdapter_2_GetResults_m7E79420C9150ACFFCA16104A70728EFB85166244_gshared (TaskToAsyncOperationWithProgressAdapter_2_tEAFCDD13476943BF99DFC9BA2FFBA729999F23DE * __this, const RuntimeMethod* method);
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_mA8C390ED33BB4FBE050FA8F92F40962F8B9CF9B4_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_m565F4CFBEB5DBB42CD8DEBE41059D7002DD7F8D5_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_m76FF10FE6E41EC4042742FDBAA9A708613AC5D81_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_m24CCED8AEFAEF55F20F17D24843E900DA8962973_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_m86353662CEC2D70206203087B35D627AF9FA7FEE_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D_gshared (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * ___handler0, const RuntimeMethod* method);
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncInfoAdapter_4_get_Progress_mF20E1EC04BD4F07A7ABE989524F271EDF06FFA54_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C_gshared (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * ___handler0, const RuntimeMethod* method);
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncInfoAdapter_4_get_Completed_mC22266F35AD1CCE0D5FE56C0069F7CDCCFE19436_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9_gshared (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, const RuntimeMethod* method);

// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_m6B11AC1DEC95655729E1A54E031D1647F0CAD39F (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_mD59604827A00FDB75E0D7AFABFFAAF3AB39C6455_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_mCA548B4B3A483C1000143BE8F469054E537C7683 (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_m5F3E4B7BA3F2EBEF85E0E2D6945194B6C70E3EA0_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_ErrorCode()
inline Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_mC3D22C84608E07996CA81F4505DAF8E35DF93AB8 (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	return ((  Exception_t * (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_m0DDC17943C1DD5893D5A733BC178F5AE619AB254_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_mC94B71F3F2289FB7BC45F71E7271F54B6DF4CB11 (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_m89A14530D2D11434DEEC77BC011670EEA066D40E_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_mCF79C5A0CAF7B28BED635275892CDDFDFE05AB5A (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_m9BA8C8964AB0690C41C46BFAB8B5480325916A9A_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::Windows.Foundation.IAsyncOperation<TResult>.put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
inline void TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64 (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __this, AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 *, AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 *, const RuntimeMethod*))TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64_gshared)(__this, ___handler0, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Completed()
inline AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * TaskToAsyncInfoAdapter_4_get_Completed_m7D5ABE2831C85E1980E85ED7E890194486B3D44B (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_m2966D277AD62C61C4986116CFBAD99F1687D0AEC_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::GetResults()
inline bool TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 *, const RuntimeMethod*))TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA_gshared)(__this, method);
}
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_m5606103EEEC0C5CCA33B9AFB991BA6C5EA9A6BAF (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_m3E24A763BD1C4B1A42E9AFDEF4931A9D527F3E18_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_m48E9DADC92E479763D3B2737B4EC07E20D01B41C (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_m7EFD629CE0B021E64491A331118D59008BFE0C16_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_ErrorCode()
inline Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_m1F5650F2C7293DE3D71EF1597527B3CFF20E28FE (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	return ((  Exception_t * (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_mBEA2162DDDFBD9FF36E685E04B1F97E8A36A6F3B_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_m750C55F7BD2954E109F2DCE2C44CCC1D40F80104 (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_mE1B3E4C9F07339867F54B9D51A66E52F63008ACB_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_m73D27EDC995149EF44B3805FD8440C2723F8590F (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_mAB9459977A157FD50FEEF7C4811407FA906D74FB_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m27086D69E97C66984E7C0ACE861D68921D5AF3DD (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __this, AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *, AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mC58E993B3948220A27FB5C2528BD6F104842BC8B_gshared)(__this, ___handler0, method);
}
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Progress()
inline AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * TaskToAsyncInfoAdapter_4_get_Progress_m633097FA3C0A26ACAE4D5FC19DF0D12C43EE1C6B (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Progress_mC0FEA4A047544656B6A07AFEE34671D276473F52_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_mDB47EA7DF7293EADE3135E3BB4AFE55EC7AB7E16 (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __this, AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *, AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m28369391F441964E38A0053E665C874F70821AF1_gshared)(__this, ___handler0, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Completed()
inline AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * TaskToAsyncInfoAdapter_4_get_Completed_mCFD13665F25FE8FDE697685A977D6AD80451B928 (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_m37DE107A0FE72222C9B56E39CA0FF446D967080F_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::GetResults()
inline RuntimeObject* TaskToAsyncOperationWithProgressAdapter_2_GetResults_m8BC6CCF731AB8A80917C2987C80B916A7ECEC4FB (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_GetResults_m7E79420C9150ACFFCA16104A70728EFB85166244_gshared)(__this, method);
}
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_m85C884BF337D9D5230832FFAB2E0D3FB5B3DC867 (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_mA8C390ED33BB4FBE050FA8F92F40962F8B9CF9B4_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_mEB7A427430E166EA6099EBC0454ABE15761F2F37 (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_m565F4CFBEB5DBB42CD8DEBE41059D7002DD7F8D5_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_ErrorCode()
inline Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_mC2A33A410F738922DBE587AF21784CCA4E26109F (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	return ((  Exception_t * (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_m76FF10FE6E41EC4042742FDBAA9A708613AC5D81_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_mC0880CF2CCB9BA9DFC0A9FA347FDECA717E93C07 (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_m24CCED8AEFAEF55F20F17D24843E900DA8962973_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_m9DEFAE3466E0942AF5C3B613BE50C3FF22FFE47A (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_m86353662CEC2D70206203087B35D627AF9FA7FEE_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *, AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D_gshared)(__this, ___handler0, method);
}
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Progress()
inline AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * TaskToAsyncInfoAdapter_4_get_Progress_m18B773C9A7C5615FDC4C1122128FEDCB4905F88C (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Progress_mF20E1EC04BD4F07A7ABE989524F271EDF06FFA54_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *, AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C_gshared)(__this, ___handler0, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Completed()
inline AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * TaskToAsyncInfoAdapter_4_get_Completed_m6F5458DDA05EC75D4C3774C4E2F1635B404C9F2F (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_mC22266F35AD1CCE0D5FE56C0069F7CDCCFE19436_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::GetResults()
inline uint32_t TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9 (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9_gshared)(__this, method);
}

// COM Callable Wrapper for UniRx.Subject`1<UniRx.Unit>
struct Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_tCBB8AD4F3A8A966F1BA646C3C94E93D7E1921365_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_t5452E23D822A0A07E9E8DE59AD7E98829328A690_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subject_1_t53C8F8B74860BD00A3EDE5522E5610DF4964DA36_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.EventSystems.AxisEventData>
struct Subscription_tC9887D60E2BEA79A8D35ED9AC2CD643F91F7F202_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tC9887D60E2BEA79A8D35ED9AC2CD643F91F7F202_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_tC9887D60E2BEA79A8D35ED9AC2CD643F91F7F202_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tC9887D60E2BEA79A8D35ED9AC2CD643F91F7F202_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tC9887D60E2BEA79A8D35ED9AC2CD643F91F7F202(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tC9887D60E2BEA79A8D35ED9AC2CD643F91F7F202_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tC9887D60E2BEA79A8D35ED9AC2CD643F91F7F202_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.EventSystems.BaseEventData>
struct Subscription_t52590B62C3C60746AE7904A79DA3A6FD0ACEB03F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t52590B62C3C60746AE7904A79DA3A6FD0ACEB03F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t52590B62C3C60746AE7904A79DA3A6FD0ACEB03F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t52590B62C3C60746AE7904A79DA3A6FD0ACEB03F_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t52590B62C3C60746AE7904A79DA3A6FD0ACEB03F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t52590B62C3C60746AE7904A79DA3A6FD0ACEB03F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t52590B62C3C60746AE7904A79DA3A6FD0ACEB03F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<System.Boolean>
struct Subscription_tD620E42CF3126F1AF5247C75C39E69CA59280C1C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tD620E42CF3126F1AF5247C75C39E69CA59280C1C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_tD620E42CF3126F1AF5247C75C39E69CA59280C1C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tD620E42CF3126F1AF5247C75C39E69CA59280C1C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tD620E42CF3126F1AF5247C75C39E69CA59280C1C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tD620E42CF3126F1AF5247C75C39E69CA59280C1C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tD620E42CF3126F1AF5247C75C39E69CA59280C1C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.Collider>
struct Subscription_t0994D65C2F3CCB0DB2FAF2A633E15E3CFDE85FA0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t0994D65C2F3CCB0DB2FAF2A633E15E3CFDE85FA0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t0994D65C2F3CCB0DB2FAF2A633E15E3CFDE85FA0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t0994D65C2F3CCB0DB2FAF2A633E15E3CFDE85FA0_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t0994D65C2F3CCB0DB2FAF2A633E15E3CFDE85FA0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t0994D65C2F3CCB0DB2FAF2A633E15E3CFDE85FA0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t0994D65C2F3CCB0DB2FAF2A633E15E3CFDE85FA0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.Collider2D>
struct Subscription_t322F29DF5E80CCB719B653E567533A4FB66D503C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t322F29DF5E80CCB719B653E567533A4FB66D503C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t322F29DF5E80CCB719B653E567533A4FB66D503C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t322F29DF5E80CCB719B653E567533A4FB66D503C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t322F29DF5E80CCB719B653E567533A4FB66D503C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t322F29DF5E80CCB719B653E567533A4FB66D503C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t322F29DF5E80CCB719B653E567533A4FB66D503C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.Collision>
struct Subscription_t55E4D1E5AAE5F500B1E8510344704F74B30FE33E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t55E4D1E5AAE5F500B1E8510344704F74B30FE33E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t55E4D1E5AAE5F500B1E8510344704F74B30FE33E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t55E4D1E5AAE5F500B1E8510344704F74B30FE33E_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t55E4D1E5AAE5F500B1E8510344704F74B30FE33E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t55E4D1E5AAE5F500B1E8510344704F74B30FE33E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t55E4D1E5AAE5F500B1E8510344704F74B30FE33E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.Collision2D>
struct Subscription_tC5CC8A52FDA5EFE05E5BAB0341FCAF75D524D8CC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tC5CC8A52FDA5EFE05E5BAB0341FCAF75D524D8CC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_tC5CC8A52FDA5EFE05E5BAB0341FCAF75D524D8CC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tC5CC8A52FDA5EFE05E5BAB0341FCAF75D524D8CC_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tC5CC8A52FDA5EFE05E5BAB0341FCAF75D524D8CC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tC5CC8A52FDA5EFE05E5BAB0341FCAF75D524D8CC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tC5CC8A52FDA5EFE05E5BAB0341FCAF75D524D8CC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UniRx.CountChangedStatus>
struct Subscription_tE30D1B89270F6A3272D2F4B94A376CB4DE9B51E4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tE30D1B89270F6A3272D2F4B94A376CB4DE9B51E4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_tE30D1B89270F6A3272D2F4B94A376CB4DE9B51E4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tE30D1B89270F6A3272D2F4B94A376CB4DE9B51E4_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tE30D1B89270F6A3272D2F4B94A376CB4DE9B51E4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tE30D1B89270F6A3272D2F4B94A376CB4DE9B51E4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tE30D1B89270F6A3272D2F4B94A376CB4DE9B51E4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.GameObject>
struct Subscription_t5B4EF2E35C8288FE483BA74B7C0D1F7E3A3A992C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t5B4EF2E35C8288FE483BA74B7C0D1F7E3A3A992C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t5B4EF2E35C8288FE483BA74B7C0D1F7E3A3A992C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t5B4EF2E35C8288FE483BA74B7C0D1F7E3A3A992C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t5B4EF2E35C8288FE483BA74B7C0D1F7E3A3A992C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t5B4EF2E35C8288FE483BA74B7C0D1F7E3A3A992C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t5B4EF2E35C8288FE483BA74B7C0D1F7E3A3A992C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1/Subscription<System.Net.HttpWebResponse>
struct Subscription_tF8FDCEAB1CECD3B01DDF0472251BA4B4AD0039BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tF8FDCEAB1CECD3B01DDF0472251BA4B4AD0039BE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_tF8FDCEAB1CECD3B01DDF0472251BA4B4AD0039BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tF8FDCEAB1CECD3B01DDF0472251BA4B4AD0039BE_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tF8FDCEAB1CECD3B01DDF0472251BA4B4AD0039BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tF8FDCEAB1CECD3B01DDF0472251BA4B4AD0039BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tF8FDCEAB1CECD3B01DDF0472251BA4B4AD0039BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<System.Int32>
struct Subscription_t634E8E585B9C16871BA244AE51DE15E1B266C03C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t634E8E585B9C16871BA244AE51DE15E1B266C03C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t634E8E585B9C16871BA244AE51DE15E1B266C03C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t634E8E585B9C16871BA244AE51DE15E1B266C03C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t634E8E585B9C16871BA244AE51DE15E1B266C03C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t634E8E585B9C16871BA244AE51DE15E1B266C03C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t634E8E585B9C16871BA244AE51DE15E1B266C03C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.Joint2D>
struct Subscription_t584D5C5534283EA9C89B7C60A578B87B61AD4AC0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t584D5C5534283EA9C89B7C60A578B87B61AD4AC0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t584D5C5534283EA9C89B7C60A578B87B61AD4AC0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t584D5C5534283EA9C89B7C60A578B87B61AD4AC0_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t584D5C5534283EA9C89B7C60A578B87B61AD4AC0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t584D5C5534283EA9C89B7C60A578B87B61AD4AC0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t584D5C5534283EA9C89B7C60A578B87B61AD4AC0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UniRx.Diagnostics.LogEntry>
struct Subscription_t0AB6D343A72EADFC7BF0EA73A939BE8185A58907_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t0AB6D343A72EADFC7BF0EA73A939BE8185A58907_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t0AB6D343A72EADFC7BF0EA73A939BE8185A58907_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t0AB6D343A72EADFC7BF0EA73A939BE8185A58907_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t0AB6D343A72EADFC7BF0EA73A939BE8185A58907(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t0AB6D343A72EADFC7BF0EA73A939BE8185A58907_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t0AB6D343A72EADFC7BF0EA73A939BE8185A58907_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UnityEngine.EventSystems.PointerEventData>
struct Subscription_tA626BE6E1517D6297F0007EADB747CE1836F5D86_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tA626BE6E1517D6297F0007EADB747CE1836F5D86_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_tA626BE6E1517D6297F0007EADB747CE1836F5D86_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tA626BE6E1517D6297F0007EADB747CE1836F5D86_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tA626BE6E1517D6297F0007EADB747CE1836F5D86(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tA626BE6E1517D6297F0007EADB747CE1836F5D86_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tA626BE6E1517D6297F0007EADB747CE1836F5D86_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<System.Single>
struct Subscription_t2A321239200BA9C843754A5430403323969FEF09_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t2A321239200BA9C843754A5430403323969FEF09_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t2A321239200BA9C843754A5430403323969FEF09_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t2A321239200BA9C843754A5430403323969FEF09_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t2A321239200BA9C843754A5430403323969FEF09(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t2A321239200BA9C843754A5430403323969FEF09_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t2A321239200BA9C843754A5430403323969FEF09_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1/Subscription<System.IO.Stream>
struct Subscription_t2C4379E15FA1723C10F6B1A5CB8F290B0638B907_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t2C4379E15FA1723C10F6B1A5CB8F290B0638B907_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t2C4379E15FA1723C10F6B1A5CB8F290B0638B907_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t2C4379E15FA1723C10F6B1A5CB8F290B0638B907_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t2C4379E15FA1723C10F6B1A5CB8F290B0638B907(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t2C4379E15FA1723C10F6B1A5CB8F290B0638B907_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t2C4379E15FA1723C10F6B1A5CB8F290B0638B907_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncReactiveCommand`1/Subscription<UniRx.Unit>
struct Subscription_t2BBBDE781E0037411E11AA396DEBFEE16C2DC1EF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t2BBBDE781E0037411E11AA396DEBFEE16C2DC1EF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t2BBBDE781E0037411E11AA396DEBFEE16C2DC1EF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t2BBBDE781E0037411E11AA396DEBFEE16C2DC1EF_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t2BBBDE781E0037411E11AA396DEBFEE16C2DC1EF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t2BBBDE781E0037411E11AA396DEBFEE16C2DC1EF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t2BBBDE781E0037411E11AA396DEBFEE16C2DC1EF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1/Subscription<UniRx.Unit>
struct Subscription_tF6A47C63A24A9CD0DFEE2043E8E766246E5CAC21_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tF6A47C63A24A9CD0DFEE2043E8E766246E5CAC21_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_tF6A47C63A24A9CD0DFEE2043E8E766246E5CAC21_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tF6A47C63A24A9CD0DFEE2043E8E766246E5CAC21_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tF6A47C63A24A9CD0DFEE2043E8E766246E5CAC21(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tF6A47C63A24A9CD0DFEE2043E8E766246E5CAC21_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tF6A47C63A24A9CD0DFEE2043E8E766246E5CAC21_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UniRx.Unit>
struct Subscription_t1ECE7BA88FBC8A49757B0B514E12D3299E0C1EAB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t1ECE7BA88FBC8A49757B0B514E12D3299E0C1EAB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t1ECE7BA88FBC8A49757B0B514E12D3299E0C1EAB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t1ECE7BA88FBC8A49757B0B514E12D3299E0C1EAB_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t1ECE7BA88FBC8A49757B0B514E12D3299E0C1EAB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t1ECE7BA88FBC8A49757B0B514E12D3299E0C1EAB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t1ECE7BA88FBC8A49757B0B514E12D3299E0C1EAB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1/Subscription<System.Net.WebResponse>
struct Subscription_tFF9793FAC6DD2B763EAA7D7EB888C0D3228888B1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tFF9793FAC6DD2B763EAA7D7EB888C0D3228888B1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_tFF9793FAC6DD2B763EAA7D7EB888C0D3228888B1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tFF9793FAC6DD2B763EAA7D7EB888C0D3228888B1_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tFF9793FAC6DD2B763EAA7D7EB888C0D3228888B1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tFF9793FAC6DD2B763EAA7D7EB888C0D3228888B1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tFF9793FAC6DD2B763EAA7D7EB888C0D3228888B1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UniRx.Triggers.ObservableStateMachineTrigger/OnStateInfo>
struct Subscription_t0A25C79A3C7FCFBDABA93441C62DF6A6455E3F12_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_t0A25C79A3C7FCFBDABA93441C62DF6A6455E3F12_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_t0A25C79A3C7FCFBDABA93441C62DF6A6455E3F12_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_t0A25C79A3C7FCFBDABA93441C62DF6A6455E3F12_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_t0A25C79A3C7FCFBDABA93441C62DF6A6455E3F12(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_t0A25C79A3C7FCFBDABA93441C62DF6A6455E3F12_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_t0A25C79A3C7FCFBDABA93441C62DF6A6455E3F12_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Subject`1/Subscription<UniRx.Triggers.ObservableStateMachineTrigger/OnStateMachineInfo>
struct Subscription_tE6F53716137C28AE4E65B4646ABF309F2F3C2DA8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscription_tE6F53716137C28AE4E65B4646ABF309F2F3C2DA8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscription_tE6F53716137C28AE4E65B4646ABF309F2F3C2DA8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscription_tE6F53716137C28AE4E65B4646ABF309F2F3C2DA8_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscription_tE6F53716137C28AE4E65B4646ABF309F2F3C2DA8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscription_tE6F53716137C28AE4E65B4646ABF309F2F3C2DA8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscription_tE6F53716137C28AE4E65B4646ABF309F2F3C2DA8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.TakeObservable`1/Take<UniRx.Unit>
struct Take_tB14025DDC3DED745679EA80263B64A7B00573308_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Take_tB14025DDC3DED745679EA80263B64A7B00573308_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Take_tB14025DDC3DED745679EA80263B64A7B00573308_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Take_tB14025DDC3DED745679EA80263B64A7B00573308_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Take_tB14025DDC3DED745679EA80263B64A7B00573308(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Take_tB14025DDC3DED745679EA80263B64A7B00573308_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Take_tB14025DDC3DED745679EA80263B64A7B00573308_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.TakeObservable`1/Take_<UniRx.Unit>
struct Take__t1838AEF5B16CE78898E8325999BD880635280DCA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Take__t1838AEF5B16CE78898E8325999BD880635280DCA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Take__t1838AEF5B16CE78898E8325999BD880635280DCA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Take__t1838AEF5B16CE78898E8325999BD880635280DCA_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Take__t1838AEF5B16CE78898E8325999BD880635280DCA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Take__t1838AEF5B16CE78898E8325999BD880635280DCA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Take__t1838AEF5B16CE78898E8325999BD880635280DCA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper>, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4, IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF
{
	inline TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF*>(this);
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
		interfaceIds[0] = IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID;
		interfaceIds[1] = IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF::IID;

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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m66B4DB488CAE8CD259581D1CCAB94FBFA05BC733(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_m6B11AC1DEC95655729E1A54E031D1647F0CAD39F_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_m6B11AC1DEC95655729E1A54E031D1647F0CAD39F(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_m6B11AC1DEC95655729E1A54E031D1647F0CAD39F_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m9393658D0FD28BE7960FBB531A31A1E1CB106F80(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_mCA548B4B3A483C1000143BE8F469054E537C7683_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_mCA548B4B3A483C1000143BE8F469054E537C7683(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_mCA548B4B3A483C1000143BE8F469054E537C7683_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m0C4F0079B788C88A5A572A827AAACA0B3BB233C5(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_mC3D22C84608E07996CA81F4505DAF8E35DF93AB8_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_mC3D22C84608E07996CA81F4505DAF8E35DF93AB8(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_mC3D22C84608E07996CA81F4505DAF8E35DF93AB8_RuntimeMethod_var);
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

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m55A00D21BF943DA94D606044A66295FEF77139EE() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_mC94B71F3F2289FB7BC45F71E7271F54B6DF4CB11_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_mC94B71F3F2289FB7BC45F71E7271F54B6DF4CB11(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_mC94B71F3F2289FB7BC45F71E7271F54B6DF4CB11_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_m186908B02D6E9850DB3376510E0C3FB99B891FBB() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_mCF79C5A0CAF7B28BED635275892CDDFDFE05AB5A_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_mCF79C5A0CAF7B28BED635275892CDDFDFE05AB5A(__thisValue, TaskToAsyncInfoAdapter_4_Close_mCF79C5A0CAF7B28BED635275892CDDFDFE05AB5A_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7656E1FBD07F1A33A8BABCA2DFC7FB61231A0958(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 *>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_il2cpp_TypeInfo_var);
				____handler0_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_NativeInvoker);
				intptr_t methodInfo;
				methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_RuntimeMethod_var);
				____handler0_unmarshaled->set_method_3(methodInfo);
				____handler0_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66>(___handler0, __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var));
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____handler0_unmarshaled->get_m_target_2()), IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __thisValue = (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 *)GetManagedObjectInline();
			TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF8AED96C1879988554BA949E0718A6174C3117F5(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_m7D5ABE2831C85E1980E85ED7E890194486B3D44B_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_m7D5ABE2831C85E1980E85ED7E890194486B3D44B(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_m7D5ABE2831C85E1980E85ED7E890194486B3D44B_RuntimeMethod_var);
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
		IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->get_m_target_2();

			if (target != NULL && returnValue->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m33CB8132B6D0D81238F6BE90A9D3F1F13AB422AD(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __thisValue = (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 *)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA(__thisValue, TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA_RuntimeMethod_var);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper>, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93
{
	inline TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93*>(this);
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
		interfaceIds[0] = IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID;
		interfaceIds[1] = IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93::IID;

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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m66B4DB488CAE8CD259581D1CCAB94FBFA05BC733(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_m5606103EEEC0C5CCA33B9AFB991BA6C5EA9A6BAF_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_m5606103EEEC0C5CCA33B9AFB991BA6C5EA9A6BAF(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_m5606103EEEC0C5CCA33B9AFB991BA6C5EA9A6BAF_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m9393658D0FD28BE7960FBB531A31A1E1CB106F80(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_m48E9DADC92E479763D3B2737B4EC07E20D01B41C_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_m48E9DADC92E479763D3B2737B4EC07E20D01B41C(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_m48E9DADC92E479763D3B2737B4EC07E20D01B41C_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m0C4F0079B788C88A5A572A827AAACA0B3BB233C5(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_m1F5650F2C7293DE3D71EF1597527B3CFF20E28FE_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_m1F5650F2C7293DE3D71EF1597527B3CFF20E28FE(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_m1F5650F2C7293DE3D71EF1597527B3CFF20E28FE_RuntimeMethod_var);
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

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m55A00D21BF943DA94D606044A66295FEF77139EE() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_m750C55F7BD2954E109F2DCE2C44CCC1D40F80104_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_m750C55F7BD2954E109F2DCE2C44CCC1D40F80104(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_m750C55F7BD2954E109F2DCE2C44CCC1D40F80104_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_m186908B02D6E9850DB3376510E0C3FB99B891FBB() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_m73D27EDC995149EF44B3805FD8440C2723F8590F_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_m73D27EDC995149EF44B3805FD8440C2723F8590F(__thisValue, TaskToAsyncInfoAdapter_4_Close_m73D27EDC995149EF44B3805FD8440C2723F8590F_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_mBC6183A763190D7A90AC3695ABA5695BA36C856A(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m27086D69E97C66984E7C0ACE861D68921D5AF3DD_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 *>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_il2cpp_TypeInfo_var);
				____handler0_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_NativeInvoker);
				intptr_t methodInfo;
				methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_RuntimeMethod_var);
				____handler0_unmarshaled->set_method_3(methodInfo);
				____handler0_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66>(___handler0, __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var));
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____handler0_unmarshaled->get_m_target_2()), IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m27086D69E97C66984E7C0ACE861D68921D5AF3DD(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m27086D69E97C66984E7C0ACE861D68921D5AF3DD_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mE2D4B228CE53F99221609445BE370DDFCE36E6B1(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Progress_m633097FA3C0A26ACAE4D5FC19DF0D12C43EE1C6B_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Progress_m633097FA3C0A26ACAE4D5FC19DF0D12C43EE1C6B(__thisValue, TaskToAsyncInfoAdapter_4_get_Progress_m633097FA3C0A26ACAE4D5FC19DF0D12C43EE1C6B_RuntimeMethod_var);
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
		IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->get_m_target_2();

			if (target != NULL && returnValue->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m175060E2E21B33EF1970DD606F09B7DF584D798D(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_mDB47EA7DF7293EADE3135E3BB4AFE55EC7AB7E16_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 *>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_il2cpp_TypeInfo_var);
				____handler0_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_NativeInvoker);
				intptr_t methodInfo;
				methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_RuntimeMethod_var);
				____handler0_unmarshaled->set_method_3(methodInfo);
				____handler0_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66>(___handler0, __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var));
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____handler0_unmarshaled->get_m_target_2()), IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_mDB47EA7DF7293EADE3135E3BB4AFE55EC7AB7E16(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_mDB47EA7DF7293EADE3135E3BB4AFE55EC7AB7E16_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mC86F0CF355BA73A8EDDBDAE24D74C5879DA6FBBA(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_mCFD13665F25FE8FDE697685A977D6AD80451B928_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_mCFD13665F25FE8FDE697685A977D6AD80451B928(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_mCFD13665F25FE8FDE697685A977D6AD80451B928_RuntimeMethod_var);
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
		IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->get_m_target_2();

			if (target != NULL && returnValue->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m0F646662AC31DEE0CE961AFADC7973E48F97C5B9(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_GetResults_m8BC6CCF731AB8A80917C2987C80B916A7ECEC4FB_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationWithProgressAdapter_2_GetResults_m8BC6CCF731AB8A80917C2987C80B916A7ECEC4FB(__thisValue, TaskToAsyncOperationWithProgressAdapter_2_GetResults_m8BC6CCF731AB8A80917C2987C80B916A7ECEC4FB_RuntimeMethod_var);
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
		IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC>(returnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper>, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB
{
	inline TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB*>(this);
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
		interfaceIds[0] = IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID;
		interfaceIds[1] = IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB::IID;

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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m66B4DB488CAE8CD259581D1CCAB94FBFA05BC733(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_m85C884BF337D9D5230832FFAB2E0D3FB5B3DC867_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_m85C884BF337D9D5230832FFAB2E0D3FB5B3DC867(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_m85C884BF337D9D5230832FFAB2E0D3FB5B3DC867_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m9393658D0FD28BE7960FBB531A31A1E1CB106F80(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_mEB7A427430E166EA6099EBC0454ABE15761F2F37_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_mEB7A427430E166EA6099EBC0454ABE15761F2F37(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_mEB7A427430E166EA6099EBC0454ABE15761F2F37_RuntimeMethod_var);
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

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m0C4F0079B788C88A5A572A827AAACA0B3BB233C5(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_mC2A33A410F738922DBE587AF21784CCA4E26109F_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_mC2A33A410F738922DBE587AF21784CCA4E26109F(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_mC2A33A410F738922DBE587AF21784CCA4E26109F_RuntimeMethod_var);
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

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m55A00D21BF943DA94D606044A66295FEF77139EE() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_mC0880CF2CCB9BA9DFC0A9FA347FDECA717E93C07_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_mC0880CF2CCB9BA9DFC0A9FA347FDECA717E93C07(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_mC0880CF2CCB9BA9DFC0A9FA347FDECA717E93C07_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_m186908B02D6E9850DB3376510E0C3FB99B891FBB() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_m9DEFAE3466E0942AF5C3B613BE50C3FF22FFE47A_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_m9DEFAE3466E0942AF5C3B613BE50C3FF22FFE47A(__thisValue, TaskToAsyncInfoAdapter_4_Close_m9DEFAE3466E0942AF5C3B613BE50C3FF22FFE47A_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m0377F4567A96FDBBDB5965FBC39543CB067FBC44(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 *>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_il2cpp_TypeInfo_var);
				____handler0_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_NativeInvoker);
				intptr_t methodInfo;
				methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_RuntimeMethod_var);
				____handler0_unmarshaled->set_method_3(methodInfo);
				____handler0_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66>(___handler0, __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var));
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____handler0_unmarshaled->get_m_target_2()), IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m56432550918918419AD9E3C4C6628C1761816138(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Progress_m18B773C9A7C5615FDC4C1122128FEDCB4905F88C_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Progress_m18B773C9A7C5615FDC4C1122128FEDCB4905F88C(__thisValue, TaskToAsyncInfoAdapter_4_get_Progress_m18B773C9A7C5615FDC4C1122128FEDCB4905F88C_RuntimeMethod_var);
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
		IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->get_m_target_2();

			if (target != NULL && returnValue->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m543BD227353BA50F701DDE984A8B401788B0B43C(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 *>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_il2cpp_TypeInfo_var);
				____handler0_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_NativeInvoker);
				intptr_t methodInfo;
				methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_RuntimeMethod_var);
				____handler0_unmarshaled->set_method_3(methodInfo);
				____handler0_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66>(___handler0, __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var));
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____handler0_unmarshaled->get_m_target_2()), IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
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

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mEDC3E8F6D24BF8D62A67B5CCF13C77258C3D7FB8(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_m6F5458DDA05EC75D4C3774C4E2F1635B404C9F2F_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_m6F5458DDA05EC75D4C3774C4E2F1635B404C9F2F(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_m6F5458DDA05EC75D4C3774C4E2F1635B404C9F2F_RuntimeMethod_var);
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
		IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->get_m_target_2();

			if (target != NULL && returnValue->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mA5979B888030B4A4C8E751DBEEF4305A3CE37292(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9(__thisValue, TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9_RuntimeMethod_var);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Queue.CloudQueueMessage>>
struct Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t02793AA28ACE8BDD3864E7A50E3165072DAF1E40_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.File.FileRange>>
struct Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tFA0E403A7A0A4BB11EFDF5FCEE5F0C2FFD7A2A8A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.ListBlockItem>>
struct Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tCBFFB75F74BC8893B96F22749A261E65E9C8A745_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.PageDiffRange>>
struct Task_1_t118880C5C896B508E6D2A1C71522654323815E2C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t118880C5C896B508E6D2A1C71522654323815E2C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t118880C5C896B508E6D2A1C71522654323815E2C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t118880C5C896B508E6D2A1C71522654323815E2C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t118880C5C896B508E6D2A1C71522654323815E2C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t118880C5C896B508E6D2A1C71522654323815E2C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t118880C5C896B508E6D2A1C71522654323815E2C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Microsoft.WindowsAzure.Storage.Blob.PageRange>>
struct Task_1_tD510636E354779BC348B56B79EFD426514EE3556_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tD510636E354779BC348B56B79EFD426514EE3556_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tD510636E354779BC348B56B79EFD426514EE3556_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tD510636E354779BC348B56B79EFD426514EE3556_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tD510636E354779BC348B56B79EFD426514EE3556(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tD510636E354779BC348B56B79EFD426514EE3556_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tD510636E354779BC348B56B79EFD426514EE3556_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tE1058F8BAEAC1C1EE02FBB0B07FF3AFF7107F990_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Microsoft.WindowsAzure.Storage.Table.TableResult>>
struct Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t2D63918D6BDB9F049FC084AF2C9F886172A3AEC4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>
struct Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t0966667FDBDF3ED6611528474770883A3A315FEC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>>>
struct Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tBF3A0A3D51D70964E2AF4E22A16FD6E077DB9A41_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.Unity.IObjectAnchorsTrackingResult>>
struct Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tDDD743ED6025E6EA64D8F8F6586BE964378D0754_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Nullable`1<System.Boolean>>
struct Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t2CE54FFAFFC331627F74CAFE36AE21C3CCC66635_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTime>>
struct Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t9A25C1FE486764E0BC28BBA90BCC71F1D6755829_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTimeOffset>>
struct Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t1457B3258655860FFE7B92D1CCF930AAF3D9E675_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Nullable`1<System.Decimal>>
struct Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tE5E0A63E886F3DDE2CA6A275794BD64C971937D1_ComCallableWrapper(obj));
}
