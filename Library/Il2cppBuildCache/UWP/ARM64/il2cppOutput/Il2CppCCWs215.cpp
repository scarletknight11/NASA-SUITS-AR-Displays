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
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA;
// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t59D7203725BFC53A0859EFCF8EAA02E6133D2327;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_tB00B53CE454E4032CD63E38601C6632FFE9BB1FD;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct IEnumerator_1_tFB32C910396168ACCF5DE4DECB65CD185EBF0977;
// System.IObserver`1<System.Byte[]>
struct IObserver_1_tDD91216EC01555F0C0B8D92C953536F1A65D0AA1;
// System.IObserver`1<UnityEngine.AssetBundle>
struct IObserver_1_t746D9D44B0323C75491B781177792CE0F4BBF983;
// System.IObserver`1<System.Int32>
struct IObserver_1_tE89C553FD131136E5B3A939C88EBC84A9E488494;
// System.IObserver`1<System.Int64>
struct IObserver_1_t54A626A6B9E891261BA1AC71BC4E7798F2DBAAF5;
// System.IObserver`1<System.String>
struct IObserver_1_t9707ED89A27FC4935E2501AC37047E3BDE1D32BE;
// System.IObserver`1<UniRx.Unit>
struct IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01;
// System.IObserver`1<UnityEngine.WWW>
struct IObserver_1_t0F1DD432F97107011F257B8EFDDE0B78CF0C7D7B;
// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message>
struct IObserver_1_tBA5E73554DE7D36B4BBD4CB398ABD74142DC5692;
// System.IProgress`1<System.Single>
struct IProgress_1_tE82D96A0C5152A8696D32ABF6E2ABE3A891118F7;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct List_1_t9AA16C93BC2DB750DE514C896B52763AC0C9D0EA;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Stack`1<UnityEngine.Transform>
struct Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IDisposable[]
struct IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType[]
struct SystemTypeU5BU5D_t7BBB6C6E11AA70D64E254BCA8BC1B8A71A243F45;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// UniRx.ICustomYieldInstructionErrorHandler
struct ICustomYieldInstructionErrorHandler_t4F82CBFBC403F045E8B2491BAF2B930B44AC965B;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t923212C7B71ADAD3E3C21B99009C9612530D3FE7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver
struct IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_tED549CBBDED54863DC2E2F678E778A21F086691A;
// Newtonsoft.Json.Linq.JToken
struct JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile
struct MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget
struct MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6;
// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityStandardAssets.Utility.ObjectResetter
struct ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1;
// UnityEngine.XR.OpenXR.OpenXRRestarter
struct OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944;
// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver
struct OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase
struct PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862;
// PanelManager
struct PanelManager_t067FDE4EC503FC952E8A1519ECD55199DD6286CC;
// MRTK.Tutorials.GettingStarted.PartAssemblyController
struct PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573;
// PartAssemblyDemo
struct PartAssemblyDemo_t7F0FA3A0C34B67056EE68F9A6AF69A217B61235C;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityStandardAssets.Utility.ParticleSystemDestroyer
struct ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2
struct PressableButtonHoloLens2_tF72F05F44AF391672E6B51BA428DDB6D2AE92E10;
// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride
struct ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4;
// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight
struct ProximityLight_t96325E459FE7A256CBD8DED0E33C2EEBFF3AE834;
// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler
struct PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5;
// Newtonsoft.Json.Linq.JsonPath.QueryFilter
struct QueryFilter_t3876B2DED66ED5548C7BA7F2D5CF94119156E7CC;
// Reader
struct Reader_t9698DA1F0E150A0AF9C22F15B959DEEAD0E273ED;
// UniRx.RefCountDisposable
struct RefCountDisposable_tC74E4DEB511025910CCB7482BC30F8BE6A598CFF;
// UnityEngine.InputSystem.RemoteInputPlayerConnection
struct RemoteInputPlayerConnection_tAFE1707E641E59FBA1B8528C28DA9470FD26DC2B;
// System.Resources.ResourceFallbackManager
struct ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint
struct RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC;
// SaveLoad
struct SaveLoad_t7C5CD8E17EE1D9714A83F5BCD7B299FF67A5CBCA;
// Newtonsoft.Json.Linq.JsonPath.ScanFilter
struct ScanFilter_tCB55289069493B92328B48F2BA6EA9BC43DC3BE3;
// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter
struct ScanMultipleFilter_t6A328559446AE6C9A1CE1789E70118A531DEDAAD;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ScrollableListPopulator
struct ScrollableListPopulator_tD9D48F22FB20A176B488C4A81E2CA5B479078431;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection
struct ScrollingObjectCollection_t654C8DCE212688BB4618E80C08EE885EF3D19DF8;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// TMPro.Examples.ShaderPropAnimator
struct ShaderPropAnimator_t44FB2882ECA0D2C780444EB96B9550F5D245CFB8;
// TMPro.Examples.SkewTextExample
struct SkewTextExample_tA9F165D1BE969ED73FB86CA6C641386C22F1EE07;
// UnityStandardAssets.Vehicles.Car.SkidTrail
struct SkidTrail_t60B88F0DBDDA362483950400E7D54FCF61486D97;
// System.Collections.SortedList
struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t3FD3826E105DA5CC167E721237E450A4BA855E63;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_InputField
struct TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_SpriteCharacter
struct TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75;
// Reader/TelemetryData
struct TelemetryData_t645C06891EF6169BB487229B0D2CB584D93082DA;
// System.Collections.SortedList/KeyList
struct KeyList_t90FF026A62D56329DEFC1B768358977E70839881;
// System.Collections.SortedList/ValueList
struct ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ;
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
struct IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D;
struct IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF;
struct IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67;
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ;


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
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>
struct NOVTABLE IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct NOVTABLE IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t94592E586C395F026290ACC676E74C560595CC26 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Type>
struct NOVTABLE IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67(IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB(uint64_t ___position0, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023(uint64_t ___position0, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A(IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146(bool* comReturnValue) = 0;
};

// System.Object


// UniRx.Operators.OperatorObserverBase`2<System.Int32,System.Int32>
struct OperatorObserverBase_2_t3D01E6F7701BADD4C4B43B448531D2E60BD6D92E  : public RuntimeObject
{
public:
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t3D01E6F7701BADD4C4B43B448531D2E60BD6D92E, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_0), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t3D01E6F7701BADD4C4B43B448531D2E60BD6D92E, ___cancel_1)); }
	inline RuntimeObject* get_cancel_1() const { return ___cancel_1; }
	inline RuntimeObject** get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(RuntimeObject* value)
	{
		___cancel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_1), (void*)value);
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

// System.Collections.SortedList
struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/KeyList System.Collections.SortedList::keyList
	KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * ___keyList_5;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * ___valueList_6;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___keys_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___values_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___keyList_5)); }
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyList_5), (void*)value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___valueList_6)); }
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueList_6), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};

struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_9;

public:
	inline static int32_t get_offset_of_emptyArray_9() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields, ___emptyArray_9)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_9() const { return ___emptyArray_9; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_9() { return &___emptyArray_9; }
	inline void set_emptyArray_9(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_9), (void*)value);
	}
};


// UniRx.StableCompositeDisposable
struct StableCompositeDisposable_tB71EAEB503B8665E069A236455E09985180ECACF  : public RuntimeObject
{
public:

public:
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

// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20
struct U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>2__current
	Type_t * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>4__this
	MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * ___U3CU3E4__this_3;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>s__1
	SystemTypeU5BU5D_t7BBB6C6E11AA70D64E254BCA8BC1B8A71A243F45* ___U3CU3Es__1_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>s__2
	int32_t ___U3CU3Es__2_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<systemType>5__3
	SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * ___U3CsystemTypeU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3E2__current_1)); }
	inline Type_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Type_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Type_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3E4__this_3)); }
	inline MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_4() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3Es__1_4)); }
	inline SystemTypeU5BU5D_t7BBB6C6E11AA70D64E254BCA8BC1B8A71A243F45* get_U3CU3Es__1_4() const { return ___U3CU3Es__1_4; }
	inline SystemTypeU5BU5D_t7BBB6C6E11AA70D64E254BCA8BC1B8A71A243F45** get_address_of_U3CU3Es__1_4() { return &___U3CU3Es__1_4; }
	inline void set_U3CU3Es__1_4(SystemTypeU5BU5D_t7BBB6C6E11AA70D64E254BCA8BC1B8A71A243F45* value)
	{
		___U3CU3Es__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_5() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CU3Es__2_5)); }
	inline int32_t get_U3CU3Es__2_5() const { return ___U3CU3Es__2_5; }
	inline int32_t* get_address_of_U3CU3Es__2_5() { return &___U3CU3Es__2_5; }
	inline void set_U3CU3Es__2_5(int32_t value)
	{
		___U3CU3Es__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CsystemTypeU3E5__3_6() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD, ___U3CsystemTypeU3E5__3_6)); }
	inline SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * get_U3CsystemTypeU3E5__3_6() const { return ___U3CsystemTypeU3E5__3_6; }
	inline SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E ** get_address_of_U3CsystemTypeU3E5__3_6() { return &___U3CsystemTypeU3E5__3_6; }
	inline void set_U3CsystemTypeU3E5__3_6(SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * value)
	{
		___U3CsystemTypeU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsystemTypeU3E5__3_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31
struct U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>4__this
	MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B, ___U3CU3E4__this_2)); }
	inline MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6
struct U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::delay
	float ___delay_2;
	// UnityStandardAssets.Utility.ObjectResetter UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::<>4__this
	ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * ___U3CU3E4__this_3;
	// UnityEngine.Transform[] UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::<>s__1
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___U3CU3Es__1_4;
	// System.Int32 UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::<>s__2
	int32_t ___U3CU3Es__2_5;
	// UnityEngine.Transform UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::<t>5__3
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892, ___U3CU3E4__this_3)); }
	inline ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_4() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892, ___U3CU3Es__1_4)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_U3CU3Es__1_4() const { return ___U3CU3Es__1_4; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_U3CU3Es__1_4() { return &___U3CU3Es__1_4; }
	inline void set_U3CU3Es__1_4(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___U3CU3Es__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_5() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892, ___U3CU3Es__2_5)); }
	inline int32_t get_U3CU3Es__2_5() const { return ___U3CU3Es__2_5; }
	inline int32_t* get_address_of_U3CU3Es__2_5() { return &___U3CU3Es__2_5; }
	inline void set_U3CU3Es__2_5(int32_t value)
	{
		___U3CU3Es__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892, ___U3CtU3E5__3_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtU3E5__3_6() const { return ___U3CtU3E5__3_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtU3E5__3_6() { return &___U3CtU3E5__3_6; }
	inline void set_U3CtU3E5__3_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtU3E5__3_6), (void*)value);
	}
};


// UniRx.ObserveExtensions/<EmptyEnumerator>d__3
struct U3CEmptyEnumeratorU3Ed__3_t7A48C264054742328E6E5790361BC0CD2D6BFDAF  : public RuntimeObject
{
public:
	// System.Int32 UniRx.ObserveExtensions/<EmptyEnumerator>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.ObserveExtensions/<EmptyEnumerator>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEmptyEnumeratorU3Ed__3_t7A48C264054742328E6E5790361BC0CD2D6BFDAF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEmptyEnumeratorU3Ed__3_t7A48C264054742328E6E5790361BC0CD2D6BFDAF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13
struct U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Boolean UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::shouldRestart
	bool ___shouldRestart_2;
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13::<>4__this
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_shouldRestart_2() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___shouldRestart_2)); }
	inline bool get_shouldRestart_2() const { return ___shouldRestart_2; }
	inline bool* get_address_of_shouldRestart_2() { return &___shouldRestart_2; }
	inline void set_shouldRestart_2(bool value)
	{
		___shouldRestart_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF, ___U3CU3E4__this_3)); }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7
struct U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::pathInStreamingAssets
	String_t* ___pathInStreamingAssets_2;
	// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>4__this
	OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * ___U3CU3E4__this_3;
	// System.Uri Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<fullUri>5__1
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___U3CfullUriU3E5__1_4;
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<webRequest>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_pathInStreamingAssets_2() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___pathInStreamingAssets_2)); }
	inline String_t* get_pathInStreamingAssets_2() const { return ___pathInStreamingAssets_2; }
	inline String_t** get_address_of_pathInStreamingAssets_2() { return &___pathInStreamingAssets_2; }
	inline void set_pathInStreamingAssets_2(String_t* value)
	{
		___pathInStreamingAssets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathInStreamingAssets_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E4__this_3)); }
	inline OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfullUriU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CfullUriU3E5__1_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_U3CfullUriU3E5__1_4() const { return ___U3CfullUriU3E5__1_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_U3CfullUriU3E5__1_4() { return &___U3CfullUriU3E5__1_4; }
	inline void set_U3CfullUriU3E5__1_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___U3CfullUriU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfullUriU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CwebRequestU3E5__2_5)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3E5__2_5() const { return ___U3CwebRequestU3E5__2_5; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3E5__2_5() { return &___U3CwebRequestU3E5__2_5; }
	inline void set_U3CwebRequestU3E5__2_5(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__2_5), (void*)value);
	}
};


// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_objects
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____objects_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E, ____objects_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78
struct U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::zoomIn
	bool ___zoomIn_2;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::<>4__this
	PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_zoomIn_2() { return static_cast<int32_t>(offsetof(U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46, ___zoomIn_2)); }
	inline bool get_zoomIn_2() const { return ___zoomIn_2; }
	inline bool* get_address_of_zoomIn_2() { return &___zoomIn_2; }
	inline void set_zoomIn_2(bool value)
	{
		___zoomIn_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46, ___U3CU3E4__this_3)); }
	inline PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// PanelManager/<DisablePanelDeleyed>d__10
struct U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F  : public RuntimeObject
{
public:
	// System.Int32 PanelManager/<DisablePanelDeleyed>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PanelManager/<DisablePanelDeleyed>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Animator PanelManager/<DisablePanelDeleyed>d__10::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_2;
	// PanelManager PanelManager/<DisablePanelDeleyed>d__10::<>4__this
	PanelManager_t067FDE4EC503FC952E8A1519ECD55199DD6286CC * ___U3CU3E4__this_3;
	// System.Boolean PanelManager/<DisablePanelDeleyed>d__10::<closedStateReached>5__1
	bool ___U3CclosedStateReachedU3E5__1_4;
	// System.Boolean PanelManager/<DisablePanelDeleyed>d__10::<wantToClose>5__2
	bool ___U3CwantToCloseU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F, ___anim_2)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_2() const { return ___anim_2; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F, ___U3CU3E4__this_3)); }
	inline PanelManager_t067FDE4EC503FC952E8A1519ECD55199DD6286CC * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline PanelManager_t067FDE4EC503FC952E8A1519ECD55199DD6286CC ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(PanelManager_t067FDE4EC503FC952E8A1519ECD55199DD6286CC * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CclosedStateReachedU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F, ___U3CclosedStateReachedU3E5__1_4)); }
	inline bool get_U3CclosedStateReachedU3E5__1_4() const { return ___U3CclosedStateReachedU3E5__1_4; }
	inline bool* get_address_of_U3CclosedStateReachedU3E5__1_4() { return &___U3CclosedStateReachedU3E5__1_4; }
	inline void set_U3CclosedStateReachedU3E5__1_4(bool value)
	{
		___U3CclosedStateReachedU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CwantToCloseU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F, ___U3CwantToCloseU3E5__2_5)); }
	inline bool get_U3CwantToCloseU3E5__2_5() const { return ___U3CwantToCloseU3E5__2_5; }
	inline bool* get_address_of_U3CwantToCloseU3E5__2_5() { return &___U3CwantToCloseU3E5__2_5; }
	inline void set_U3CwantToCloseU3E5__2_5(bool value)
	{
		___U3CwantToCloseU3E5__2_5 = value;
	}
};


// MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6  : public RuntimeObject
{
public:
	// System.Int32 MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>4__this
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * ___U3CU3E4__this_2;
	// UnityEngine.Transform MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<trans>5__1
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtransU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E4__this_2)); }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CtransU3E5__1_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtransU3E5__1_3() const { return ___U3CtransU3E5__1_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtransU3E5__1_3() { return &___U3CtransU3E5__1_3; }
	inline void set_U3CtransU3E5__1_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtransU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransU3E5__1_3), (void*)value);
	}
};


// PartAssemblyDemo/<checkForSnap>d__14
struct U3CcheckForSnapU3Ed__14_t3ABE1AC47D0D00440E203E294E87E8E089E0F460  : public RuntimeObject
{
public:
	// System.Int32 PartAssemblyDemo/<checkForSnap>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PartAssemblyDemo/<checkForSnap>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PartAssemblyDemo PartAssemblyDemo/<checkForSnap>d__14::<>4__this
	PartAssemblyDemo_t7F0FA3A0C34B67056EE68F9A6AF69A217B61235C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CcheckForSnapU3Ed__14_t3ABE1AC47D0D00440E203E294E87E8E089E0F460, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CcheckForSnapU3Ed__14_t3ABE1AC47D0D00440E203E294E87E8E089E0F460, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CcheckForSnapU3Ed__14_t3ABE1AC47D0D00440E203E294E87E8E089E0F460, ___U3CU3E4__this_2)); }
	inline PartAssemblyDemo_t7F0FA3A0C34B67056EE68F9A6AF69A217B61235C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PartAssemblyDemo_t7F0FA3A0C34B67056EE68F9A6AF69A217B61235C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PartAssemblyDemo_t7F0FA3A0C34B67056EE68F9A6AF69A217B61235C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// PlayerController/<JumpEvent>d__12
struct U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232  : public RuntimeObject
{
public:
	// System.Int32 PlayerController/<JumpEvent>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<JumpEvent>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController PlayerController/<JumpEvent>d__12::<>4__this
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___U3CU3E4__this_2;
	// System.Single PlayerController/<JumpEvent>d__12::<timeInAir>5__1
	float ___U3CtimeInAirU3E5__1_3;
	// System.Single PlayerController/<JumpEvent>d__12::<jumpForce>5__2
	float ___U3CjumpForceU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232, ___U3CU3E4__this_2)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeInAirU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232, ___U3CtimeInAirU3E5__1_3)); }
	inline float get_U3CtimeInAirU3E5__1_3() const { return ___U3CtimeInAirU3E5__1_3; }
	inline float* get_address_of_U3CtimeInAirU3E5__1_3() { return &___U3CtimeInAirU3E5__1_3; }
	inline void set_U3CtimeInAirU3E5__1_3(float value)
	{
		___U3CtimeInAirU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CjumpForceU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232, ___U3CjumpForceU3E5__2_4)); }
	inline float get_U3CjumpForceU3E5__2_4() const { return ___U3CjumpForceU3E5__2_4; }
	inline float* get_address_of_U3CjumpForceU3E5__2_4() { return &___U3CjumpForceU3E5__2_4; }
	inline void set_U3CjumpForceU3E5__2_4(float value)
	{
		___U3CjumpForceU3E5__2_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23
struct U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::fadeIn
	bool ___fadeIn_2;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::time
	float ___time_3;
	// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2 Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>4__this
	PressableButtonHoloLens2_tF72F05F44AF391672E6B51BA428DDB6D2AE92E10 * ___U3CU3E4__this_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<normalizedIntensity>5__1
	float ___U3CnormalizedIntensityU3E5__1_5;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<blendTime>5__2
	float ___U3CblendTimeU3E5__2_6;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<t>5__3
	float ___U3CtU3E5__3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_fadeIn_2() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___fadeIn_2)); }
	inline bool get_fadeIn_2() const { return ___fadeIn_2; }
	inline bool* get_address_of_fadeIn_2() { return &___fadeIn_2; }
	inline void set_fadeIn_2(bool value)
	{
		___fadeIn_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___U3CU3E4__this_4)); }
	inline PressableButtonHoloLens2_tF72F05F44AF391672E6B51BA428DDB6D2AE92E10 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline PressableButtonHoloLens2_tF72F05F44AF391672E6B51BA428DDB6D2AE92E10 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(PressableButtonHoloLens2_tF72F05F44AF391672E6B51BA428DDB6D2AE92E10 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnormalizedIntensityU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___U3CnormalizedIntensityU3E5__1_5)); }
	inline float get_U3CnormalizedIntensityU3E5__1_5() const { return ___U3CnormalizedIntensityU3E5__1_5; }
	inline float* get_address_of_U3CnormalizedIntensityU3E5__1_5() { return &___U3CnormalizedIntensityU3E5__1_5; }
	inline void set_U3CnormalizedIntensityU3E5__1_5(float value)
	{
		___U3CnormalizedIntensityU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CblendTimeU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___U3CblendTimeU3E5__2_6)); }
	inline float get_U3CblendTimeU3E5__2_6() const { return ___U3CblendTimeU3E5__2_6; }
	inline float* get_address_of_U3CblendTimeU3E5__2_6() { return &___U3CblendTimeU3E5__2_6; }
	inline void set_U3CblendTimeU3E5__2_6(float value)
	{
		___U3CblendTimeU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1, ___U3CtU3E5__3_7)); }
	inline float get_U3CtU3E5__3_7() const { return ___U3CtU3E5__3_7; }
	inline float* get_address_of_U3CtU3E5__3_7() { return &___U3CtU3E5__3_7; }
	inline void set_U3CtU3E5__3_7(float value)
	{
		___U3CtU3E5__3_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4
struct U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>4__this
	ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926, ___U3CU3E4__this_2)); }
	inline ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22
struct U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::pulseDuration
	float ___pulseDuration_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::fadeBegin
	float ___fadeBegin_3;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::fadeSpeed
	float ___fadeSpeed_4;
	// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<>4__this
	ProximityLight_t96325E459FE7A256CBD8DED0E33C2EEBFF3AE834 * ___U3CU3E4__this_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<pulseTimer>5__1
	float ___U3CpulseTimerU3E5__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_pulseDuration_2() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___pulseDuration_2)); }
	inline float get_pulseDuration_2() const { return ___pulseDuration_2; }
	inline float* get_address_of_pulseDuration_2() { return &___pulseDuration_2; }
	inline void set_pulseDuration_2(float value)
	{
		___pulseDuration_2 = value;
	}

	inline static int32_t get_offset_of_fadeBegin_3() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___fadeBegin_3)); }
	inline float get_fadeBegin_3() const { return ___fadeBegin_3; }
	inline float* get_address_of_fadeBegin_3() { return &___fadeBegin_3; }
	inline void set_fadeBegin_3(float value)
	{
		___fadeBegin_3 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_4() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___fadeSpeed_4)); }
	inline float get_fadeSpeed_4() const { return ___fadeSpeed_4; }
	inline float* get_address_of_fadeSpeed_4() { return &___fadeSpeed_4; }
	inline void set_fadeSpeed_4(float value)
	{
		___fadeSpeed_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___U3CU3E4__this_5)); }
	inline ProximityLight_t96325E459FE7A256CBD8DED0E33C2EEBFF3AE834 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline ProximityLight_t96325E459FE7A256CBD8DED0E33C2EEBFF3AE834 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(ProximityLight_t96325E459FE7A256CBD8DED0E33C2EEBFF3AE834 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpulseTimerU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A, ___U3CpulseTimerU3E5__1_6)); }
	inline float get_U3CpulseTimerU3E5__1_6() const { return ___U3CpulseTimerU3E5__1_6; }
	inline float* get_address_of_U3CpulseTimerU3E5__1_6() { return &___U3CpulseTimerU3E5__1_6; }
	inline void set_U3CpulseTimerU3E5__1_6(float value)
	{
		___U3CpulseTimerU3E5__1_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40
struct U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<>4__this
	PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<t>5__1
	float ___U3CtU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2, ___U3CU3E4__this_2)); }
	inline PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2, ___U3CtU3E5__1_3)); }
	inline float get_U3CtU3E5__1_3() const { return ___U3CtU3E5__1_3; }
	inline float* get_address_of_U3CtU3E5__1_3() { return &___U3CtU3E5__1_3; }
	inline void set_U3CtU3E5__1_3(float value)
	{
		___U3CtU3E5__1_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41
struct U3CCoRepeatPulseU3Ed__41_t27D831AF6E4846008EB1E6061966E64FCB28DE6E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41::<>4__this
	PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoRepeatPulseU3Ed__41_t27D831AF6E4846008EB1E6061966E64FCB28DE6E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoRepeatPulseU3Ed__41_t27D831AF6E4846008EB1E6061966E64FCB28DE6E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoRepeatPulseU3Ed__41_t27D831AF6E4846008EB1E6061966E64FCB28DE6E, ___U3CU3E4__this_2)); }
	inline PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38
struct U3CCoSinglePulseU3Ed__38_tCAEDC05F7FA47AED6F0B976C9EBC3522DBF7EB84  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38::<>4__this
	PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoSinglePulseU3Ed__38_tCAEDC05F7FA47AED6F0B976C9EBC3522DBF7EB84, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoSinglePulseU3Ed__38_tCAEDC05F7FA47AED6F0B976C9EBC3522DBF7EB84, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoSinglePulseU3Ed__38_tCAEDC05F7FA47AED6F0B976C9EBC3522DBF7EB84, ___U3CU3E4__this_2)); }
	inline PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39
struct U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<>4__this
	PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<timeSincePulseStarted>5__1
	float ___U3CtimeSincePulseStartedU3E5__1_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<delayTime>5__2
	float ___U3CdelayTimeU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8, ___U3CU3E4__this_2)); }
	inline PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PulseShaderHandler_t41859CB526400641BAB752E49AAA124263DD00D5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeSincePulseStartedU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8, ___U3CtimeSincePulseStartedU3E5__1_3)); }
	inline float get_U3CtimeSincePulseStartedU3E5__1_3() const { return ___U3CtimeSincePulseStartedU3E5__1_3; }
	inline float* get_address_of_U3CtimeSincePulseStartedU3E5__1_3() { return &___U3CtimeSincePulseStartedU3E5__1_3; }
	inline void set_U3CtimeSincePulseStartedU3E5__1_3(float value)
	{
		___U3CtimeSincePulseStartedU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CdelayTimeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8, ___U3CdelayTimeU3E5__2_4)); }
	inline float get_U3CdelayTimeU3E5__2_4() const { return ___U3CdelayTimeU3E5__2_4; }
	inline float* get_address_of_U3CdelayTimeU3E5__2_4() { return &___U3CdelayTimeU3E5__2_4; }
	inline void set_U3CdelayTimeU3E5__2_4(float value)
	{
		___U3CdelayTimeU3E5__2_4 = value;
	}
};


// Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>2__current
	JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JsonPath.QueryFilter Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>4__this
	QueryFilter_t3876B2DED66ED5548C7BA7F2D5CF94119156E7CC * ___U3CU3E4__this_5;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::root
	JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * ___root_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>3__root
	JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * ___U3CU3E3__root_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_8;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6, ___U3CU3E2__current_1)); }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6, ___U3CU3E4__this_5)); }
	inline QueryFilter_t3876B2DED66ED5548C7BA7F2D5CF94119156E7CC * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline QueryFilter_t3876B2DED66ED5548C7BA7F2D5CF94119156E7CC ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(QueryFilter_t3876B2DED66ED5548C7BA7F2D5CF94119156E7CC * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_root_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6, ___root_6)); }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * get_root_6() const { return ___root_6; }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 ** get_address_of_root_6() { return &___root_6; }
	inline void set_root_6(JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * value)
	{
		___root_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6, ___U3CU3E3__root_7)); }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * get_U3CU3E3__root_7() const { return ___U3CU3E3__root_7; }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 ** get_address_of_U3CU3E3__root_7() { return &___U3CU3E3__root_7; }
	inline void set_U3CU3E3__root_7(JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * value)
	{
		___U3CU3E3__root_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6, ___U3CU3E7__wrap1_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_8() const { return ___U3CU3E7__wrap1_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_8() { return &___U3CU3E7__wrap1_8; }
	inline void set_U3CU3E7__wrap1_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_9() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6, ___U3CU3E7__wrap2_9)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_9() const { return ___U3CU3E7__wrap2_9; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_9() { return &___U3CU3E7__wrap2_9; }
	inline void set_U3CU3E7__wrap2_9(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_9), (void*)value);
	}
};


// Reader/<Start>d__0
struct U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143  : public RuntimeObject
{
public:
	// System.Int32 Reader/<Start>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Reader/<Start>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 Reader/<Start>d__0::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Reader Reader/<Start>d__0::<>4__this
	Reader_t9698DA1F0E150A0AF9C22F15B959DEEAD0E273ED * ___U3CU3E4__this_3;
	// UnityEngine.WWW Reader/<Start>d__0::<www>5__1
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__1_4;
	// Reader/TelemetryData Reader/<Start>d__0::<valid>5__2
	TelemetryData_t645C06891EF6169BB487229B0D2CB584D93082DA * ___U3CvalidU3E5__2_5;
	// System.String Reader/<Start>d__0::<readers>5__3
	String_t* ___U3CreadersU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143, ___U3CU3E4__this_3)); }
	inline Reader_t9698DA1F0E150A0AF9C22F15B959DEEAD0E273ED * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Reader_t9698DA1F0E150A0AF9C22F15B959DEEAD0E273ED ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Reader_t9698DA1F0E150A0AF9C22F15B959DEEAD0E273ED * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143, ___U3CwwwU3E5__1_4)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__1_4() const { return ___U3CwwwU3E5__1_4; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__1_4() { return &___U3CwwwU3E5__1_4; }
	inline void set_U3CwwwU3E5__1_4(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalidU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143, ___U3CvalidU3E5__2_5)); }
	inline TelemetryData_t645C06891EF6169BB487229B0D2CB584D93082DA * get_U3CvalidU3E5__2_5() const { return ___U3CvalidU3E5__2_5; }
	inline TelemetryData_t645C06891EF6169BB487229B0D2CB584D93082DA ** get_address_of_U3CvalidU3E5__2_5() { return &___U3CvalidU3E5__2_5; }
	inline void set_U3CvalidU3E5__2_5(TelemetryData_t645C06891EF6169BB487229B0D2CB584D93082DA * value)
	{
		___U3CvalidU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalidU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreadersU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143, ___U3CreadersU3E5__3_6)); }
	inline String_t* get_U3CreadersU3E5__3_6() const { return ___U3CreadersU3E5__3_6; }
	inline String_t** get_address_of_U3CreadersU3E5__3_6() { return &___U3CreadersU3E5__3_6; }
	inline void set_U3CreadersU3E5__3_6(String_t* value)
	{
		___U3CreadersU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreadersU3E5__3_6), (void*)value);
	}
};


// UniRx.RefCountDisposable/InnerDisposable
struct InnerDisposable_tCC5CCCF4D787F585851A44ADAB1BB69355074338  : public RuntimeObject
{
public:
	// UniRx.RefCountDisposable UniRx.RefCountDisposable/InnerDisposable::_parent
	RefCountDisposable_tC74E4DEB511025910CCB7482BC30F8BE6A598CFF * ____parent_0;
	// System.Object UniRx.RefCountDisposable/InnerDisposable::parentLock
	RuntimeObject * ___parentLock_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(InnerDisposable_tCC5CCCF4D787F585851A44ADAB1BB69355074338, ____parent_0)); }
	inline RefCountDisposable_tC74E4DEB511025910CCB7482BC30F8BE6A598CFF * get__parent_0() const { return ____parent_0; }
	inline RefCountDisposable_tC74E4DEB511025910CCB7482BC30F8BE6A598CFF ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RefCountDisposable_tC74E4DEB511025910CCB7482BC30F8BE6A598CFF * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_parentLock_1() { return static_cast<int32_t>(offsetof(InnerDisposable_tCC5CCCF4D787F585851A44ADAB1BB69355074338, ___parentLock_1)); }
	inline RuntimeObject * get_parentLock_1() const { return ___parentLock_1; }
	inline RuntimeObject ** get_address_of_parentLock_1() { return &___parentLock_1; }
	inline void set_parentLock_1(RuntimeObject * value)
	{
		___parentLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLock_1), (void*)value);
	}
};


// UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber
struct Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.RemoteInputPlayerConnection UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber::owner
	RemoteInputPlayerConnection_tAFE1707E641E59FBA1B8528C28DA9470FD26DC2B * ___owner_0;
	// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message> UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber::observer
	RuntimeObject* ___observer_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE, ___owner_0)); }
	inline RemoteInputPlayerConnection_tAFE1707E641E59FBA1B8528C28DA9470FD26DC2B * get_owner_0() const { return ___owner_0; }
	inline RemoteInputPlayerConnection_tAFE1707E641E59FBA1B8528C28DA9470FD26DC2B ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(RemoteInputPlayerConnection_tAFE1707E641E59FBA1B8528C28DA9470FD26DC2B * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_0), (void*)value);
	}

	inline static int32_t get_offset_of_observer_1() { return static_cast<int32_t>(offsetof(Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE, ___observer_1)); }
	inline RuntimeObject* get_observer_1() const { return ___observer_1; }
	inline RuntimeObject** get_address_of_observer_1() { return &___observer_1; }
	inline void set_observer_1(RuntimeObject* value)
	{
		___observer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_1), (void*)value);
	}
};


// System.Resources.ResourceFallbackManager/<GetEnumerator>d__5
struct U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC  : public RuntimeObject
{
public:
	// System.Int32 System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Globalization.CultureInfo System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<>2__current
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___U3CU3E2__current_1;
	// System.Resources.ResourceFallbackManager System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<>4__this
	ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 * ___U3CU3E4__this_2;
	// System.Globalization.CultureInfo System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<currentCulture>5__1
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___U3CcurrentCultureU3E5__1_3;
	// System.Boolean System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<reachedNeutralResourcesCulture>5__2
	bool ___U3CreachedNeutralResourcesCultureU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CU3E2__current_1)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CU3E4__this_2)); }
	inline ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentCultureU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CcurrentCultureU3E5__1_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_U3CcurrentCultureU3E5__1_3() const { return ___U3CcurrentCultureU3E5__1_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_U3CcurrentCultureU3E5__1_3() { return &___U3CcurrentCultureU3E5__1_3; }
	inline void set_U3CcurrentCultureU3E5__1_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___U3CcurrentCultureU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentCultureU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreachedNeutralResourcesCultureU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CreachedNeutralResourcesCultureU3E5__2_4)); }
	inline bool get_U3CreachedNeutralResourcesCultureU3E5__2_4() const { return ___U3CreachedNeutralResourcesCultureU3E5__2_4; }
	inline bool* get_address_of_U3CreachedNeutralResourcesCultureU3E5__2_4() { return &___U3CreachedNeutralResourcesCultureU3E5__2_4; }
	inline void set_U3CreachedNeutralResourcesCultureU3E5__2_4(bool value)
	{
		___U3CreachedNeutralResourcesCultureU3E5__2_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29
struct U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29::<>4__this
	RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC * ___U3CU3E4__this_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29::<index>5__1
	int32_t ___U3CindexU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E, ___U3CU3E4__this_2)); }
	inline RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CindexU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E, ___U3CindexU3E5__1_3)); }
	inline int32_t get_U3CindexU3E5__1_3() const { return ___U3CindexU3E5__1_3; }
	inline int32_t* get_address_of_U3CindexU3E5__1_3() { return &___U3CindexU3E5__1_3; }
	inline void set_U3CindexU3E5__1_3(int32_t value)
	{
		___U3CindexU3E5__1_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30
struct U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::index
	int32_t ___index_2;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>4__this
	RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6, ___U3CU3E4__this_3)); }
	inline RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// SaveLoad/<SaveTextRoll>d__5
struct U3CSaveTextRollU3Ed__5_t484C4013312D251CC274865815FC073593D132FB  : public RuntimeObject
{
public:
	// System.Int32 SaveLoad/<SaveTextRoll>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SaveLoad/<SaveTextRoll>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SaveLoad SaveLoad/<SaveTextRoll>d__5::<>4__this
	SaveLoad_t7C5CD8E17EE1D9714A83F5BCD7B299FF67A5CBCA * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveTextRollU3Ed__5_t484C4013312D251CC274865815FC073593D132FB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSaveTextRollU3Ed__5_t484C4013312D251CC274865815FC073593D132FB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSaveTextRollU3Ed__5_t484C4013312D251CC274865815FC073593D132FB, ___U3CU3E4__this_2)); }
	inline SaveLoad_t7C5CD8E17EE1D9714A83F5BCD7B299FF67A5CBCA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SaveLoad_t7C5CD8E17EE1D9714A83F5BCD7B299FF67A5CBCA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SaveLoad_t7C5CD8E17EE1D9714A83F5BCD7B299FF67A5CBCA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>2__current
	JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JsonPath.ScanFilter Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>4__this
	ScanFilter_tCB55289069493B92328B48F2BA6EA9BC43DC3BE3 * ___U3CU3E4__this_5;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<c>5__1
	JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * ___U3CcU3E5__1_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<value>5__2
	JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * ___U3CvalueU3E5__2_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C, ___U3CU3E2__current_1)); }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C, ___U3CU3E4__this_5)); }
	inline ScanFilter_tCB55289069493B92328B48F2BA6EA9BC43DC3BE3 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline ScanFilter_tCB55289069493B92328B48F2BA6EA9BC43DC3BE3 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(ScanFilter_tCB55289069493B92328B48F2BA6EA9BC43DC3BE3 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C, ___U3CcU3E5__1_6)); }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * get_U3CcU3E5__1_6() const { return ___U3CcU3E5__1_6; }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 ** get_address_of_U3CcU3E5__1_6() { return &___U3CcU3E5__1_6; }
	inline void set_U3CcU3E5__1_6(JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * value)
	{
		___U3CcU3E5__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcU3E5__1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C, ___U3CvalueU3E5__2_7)); }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * get_U3CvalueU3E5__2_7() const { return ___U3CvalueU3E5__2_7; }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 ** get_address_of_U3CvalueU3E5__2_7() { return &___U3CvalueU3E5__2_7; }
	inline void set_U3CvalueU3E5__2_7(JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * value)
	{
		___U3CvalueU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3E5__2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C, ___U3CU3E7__wrap1_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_8() const { return ___U3CU3E7__wrap1_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_8() { return &___U3CU3E7__wrap1_8; }
	inline void set_U3CU3E7__wrap1_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_8), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.ScrollableListPopulator/<UpdateListOverTime>d__33
struct U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ScrollableListPopulator/<UpdateListOverTime>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.ScrollableListPopulator/<UpdateListOverTime>d__33::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ScrollableListPopulator/<UpdateListOverTime>d__33::loaderViz
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loaderViz_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ScrollableListPopulator/<UpdateListOverTime>d__33::instancesPerFrame
	int32_t ___instancesPerFrame_3;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.ScrollableListPopulator Microsoft.MixedReality.Toolkit.Examples.Demos.ScrollableListPopulator/<UpdateListOverTime>d__33::<>4__this
	ScrollableListPopulator_tD9D48F22FB20A176B488C4A81E2CA5B479078431 * ___U3CU3E4__this_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ScrollableListPopulator/<UpdateListOverTime>d__33::<currItemCount>5__1
	int32_t ___U3CcurrItemCountU3E5__1_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ScrollableListPopulator/<UpdateListOverTime>d__33::<i>5__2
	int32_t ___U3CiU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_loaderViz_2() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32, ___loaderViz_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loaderViz_2() const { return ___loaderViz_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loaderViz_2() { return &___loaderViz_2; }
	inline void set_loaderViz_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loaderViz_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loaderViz_2), (void*)value);
	}

	inline static int32_t get_offset_of_instancesPerFrame_3() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32, ___instancesPerFrame_3)); }
	inline int32_t get_instancesPerFrame_3() const { return ___instancesPerFrame_3; }
	inline int32_t* get_address_of_instancesPerFrame_3() { return &___instancesPerFrame_3; }
	inline void set_instancesPerFrame_3(int32_t value)
	{
		___instancesPerFrame_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32, ___U3CU3E4__this_4)); }
	inline ScrollableListPopulator_tD9D48F22FB20A176B488C4A81E2CA5B479078431 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline ScrollableListPopulator_tD9D48F22FB20A176B488C4A81E2CA5B479078431 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(ScrollableListPopulator_tD9D48F22FB20A176B488C4A81E2CA5B479078431 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrItemCountU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32, ___U3CcurrItemCountU3E5__1_5)); }
	inline int32_t get_U3CcurrItemCountU3E5__1_5() const { return ___U3CcurrItemCountU3E5__1_5; }
	inline int32_t* get_address_of_U3CcurrItemCountU3E5__1_5() { return &___U3CcurrItemCountU3E5__1_5; }
	inline void set_U3CcurrItemCountU3E5__1_5(int32_t value)
	{
		___U3CcurrItemCountU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32, ___U3CiU3E5__2_6)); }
	inline int32_t get_U3CiU3E5__2_6() const { return ___U3CiU3E5__2_6; }
	inline int32_t* get_address_of_U3CiU3E5__2_6() { return &___U3CiU3E5__2_6; }
	inline void set_U3CiU3E5__2_6(int32_t value)
	{
		___U3CiU3E5__2_6 = value;
	}
};


// TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6
struct U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.ShaderPropAnimator TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6::<>4__this
	ShaderPropAnimator_t44FB2882ECA0D2C780444EB96B9550F5D245CFB8 * ___U3CU3E4__this_2;
	// System.Single TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6::<glowPower>5__1
	float ___U3CglowPowerU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D, ___U3CU3E4__this_2)); }
	inline ShaderPropAnimator_t44FB2882ECA0D2C780444EB96B9550F5D245CFB8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ShaderPropAnimator_t44FB2882ECA0D2C780444EB96B9550F5D245CFB8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ShaderPropAnimator_t44FB2882ECA0D2C780444EB96B9550F5D245CFB8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CglowPowerU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D, ___U3CglowPowerU3E5__1_3)); }
	inline float get_U3CglowPowerU3E5__1_3() const { return ___U3CglowPowerU3E5__1_3; }
	inline float* get_address_of_U3CglowPowerU3E5__1_3() { return &___U3CglowPowerU3E5__1_3; }
	inline void set_U3CglowPowerU3E5__1_3(float value)
	{
		___U3CglowPowerU3E5__1_3 = value;
	}
};


// UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>d__1
struct U3CStartU3Ed__1_tFA371E77840E7C68F30E715324F62E8003456AC0  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Vehicles.Car.SkidTrail UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>d__1::<>4__this
	SkidTrail_t60B88F0DBDDA362483950400E7D54FCF61486D97 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_tFA371E77840E7C68F30E715324F62E8003456AC0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_tFA371E77840E7C68F30E715324F62E8003456AC0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_tFA371E77840E7C68F30E715324F62E8003456AC0, ___U3CU3E4__this_2)); }
	inline SkidTrail_t60B88F0DBDDA362483950400E7D54FCF61486D97 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SkidTrail_t60B88F0DBDDA362483950400E7D54FCF61486D97 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SkidTrail_t60B88F0DBDDA362483950400E7D54FCF61486D97 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.SortedList/KeyList
struct KeyList_t90FF026A62D56329DEFC1B768358977E70839881  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/KeyList::sortedList
	SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(KeyList_t90FF026A62D56329DEFC1B768358977E70839881, ___sortedList_0)); }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sortedList_0), (void*)value);
	}
};


// System.Collections.SortedList/ValueList
struct ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ValueList::sortedList
	SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D, ___sortedList_0)); }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sortedList_0), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9
struct U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::str
	String_t* ___str_3;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>3__str
	String_t* ___U3CU3E3__str_4;
	// System.Func`2<System.Char,System.Boolean> UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::predicate
	Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * ___predicate_5;
	// System.Func`2<System.Char,System.Boolean> UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>3__predicate
	Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * ___U3CU3E3__predicate_6;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<length>5__1
	int32_t ___U3ClengthU3E5__1_7;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<position>5__2
	int32_t ___U3CpositionU3E5__2_8;
	// System.Char UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<ch>5__3
	Il2CppChar ___U3CchU3E5__3_9;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<startPosition>5__4
	int32_t ___U3CstartPositionU3E5__4_10;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<endPosition>5__5
	int32_t ___U3CendPositionU3E5__5_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_str_3() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___str_3)); }
	inline String_t* get_str_3() const { return ___str_3; }
	inline String_t** get_address_of_str_3() { return &___str_3; }
	inline void set_str_3(String_t* value)
	{
		___str_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___str_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__str_4() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CU3E3__str_4)); }
	inline String_t* get_U3CU3E3__str_4() const { return ___U3CU3E3__str_4; }
	inline String_t** get_address_of_U3CU3E3__str_4() { return &___U3CU3E3__str_4; }
	inline void set_U3CU3E3__str_4(String_t* value)
	{
		___U3CU3E3__str_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__str_4), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_5() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___predicate_5)); }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * get_predicate_5() const { return ___predicate_5; }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A ** get_address_of_predicate_5() { return &___predicate_5; }
	inline void set_predicate_5(Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * value)
	{
		___predicate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__predicate_6() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CU3E3__predicate_6)); }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * get_U3CU3E3__predicate_6() const { return ___U3CU3E3__predicate_6; }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A ** get_address_of_U3CU3E3__predicate_6() { return &___U3CU3E3__predicate_6; }
	inline void set_U3CU3E3__predicate_6(Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * value)
	{
		___U3CU3E3__predicate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__predicate_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClengthU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3ClengthU3E5__1_7)); }
	inline int32_t get_U3ClengthU3E5__1_7() const { return ___U3ClengthU3E5__1_7; }
	inline int32_t* get_address_of_U3ClengthU3E5__1_7() { return &___U3ClengthU3E5__1_7; }
	inline void set_U3ClengthU3E5__1_7(int32_t value)
	{
		___U3ClengthU3E5__1_7 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CpositionU3E5__2_8)); }
	inline int32_t get_U3CpositionU3E5__2_8() const { return ___U3CpositionU3E5__2_8; }
	inline int32_t* get_address_of_U3CpositionU3E5__2_8() { return &___U3CpositionU3E5__2_8; }
	inline void set_U3CpositionU3E5__2_8(int32_t value)
	{
		___U3CpositionU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CchU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CchU3E5__3_9)); }
	inline Il2CppChar get_U3CchU3E5__3_9() const { return ___U3CchU3E5__3_9; }
	inline Il2CppChar* get_address_of_U3CchU3E5__3_9() { return &___U3CchU3E5__3_9; }
	inline void set_U3CchU3E5__3_9(Il2CppChar value)
	{
		___U3CchU3E5__3_9 = value;
	}

	inline static int32_t get_offset_of_U3CstartPositionU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CstartPositionU3E5__4_10)); }
	inline int32_t get_U3CstartPositionU3E5__4_10() const { return ___U3CstartPositionU3E5__4_10; }
	inline int32_t* get_address_of_U3CstartPositionU3E5__4_10() { return &___U3CstartPositionU3E5__4_10; }
	inline void set_U3CstartPositionU3E5__4_10(int32_t value)
	{
		___U3CstartPositionU3E5__4_10 = value;
	}

	inline static int32_t get_offset_of_U3CendPositionU3E5__5_11() { return static_cast<int32_t>(offsetof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245, ___U3CendPositionU3E5__5_11)); }
	inline int32_t get_U3CendPositionU3E5__5_11() const { return ___U3CendPositionU3E5__5_11; }
	inline int32_t* get_address_of_U3CendPositionU3E5__5_11() { return &___U3CendPositionU3E5__5_11; }
	inline void set_U3CendPositionU3E5__5_11(int32_t value)
	{
		___U3CendPositionU3E5__5_11 = value;
	}
};


// TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81
struct U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::delay
	float ___delay_2;
	// TMPro.TMP_Dropdown TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81::<>4__this
	TMP_Dropdown_t3FD3826E105DA5CC167E721237E450A4BA855E63 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262, ___U3CU3E4__this_3)); }
	inline TMP_Dropdown_t3FD3826E105DA5CC167E721237E450A4BA855E63 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TMP_Dropdown_t3FD3826E105DA5CC167E721237E450A4BA855E63 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TMP_Dropdown_t3FD3826E105DA5CC167E721237E450A4BA855E63 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// TMPro.TMP_InputField/<CaretBlink>d__276
struct U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_InputField/<CaretBlink>d__276::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_InputField/<CaretBlink>d__276::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TMP_InputField TMPro.TMP_InputField/<CaretBlink>d__276::<>4__this
	TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___U3CU3E4__this_2;
	// System.Single TMPro.TMP_InputField/<CaretBlink>d__276::<blinkPeriod>5__1
	float ___U3CblinkPeriodU3E5__1_3;
	// System.Boolean TMPro.TMP_InputField/<CaretBlink>d__276::<blinkState>5__2
	bool ___U3CblinkStateU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C, ___U3CU3E4__this_2)); }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CblinkPeriodU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C, ___U3CblinkPeriodU3E5__1_3)); }
	inline float get_U3CblinkPeriodU3E5__1_3() const { return ___U3CblinkPeriodU3E5__1_3; }
	inline float* get_address_of_U3CblinkPeriodU3E5__1_3() { return &___U3CblinkPeriodU3E5__1_3; }
	inline void set_U3CblinkPeriodU3E5__1_3(float value)
	{
		___U3CblinkPeriodU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CblinkStateU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C, ___U3CblinkStateU3E5__2_4)); }
	inline bool get_U3CblinkStateU3E5__2_4() const { return ___U3CblinkStateU3E5__2_4; }
	inline bool* get_address_of_U3CblinkStateU3E5__2_4() { return &___U3CblinkStateU3E5__2_4; }
	inline void set_U3CblinkStateU3E5__2_4(bool value)
	{
		___U3CblinkStateU3E5__2_4 = value;
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55, ____set_0)); }
	inline HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA * get__set_0() const { return ____set_0; }
	inline HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC, ____set_0)); }
	inline HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * get__set_0() const { return ____set_0; }
	inline HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC, ____current_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__current_3() const { return ____current_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_String_0() { return static_cast<int32_t>(offsetof(Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02, ___m_String_0)); }
	inline String_t* get_m_String_0() const { return ___m_String_0; }
	inline String_t** get_address_of_m_String_0() { return &___m_String_0; }
	inline void set_m_String_0(String_t* value)
	{
		___m_String_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// TMPro.TMP_Offset
struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
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


// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UniRx.Operators.RangeObservable/Range
struct Range_t8010107F598968FC30318C0EDEBFEF2571BD18BE  : public OperatorObserverBase_2_t3D01E6F7701BADD4C4B43B448531D2E60BD6D92E
{
public:

public:
};


// System.Collections.SortedList/SyncSortedList
struct SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3  : public SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SyncSortedList::_list
	SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * ____list_10;
	// System.Object System.Collections.SortedList/SyncSortedList::_root
	RuntimeObject * ____root_11;

public:
	inline static int32_t get_offset_of__list_10() { return static_cast<int32_t>(offsetof(SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3, ____list_10)); }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * get__list_10() const { return ____list_10; }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 ** get_address_of__list_10() { return &____list_10; }
	inline void set__list_10(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * value)
	{
		____list_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_10), (void*)value);
	}

	inline static int32_t get_offset_of__root_11() { return static_cast<int32_t>(offsetof(SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3, ____root_11)); }
	inline RuntimeObject * get__root_11() const { return ____root_11; }
	inline RuntimeObject ** get_address_of__root_11() { return &____root_11; }
	inline void set__root_11(RuntimeObject * value)
	{
		____root_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____root_11), (void*)value);
	}
};


// UniRx.StableCompositeDisposable/Binary
struct Binary_tBF03B71F14BF3C408FA52EB1925D6E5166533A02  : public StableCompositeDisposable_tB71EAEB503B8665E069A236455E09985180ECACF
{
public:
	// System.Int32 UniRx.StableCompositeDisposable/Binary::disposedCallCount
	int32_t ___disposedCallCount_0;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Binary::_disposable1
	RuntimeObject* ____disposable1_1;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Binary::_disposable2
	RuntimeObject* ____disposable2_2;

public:
	inline static int32_t get_offset_of_disposedCallCount_0() { return static_cast<int32_t>(offsetof(Binary_tBF03B71F14BF3C408FA52EB1925D6E5166533A02, ___disposedCallCount_0)); }
	inline int32_t get_disposedCallCount_0() const { return ___disposedCallCount_0; }
	inline int32_t* get_address_of_disposedCallCount_0() { return &___disposedCallCount_0; }
	inline void set_disposedCallCount_0(int32_t value)
	{
		___disposedCallCount_0 = value;
	}

	inline static int32_t get_offset_of__disposable1_1() { return static_cast<int32_t>(offsetof(Binary_tBF03B71F14BF3C408FA52EB1925D6E5166533A02, ____disposable1_1)); }
	inline RuntimeObject* get__disposable1_1() const { return ____disposable1_1; }
	inline RuntimeObject** get_address_of__disposable1_1() { return &____disposable1_1; }
	inline void set__disposable1_1(RuntimeObject* value)
	{
		____disposable1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposable1_1), (void*)value);
	}

	inline static int32_t get_offset_of__disposable2_2() { return static_cast<int32_t>(offsetof(Binary_tBF03B71F14BF3C408FA52EB1925D6E5166533A02, ____disposable2_2)); }
	inline RuntimeObject* get__disposable2_2() const { return ____disposable2_2; }
	inline RuntimeObject** get_address_of__disposable2_2() { return &____disposable2_2; }
	inline void set__disposable2_2(RuntimeObject* value)
	{
		____disposable2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposable2_2), (void*)value);
	}
};


// UniRx.StableCompositeDisposable/NAry
struct NAry_tBCA7095912C3532203766C81E270E4981DEA9DDE  : public StableCompositeDisposable_tB71EAEB503B8665E069A236455E09985180ECACF
{
public:
	// System.Int32 UniRx.StableCompositeDisposable/NAry::disposedCallCount
	int32_t ___disposedCallCount_0;
	// System.Collections.Generic.List`1<System.IDisposable> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/NAry::_disposables
	List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * ____disposables_1;

public:
	inline static int32_t get_offset_of_disposedCallCount_0() { return static_cast<int32_t>(offsetof(NAry_tBCA7095912C3532203766C81E270E4981DEA9DDE, ___disposedCallCount_0)); }
	inline int32_t get_disposedCallCount_0() const { return ___disposedCallCount_0; }
	inline int32_t* get_address_of_disposedCallCount_0() { return &___disposedCallCount_0; }
	inline void set_disposedCallCount_0(int32_t value)
	{
		___disposedCallCount_0 = value;
	}

	inline static int32_t get_offset_of__disposables_1() { return static_cast<int32_t>(offsetof(NAry_tBCA7095912C3532203766C81E270E4981DEA9DDE, ____disposables_1)); }
	inline List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * get__disposables_1() const { return ____disposables_1; }
	inline List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF ** get_address_of__disposables_1() { return &____disposables_1; }
	inline void set__disposables_1(List_1_tEBCCE1452F887E3586E095B8901D1744695AF6DF * value)
	{
		____disposables_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposables_1), (void*)value);
	}
};


// UniRx.StableCompositeDisposable/NAryUnsafe
struct NAryUnsafe_tFBB231609E6DAD202A4F9F3E221432103DFE5A9C  : public StableCompositeDisposable_tB71EAEB503B8665E069A236455E09985180ECACF
{
public:
	// System.Int32 UniRx.StableCompositeDisposable/NAryUnsafe::disposedCallCount
	int32_t ___disposedCallCount_0;
	// System.IDisposable[] modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/NAryUnsafe::_disposables
	IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* ____disposables_1;

public:
	inline static int32_t get_offset_of_disposedCallCount_0() { return static_cast<int32_t>(offsetof(NAryUnsafe_tFBB231609E6DAD202A4F9F3E221432103DFE5A9C, ___disposedCallCount_0)); }
	inline int32_t get_disposedCallCount_0() const { return ___disposedCallCount_0; }
	inline int32_t* get_address_of_disposedCallCount_0() { return &___disposedCallCount_0; }
	inline void set_disposedCallCount_0(int32_t value)
	{
		___disposedCallCount_0 = value;
	}

	inline static int32_t get_offset_of__disposables_1() { return static_cast<int32_t>(offsetof(NAryUnsafe_tFBB231609E6DAD202A4F9F3E221432103DFE5A9C, ____disposables_1)); }
	inline IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* get__disposables_1() const { return ____disposables_1; }
	inline IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65** get_address_of__disposables_1() { return &____disposables_1; }
	inline void set__disposables_1(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* value)
	{
		____disposables_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposables_1), (void*)value);
	}
};


// UniRx.StableCompositeDisposable/Quaternary
struct Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D  : public StableCompositeDisposable_tB71EAEB503B8665E069A236455E09985180ECACF
{
public:
	// System.Int32 UniRx.StableCompositeDisposable/Quaternary::disposedCallCount
	int32_t ___disposedCallCount_0;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Quaternary::_disposable1
	RuntimeObject* ____disposable1_1;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Quaternary::_disposable2
	RuntimeObject* ____disposable2_2;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Quaternary::_disposable3
	RuntimeObject* ____disposable3_3;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Quaternary::_disposable4
	RuntimeObject* ____disposable4_4;

public:
	inline static int32_t get_offset_of_disposedCallCount_0() { return static_cast<int32_t>(offsetof(Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D, ___disposedCallCount_0)); }
	inline int32_t get_disposedCallCount_0() const { return ___disposedCallCount_0; }
	inline int32_t* get_address_of_disposedCallCount_0() { return &___disposedCallCount_0; }
	inline void set_disposedCallCount_0(int32_t value)
	{
		___disposedCallCount_0 = value;
	}

	inline static int32_t get_offset_of__disposable1_1() { return static_cast<int32_t>(offsetof(Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D, ____disposable1_1)); }
	inline RuntimeObject* get__disposable1_1() const { return ____disposable1_1; }
	inline RuntimeObject** get_address_of__disposable1_1() { return &____disposable1_1; }
	inline void set__disposable1_1(RuntimeObject* value)
	{
		____disposable1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposable1_1), (void*)value);
	}

	inline static int32_t get_offset_of__disposable2_2() { return static_cast<int32_t>(offsetof(Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D, ____disposable2_2)); }
	inline RuntimeObject* get__disposable2_2() const { return ____disposable2_2; }
	inline RuntimeObject** get_address_of__disposable2_2() { return &____disposable2_2; }
	inline void set__disposable2_2(RuntimeObject* value)
	{
		____disposable2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposable2_2), (void*)value);
	}

	inline static int32_t get_offset_of__disposable3_3() { return static_cast<int32_t>(offsetof(Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D, ____disposable3_3)); }
	inline RuntimeObject* get__disposable3_3() const { return ____disposable3_3; }
	inline RuntimeObject** get_address_of__disposable3_3() { return &____disposable3_3; }
	inline void set__disposable3_3(RuntimeObject* value)
	{
		____disposable3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposable3_3), (void*)value);
	}

	inline static int32_t get_offset_of__disposable4_4() { return static_cast<int32_t>(offsetof(Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D, ____disposable4_4)); }
	inline RuntimeObject* get__disposable4_4() const { return ____disposable4_4; }
	inline RuntimeObject** get_address_of__disposable4_4() { return &____disposable4_4; }
	inline void set__disposable4_4(RuntimeObject* value)
	{
		____disposable4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposable4_4), (void*)value);
	}
};


// UniRx.StableCompositeDisposable/Trinary
struct Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0  : public StableCompositeDisposable_tB71EAEB503B8665E069A236455E09985180ECACF
{
public:
	// System.Int32 UniRx.StableCompositeDisposable/Trinary::disposedCallCount
	int32_t ___disposedCallCount_0;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Trinary::_disposable1
	RuntimeObject* ____disposable1_1;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Trinary::_disposable2
	RuntimeObject* ____disposable2_2;
	// System.IDisposable modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.StableCompositeDisposable/Trinary::_disposable3
	RuntimeObject* ____disposable3_3;

public:
	inline static int32_t get_offset_of_disposedCallCount_0() { return static_cast<int32_t>(offsetof(Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0, ___disposedCallCount_0)); }
	inline int32_t get_disposedCallCount_0() const { return ___disposedCallCount_0; }
	inline int32_t* get_address_of_disposedCallCount_0() { return &___disposedCallCount_0; }
	inline void set_disposedCallCount_0(int32_t value)
	{
		___disposedCallCount_0 = value;
	}

	inline static int32_t get_offset_of__disposable1_1() { return static_cast<int32_t>(offsetof(Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0, ____disposable1_1)); }
	inline RuntimeObject* get__disposable1_1() const { return ____disposable1_1; }
	inline RuntimeObject** get_address_of__disposable1_1() { return &____disposable1_1; }
	inline void set__disposable1_1(RuntimeObject* value)
	{
		____disposable1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposable1_1), (void*)value);
	}

	inline static int32_t get_offset_of__disposable2_2() { return static_cast<int32_t>(offsetof(Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0, ____disposable2_2)); }
	inline RuntimeObject* get__disposable2_2() const { return ____disposable2_2; }
	inline RuntimeObject** get_address_of__disposable2_2() { return &____disposable2_2; }
	inline void set__disposable2_2(RuntimeObject* value)
	{
		____disposable2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposable2_2), (void*)value);
	}

	inline static int32_t get_offset_of__disposable3_3() { return static_cast<int32_t>(offsetof(Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0, ____disposable3_3)); }
	inline RuntimeObject* get__disposable3_3() const { return ____disposable3_3; }
	inline RuntimeObject** get_address_of__disposable3_3() { return &____disposable3_3; }
	inline void set__disposable3_3(RuntimeObject* value)
	{
		____disposable3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposable3_3), (void*)value);
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// Windows.Storage.Streams.InputStreamOptions
struct InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
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

// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_20)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// TMPro.TMP_TextElementType
struct TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Vertex
struct TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E 
{
public:
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_1() const { return ___uv_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_uv2_2() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv2_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv2_2() const { return ___uv2_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv2_2() { return &___uv2_2; }
	inline void set_uv2_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv2_2 = value;
	}

	inline static int32_t get_offset_of_uv4_3() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv4_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv4_3() const { return ___uv4_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv4_3() { return &___uv4_3; }
	inline void set_uv4_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv4_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___color_4)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_4() const { return ___color_4; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_4 = value;
	}
};

struct TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields
{
public:
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___k_Zero_5;

public:
	inline static int32_t get_offset_of_k_Zero_5() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields, ___k_Zero_5)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_k_Zero_5() const { return ___k_Zero_5; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_k_Zero_5() { return &___k_Zero_5; }
	inline void set_k_Zero_5(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___k_Zero_5 = value;
	}
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


// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29
struct U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>4__this
	MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<origin>5__1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoriginU3E5__1_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<t>5__2
	float ___U3CtU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425, ___U3CU3E4__this_2)); }
	inline MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MoveToTarget_tD7A73DD90660B4FFD1A50DBCF8092DED6882D2C6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425, ___U3CoriginU3E5__1_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoriginU3E5__1_3() const { return ___U3CoriginU3E5__1_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoriginU3E5__1_3() { return &___U3CoriginU3E5__1_3; }
	inline void set_U3CoriginU3E5__1_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoriginU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425, ___U3CtU3E5__2_4)); }
	inline float get_U3CtU3E5__2_4() const { return ___U3CtU3E5__2_4; }
	inline float* get_address_of_U3CtU3E5__2_4() { return &___U3CtU3E5__2_4; }
	inline void set_U3CtU3E5__2_4(float value)
	{
		___U3CtU3E5__2_4 = value;
	}
};


// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization
struct StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2 
{
public:
	// System.Int32 System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1
struct U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<>2__current
	String_t* ___U3CU3E2__current_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::includeChildren
	bool ___includeChildren_3;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<objBuffer>5__1
	StringBuilder_t * ___U3CobjBufferU3E5__1_4;
	// System.DateTime Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<dt>5__2
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CdtU3E5__2_5;
	// System.Collections.Generic.Stack`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<processStack>5__3
	Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * ___U3CprocessStackU3E5__3_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<startVertexIndex>5__4
	int32_t ___U3CstartVertexIndexU3E5__4_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<current>5__5
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CcurrentU3E5__5_8;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<meshFilter>5__6
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___U3CmeshFilterU3E5__6_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<i>5__7
	int32_t ___U3CiU3E5__7_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___target_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_2() const { return ___target_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_includeChildren_3() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___includeChildren_3)); }
	inline bool get_includeChildren_3() const { return ___includeChildren_3; }
	inline bool* get_address_of_includeChildren_3() { return &___includeChildren_3; }
	inline void set_includeChildren_3(bool value)
	{
		___includeChildren_3 = value;
	}

	inline static int32_t get_offset_of_U3CobjBufferU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CobjBufferU3E5__1_4)); }
	inline StringBuilder_t * get_U3CobjBufferU3E5__1_4() const { return ___U3CobjBufferU3E5__1_4; }
	inline StringBuilder_t ** get_address_of_U3CobjBufferU3E5__1_4() { return &___U3CobjBufferU3E5__1_4; }
	inline void set_U3CobjBufferU3E5__1_4(StringBuilder_t * value)
	{
		___U3CobjBufferU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CobjBufferU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdtU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CdtU3E5__2_5)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CdtU3E5__2_5() const { return ___U3CdtU3E5__2_5; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CdtU3E5__2_5() { return &___U3CdtU3E5__2_5; }
	inline void set_U3CdtU3E5__2_5(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CdtU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CprocessStackU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CprocessStackU3E5__3_6)); }
	inline Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * get_U3CprocessStackU3E5__3_6() const { return ___U3CprocessStackU3E5__3_6; }
	inline Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F ** get_address_of_U3CprocessStackU3E5__3_6() { return &___U3CprocessStackU3E5__3_6; }
	inline void set_U3CprocessStackU3E5__3_6(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * value)
	{
		___U3CprocessStackU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprocessStackU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartVertexIndexU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CstartVertexIndexU3E5__4_7)); }
	inline int32_t get_U3CstartVertexIndexU3E5__4_7() const { return ___U3CstartVertexIndexU3E5__4_7; }
	inline int32_t* get_address_of_U3CstartVertexIndexU3E5__4_7() { return &___U3CstartVertexIndexU3E5__4_7; }
	inline void set_U3CstartVertexIndexU3E5__4_7(int32_t value)
	{
		___U3CstartVertexIndexU3E5__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CcurrentU3E5__5_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CcurrentU3E5__5_8() const { return ___U3CcurrentU3E5__5_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CcurrentU3E5__5_8() { return &___U3CcurrentU3E5__5_8; }
	inline void set_U3CcurrentU3E5__5_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CcurrentU3E5__5_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3E5__5_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmeshFilterU3E5__6_9() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CmeshFilterU3E5__6_9)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_U3CmeshFilterU3E5__6_9() const { return ___U3CmeshFilterU3E5__6_9; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_U3CmeshFilterU3E5__6_9() { return &___U3CmeshFilterU3E5__6_9; }
	inline void set_U3CmeshFilterU3E5__6_9(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___U3CmeshFilterU3E5__6_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshFilterU3E5__6_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__7_10() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366, ___U3CiU3E5__7_10)); }
	inline int32_t get_U3CiU3E5__7_10() const { return ___U3CiU3E5__7_10; }
	inline int32_t* get_address_of_U3CiU3E5__7_10() { return &___U3CiU3E5__7_10; }
	inline void set_U3CiU3E5__7_10(int32_t value)
	{
		___U3CiU3E5__7_10 = value;
	}
};


// UniRx.Observable/<EveryCycleCore>d__311
struct U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Observable/<EveryCycleCore>d__311::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Observable/<EveryCycleCore>d__311::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.IObserver`1<System.Int64> UniRx.Observable/<EveryCycleCore>d__311::observer
	RuntimeObject* ___observer_2;
	// System.Threading.CancellationToken UniRx.Observable/<EveryCycleCore>d__311::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Int64 UniRx.Observable/<EveryCycleCore>d__311::<count>5__1
	int64_t ___U3CcountU3E5__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_observer_2() { return static_cast<int32_t>(offsetof(U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3, ___observer_2)); }
	inline RuntimeObject* get_observer_2() const { return ___observer_2; }
	inline RuntimeObject** get_address_of_observer_2() { return &___observer_2; }
	inline void set_observer_2(RuntimeObject* value)
	{
		___observer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CcountU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3, ___U3CcountU3E5__1_4)); }
	inline int64_t get_U3CcountU3E5__1_4() const { return ___U3CcountU3E5__1_4; }
	inline int64_t* get_address_of_U3CcountU3E5__1_4() { return &___U3CcountU3E5__1_4; }
	inline void set_U3CcountU3E5__1_4(int64_t value)
	{
		___U3CcountU3E5__1_4 = value;
	}
};


// UniRx.Observable/<NextFrameCore>d__316
struct U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Observable/<NextFrameCore>d__316::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Observable/<NextFrameCore>d__316::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.IObserver`1<UniRx.Unit> UniRx.Observable/<NextFrameCore>d__316::observer
	RuntimeObject* ___observer_2;
	// System.Threading.CancellationToken UniRx.Observable/<NextFrameCore>d__316::cancellation
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellation_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_observer_2() { return static_cast<int32_t>(offsetof(U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D, ___observer_2)); }
	inline RuntimeObject* get_observer_2() const { return ___observer_2; }
	inline RuntimeObject** get_address_of_observer_2() { return &___observer_2; }
	inline void set_observer_2(RuntimeObject* value)
	{
		___observer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_3() { return static_cast<int32_t>(offsetof(U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D, ___cancellation_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellation_3() const { return ___cancellation_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellation_3() { return &___cancellation_3; }
	inline void set_cancellation_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellation_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellation_3))->___m_source_0), (void*)NULL);
	}
};


// UniRx.Observable/<TimerFrameCore>d__320
struct U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Observable/<TimerFrameCore>d__320::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Observable/<TimerFrameCore>d__320::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.IObserver`1<System.Int64> UniRx.Observable/<TimerFrameCore>d__320::observer
	RuntimeObject* ___observer_2;
	// System.Int32 UniRx.Observable/<TimerFrameCore>d__320::dueTimeFrameCount
	int32_t ___dueTimeFrameCount_3;
	// System.Threading.CancellationToken UniRx.Observable/<TimerFrameCore>d__320::cancel
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancel_4;
	// System.Int32 UniRx.Observable/<TimerFrameCore>d__320::<currentFrame>5__1
	int32_t ___U3CcurrentFrameU3E5__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_observer_2() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82, ___observer_2)); }
	inline RuntimeObject* get_observer_2() const { return ___observer_2; }
	inline RuntimeObject** get_address_of_observer_2() { return &___observer_2; }
	inline void set_observer_2(RuntimeObject* value)
	{
		___observer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_2), (void*)value);
	}

	inline static int32_t get_offset_of_dueTimeFrameCount_3() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82, ___dueTimeFrameCount_3)); }
	inline int32_t get_dueTimeFrameCount_3() const { return ___dueTimeFrameCount_3; }
	inline int32_t* get_address_of_dueTimeFrameCount_3() { return &___dueTimeFrameCount_3; }
	inline void set_dueTimeFrameCount_3(int32_t value)
	{
		___dueTimeFrameCount_3 = value;
	}

	inline static int32_t get_offset_of_cancel_4() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82, ___cancel_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancel_4() const { return ___cancel_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancel_4() { return &___cancel_4; }
	inline void set_cancel_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancel_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CcurrentFrameU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82, ___U3CcurrentFrameU3E5__1_5)); }
	inline int32_t get_U3CcurrentFrameU3E5__1_5() const { return ___U3CcurrentFrameU3E5__1_5; }
	inline int32_t* get_address_of_U3CcurrentFrameU3E5__1_5() { return &___U3CcurrentFrameU3E5__1_5; }
	inline void set_U3CcurrentFrameU3E5__1_5(int32_t value)
	{
		___U3CcurrentFrameU3E5__1_5 = value;
	}
};


// UniRx.Observable/<TimerFrameCore>d__321
struct U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Observable/<TimerFrameCore>d__321::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Observable/<TimerFrameCore>d__321::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.IObserver`1<System.Int64> UniRx.Observable/<TimerFrameCore>d__321::observer
	RuntimeObject* ___observer_2;
	// System.Int32 UniRx.Observable/<TimerFrameCore>d__321::dueTimeFrameCount
	int32_t ___dueTimeFrameCount_3;
	// System.Int32 UniRx.Observable/<TimerFrameCore>d__321::periodFrameCount
	int32_t ___periodFrameCount_4;
	// System.Threading.CancellationToken UniRx.Observable/<TimerFrameCore>d__321::cancel
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancel_5;
	// System.Int64 UniRx.Observable/<TimerFrameCore>d__321::<sendCount>5__1
	int64_t ___U3CsendCountU3E5__1_6;
	// System.Int32 UniRx.Observable/<TimerFrameCore>d__321::<currentFrame>5__2
	int32_t ___U3CcurrentFrameU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_observer_2() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856, ___observer_2)); }
	inline RuntimeObject* get_observer_2() const { return ___observer_2; }
	inline RuntimeObject** get_address_of_observer_2() { return &___observer_2; }
	inline void set_observer_2(RuntimeObject* value)
	{
		___observer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_2), (void*)value);
	}

	inline static int32_t get_offset_of_dueTimeFrameCount_3() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856, ___dueTimeFrameCount_3)); }
	inline int32_t get_dueTimeFrameCount_3() const { return ___dueTimeFrameCount_3; }
	inline int32_t* get_address_of_dueTimeFrameCount_3() { return &___dueTimeFrameCount_3; }
	inline void set_dueTimeFrameCount_3(int32_t value)
	{
		___dueTimeFrameCount_3 = value;
	}

	inline static int32_t get_offset_of_periodFrameCount_4() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856, ___periodFrameCount_4)); }
	inline int32_t get_periodFrameCount_4() const { return ___periodFrameCount_4; }
	inline int32_t* get_address_of_periodFrameCount_4() { return &___periodFrameCount_4; }
	inline void set_periodFrameCount_4(int32_t value)
	{
		___periodFrameCount_4 = value;
	}

	inline static int32_t get_offset_of_cancel_5() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856, ___cancel_5)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancel_5() const { return ___cancel_5; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancel_5() { return &___cancel_5; }
	inline void set_cancel_5(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancel_5))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CsendCountU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856, ___U3CsendCountU3E5__1_6)); }
	inline int64_t get_U3CsendCountU3E5__1_6() const { return ___U3CsendCountU3E5__1_6; }
	inline int64_t* get_address_of_U3CsendCountU3E5__1_6() { return &___U3CsendCountU3E5__1_6; }
	inline void set_U3CsendCountU3E5__1_6(int64_t value)
	{
		___U3CsendCountU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentFrameU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856, ___U3CcurrentFrameU3E5__2_7)); }
	inline int32_t get_U3CcurrentFrameU3E5__2_7() const { return ___U3CcurrentFrameU3E5__2_7; }
	inline int32_t* get_address_of_U3CcurrentFrameU3E5__2_7() { return &___U3CcurrentFrameU3E5__2_7; }
	inline void set_U3CcurrentFrameU3E5__2_7(int32_t value)
	{
		___U3CcurrentFrameU3E5__2_7 = value;
	}
};


// UniRx.Observable/<WrapEnumerator>d__291
struct U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Observable/<WrapEnumerator>d__291::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Observable/<WrapEnumerator>d__291::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Collections.IEnumerator UniRx.Observable/<WrapEnumerator>d__291::enumerator
	RuntimeObject* ___enumerator_2;
	// System.IObserver`1<UniRx.Unit> UniRx.Observable/<WrapEnumerator>d__291::observer
	RuntimeObject* ___observer_3;
	// System.Threading.CancellationToken UniRx.Observable/<WrapEnumerator>d__291::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// System.Boolean UniRx.Observable/<WrapEnumerator>d__291::publishEveryYield
	bool ___publishEveryYield_5;
	// System.Boolean UniRx.Observable/<WrapEnumerator>d__291::<hasNext>5__1
	bool ___U3ChasNextU3E5__1_6;
	// System.Boolean UniRx.Observable/<WrapEnumerator>d__291::<raisedError>5__2
	bool ___U3CraisedErrorU3E5__2_7;
	// System.Exception UniRx.Observable/<WrapEnumerator>d__291::<ex>5__3
	Exception_t * ___U3CexU3E5__3_8;
	// System.IDisposable UniRx.Observable/<WrapEnumerator>d__291::<d>5__4
	RuntimeObject* ___U3CdU3E5__4_9;
	// System.IDisposable UniRx.Observable/<WrapEnumerator>d__291::<d>5__5
	RuntimeObject* ___U3CdU3E5__5_10;
	// System.Object UniRx.Observable/<WrapEnumerator>d__291::<current>5__6
	RuntimeObject * ___U3CcurrentU3E5__6_11;
	// UniRx.ICustomYieldInstructionErrorHandler UniRx.Observable/<WrapEnumerator>d__291::<customHandler>5__7
	RuntimeObject* ___U3CcustomHandlerU3E5__7_12;
	// System.IDisposable UniRx.Observable/<WrapEnumerator>d__291::<d>5__8
	RuntimeObject* ___U3CdU3E5__8_13;
	// System.IDisposable UniRx.Observable/<WrapEnumerator>d__291::<d>5__9
	RuntimeObject* ___U3CdU3E5__9_14;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_2() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___enumerator_2)); }
	inline RuntimeObject* get_enumerator_2() const { return ___enumerator_2; }
	inline RuntimeObject** get_address_of_enumerator_2() { return &___enumerator_2; }
	inline void set_enumerator_2(RuntimeObject* value)
	{
		___enumerator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_2), (void*)value);
	}

	inline static int32_t get_offset_of_observer_3() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___observer_3)); }
	inline RuntimeObject* get_observer_3() const { return ___observer_3; }
	inline RuntimeObject** get_address_of_observer_3() { return &___observer_3; }
	inline void set_observer_3(RuntimeObject* value)
	{
		___observer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_publishEveryYield_5() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___publishEveryYield_5)); }
	inline bool get_publishEveryYield_5() const { return ___publishEveryYield_5; }
	inline bool* get_address_of_publishEveryYield_5() { return &___publishEveryYield_5; }
	inline void set_publishEveryYield_5(bool value)
	{
		___publishEveryYield_5 = value;
	}

	inline static int32_t get_offset_of_U3ChasNextU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___U3ChasNextU3E5__1_6)); }
	inline bool get_U3ChasNextU3E5__1_6() const { return ___U3ChasNextU3E5__1_6; }
	inline bool* get_address_of_U3ChasNextU3E5__1_6() { return &___U3ChasNextU3E5__1_6; }
	inline void set_U3ChasNextU3E5__1_6(bool value)
	{
		___U3ChasNextU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CraisedErrorU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___U3CraisedErrorU3E5__2_7)); }
	inline bool get_U3CraisedErrorU3E5__2_7() const { return ___U3CraisedErrorU3E5__2_7; }
	inline bool* get_address_of_U3CraisedErrorU3E5__2_7() { return &___U3CraisedErrorU3E5__2_7; }
	inline void set_U3CraisedErrorU3E5__2_7(bool value)
	{
		___U3CraisedErrorU3E5__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CexU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___U3CexU3E5__3_8)); }
	inline Exception_t * get_U3CexU3E5__3_8() const { return ___U3CexU3E5__3_8; }
	inline Exception_t ** get_address_of_U3CexU3E5__3_8() { return &___U3CexU3E5__3_8; }
	inline void set_U3CexU3E5__3_8(Exception_t * value)
	{
		___U3CexU3E5__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexU3E5__3_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdU3E5__4_9() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___U3CdU3E5__4_9)); }
	inline RuntimeObject* get_U3CdU3E5__4_9() const { return ___U3CdU3E5__4_9; }
	inline RuntimeObject** get_address_of_U3CdU3E5__4_9() { return &___U3CdU3E5__4_9; }
	inline void set_U3CdU3E5__4_9(RuntimeObject* value)
	{
		___U3CdU3E5__4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdU3E5__4_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdU3E5__5_10() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___U3CdU3E5__5_10)); }
	inline RuntimeObject* get_U3CdU3E5__5_10() const { return ___U3CdU3E5__5_10; }
	inline RuntimeObject** get_address_of_U3CdU3E5__5_10() { return &___U3CdU3E5__5_10; }
	inline void set_U3CdU3E5__5_10(RuntimeObject* value)
	{
		___U3CdU3E5__5_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdU3E5__5_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentU3E5__6_11() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___U3CcurrentU3E5__6_11)); }
	inline RuntimeObject * get_U3CcurrentU3E5__6_11() const { return ___U3CcurrentU3E5__6_11; }
	inline RuntimeObject ** get_address_of_U3CcurrentU3E5__6_11() { return &___U3CcurrentU3E5__6_11; }
	inline void set_U3CcurrentU3E5__6_11(RuntimeObject * value)
	{
		___U3CcurrentU3E5__6_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3E5__6_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcustomHandlerU3E5__7_12() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___U3CcustomHandlerU3E5__7_12)); }
	inline RuntimeObject* get_U3CcustomHandlerU3E5__7_12() const { return ___U3CcustomHandlerU3E5__7_12; }
	inline RuntimeObject** get_address_of_U3CcustomHandlerU3E5__7_12() { return &___U3CcustomHandlerU3E5__7_12; }
	inline void set_U3CcustomHandlerU3E5__7_12(RuntimeObject* value)
	{
		___U3CcustomHandlerU3E5__7_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcustomHandlerU3E5__7_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdU3E5__8_13() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___U3CdU3E5__8_13)); }
	inline RuntimeObject* get_U3CdU3E5__8_13() const { return ___U3CdU3E5__8_13; }
	inline RuntimeObject** get_address_of_U3CdU3E5__8_13() { return &___U3CdU3E5__8_13; }
	inline void set_U3CdU3E5__8_13(RuntimeObject* value)
	{
		___U3CdU3E5__8_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdU3E5__8_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdU3E5__9_14() { return static_cast<int32_t>(offsetof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49, ___U3CdU3E5__9_14)); }
	inline RuntimeObject* get_U3CdU3E5__9_14() const { return ___U3CdU3E5__9_14; }
	inline RuntimeObject** get_address_of_U3CdU3E5__9_14() { return &___U3CdU3E5__9_14; }
	inline void set_U3CdU3E5__9_14(RuntimeObject* value)
	{
		___U3CdU3E5__9_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdU3E5__9_14), (void*)value);
	}
};


// UniRx.ObservableWWW/<Fetch>d__20
struct U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56  : public RuntimeObject
{
public:
	// System.Int32 UniRx.ObservableWWW/<Fetch>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.ObservableWWW/<Fetch>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.WWW UniRx.ObservableWWW/<Fetch>d__20::www
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___www_2;
	// System.IObserver`1<UnityEngine.WWW> UniRx.ObservableWWW/<Fetch>d__20::observer
	RuntimeObject* ___observer_3;
	// System.IProgress`1<System.Single> UniRx.ObservableWWW/<Fetch>d__20::reportProgress
	RuntimeObject* ___reportProgress_4;
	// System.Threading.CancellationToken UniRx.ObservableWWW/<Fetch>d__20::cancel
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancel_5;
	// UnityEngine.WWW UniRx.ObservableWWW/<Fetch>d__20::<>s__1
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CU3Es__1_6;
	// System.Exception UniRx.ObservableWWW/<Fetch>d__20::<ex>5__2
	Exception_t * ___U3CexU3E5__2_7;
	// System.Exception UniRx.ObservableWWW/<Fetch>d__20::<ex>5__3
	Exception_t * ___U3CexU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_www_2() { return static_cast<int32_t>(offsetof(U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56, ___www_2)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_www_2() const { return ___www_2; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_www_2() { return &___www_2; }
	inline void set_www_2(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___www_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___www_2), (void*)value);
	}

	inline static int32_t get_offset_of_observer_3() { return static_cast<int32_t>(offsetof(U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56, ___observer_3)); }
	inline RuntimeObject* get_observer_3() const { return ___observer_3; }
	inline RuntimeObject** get_address_of_observer_3() { return &___observer_3; }
	inline void set_observer_3(RuntimeObject* value)
	{
		___observer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_3), (void*)value);
	}

	inline static int32_t get_offset_of_reportProgress_4() { return static_cast<int32_t>(offsetof(U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56, ___reportProgress_4)); }
	inline RuntimeObject* get_reportProgress_4() const { return ___reportProgress_4; }
	inline RuntimeObject** get_address_of_reportProgress_4() { return &___reportProgress_4; }
	inline void set_reportProgress_4(RuntimeObject* value)
	{
		___reportProgress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reportProgress_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_5() { return static_cast<int32_t>(offsetof(U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56, ___cancel_5)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancel_5() const { return ___cancel_5; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancel_5() { return &___cancel_5; }
	inline void set_cancel_5(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancel_5))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56, ___U3CU3Es__1_6)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CU3Es__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56, ___U3CexU3E5__2_7)); }
	inline Exception_t * get_U3CexU3E5__2_7() const { return ___U3CexU3E5__2_7; }
	inline Exception_t ** get_address_of_U3CexU3E5__2_7() { return &___U3CexU3E5__2_7; }
	inline void set_U3CexU3E5__2_7(Exception_t * value)
	{
		___U3CexU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexU3E5__2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56, ___U3CexU3E5__3_8)); }
	inline Exception_t * get_U3CexU3E5__3_8() const { return ___U3CexU3E5__3_8; }
	inline Exception_t ** get_address_of_U3CexU3E5__3_8() { return &___U3CexU3E5__3_8; }
	inline void set_U3CexU3E5__3_8(Exception_t * value)
	{
		___U3CexU3E5__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexU3E5__3_8), (void*)value);
	}
};


// UniRx.ObservableWWW/<FetchAssetBundle>d__23
struct U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062  : public RuntimeObject
{
public:
	// System.Int32 UniRx.ObservableWWW/<FetchAssetBundle>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.ObservableWWW/<FetchAssetBundle>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchAssetBundle>d__23::www
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___www_2;
	// System.IObserver`1<UnityEngine.AssetBundle> UniRx.ObservableWWW/<FetchAssetBundle>d__23::observer
	RuntimeObject* ___observer_3;
	// System.IProgress`1<System.Single> UniRx.ObservableWWW/<FetchAssetBundle>d__23::reportProgress
	RuntimeObject* ___reportProgress_4;
	// System.Threading.CancellationToken UniRx.ObservableWWW/<FetchAssetBundle>d__23::cancel
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancel_5;
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchAssetBundle>d__23::<>s__1
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CU3Es__1_6;
	// System.Exception UniRx.ObservableWWW/<FetchAssetBundle>d__23::<ex>5__2
	Exception_t * ___U3CexU3E5__2_7;
	// System.Exception UniRx.ObservableWWW/<FetchAssetBundle>d__23::<ex>5__3
	Exception_t * ___U3CexU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_www_2() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062, ___www_2)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_www_2() const { return ___www_2; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_www_2() { return &___www_2; }
	inline void set_www_2(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___www_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___www_2), (void*)value);
	}

	inline static int32_t get_offset_of_observer_3() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062, ___observer_3)); }
	inline RuntimeObject* get_observer_3() const { return ___observer_3; }
	inline RuntimeObject** get_address_of_observer_3() { return &___observer_3; }
	inline void set_observer_3(RuntimeObject* value)
	{
		___observer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_3), (void*)value);
	}

	inline static int32_t get_offset_of_reportProgress_4() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062, ___reportProgress_4)); }
	inline RuntimeObject* get_reportProgress_4() const { return ___reportProgress_4; }
	inline RuntimeObject** get_address_of_reportProgress_4() { return &___reportProgress_4; }
	inline void set_reportProgress_4(RuntimeObject* value)
	{
		___reportProgress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reportProgress_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_5() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062, ___cancel_5)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancel_5() const { return ___cancel_5; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancel_5() { return &___cancel_5; }
	inline void set_cancel_5(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancel_5))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062, ___U3CU3Es__1_6)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CU3Es__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062, ___U3CexU3E5__2_7)); }
	inline Exception_t * get_U3CexU3E5__2_7() const { return ___U3CexU3E5__2_7; }
	inline Exception_t ** get_address_of_U3CexU3E5__2_7() { return &___U3CexU3E5__2_7; }
	inline void set_U3CexU3E5__2_7(Exception_t * value)
	{
		___U3CexU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexU3E5__2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062, ___U3CexU3E5__3_8)); }
	inline Exception_t * get_U3CexU3E5__3_8() const { return ___U3CexU3E5__3_8; }
	inline Exception_t ** get_address_of_U3CexU3E5__3_8() { return &___U3CexU3E5__3_8; }
	inline void set_U3CexU3E5__3_8(Exception_t * value)
	{
		___U3CexU3E5__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexU3E5__3_8), (void*)value);
	}
};


// UniRx.ObservableWWW/<FetchBytes>d__22
struct U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B  : public RuntimeObject
{
public:
	// System.Int32 UniRx.ObservableWWW/<FetchBytes>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.ObservableWWW/<FetchBytes>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchBytes>d__22::www
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___www_2;
	// System.IObserver`1<System.Byte[]> UniRx.ObservableWWW/<FetchBytes>d__22::observer
	RuntimeObject* ___observer_3;
	// System.IProgress`1<System.Single> UniRx.ObservableWWW/<FetchBytes>d__22::reportProgress
	RuntimeObject* ___reportProgress_4;
	// System.Threading.CancellationToken UniRx.ObservableWWW/<FetchBytes>d__22::cancel
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancel_5;
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchBytes>d__22::<>s__1
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CU3Es__1_6;
	// System.Exception UniRx.ObservableWWW/<FetchBytes>d__22::<ex>5__2
	Exception_t * ___U3CexU3E5__2_7;
	// System.Exception UniRx.ObservableWWW/<FetchBytes>d__22::<ex>5__3
	Exception_t * ___U3CexU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_www_2() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B, ___www_2)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_www_2() const { return ___www_2; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_www_2() { return &___www_2; }
	inline void set_www_2(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___www_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___www_2), (void*)value);
	}

	inline static int32_t get_offset_of_observer_3() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B, ___observer_3)); }
	inline RuntimeObject* get_observer_3() const { return ___observer_3; }
	inline RuntimeObject** get_address_of_observer_3() { return &___observer_3; }
	inline void set_observer_3(RuntimeObject* value)
	{
		___observer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_3), (void*)value);
	}

	inline static int32_t get_offset_of_reportProgress_4() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B, ___reportProgress_4)); }
	inline RuntimeObject* get_reportProgress_4() const { return ___reportProgress_4; }
	inline RuntimeObject** get_address_of_reportProgress_4() { return &___reportProgress_4; }
	inline void set_reportProgress_4(RuntimeObject* value)
	{
		___reportProgress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reportProgress_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_5() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B, ___cancel_5)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancel_5() const { return ___cancel_5; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancel_5() { return &___cancel_5; }
	inline void set_cancel_5(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancel_5))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B, ___U3CU3Es__1_6)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CU3Es__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B, ___U3CexU3E5__2_7)); }
	inline Exception_t * get_U3CexU3E5__2_7() const { return ___U3CexU3E5__2_7; }
	inline Exception_t ** get_address_of_U3CexU3E5__2_7() { return &___U3CexU3E5__2_7; }
	inline void set_U3CexU3E5__2_7(Exception_t * value)
	{
		___U3CexU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexU3E5__2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B, ___U3CexU3E5__3_8)); }
	inline Exception_t * get_U3CexU3E5__3_8() const { return ___U3CexU3E5__3_8; }
	inline Exception_t ** get_address_of_U3CexU3E5__3_8() { return &___U3CexU3E5__3_8; }
	inline void set_U3CexU3E5__3_8(Exception_t * value)
	{
		___U3CexU3E5__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexU3E5__3_8), (void*)value);
	}
};


// UniRx.ObservableWWW/<FetchText>d__21
struct U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40  : public RuntimeObject
{
public:
	// System.Int32 UniRx.ObservableWWW/<FetchText>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.ObservableWWW/<FetchText>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchText>d__21::www
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___www_2;
	// System.IObserver`1<System.String> UniRx.ObservableWWW/<FetchText>d__21::observer
	RuntimeObject* ___observer_3;
	// System.IProgress`1<System.Single> UniRx.ObservableWWW/<FetchText>d__21::reportProgress
	RuntimeObject* ___reportProgress_4;
	// System.Threading.CancellationToken UniRx.ObservableWWW/<FetchText>d__21::cancel
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancel_5;
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchText>d__21::<>s__1
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CU3Es__1_6;
	// System.Exception UniRx.ObservableWWW/<FetchText>d__21::<ex>5__2
	Exception_t * ___U3CexU3E5__2_7;
	// System.Exception UniRx.ObservableWWW/<FetchText>d__21::<ex>5__3
	Exception_t * ___U3CexU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_www_2() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40, ___www_2)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_www_2() const { return ___www_2; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_www_2() { return &___www_2; }
	inline void set_www_2(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___www_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___www_2), (void*)value);
	}

	inline static int32_t get_offset_of_observer_3() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40, ___observer_3)); }
	inline RuntimeObject* get_observer_3() const { return ___observer_3; }
	inline RuntimeObject** get_address_of_observer_3() { return &___observer_3; }
	inline void set_observer_3(RuntimeObject* value)
	{
		___observer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_3), (void*)value);
	}

	inline static int32_t get_offset_of_reportProgress_4() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40, ___reportProgress_4)); }
	inline RuntimeObject* get_reportProgress_4() const { return ___reportProgress_4; }
	inline RuntimeObject** get_address_of_reportProgress_4() { return &___reportProgress_4; }
	inline void set_reportProgress_4(RuntimeObject* value)
	{
		___reportProgress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reportProgress_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_5() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40, ___cancel_5)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancel_5() const { return ___cancel_5; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancel_5() { return &___cancel_5; }
	inline void set_cancel_5(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancel_5))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40, ___U3CU3Es__1_6)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CU3Es__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40, ___U3CexU3E5__2_7)); }
	inline Exception_t * get_U3CexU3E5__2_7() const { return ___U3CexU3E5__2_7; }
	inline Exception_t ** get_address_of_U3CexU3E5__2_7() { return &___U3CexU3E5__2_7; }
	inline void set_U3CexU3E5__2_7(Exception_t * value)
	{
		___U3CexU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexU3E5__2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40, ___U3CexU3E5__3_8)); }
	inline Exception_t * get_U3CexU3E5__3_8() const { return ___U3CexU3E5__3_8; }
	inline Exception_t ** get_address_of_U3CexU3E5__3_8() { return &___U3CexU3E5__3_8; }
	inline void set_U3CexU3E5__3_8(Exception_t * value)
	{
		___U3CexU3E5__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexU3E5__3_8), (void*)value);
	}
};


// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4
struct U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.ParticleSystemDestroyer UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<>4__this
	ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * ___U3CU3E4__this_2;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<systems>5__1
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ___U3CsystemsU3E5__1_3;
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<stopTime>5__2
	float ___U3CstopTimeU3E5__2_4;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<>s__3
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ___U3CU3Es__3_5;
	// System.Int32 UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<>s__4
	int32_t ___U3CU3Es__4_6;
	// UnityEngine.ParticleSystem UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<system>5__5
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___U3CsystemU3E5__5_7;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<>s__6
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ___U3CU3Es__6_8;
	// System.Int32 UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<>s__7
	int32_t ___U3CU3Es__7_9;
	// UnityEngine.ParticleSystem UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<system>5__8
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___U3CsystemU3E5__8_10;
	// UnityEngine.ParticleSystem/EmissionModule UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<emission>5__9
	EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  ___U3CemissionU3E5__9_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CU3E4__this_2)); }
	inline ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsystemsU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CsystemsU3E5__1_3)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get_U3CsystemsU3E5__1_3() const { return ___U3CsystemsU3E5__1_3; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of_U3CsystemsU3E5__1_3() { return &___U3CsystemsU3E5__1_3; }
	inline void set_U3CsystemsU3E5__1_3(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		___U3CsystemsU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsystemsU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstopTimeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CstopTimeU3E5__2_4)); }
	inline float get_U3CstopTimeU3E5__2_4() const { return ___U3CstopTimeU3E5__2_4; }
	inline float* get_address_of_U3CstopTimeU3E5__2_4() { return &___U3CstopTimeU3E5__2_4; }
	inline void set_U3CstopTimeU3E5__2_4(float value)
	{
		___U3CstopTimeU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__3_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CU3Es__3_5)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get_U3CU3Es__3_5() const { return ___U3CU3Es__3_5; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of_U3CU3Es__3_5() { return &___U3CU3Es__3_5; }
	inline void set_U3CU3Es__3_5(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		___U3CU3Es__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__4_6() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CU3Es__4_6)); }
	inline int32_t get_U3CU3Es__4_6() const { return ___U3CU3Es__4_6; }
	inline int32_t* get_address_of_U3CU3Es__4_6() { return &___U3CU3Es__4_6; }
	inline void set_U3CU3Es__4_6(int32_t value)
	{
		___U3CU3Es__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CsystemU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CsystemU3E5__5_7)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_U3CsystemU3E5__5_7() const { return ___U3CsystemU3E5__5_7; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_U3CsystemU3E5__5_7() { return &___U3CsystemU3E5__5_7; }
	inline void set_U3CsystemU3E5__5_7(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___U3CsystemU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsystemU3E5__5_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__6_8() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CU3Es__6_8)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get_U3CU3Es__6_8() const { return ___U3CU3Es__6_8; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of_U3CU3Es__6_8() { return &___U3CU3Es__6_8; }
	inline void set_U3CU3Es__6_8(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		___U3CU3Es__6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__6_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__7_9() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CU3Es__7_9)); }
	inline int32_t get_U3CU3Es__7_9() const { return ___U3CU3Es__7_9; }
	inline int32_t* get_address_of_U3CU3Es__7_9() { return &___U3CU3Es__7_9; }
	inline void set_U3CU3Es__7_9(int32_t value)
	{
		___U3CU3Es__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CsystemU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CsystemU3E5__8_10)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_U3CsystemU3E5__8_10() const { return ___U3CsystemU3E5__8_10; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_U3CsystemU3E5__8_10() { return &___U3CsystemU3E5__8_10; }
	inline void set_U3CsystemU3E5__8_10(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___U3CsystemU3E5__8_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsystemU3E5__8_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CemissionU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CemissionU3E5__9_11)); }
	inline EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  get_U3CemissionU3E5__9_11() const { return ___U3CemissionU3E5__9_11; }
	inline EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * get_address_of_U3CemissionU3E5__9_11() { return &___U3CemissionU3E5__9_11; }
	inline void set_U3CemissionU3E5__9_11(EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  value)
	{
		___U3CemissionU3E5__9_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CemissionU3E5__9_11))->___m_ParticleSystem_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7
struct U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<inputSources>5__1
	HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA * ___U3CinputSourcesU3E5__1_3;
	// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>s__2
	Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55  ___U3CU3Es__2_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<inputSource>5__3
	RuntimeObject* ___U3CinputSourceU3E5__3_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>s__4
	IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C* ___U3CU3Es__4_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>s__5
	int32_t ___U3CU3Es__5_7;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<pointer>5__6
	RuntimeObject* ___U3CpointerU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CinputSourcesU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CinputSourcesU3E5__1_3)); }
	inline HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA * get_U3CinputSourcesU3E5__1_3() const { return ___U3CinputSourcesU3E5__1_3; }
	inline HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA ** get_address_of_U3CinputSourcesU3E5__1_3() { return &___U3CinputSourcesU3E5__1_3; }
	inline void set_U3CinputSourcesU3E5__1_3(HashSet_1_tA041F36FB3C3242D919652844C1C7580D00CCEAA * value)
	{
		___U3CinputSourcesU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputSourcesU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_4() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3Es__2_4)); }
	inline Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55  get_U3CU3Es__2_4() const { return ___U3CU3Es__2_4; }
	inline Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55 * get_address_of_U3CU3Es__2_4() { return &___U3CU3Es__2_4; }
	inline void set_U3CU3Es__2_4(Enumerator_tAB7E68F0BB8C5EF7B2BE6E3A25413F6058E5FC55  value)
	{
		___U3CU3Es__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__2_4))->____set_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__2_4))->____current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CinputSourceU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CinputSourceU3E5__3_5)); }
	inline RuntimeObject* get_U3CinputSourceU3E5__3_5() const { return ___U3CinputSourceU3E5__3_5; }
	inline RuntimeObject** get_address_of_U3CinputSourceU3E5__3_5() { return &___U3CinputSourceU3E5__3_5; }
	inline void set_U3CinputSourceU3E5__3_5(RuntimeObject* value)
	{
		___U3CinputSourceU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputSourceU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__4_6() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3Es__4_6)); }
	inline IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C* get_U3CU3Es__4_6() const { return ___U3CU3Es__4_6; }
	inline IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C** get_address_of_U3CU3Es__4_6() { return &___U3CU3Es__4_6; }
	inline void set_U3CU3Es__4_6(IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C* value)
	{
		___U3CU3Es__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__5_7() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CU3Es__5_7)); }
	inline int32_t get_U3CU3Es__5_7() const { return ___U3CU3Es__5_7; }
	inline int32_t* get_address_of_U3CU3Es__5_7() { return &___U3CU3Es__5_7; }
	inline void set_U3CU3Es__5_7(int32_t value)
	{
		___U3CU3Es__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030, ___U3CpointerU3E5__6_8)); }
	inline RuntimeObject* get_U3CpointerU3E5__6_8() const { return ___U3CpointerU3E5__6_8; }
	inline RuntimeObject** get_address_of_U3CpointerU3E5__6_8() { return &___U3CpointerU3E5__6_8; }
	inline void set_U3CpointerU3E5__6_8(RuntimeObject* value)
	{
		___U3CpointerU3E5__6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerU3E5__6_8), (void*)value);
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31
struct U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<>4__this
	RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<centeredOrigin>5__1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CcenteredOriginU3E5__1_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<targetOrigin>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CtargetOriginU3E5__2_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<t>5__3
	float ___U3CtU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6, ___U3CU3E4__this_2)); }
	inline RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RotateAroundPoint_tCF3F4C80DFE954BA9128E20B09F198E34AC7F3AC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenteredOriginU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6, ___U3CcenteredOriginU3E5__1_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CcenteredOriginU3E5__1_3() const { return ___U3CcenteredOriginU3E5__1_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CcenteredOriginU3E5__1_3() { return &___U3CcenteredOriginU3E5__1_3; }
	inline void set_U3CcenteredOriginU3E5__1_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CcenteredOriginU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CtargetOriginU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6, ___U3CtargetOriginU3E5__2_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CtargetOriginU3E5__2_4() const { return ___U3CtargetOriginU3E5__2_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CtargetOriginU3E5__2_4() { return &___U3CtargetOriginU3E5__2_4; }
	inline void set_U3CtargetOriginU3E5__2_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CtargetOriginU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6, ___U3CtU3E5__3_5)); }
	inline float get_U3CtU3E5__3_5() const { return ___U3CtU3E5__3_5; }
	inline float* get_address_of_U3CtU3E5__3_5() { return &___U3CtU3E5__3_5; }
	inline void set_U3CtU3E5__3_5(float value)
	{
		___U3CtU3E5__3_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2
struct U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>2__current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<i>5__1
	int32_t ___U3CiU3E5__1_3;
	// UnityEngine.SceneManagement.Scene Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<loadedScene>5__2
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___U3CloadedSceneU3E5__2_4;
	// UnityEngine.GameObject[] Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>s__3
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___U3CU3Es__3_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>s__4
	int32_t ___U3CU3Es__4_6;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<rootGameObject>5__5
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrootGameObjectU3E5__5_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CU3E2__current_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CloadedSceneU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CloadedSceneU3E5__2_4)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_U3CloadedSceneU3E5__2_4() const { return ___U3CloadedSceneU3E5__2_4; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_U3CloadedSceneU3E5__2_4() { return &___U3CloadedSceneU3E5__2_4; }
	inline void set_U3CloadedSceneU3E5__2_4(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___U3CloadedSceneU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__3_5() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CU3Es__3_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_U3CU3Es__3_5() const { return ___U3CU3Es__3_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_U3CU3Es__3_5() { return &___U3CU3Es__3_5; }
	inline void set_U3CU3Es__3_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___U3CU3Es__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__4_6() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CU3Es__4_6)); }
	inline int32_t get_U3CU3Es__4_6() const { return ___U3CU3Es__4_6; }
	inline int32_t* get_address_of_U3CU3Es__4_6() { return &___U3CU3Es__4_6; }
	inline void set_U3CU3Es__4_6(int32_t value)
	{
		___U3CU3Es__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CrootGameObjectU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CrootGameObjectU3E5__5_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrootGameObjectU3E5__5_7() const { return ___U3CrootGameObjectU3E5__5_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrootGameObjectU3E5__5_7() { return &___U3CrootGameObjectU3E5__5_7; }
	inline void set_U3CrootGameObjectU3E5__5_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrootGameObjectU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrootGameObjectU3E5__5_7), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4::<>2__current
	JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4::<value>5__1
	JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * ___U3CvalueU3E5__1_5;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4::<c>5__2
	JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * ___U3CcU3E5__2_6;
	// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4::<>4__this
	ScanMultipleFilter_t6A328559446AE6C9A1CE1789E70118A531DEDAAD * ___U3CU3E4__this_7;
	// Newtonsoft.Json.Linq.JProperty Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4::<e>5__3
	JProperty_tED549CBBDED54863DC2E2F678E778A21F086691A * ___U3CeU3E5__3_8;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_9;
	// System.Collections.Generic.List`1/Enumerator<System.String> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4::<>7__wrap2
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  ___U3CU3E7__wrap2_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30, ___U3CU3E2__current_1)); }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30, ___U3CvalueU3E5__1_5)); }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * get_U3CvalueU3E5__1_5() const { return ___U3CvalueU3E5__1_5; }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 ** get_address_of_U3CvalueU3E5__1_5() { return &___U3CvalueU3E5__1_5; }
	inline void set_U3CvalueU3E5__1_5(JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * value)
	{
		___U3CvalueU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3E5__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30, ___U3CcU3E5__2_6)); }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * get_U3CcU3E5__2_6() const { return ___U3CcU3E5__2_6; }
	inline JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 ** get_address_of_U3CcU3E5__2_6() { return &___U3CcU3E5__2_6; }
	inline void set_U3CcU3E5__2_6(JToken_tA344FAE27768DE574B273141849E3D6CB86E9B11 * value)
	{
		___U3CcU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcU3E5__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30, ___U3CU3E4__this_7)); }
	inline ScanMultipleFilter_t6A328559446AE6C9A1CE1789E70118A531DEDAAD * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline ScanMultipleFilter_t6A328559446AE6C9A1CE1789E70118A531DEDAAD ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(ScanMultipleFilter_t6A328559446AE6C9A1CE1789E70118A531DEDAAD * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30, ___U3CeU3E5__3_8)); }
	inline JProperty_tED549CBBDED54863DC2E2F678E778A21F086691A * get_U3CeU3E5__3_8() const { return ___U3CeU3E5__3_8; }
	inline JProperty_tED549CBBDED54863DC2E2F678E778A21F086691A ** get_address_of_U3CeU3E5__3_8() { return &___U3CeU3E5__3_8; }
	inline void set_U3CeU3E5__3_8(JProperty_tED549CBBDED54863DC2E2F678E778A21F086691A * value)
	{
		___U3CeU3E5__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__3_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_9() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30, ___U3CU3E7__wrap1_9)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_9() const { return ___U3CU3E7__wrap1_9; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_9() { return &___U3CU3E7__wrap1_9; }
	inline void set_U3CU3E7__wrap1_9(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_10() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30, ___U3CU3E7__wrap2_10)); }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  get_U3CU3E7__wrap2_10() const { return ___U3CU3E7__wrap2_10; }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * get_address_of_U3CU3E7__wrap2_10() { return &___U3CU3E7__wrap2_10; }
	inline void set_U3CU3E7__wrap2_10(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  value)
	{
		___U3CU3E7__wrap2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap2_10))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap2_10))->___current_3), (void*)NULL);
		#endif
	}
};


// UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
struct U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_2;
	// UnityEngine.Camera UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_3;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>4__this
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___U3CU3E4__this_4;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<localMousePos>5__1
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3ClocalMousePosU3E5__1_5;
	// System.Single UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<axisCoordinate>5__2
	float ___U3CaxisCoordinateU3E5__2_6;
	// System.Single UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<change>5__3
	float ___U3CchangeU3E5__3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_screenPosition_2() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___screenPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_2() const { return ___screenPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_2() { return &___screenPosition_2; }
	inline void set_screenPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_2 = value;
	}

	inline static int32_t get_offset_of_camera_3() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___camera_3)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_3() const { return ___camera_3; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_3() { return &___camera_3; }
	inline void set_camera_3(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E4__this_4)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalMousePosU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3ClocalMousePosU3E5__1_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3ClocalMousePosU3E5__1_5() const { return ___U3ClocalMousePosU3E5__1_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3ClocalMousePosU3E5__1_5() { return &___U3ClocalMousePosU3E5__1_5; }
	inline void set_U3ClocalMousePosU3E5__1_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3ClocalMousePosU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CaxisCoordinateU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CaxisCoordinateU3E5__2_6)); }
	inline float get_U3CaxisCoordinateU3E5__2_6() const { return ___U3CaxisCoordinateU3E5__2_6; }
	inline float* get_address_of_U3CaxisCoordinateU3E5__2_6() { return &___U3CaxisCoordinateU3E5__2_6; }
	inline void set_U3CaxisCoordinateU3E5__2_6(float value)
	{
		___U3CaxisCoordinateU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CchangeU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CchangeU3E5__3_7)); }
	inline float get_U3CchangeU3E5__3_7() const { return ___U3CchangeU3E5__3_7; }
	inline float* get_address_of_U3CchangeU3E5__3_7() { return &___U3CchangeU3E5__3_7; }
	inline void set_U3CchangeU3E5__3_7(float value)
	{
		___U3CchangeU3E5__3_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204
struct U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::initialPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialPos_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::finalPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___finalPos_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::curve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve_4;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::time
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___time_5;
	// System.Action Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::callback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback_6;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>4__this
	ScrollingObjectCollection_t654C8DCE212688BB4618E80C08EE885EF3D19DF8 * ___U3CU3E4__this_7;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<counter>5__1
	float ___U3CcounterU3E5__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_initialPos_2() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55, ___initialPos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialPos_2() const { return ___initialPos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialPos_2() { return &___initialPos_2; }
	inline void set_initialPos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialPos_2 = value;
	}

	inline static int32_t get_offset_of_finalPos_3() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55, ___finalPos_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_finalPos_3() const { return ___finalPos_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_finalPos_3() { return &___finalPos_3; }
	inline void set_finalPos_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___finalPos_3 = value;
	}

	inline static int32_t get_offset_of_curve_4() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55, ___curve_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_curve_4() const { return ___curve_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_curve_4() { return &___curve_4; }
	inline void set_curve_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___curve_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curve_4), (void*)value);
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55, ___time_5)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_time_5() const { return ___time_5; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_callback_6() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55, ___callback_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_callback_6() const { return ___callback_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_callback_6() { return &___callback_6; }
	inline void set_callback_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___callback_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55, ___U3CU3E4__this_7)); }
	inline ScrollingObjectCollection_t654C8DCE212688BB4618E80C08EE885EF3D19DF8 * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline ScrollingObjectCollection_t654C8DCE212688BB4618E80C08EE885EF3D19DF8 ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(ScrollingObjectCollection_t654C8DCE212688BB4618E80C08EE885EF3D19DF8 * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcounterU3E5__1_8() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55, ___U3CcounterU3E5__1_8)); }
	inline float get_U3CcounterU3E5__1_8() const { return ___U3CcounterU3E5__1_8; }
	inline float* get_address_of_U3CcounterU3E5__1_8() { return &___U3CcounterU3E5__1_8; }
	inline void set_U3CcounterU3E5__1_8(float value)
	{
		___U3CcounterU3E5__1_8 = value;
	}
};


// TMPro.Examples.SkewTextExample/<WarpText>d__7
struct U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.SkewTextExample/<WarpText>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.SkewTextExample/<WarpText>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.SkewTextExample TMPro.Examples.SkewTextExample/<WarpText>d__7::<>4__this
	SkewTextExample_tA9F165D1BE969ED73FB86CA6C641386C22F1EE07 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3[] TMPro.Examples.SkewTextExample/<WarpText>d__7::<vertices>5__1
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CverticesU3E5__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.SkewTextExample/<WarpText>d__7::<matrix>5__2
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___U3CmatrixU3E5__2_4;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>d__7::<old_CurveScale>5__3
	float ___U3Cold_CurveScaleU3E5__3_5;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>d__7::<old_ShearValue>5__4
	float ___U3Cold_ShearValueU3E5__4_6;
	// UnityEngine.AnimationCurve TMPro.Examples.SkewTextExample/<WarpText>d__7::<old_curve>5__5
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___U3Cold_curveU3E5__5_7;
	// TMPro.TMP_TextInfo TMPro.Examples.SkewTextExample/<WarpText>d__7::<textInfo>5__6
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___U3CtextInfoU3E5__6_8;
	// System.Int32 TMPro.Examples.SkewTextExample/<WarpText>d__7::<characterCount>5__7
	int32_t ___U3CcharacterCountU3E5__7_9;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>d__7::<boundsMinX>5__8
	float ___U3CboundsMinXU3E5__8_10;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>d__7::<boundsMaxX>5__9
	float ___U3CboundsMaxXU3E5__9_11;
	// System.Int32 TMPro.Examples.SkewTextExample/<WarpText>d__7::<i>5__10
	int32_t ___U3CiU3E5__10_12;
	// System.Int32 TMPro.Examples.SkewTextExample/<WarpText>d__7::<vertexIndex>5__11
	int32_t ___U3CvertexIndexU3E5__11_13;
	// System.Int32 TMPro.Examples.SkewTextExample/<WarpText>d__7::<materialIndex>5__12
	int32_t ___U3CmaterialIndexU3E5__12_14;
	// UnityEngine.Vector3 TMPro.Examples.SkewTextExample/<WarpText>d__7::<offsetToMidBaseline>5__13
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoffsetToMidBaselineU3E5__13_15;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>d__7::<shear_value>5__14
	float ___U3Cshear_valueU3E5__14_16;
	// UnityEngine.Vector3 TMPro.Examples.SkewTextExample/<WarpText>d__7::<topShear>5__15
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CtopShearU3E5__15_17;
	// UnityEngine.Vector3 TMPro.Examples.SkewTextExample/<WarpText>d__7::<bottomShear>5__16
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CbottomShearU3E5__16_18;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>d__7::<x0>5__17
	float ___U3Cx0U3E5__17_19;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>d__7::<x1>5__18
	float ___U3Cx1U3E5__18_20;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>d__7::<y0>5__19
	float ___U3Cy0U3E5__19_21;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>d__7::<y1>5__20
	float ___U3Cy1U3E5__20_22;
	// UnityEngine.Vector3 TMPro.Examples.SkewTextExample/<WarpText>d__7::<horizontal>5__21
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3ChorizontalU3E5__21_23;
	// UnityEngine.Vector3 TMPro.Examples.SkewTextExample/<WarpText>d__7::<tangent>5__22
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CtangentU3E5__22_24;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>d__7::<dot>5__23
	float ___U3CdotU3E5__23_25;
	// UnityEngine.Vector3 TMPro.Examples.SkewTextExample/<WarpText>d__7::<cross>5__24
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CcrossU3E5__24_26;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>d__7::<angle>5__25
	float ___U3CangleU3E5__25_27;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CU3E4__this_2)); }
	inline SkewTextExample_tA9F165D1BE969ED73FB86CA6C641386C22F1EE07 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SkewTextExample_tA9F165D1BE969ED73FB86CA6C641386C22F1EE07 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SkewTextExample_tA9F165D1BE969ED73FB86CA6C641386C22F1EE07 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CverticesU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CverticesU3E5__1_3)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CverticesU3E5__1_3() const { return ___U3CverticesU3E5__1_3; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CverticesU3E5__1_3() { return &___U3CverticesU3E5__1_3; }
	inline void set_U3CverticesU3E5__1_3(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CverticesU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CverticesU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmatrixU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CmatrixU3E5__2_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_U3CmatrixU3E5__2_4() const { return ___U3CmatrixU3E5__2_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_U3CmatrixU3E5__2_4() { return &___U3CmatrixU3E5__2_4; }
	inline void set_U3CmatrixU3E5__2_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___U3CmatrixU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3Cold_CurveScaleU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3Cold_CurveScaleU3E5__3_5)); }
	inline float get_U3Cold_CurveScaleU3E5__3_5() const { return ___U3Cold_CurveScaleU3E5__3_5; }
	inline float* get_address_of_U3Cold_CurveScaleU3E5__3_5() { return &___U3Cold_CurveScaleU3E5__3_5; }
	inline void set_U3Cold_CurveScaleU3E5__3_5(float value)
	{
		___U3Cold_CurveScaleU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3Cold_ShearValueU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3Cold_ShearValueU3E5__4_6)); }
	inline float get_U3Cold_ShearValueU3E5__4_6() const { return ___U3Cold_ShearValueU3E5__4_6; }
	inline float* get_address_of_U3Cold_ShearValueU3E5__4_6() { return &___U3Cold_ShearValueU3E5__4_6; }
	inline void set_U3Cold_ShearValueU3E5__4_6(float value)
	{
		___U3Cold_ShearValueU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3Cold_curveU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3Cold_curveU3E5__5_7)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_U3Cold_curveU3E5__5_7() const { return ___U3Cold_curveU3E5__5_7; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_U3Cold_curveU3E5__5_7() { return &___U3Cold_curveU3E5__5_7; }
	inline void set_U3Cold_curveU3E5__5_7(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___U3Cold_curveU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cold_curveU3E5__5_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CtextInfoU3E5__6_8)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_U3CtextInfoU3E5__6_8() const { return ___U3CtextInfoU3E5__6_8; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_U3CtextInfoU3E5__6_8() { return &___U3CtextInfoU3E5__6_8; }
	inline void set_U3CtextInfoU3E5__6_8(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___U3CtextInfoU3E5__6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextInfoU3E5__6_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CcharacterCountU3E5__7_9)); }
	inline int32_t get_U3CcharacterCountU3E5__7_9() const { return ___U3CcharacterCountU3E5__7_9; }
	inline int32_t* get_address_of_U3CcharacterCountU3E5__7_9() { return &___U3CcharacterCountU3E5__7_9; }
	inline void set_U3CcharacterCountU3E5__7_9(int32_t value)
	{
		___U3CcharacterCountU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CboundsMinXU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CboundsMinXU3E5__8_10)); }
	inline float get_U3CboundsMinXU3E5__8_10() const { return ___U3CboundsMinXU3E5__8_10; }
	inline float* get_address_of_U3CboundsMinXU3E5__8_10() { return &___U3CboundsMinXU3E5__8_10; }
	inline void set_U3CboundsMinXU3E5__8_10(float value)
	{
		___U3CboundsMinXU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CboundsMaxXU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CboundsMaxXU3E5__9_11)); }
	inline float get_U3CboundsMaxXU3E5__9_11() const { return ___U3CboundsMaxXU3E5__9_11; }
	inline float* get_address_of_U3CboundsMaxXU3E5__9_11() { return &___U3CboundsMaxXU3E5__9_11; }
	inline void set_U3CboundsMaxXU3E5__9_11(float value)
	{
		___U3CboundsMaxXU3E5__9_11 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__10_12() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CiU3E5__10_12)); }
	inline int32_t get_U3CiU3E5__10_12() const { return ___U3CiU3E5__10_12; }
	inline int32_t* get_address_of_U3CiU3E5__10_12() { return &___U3CiU3E5__10_12; }
	inline void set_U3CiU3E5__10_12(int32_t value)
	{
		___U3CiU3E5__10_12 = value;
	}

	inline static int32_t get_offset_of_U3CvertexIndexU3E5__11_13() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CvertexIndexU3E5__11_13)); }
	inline int32_t get_U3CvertexIndexU3E5__11_13() const { return ___U3CvertexIndexU3E5__11_13; }
	inline int32_t* get_address_of_U3CvertexIndexU3E5__11_13() { return &___U3CvertexIndexU3E5__11_13; }
	inline void set_U3CvertexIndexU3E5__11_13(int32_t value)
	{
		___U3CvertexIndexU3E5__11_13 = value;
	}

	inline static int32_t get_offset_of_U3CmaterialIndexU3E5__12_14() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CmaterialIndexU3E5__12_14)); }
	inline int32_t get_U3CmaterialIndexU3E5__12_14() const { return ___U3CmaterialIndexU3E5__12_14; }
	inline int32_t* get_address_of_U3CmaterialIndexU3E5__12_14() { return &___U3CmaterialIndexU3E5__12_14; }
	inline void set_U3CmaterialIndexU3E5__12_14(int32_t value)
	{
		___U3CmaterialIndexU3E5__12_14 = value;
	}

	inline static int32_t get_offset_of_U3CoffsetToMidBaselineU3E5__13_15() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CoffsetToMidBaselineU3E5__13_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoffsetToMidBaselineU3E5__13_15() const { return ___U3CoffsetToMidBaselineU3E5__13_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoffsetToMidBaselineU3E5__13_15() { return &___U3CoffsetToMidBaselineU3E5__13_15; }
	inline void set_U3CoffsetToMidBaselineU3E5__13_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoffsetToMidBaselineU3E5__13_15 = value;
	}

	inline static int32_t get_offset_of_U3Cshear_valueU3E5__14_16() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3Cshear_valueU3E5__14_16)); }
	inline float get_U3Cshear_valueU3E5__14_16() const { return ___U3Cshear_valueU3E5__14_16; }
	inline float* get_address_of_U3Cshear_valueU3E5__14_16() { return &___U3Cshear_valueU3E5__14_16; }
	inline void set_U3Cshear_valueU3E5__14_16(float value)
	{
		___U3Cshear_valueU3E5__14_16 = value;
	}

	inline static int32_t get_offset_of_U3CtopShearU3E5__15_17() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CtopShearU3E5__15_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CtopShearU3E5__15_17() const { return ___U3CtopShearU3E5__15_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CtopShearU3E5__15_17() { return &___U3CtopShearU3E5__15_17; }
	inline void set_U3CtopShearU3E5__15_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CtopShearU3E5__15_17 = value;
	}

	inline static int32_t get_offset_of_U3CbottomShearU3E5__16_18() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CbottomShearU3E5__16_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CbottomShearU3E5__16_18() const { return ___U3CbottomShearU3E5__16_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CbottomShearU3E5__16_18() { return &___U3CbottomShearU3E5__16_18; }
	inline void set_U3CbottomShearU3E5__16_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CbottomShearU3E5__16_18 = value;
	}

	inline static int32_t get_offset_of_U3Cx0U3E5__17_19() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3Cx0U3E5__17_19)); }
	inline float get_U3Cx0U3E5__17_19() const { return ___U3Cx0U3E5__17_19; }
	inline float* get_address_of_U3Cx0U3E5__17_19() { return &___U3Cx0U3E5__17_19; }
	inline void set_U3Cx0U3E5__17_19(float value)
	{
		___U3Cx0U3E5__17_19 = value;
	}

	inline static int32_t get_offset_of_U3Cx1U3E5__18_20() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3Cx1U3E5__18_20)); }
	inline float get_U3Cx1U3E5__18_20() const { return ___U3Cx1U3E5__18_20; }
	inline float* get_address_of_U3Cx1U3E5__18_20() { return &___U3Cx1U3E5__18_20; }
	inline void set_U3Cx1U3E5__18_20(float value)
	{
		___U3Cx1U3E5__18_20 = value;
	}

	inline static int32_t get_offset_of_U3Cy0U3E5__19_21() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3Cy0U3E5__19_21)); }
	inline float get_U3Cy0U3E5__19_21() const { return ___U3Cy0U3E5__19_21; }
	inline float* get_address_of_U3Cy0U3E5__19_21() { return &___U3Cy0U3E5__19_21; }
	inline void set_U3Cy0U3E5__19_21(float value)
	{
		___U3Cy0U3E5__19_21 = value;
	}

	inline static int32_t get_offset_of_U3Cy1U3E5__20_22() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3Cy1U3E5__20_22)); }
	inline float get_U3Cy1U3E5__20_22() const { return ___U3Cy1U3E5__20_22; }
	inline float* get_address_of_U3Cy1U3E5__20_22() { return &___U3Cy1U3E5__20_22; }
	inline void set_U3Cy1U3E5__20_22(float value)
	{
		___U3Cy1U3E5__20_22 = value;
	}

	inline static int32_t get_offset_of_U3ChorizontalU3E5__21_23() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3ChorizontalU3E5__21_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3ChorizontalU3E5__21_23() const { return ___U3ChorizontalU3E5__21_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3ChorizontalU3E5__21_23() { return &___U3ChorizontalU3E5__21_23; }
	inline void set_U3ChorizontalU3E5__21_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3ChorizontalU3E5__21_23 = value;
	}

	inline static int32_t get_offset_of_U3CtangentU3E5__22_24() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CtangentU3E5__22_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CtangentU3E5__22_24() const { return ___U3CtangentU3E5__22_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CtangentU3E5__22_24() { return &___U3CtangentU3E5__22_24; }
	inline void set_U3CtangentU3E5__22_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CtangentU3E5__22_24 = value;
	}

	inline static int32_t get_offset_of_U3CdotU3E5__23_25() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CdotU3E5__23_25)); }
	inline float get_U3CdotU3E5__23_25() const { return ___U3CdotU3E5__23_25; }
	inline float* get_address_of_U3CdotU3E5__23_25() { return &___U3CdotU3E5__23_25; }
	inline void set_U3CdotU3E5__23_25(float value)
	{
		___U3CdotU3E5__23_25 = value;
	}

	inline static int32_t get_offset_of_U3CcrossU3E5__24_26() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CcrossU3E5__24_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CcrossU3E5__24_26() const { return ___U3CcrossU3E5__24_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CcrossU3E5__24_26() { return &___U3CcrossU3E5__24_26; }
	inline void set_U3CcrossU3E5__24_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CcrossU3E5__24_26 = value;
	}

	inline static int32_t get_offset_of_U3CangleU3E5__25_27() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B, ___U3CangleU3E5__25_27)); }
	inline float get_U3CangleU3E5__25_27() const { return ___U3CangleU3E5__25_27; }
	inline float* get_address_of_U3CangleU3E5__25_27() { return &___U3CangleU3E5__25_27; }
	inline void set_U3CangleU3E5__25_27(float value)
	{
		___U3CangleU3E5__25_27 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2
struct U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::meshObserver
	RuntimeObject* ___meshObserver_2;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::folderPath
	String_t* ___folderPath_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::consolidate
	bool ___consolidate_4;
	// System.Collections.Generic.HashSet`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<targets>5__1
	HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * ___U3CtargetsU3E5__1_5;
	// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>s__2
	RuntimeObject* ___U3CU3Es__2_6;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<meshObject>5__3
	SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * ___U3CmeshObjectU3E5__3_7;
	// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>s__4
	Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC  ___U3CU3Es__4_8;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<target>5__5
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtargetU3E5__5_9;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<filePath>5__6
	String_t* ___U3CfilePathU3E5__6_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_meshObserver_2() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC, ___meshObserver_2)); }
	inline RuntimeObject* get_meshObserver_2() const { return ___meshObserver_2; }
	inline RuntimeObject** get_address_of_meshObserver_2() { return &___meshObserver_2; }
	inline void set_meshObserver_2(RuntimeObject* value)
	{
		___meshObserver_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshObserver_2), (void*)value);
	}

	inline static int32_t get_offset_of_folderPath_3() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC, ___folderPath_3)); }
	inline String_t* get_folderPath_3() const { return ___folderPath_3; }
	inline String_t** get_address_of_folderPath_3() { return &___folderPath_3; }
	inline void set_folderPath_3(String_t* value)
	{
		___folderPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___folderPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_consolidate_4() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC, ___consolidate_4)); }
	inline bool get_consolidate_4() const { return ___consolidate_4; }
	inline bool* get_address_of_consolidate_4() { return &___consolidate_4; }
	inline void set_consolidate_4(bool value)
	{
		___consolidate_4 = value;
	}

	inline static int32_t get_offset_of_U3CtargetsU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC, ___U3CtargetsU3E5__1_5)); }
	inline HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * get_U3CtargetsU3E5__1_5() const { return ___U3CtargetsU3E5__1_5; }
	inline HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D ** get_address_of_U3CtargetsU3E5__1_5() { return &___U3CtargetsU3E5__1_5; }
	inline void set_U3CtargetsU3E5__1_5(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * value)
	{
		___U3CtargetsU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetsU3E5__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_6() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC, ___U3CU3Es__2_6)); }
	inline RuntimeObject* get_U3CU3Es__2_6() const { return ___U3CU3Es__2_6; }
	inline RuntimeObject** get_address_of_U3CU3Es__2_6() { return &___U3CU3Es__2_6; }
	inline void set_U3CU3Es__2_6(RuntimeObject* value)
	{
		___U3CU3Es__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmeshObjectU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC, ___U3CmeshObjectU3E5__3_7)); }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * get_U3CmeshObjectU3E5__3_7() const { return ___U3CmeshObjectU3E5__3_7; }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 ** get_address_of_U3CmeshObjectU3E5__3_7() { return &___U3CmeshObjectU3E5__3_7; }
	inline void set_U3CmeshObjectU3E5__3_7(SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * value)
	{
		___U3CmeshObjectU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshObjectU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__4_8() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC, ___U3CU3Es__4_8)); }
	inline Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC  get_U3CU3Es__4_8() const { return ___U3CU3Es__4_8; }
	inline Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC * get_address_of_U3CU3Es__4_8() { return &___U3CU3Es__4_8; }
	inline void set_U3CU3Es__4_8(Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC  value)
	{
		___U3CU3Es__4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__4_8))->____set_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__4_8))->____current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CtargetU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC, ___U3CtargetU3E5__5_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtargetU3E5__5_9() const { return ___U3CtargetU3E5__5_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtargetU3E5__5_9() { return &___U3CtargetU3E5__5_9; }
	inline void set_U3CtargetU3E5__5_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtargetU3E5__5_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetU3E5__5_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfilePathU3E5__6_10() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC, ___U3CfilePathU3E5__6_10)); }
	inline String_t* get_U3CfilePathU3E5__6_10() const { return ___U3CfilePathU3E5__6_10; }
	inline String_t** get_address_of_U3CfilePathU3E5__6_10() { return &___U3CfilePathU3E5__6_10; }
	inline void set_U3CfilePathU3E5__6_10(String_t* value)
	{
		___U3CfilePathU3E5__6_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfilePathU3E5__6_10), (void*)value);
	}
};


// System.IO.Stream/NullStream
struct NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:

public:
};

struct NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream/NullStream::s_nullReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___s_nullReadTask_4;

public:
	inline static int32_t get_offset_of_s_nullReadTask_4() { return static_cast<int32_t>(offsetof(NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_StaticFields, ___s_nullReadTask_4)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_s_nullReadTask_4() const { return ___s_nullReadTask_4; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_s_nullReadTask_4() { return &___s_nullReadTask_4; }
	inline void set_s_nullReadTask_4(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___s_nullReadTask_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_nullReadTask_4), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8
struct U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>2__current
	Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::str
	String_t* ___str_3;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>3__str
	String_t* ___U3CU3E3__str_4;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<pos>5__1
	int32_t ___U3CposU3E5__1_5;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<length>5__2
	int32_t ___U3ClengthU3E5__2_6;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<endPos>5__3
	int32_t ___U3CendPosU3E5__3_7;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<endPos>5__4
	int32_t ___U3CendPosU3E5__4_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CU3E2__current_1)); }
	inline Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Substring_t7D9B38B83507DB3B8802FFFB252076BEBE410D02  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_str_3() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___str_3)); }
	inline String_t* get_str_3() const { return ___str_3; }
	inline String_t** get_address_of_str_3() { return &___str_3; }
	inline void set_str_3(String_t* value)
	{
		___str_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___str_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__str_4() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CU3E3__str_4)); }
	inline String_t* get_U3CU3E3__str_4() const { return ___U3CU3E3__str_4; }
	inline String_t** get_address_of_U3CU3E3__str_4() { return &___U3CU3E3__str_4; }
	inline void set_U3CU3E3__str_4(String_t* value)
	{
		___U3CU3E3__str_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__str_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CposU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CposU3E5__1_5)); }
	inline int32_t get_U3CposU3E5__1_5() const { return ___U3CposU3E5__1_5; }
	inline int32_t* get_address_of_U3CposU3E5__1_5() { return &___U3CposU3E5__1_5; }
	inline void set_U3CposU3E5__1_5(int32_t value)
	{
		___U3CposU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3ClengthU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3ClengthU3E5__2_6)); }
	inline int32_t get_U3ClengthU3E5__2_6() const { return ___U3ClengthU3E5__2_6; }
	inline int32_t* get_address_of_U3ClengthU3E5__2_6() { return &___U3ClengthU3E5__2_6; }
	inline void set_U3ClengthU3E5__2_6(int32_t value)
	{
		___U3ClengthU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CendPosU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CendPosU3E5__3_7)); }
	inline int32_t get_U3CendPosU3E5__3_7() const { return ___U3CendPosU3E5__3_7; }
	inline int32_t* get_address_of_U3CendPosU3E5__3_7() { return &___U3CendPosU3E5__3_7; }
	inline void set_U3CendPosU3E5__3_7(int32_t value)
	{
		___U3CendPosU3E5__3_7 = value;
	}

	inline static int32_t get_offset_of_U3CendPosU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16, ___U3CendPosU3E5__4_8)); }
	inline int32_t get_U3CendPosU3E5__4_8() const { return ___U3CendPosU3E5__4_8; }
	inline int32_t* get_address_of_U3CendPosU3E5__4_8() { return &___U3CendPosU3E5__4_8; }
	inline void set_U3CendPosU3E5__4_8(int32_t value)
	{
		___U3CendPosU3E5__4_8 = value;
	}
};


// TMPro.TMP_InputField/<MouseDragOutsideRect>d__294
struct U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.EventSystems.PointerEventData TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_2;
	// TMPro.TMP_InputField TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<>4__this
	TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___U3CU3E4__this_3;
	// UnityEngine.Vector2 TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<localMousePos>5__1
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3ClocalMousePosU3E5__1_4;
	// UnityEngine.Rect TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<rect>5__2
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___U3CrectU3E5__2_5;
	// System.Single TMPro.TMP_InputField/<MouseDragOutsideRect>d__294::<delay>5__3
	float ___U3CdelayU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_2() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848, ___eventData_2)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_2() const { return ___eventData_2; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_2() { return &___eventData_2; }
	inline void set_eventData_2(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848, ___U3CU3E4__this_3)); }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalMousePosU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848, ___U3ClocalMousePosU3E5__1_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3ClocalMousePosU3E5__1_4() const { return ___U3ClocalMousePosU3E5__1_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3ClocalMousePosU3E5__1_4() { return &___U3ClocalMousePosU3E5__1_4; }
	inline void set_U3ClocalMousePosU3E5__1_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3ClocalMousePosU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CrectU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848, ___U3CrectU3E5__2_5)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_U3CrectU3E5__2_5() const { return ___U3CrectU3E5__2_5; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_U3CrectU3E5__2_5() { return &___U3CrectU3E5__2_5; }
	inline void set_U3CrectU3E5__2_5(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___U3CrectU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CdelayU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848, ___U3CdelayU3E5__3_6)); }
	inline float get_U3CdelayU3E5__3_6() const { return ___U3CdelayU3E5__3_6; }
	inline float* get_address_of_U3CdelayU3E5__3_6() { return &___U3CdelayU3E5__3_6; }
	inline void set_U3CdelayU3E5__3_6(float value)
	{
		___U3CdelayU3E5__3_6 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};

// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) = 0;
};

// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::_managedStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____managedStream_0;
	// System.Boolean System.IO.NetFxToWinRtStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_1;
	// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::_readOptimization
	int32_t ____readOptimization_2;

public:
	inline static int32_t get_offset_of__managedStream_0() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____managedStream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__managedStream_0() const { return ____managedStream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__managedStream_0() { return &____managedStream_0; }
	inline void set__managedStream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____managedStream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____managedStream_0), (void*)value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_1() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____leaveUnderlyingStreamOpen_1)); }
	inline bool get__leaveUnderlyingStreamOpen_1() const { return ____leaveUnderlyingStreamOpen_1; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_1() { return &____leaveUnderlyingStreamOpen_1; }
	inline void set__leaveUnderlyingStreamOpen_1(bool value)
	{
		____leaveUnderlyingStreamOpen_1 = value;
	}

	inline static int32_t get_offset_of__readOptimization_2() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____readOptimization_2)); }
	inline int32_t get__readOptimization_2() const { return ____readOptimization_2; }
	inline int32_t* get_address_of__readOptimization_2() { return &____readOptimization_2; }
	inline void set__readOptimization_2(int32_t value)
	{
		____readOptimization_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Name
	String_t* ___Name_1;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Path
	String_t* ___Path_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Included
	bool ___Included_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::BuildIndex
	int32_t ___BuildIndex_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Tag
	String_t* ___Tag_5;
	// UnityEngine.Object Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___Asset_6;

public:
	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_Path_2() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Path_2)); }
	inline String_t* get_Path_2() const { return ___Path_2; }
	inline String_t** get_address_of_Path_2() { return &___Path_2; }
	inline void set_Path_2(String_t* value)
	{
		___Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_Included_3() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Included_3)); }
	inline bool get_Included_3() const { return ___Included_3; }
	inline bool* get_address_of_Included_3() { return &___Included_3; }
	inline void set_Included_3(bool value)
	{
		___Included_3 = value;
	}

	inline static int32_t get_offset_of_BuildIndex_4() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___BuildIndex_4)); }
	inline int32_t get_BuildIndex_4() const { return ___BuildIndex_4; }
	inline int32_t* get_address_of_BuildIndex_4() { return &___BuildIndex_4; }
	inline void set_BuildIndex_4(int32_t value)
	{
		___BuildIndex_4 = value;
	}

	inline static int32_t get_offset_of_Tag_5() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Tag_5)); }
	inline String_t* get_Tag_5() const { return ___Tag_5; }
	inline String_t** get_address_of_Tag_5() { return &___Tag_5; }
	inline void set_Tag_5(String_t* value)
	{
		___Tag_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tag_5), (void*)value);
	}

	inline static int32_t get_offset_of_Asset_6() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Asset_6)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_Asset_6() const { return ___Asset_6; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_Asset_6() { return &___Asset_6; }
	inline void set_Asset_6(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___Asset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Asset_6), (void*)value);
	}
};

struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::empty
	SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_StaticFields, ___empty_0)); }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  get_empty_0() const { return ___empty_0; }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD * get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Asset_6), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_marshaled_pinvoke
{
	char* ___Name_1;
	char* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	char* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___Asset_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_marshaled_com
{
	Il2CppChar* ___Name_1;
	Il2CppChar* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	Il2CppChar* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___Asset_6;
};

// TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B 
{
public:
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___character_0)); }
	inline Il2CppChar get_character_0() const { return ___character_0; }
	inline Il2CppChar* get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(Il2CppChar value)
	{
		___character_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_stringLength_2() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___stringLength_2)); }
	inline int32_t get_stringLength_2() const { return ___stringLength_2; }
	inline int32_t* get_address_of_stringLength_2() { return &___stringLength_2; }
	inline void set_stringLength_2(int32_t value)
	{
		___stringLength_2 = value;
	}

	inline static int32_t get_offset_of_elementType_3() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___elementType_3)); }
	inline int32_t get_elementType_3() const { return ___elementType_3; }
	inline int32_t* get_address_of_elementType_3() { return &___elementType_3; }
	inline void set_elementType_3(int32_t value)
	{
		___elementType_3 = value;
	}

	inline static int32_t get_offset_of_textElement_4() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___textElement_4)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_textElement_4() const { return ___textElement_4; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_textElement_4() { return &___textElement_4; }
	inline void set_textElement_4(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___textElement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textElement_4), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_5() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___fontAsset_5)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_5() const { return ___fontAsset_5; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_5() { return &___fontAsset_5; }
	inline void set_fontAsset_5(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_5), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_6() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteAsset_6)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_6() const { return ___spriteAsset_6; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_6() { return &___spriteAsset_6; }
	inline void set_spriteAsset_6(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_6), (void*)value);
	}

	inline static int32_t get_offset_of_spriteIndex_7() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteIndex_7)); }
	inline int32_t get_spriteIndex_7() const { return ___spriteIndex_7; }
	inline int32_t* get_address_of_spriteIndex_7() { return &___spriteIndex_7; }
	inline void set_spriteIndex_7(int32_t value)
	{
		___spriteIndex_7 = value;
	}

	inline static int32_t get_offset_of_material_8() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___material_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_8() const { return ___material_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_8() { return &___material_8; }
	inline void set_material_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_8), (void*)value);
	}

	inline static int32_t get_offset_of_materialReferenceIndex_9() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___materialReferenceIndex_9)); }
	inline int32_t get_materialReferenceIndex_9() const { return ___materialReferenceIndex_9; }
	inline int32_t* get_address_of_materialReferenceIndex_9() { return &___materialReferenceIndex_9; }
	inline void set_materialReferenceIndex_9(int32_t value)
	{
		___materialReferenceIndex_9 = value;
	}

	inline static int32_t get_offset_of_isUsingAlternateTypeface_10() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isUsingAlternateTypeface_10)); }
	inline bool get_isUsingAlternateTypeface_10() const { return ___isUsingAlternateTypeface_10; }
	inline bool* get_address_of_isUsingAlternateTypeface_10() { return &___isUsingAlternateTypeface_10; }
	inline void set_isUsingAlternateTypeface_10(bool value)
	{
		___isUsingAlternateTypeface_10 = value;
	}

	inline static int32_t get_offset_of_pointSize_11() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pointSize_11)); }
	inline float get_pointSize_11() const { return ___pointSize_11; }
	inline float* get_address_of_pointSize_11() { return &___pointSize_11; }
	inline void set_pointSize_11(float value)
	{
		___pointSize_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_pageNumber_13() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pageNumber_13)); }
	inline int32_t get_pageNumber_13() const { return ___pageNumber_13; }
	inline int32_t* get_address_of_pageNumber_13() { return &___pageNumber_13; }
	inline void set_pageNumber_13(int32_t value)
	{
		___pageNumber_13 = value;
	}

	inline static int32_t get_offset_of_vertexIndex_14() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertexIndex_14)); }
	inline int32_t get_vertexIndex_14() const { return ___vertexIndex_14; }
	inline int32_t* get_address_of_vertexIndex_14() { return &___vertexIndex_14; }
	inline void set_vertexIndex_14(int32_t value)
	{
		___vertexIndex_14 = value;
	}

	inline static int32_t get_offset_of_vertex_BL_15() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BL_15)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BL_15() const { return ___vertex_BL_15; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BL_15() { return &___vertex_BL_15; }
	inline void set_vertex_BL_15(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BL_15 = value;
	}

	inline static int32_t get_offset_of_vertex_TL_16() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TL_16)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TL_16() const { return ___vertex_TL_16; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TL_16() { return &___vertex_TL_16; }
	inline void set_vertex_TL_16(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TL_16 = value;
	}

	inline static int32_t get_offset_of_vertex_TR_17() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TR_17)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TR_17() const { return ___vertex_TR_17; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TR_17() { return &___vertex_TR_17; }
	inline void set_vertex_TR_17(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TR_17 = value;
	}

	inline static int32_t get_offset_of_vertex_BR_18() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BR_18)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BR_18() const { return ___vertex_BR_18; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BR_18() { return &___vertex_BR_18; }
	inline void set_vertex_BR_18(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BR_18 = value;
	}

	inline static int32_t get_offset_of_topLeft_19() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topLeft_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topLeft_19() const { return ___topLeft_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topLeft_19() { return &___topLeft_19; }
	inline void set_topLeft_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topLeft_19 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_20() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomLeft_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomLeft_20() const { return ___bottomLeft_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomLeft_20() { return &___bottomLeft_20; }
	inline void set_bottomLeft_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomLeft_20 = value;
	}

	inline static int32_t get_offset_of_topRight_21() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topRight_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topRight_21() const { return ___topRight_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topRight_21() { return &___topRight_21; }
	inline void set_topRight_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topRight_21 = value;
	}

	inline static int32_t get_offset_of_bottomRight_22() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomRight_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomRight_22() const { return ___bottomRight_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomRight_22() { return &___bottomRight_22; }
	inline void set_bottomRight_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomRight_22 = value;
	}

	inline static int32_t get_offset_of_origin_23() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___origin_23)); }
	inline float get_origin_23() const { return ___origin_23; }
	inline float* get_address_of_origin_23() { return &___origin_23; }
	inline void set_origin_23(float value)
	{
		___origin_23 = value;
	}

	inline static int32_t get_offset_of_xAdvance_24() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___xAdvance_24)); }
	inline float get_xAdvance_24() const { return ___xAdvance_24; }
	inline float* get_address_of_xAdvance_24() { return &___xAdvance_24; }
	inline void set_xAdvance_24(float value)
	{
		___xAdvance_24 = value;
	}

	inline static int32_t get_offset_of_ascender_25() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___ascender_25)); }
	inline float get_ascender_25() const { return ___ascender_25; }
	inline float* get_address_of_ascender_25() { return &___ascender_25; }
	inline void set_ascender_25(float value)
	{
		___ascender_25 = value;
	}

	inline static int32_t get_offset_of_baseLine_26() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___baseLine_26)); }
	inline float get_baseLine_26() const { return ___baseLine_26; }
	inline float* get_address_of_baseLine_26() { return &___baseLine_26; }
	inline void set_baseLine_26(float value)
	{
		___baseLine_26 = value;
	}

	inline static int32_t get_offset_of_descender_27() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___descender_27)); }
	inline float get_descender_27() const { return ___descender_27; }
	inline float* get_address_of_descender_27() { return &___descender_27; }
	inline void set_descender_27(float value)
	{
		___descender_27 = value;
	}

	inline static int32_t get_offset_of_adjustedAscender_28() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedAscender_28)); }
	inline float get_adjustedAscender_28() const { return ___adjustedAscender_28; }
	inline float* get_address_of_adjustedAscender_28() { return &___adjustedAscender_28; }
	inline void set_adjustedAscender_28(float value)
	{
		___adjustedAscender_28 = value;
	}

	inline static int32_t get_offset_of_adjustedDescender_29() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedDescender_29)); }
	inline float get_adjustedDescender_29() const { return ___adjustedDescender_29; }
	inline float* get_address_of_adjustedDescender_29() { return &___adjustedDescender_29; }
	inline void set_adjustedDescender_29(float value)
	{
		___adjustedDescender_29 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_30() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___aspectRatio_30)); }
	inline float get_aspectRatio_30() const { return ___aspectRatio_30; }
	inline float* get_address_of_aspectRatio_30() { return &___aspectRatio_30; }
	inline void set_aspectRatio_30(float value)
	{
		___aspectRatio_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___scale_31)); }
	inline float get_scale_31() const { return ___scale_31; }
	inline float* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(float value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_color_32() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___color_32)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_32() const { return ___color_32; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_32() { return &___color_32; }
	inline void set_color_32(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_32 = value;
	}

	inline static int32_t get_offset_of_underlineColor_33() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineColor_33)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_33() const { return ___underlineColor_33; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_33() { return &___underlineColor_33; }
	inline void set_underlineColor_33(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_33 = value;
	}

	inline static int32_t get_offset_of_underlineVertexIndex_34() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineVertexIndex_34)); }
	inline int32_t get_underlineVertexIndex_34() const { return ___underlineVertexIndex_34; }
	inline int32_t* get_address_of_underlineVertexIndex_34() { return &___underlineVertexIndex_34; }
	inline void set_underlineVertexIndex_34(int32_t value)
	{
		___underlineVertexIndex_34 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_35() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughColor_35)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_35() const { return ___strikethroughColor_35; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_35() { return &___strikethroughColor_35; }
	inline void set_strikethroughColor_35(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_35 = value;
	}

	inline static int32_t get_offset_of_strikethroughVertexIndex_36() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughVertexIndex_36)); }
	inline int32_t get_strikethroughVertexIndex_36() const { return ___strikethroughVertexIndex_36; }
	inline int32_t* get_address_of_strikethroughVertexIndex_36() { return &___strikethroughVertexIndex_36; }
	inline void set_strikethroughVertexIndex_36(int32_t value)
	{
		___strikethroughVertexIndex_36 = value;
	}

	inline static int32_t get_offset_of_highlightColor_37() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_37() const { return ___highlightColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_37() { return &___highlightColor_37; }
	inline void set_highlightColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_37 = value;
	}

	inline static int32_t get_offset_of_highlightState_38() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightState_38)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_highlightState_38() const { return ___highlightState_38; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_highlightState_38() { return &___highlightState_38; }
	inline void set_highlightState_38(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___highlightState_38 = value;
	}

	inline static int32_t get_offset_of_style_39() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___style_39)); }
	inline int32_t get_style_39() const { return ___style_39; }
	inline int32_t* get_address_of_style_39() { return &___style_39; }
	inline void set_style_39(int32_t value)
	{
		___style_39 = value;
	}

	inline static int32_t get_offset_of_isVisible_40() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isVisible_40)); }
	inline bool get_isVisible_40() const { return ___isVisible_40; }
	inline bool* get_address_of_isVisible_40() { return &___isVisible_40; }
	inline void set_isVisible_40(bool value)
	{
		___isVisible_40 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 
{
public:
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_12;
	// UnityEngine.Material TMPro.TMP_MeshInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;

public:
	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___mesh_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_vertexCount_5() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertexCount_5)); }
	inline int32_t get_vertexCount_5() const { return ___vertexCount_5; }
	inline int32_t* get_address_of_vertexCount_5() { return &___vertexCount_5; }
	inline void set_vertexCount_5(int32_t value)
	{
		___vertexCount_5 = value;
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertices_6)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_6() const { return ___vertices_6; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_normals_7() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___normals_7)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_normals_7() const { return ___normals_7; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_normals_7() { return &___normals_7; }
	inline void set_normals_7(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___normals_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_7), (void*)value);
	}

	inline static int32_t get_offset_of_tangents_8() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___tangents_8)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_tangents_8() const { return ___tangents_8; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_tangents_8() { return &___tangents_8; }
	inline void set_tangents_8(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___tangents_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tangents_8), (void*)value);
	}

	inline static int32_t get_offset_of_uvs0_9() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs0_9)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs0_9() const { return ___uvs0_9; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs0_9() { return &___uvs0_9; }
	inline void set_uvs0_9(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs0_9), (void*)value);
	}

	inline static int32_t get_offset_of_uvs2_10() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs2_10)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs2_10() const { return ___uvs2_10; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs2_10() { return &___uvs2_10; }
	inline void set_uvs2_10(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs2_10), (void*)value);
	}

	inline static int32_t get_offset_of_colors32_11() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___colors32_11)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_colors32_11() const { return ___colors32_11; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_colors32_11() { return &___colors32_11; }
	inline void set_colors32_11(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___colors32_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors32_11), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_12() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___triangles_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_12() const { return ___triangles_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_12() { return &___triangles_12; }
	inline void set_triangles_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_12), (void*)value);
	}

	inline static int32_t get_offset_of_material_13() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___material_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_13() const { return ___material_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_13() { return &___material_13; }
	inline void set_material_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_13), (void*)value);
	}
};

struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___s_DefaultBounds_3;

public:
	inline static int32_t get_offset_of_s_DefaultColor_0() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultColor_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_0() const { return ___s_DefaultColor_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_0() { return &___s_DefaultColor_0; }
	inline void set_s_DefaultColor_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_0 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_1() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultNormal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_1() const { return ___s_DefaultNormal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_1() { return &___s_DefaultNormal_1; }
	inline void set_s_DefaultNormal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_1 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_2() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultTangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_2() const { return ___s_DefaultTangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_2() { return &___s_DefaultTangent_2; }
	inline void set_s_DefaultTangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_2 = value;
	}

	inline static int32_t get_offset_of_s_DefaultBounds_3() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultBounds_3)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_s_DefaultBounds_3() const { return ___s_DefaultBounds_3; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_s_DefaultBounds_3() { return &___s_DefaultBounds_3; }
	inline void set_s_DefaultBounds_3(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___s_DefaultBounds_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_pinvoke
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_com
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};

// System.IO.StreamReader/NullStreamReader
struct NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838  : public StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3
{
public:

public:
};


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t9AA16C93BC2DB750DE514C896B52763AC0C9D0EA * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3, ___list_0)); }
	inline List_1_t9AA16C93BC2DB750DE514C896B52763AC0C9D0EA * get_list_0() const { return ___list_0; }
	inline List_1_t9AA16C93BC2DB750DE514C896B52763AC0C9D0EA ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t9AA16C93BC2DB750DE514C896B52763AC0C9D0EA * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3, ___current_3)); }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  get_current_3() const { return ___current_3; }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Asset_6), (void*)NULL);
		#endif
	}
};


// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E  : public Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849
{
public:
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim/TaskNode::Prev
	TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * ___Prev_25;
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim/TaskNode::Next
	TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * ___Next_26;

public:
	inline static int32_t get_offset_of_Prev_25() { return static_cast<int32_t>(offsetof(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E, ___Prev_25)); }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * get_Prev_25() const { return ___Prev_25; }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E ** get_address_of_Prev_25() { return &___Prev_25; }
	inline void set_Prev_25(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * value)
	{
		___Prev_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prev_25), (void*)value);
	}

	inline static int32_t get_offset_of_Next_26() { return static_cast<int32_t>(offsetof(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E, ___Next_26)); }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * get_Next_26() const { return ___Next_26; }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E ** get_address_of_Next_26() { return &___Next_26; }
	inline void set_Next_26(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * value)
	{
		___Next_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_26), (void*)value);
	}
};


// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974  : public Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725
{
public:
	// System.Boolean System.IO.Stream/ReadWriteTask::_isRead
	bool ____isRead_25;
	// System.IO.Stream System.IO.Stream/ReadWriteTask::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_26;
	// System.Byte[] System.IO.Stream/ReadWriteTask::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_27;
	// System.Int32 System.IO.Stream/ReadWriteTask::_offset
	int32_t ____offset_28;
	// System.Int32 System.IO.Stream/ReadWriteTask::_count
	int32_t ____count_29;
	// System.AsyncCallback System.IO.Stream/ReadWriteTask::_callback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ____callback_30;
	// System.Threading.ExecutionContext System.IO.Stream/ReadWriteTask::_context
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ____context_31;

public:
	inline static int32_t get_offset_of__isRead_25() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____isRead_25)); }
	inline bool get__isRead_25() const { return ____isRead_25; }
	inline bool* get_address_of__isRead_25() { return &____isRead_25; }
	inline void set__isRead_25(bool value)
	{
		____isRead_25 = value;
	}

	inline static int32_t get_offset_of__stream_26() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____stream_26)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_26() const { return ____stream_26; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_26() { return &____stream_26; }
	inline void set__stream_26(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_26), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_27() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____buffer_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_27() const { return ____buffer_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_27() { return &____buffer_27; }
	inline void set__buffer_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_27), (void*)value);
	}

	inline static int32_t get_offset_of__offset_28() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____offset_28)); }
	inline int32_t get__offset_28() const { return ____offset_28; }
	inline int32_t* get_address_of__offset_28() { return &____offset_28; }
	inline void set__offset_28(int32_t value)
	{
		____offset_28 = value;
	}

	inline static int32_t get_offset_of__count_29() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____count_29)); }
	inline int32_t get__count_29() const { return ____count_29; }
	inline int32_t* get_address_of__count_29() { return &____count_29; }
	inline void set__count_29(int32_t value)
	{
		____count_29 = value;
	}

	inline static int32_t get_offset_of__callback_30() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____callback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get__callback_30() const { return ____callback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of__callback_30() { return &____callback_30; }
	inline void set__callback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		____callback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callback_30), (void*)value);
	}

	inline static int32_t get_offset_of__context_31() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974, ____context_31)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get__context_31() const { return ____context_31; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of__context_31() { return &____context_31; }
	inline void set__context_31(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		____context_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_31), (void*)value);
	}
};

struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_StaticFields
{
public:
	// System.Threading.ContextCallback System.IO.Stream/ReadWriteTask::s_invokeAsyncCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_invokeAsyncCallback_32;

public:
	inline static int32_t get_offset_of_s_invokeAsyncCallback_32() { return static_cast<int32_t>(offsetof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_StaticFields, ___s_invokeAsyncCallback_32)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_invokeAsyncCallback_32() const { return ___s_invokeAsyncCallback_32; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_invokeAsyncCallback_32() { return &___s_invokeAsyncCallback_32; }
	inline void set_s_invokeAsyncCallback_32(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_invokeAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_invokeAsyncCallback_32), (void*)value);
	}
};


// TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7
struct U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::currentCharacter
	int32_t ___currentCharacter_2;
	// TMPro.TMP_SpriteAsset TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_3;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::start
	int32_t ___start_4;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::end
	int32_t ___end_5;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::framerate
	int32_t ___framerate_6;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<>4__this
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___U3CU3E4__this_7;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<currentFrame>5__1
	int32_t ___U3CcurrentFrameU3E5__1_8;
	// TMPro.TMP_CharacterInfo TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<charInfo>5__2
	TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  ___U3CcharInfoU3E5__2_9;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<materialIndex>5__3
	int32_t ___U3CmaterialIndexU3E5__3_10;
	// System.Int32 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<vertexIndex>5__4
	int32_t ___U3CvertexIndexU3E5__4_11;
	// TMPro.TMP_MeshInfo TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<meshInfo>5__5
	TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  ___U3CmeshInfoU3E5__5_12;
	// System.Single TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<baseSpriteScale>5__6
	float ___U3CbaseSpriteScaleU3E5__6_13;
	// System.Single TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<elapsedTime>5__7
	float ___U3CelapsedTimeU3E5__7_14;
	// System.Single TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<targetTime>5__8
	float ___U3CtargetTimeU3E5__8_15;
	// System.Char TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<character>5__9
	Il2CppChar ___U3CcharacterU3E5__9_16;
	// TMPro.TMP_SpriteCharacter TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<spriteCharacter>5__10
	TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * ___U3CspriteCharacterU3E5__10_17;
	// UnityEngine.Vector3[] TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<vertices>5__11
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CverticesU3E5__11_18;
	// UnityEngine.Vector2 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<origin>5__12
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CoriginU3E5__12_19;
	// System.Single TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<spriteScale>5__13
	float ___U3CspriteScaleU3E5__13_20;
	// UnityEngine.Vector3 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<bl>5__14
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CblU3E5__14_21;
	// UnityEngine.Vector3 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<tl>5__15
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CtlU3E5__15_22;
	// UnityEngine.Vector3 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<tr>5__16
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CtrU3E5__16_23;
	// UnityEngine.Vector3 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<br>5__17
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CbrU3E5__17_24;
	// UnityEngine.Vector2[] TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<uvs0>5__18
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___U3Cuvs0U3E5__18_25;
	// UnityEngine.Vector2 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<uv0>5__19
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3Cuv0U3E5__19_26;
	// UnityEngine.Vector2 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<uv1>5__20
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3Cuv1U3E5__20_27;
	// UnityEngine.Vector2 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<uv2>5__21
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3Cuv2U3E5__21_28;
	// UnityEngine.Vector2 TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7::<uv3>5__22
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3Cuv3U3E5__22_29;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_currentCharacter_2() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___currentCharacter_2)); }
	inline int32_t get_currentCharacter_2() const { return ___currentCharacter_2; }
	inline int32_t* get_address_of_currentCharacter_2() { return &___currentCharacter_2; }
	inline void set_currentCharacter_2(int32_t value)
	{
		___currentCharacter_2 = value;
	}

	inline static int32_t get_offset_of_spriteAsset_3() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___spriteAsset_3)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_3() const { return ___spriteAsset_3; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_3() { return &___spriteAsset_3; }
	inline void set_spriteAsset_3(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_3), (void*)value);
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___start_4)); }
	inline int32_t get_start_4() const { return ___start_4; }
	inline int32_t* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(int32_t value)
	{
		___start_4 = value;
	}

	inline static int32_t get_offset_of_end_5() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___end_5)); }
	inline int32_t get_end_5() const { return ___end_5; }
	inline int32_t* get_address_of_end_5() { return &___end_5; }
	inline void set_end_5(int32_t value)
	{
		___end_5 = value;
	}

	inline static int32_t get_offset_of_framerate_6() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___framerate_6)); }
	inline int32_t get_framerate_6() const { return ___framerate_6; }
	inline int32_t* get_address_of_framerate_6() { return &___framerate_6; }
	inline void set_framerate_6(int32_t value)
	{
		___framerate_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CU3E4__this_7)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentFrameU3E5__1_8() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CcurrentFrameU3E5__1_8)); }
	inline int32_t get_U3CcurrentFrameU3E5__1_8() const { return ___U3CcurrentFrameU3E5__1_8; }
	inline int32_t* get_address_of_U3CcurrentFrameU3E5__1_8() { return &___U3CcurrentFrameU3E5__1_8; }
	inline void set_U3CcurrentFrameU3E5__1_8(int32_t value)
	{
		___U3CcurrentFrameU3E5__1_8 = value;
	}

	inline static int32_t get_offset_of_U3CcharInfoU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CcharInfoU3E5__2_9)); }
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  get_U3CcharInfoU3E5__2_9() const { return ___U3CcharInfoU3E5__2_9; }
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * get_address_of_U3CcharInfoU3E5__2_9() { return &___U3CcharInfoU3E5__2_9; }
	inline void set_U3CcharInfoU3E5__2_9(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		___U3CcharInfoU3E5__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__2_9))->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__2_9))->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__2_9))->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__2_9))->___material_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CmaterialIndexU3E5__3_10() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CmaterialIndexU3E5__3_10)); }
	inline int32_t get_U3CmaterialIndexU3E5__3_10() const { return ___U3CmaterialIndexU3E5__3_10; }
	inline int32_t* get_address_of_U3CmaterialIndexU3E5__3_10() { return &___U3CmaterialIndexU3E5__3_10; }
	inline void set_U3CmaterialIndexU3E5__3_10(int32_t value)
	{
		___U3CmaterialIndexU3E5__3_10 = value;
	}

	inline static int32_t get_offset_of_U3CvertexIndexU3E5__4_11() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CvertexIndexU3E5__4_11)); }
	inline int32_t get_U3CvertexIndexU3E5__4_11() const { return ___U3CvertexIndexU3E5__4_11; }
	inline int32_t* get_address_of_U3CvertexIndexU3E5__4_11() { return &___U3CvertexIndexU3E5__4_11; }
	inline void set_U3CvertexIndexU3E5__4_11(int32_t value)
	{
		___U3CvertexIndexU3E5__4_11 = value;
	}

	inline static int32_t get_offset_of_U3CmeshInfoU3E5__5_12() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CmeshInfoU3E5__5_12)); }
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  get_U3CmeshInfoU3E5__5_12() const { return ___U3CmeshInfoU3E5__5_12; }
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * get_address_of_U3CmeshInfoU3E5__5_12() { return &___U3CmeshInfoU3E5__5_12; }
	inline void set_U3CmeshInfoU3E5__5_12(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  value)
	{
		___U3CmeshInfoU3E5__5_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__5_12))->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__5_12))->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__5_12))->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__5_12))->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__5_12))->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__5_12))->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__5_12))->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__5_12))->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__5_12))->___material_13), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CbaseSpriteScaleU3E5__6_13() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CbaseSpriteScaleU3E5__6_13)); }
	inline float get_U3CbaseSpriteScaleU3E5__6_13() const { return ___U3CbaseSpriteScaleU3E5__6_13; }
	inline float* get_address_of_U3CbaseSpriteScaleU3E5__6_13() { return &___U3CbaseSpriteScaleU3E5__6_13; }
	inline void set_U3CbaseSpriteScaleU3E5__6_13(float value)
	{
		___U3CbaseSpriteScaleU3E5__6_13 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__7_14() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CelapsedTimeU3E5__7_14)); }
	inline float get_U3CelapsedTimeU3E5__7_14() const { return ___U3CelapsedTimeU3E5__7_14; }
	inline float* get_address_of_U3CelapsedTimeU3E5__7_14() { return &___U3CelapsedTimeU3E5__7_14; }
	inline void set_U3CelapsedTimeU3E5__7_14(float value)
	{
		___U3CelapsedTimeU3E5__7_14 = value;
	}

	inline static int32_t get_offset_of_U3CtargetTimeU3E5__8_15() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CtargetTimeU3E5__8_15)); }
	inline float get_U3CtargetTimeU3E5__8_15() const { return ___U3CtargetTimeU3E5__8_15; }
	inline float* get_address_of_U3CtargetTimeU3E5__8_15() { return &___U3CtargetTimeU3E5__8_15; }
	inline void set_U3CtargetTimeU3E5__8_15(float value)
	{
		___U3CtargetTimeU3E5__8_15 = value;
	}

	inline static int32_t get_offset_of_U3CcharacterU3E5__9_16() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CcharacterU3E5__9_16)); }
	inline Il2CppChar get_U3CcharacterU3E5__9_16() const { return ___U3CcharacterU3E5__9_16; }
	inline Il2CppChar* get_address_of_U3CcharacterU3E5__9_16() { return &___U3CcharacterU3E5__9_16; }
	inline void set_U3CcharacterU3E5__9_16(Il2CppChar value)
	{
		___U3CcharacterU3E5__9_16 = value;
	}

	inline static int32_t get_offset_of_U3CspriteCharacterU3E5__10_17() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CspriteCharacterU3E5__10_17)); }
	inline TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * get_U3CspriteCharacterU3E5__10_17() const { return ___U3CspriteCharacterU3E5__10_17; }
	inline TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE ** get_address_of_U3CspriteCharacterU3E5__10_17() { return &___U3CspriteCharacterU3E5__10_17; }
	inline void set_U3CspriteCharacterU3E5__10_17(TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * value)
	{
		___U3CspriteCharacterU3E5__10_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CspriteCharacterU3E5__10_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CverticesU3E5__11_18() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CverticesU3E5__11_18)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CverticesU3E5__11_18() const { return ___U3CverticesU3E5__11_18; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CverticesU3E5__11_18() { return &___U3CverticesU3E5__11_18; }
	inline void set_U3CverticesU3E5__11_18(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CverticesU3E5__11_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CverticesU3E5__11_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginU3E5__12_19() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CoriginU3E5__12_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CoriginU3E5__12_19() const { return ___U3CoriginU3E5__12_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CoriginU3E5__12_19() { return &___U3CoriginU3E5__12_19; }
	inline void set_U3CoriginU3E5__12_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CoriginU3E5__12_19 = value;
	}

	inline static int32_t get_offset_of_U3CspriteScaleU3E5__13_20() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CspriteScaleU3E5__13_20)); }
	inline float get_U3CspriteScaleU3E5__13_20() const { return ___U3CspriteScaleU3E5__13_20; }
	inline float* get_address_of_U3CspriteScaleU3E5__13_20() { return &___U3CspriteScaleU3E5__13_20; }
	inline void set_U3CspriteScaleU3E5__13_20(float value)
	{
		___U3CspriteScaleU3E5__13_20 = value;
	}

	inline static int32_t get_offset_of_U3CblU3E5__14_21() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CblU3E5__14_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CblU3E5__14_21() const { return ___U3CblU3E5__14_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CblU3E5__14_21() { return &___U3CblU3E5__14_21; }
	inline void set_U3CblU3E5__14_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CblU3E5__14_21 = value;
	}

	inline static int32_t get_offset_of_U3CtlU3E5__15_22() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CtlU3E5__15_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CtlU3E5__15_22() const { return ___U3CtlU3E5__15_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CtlU3E5__15_22() { return &___U3CtlU3E5__15_22; }
	inline void set_U3CtlU3E5__15_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CtlU3E5__15_22 = value;
	}

	inline static int32_t get_offset_of_U3CtrU3E5__16_23() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CtrU3E5__16_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CtrU3E5__16_23() const { return ___U3CtrU3E5__16_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CtrU3E5__16_23() { return &___U3CtrU3E5__16_23; }
	inline void set_U3CtrU3E5__16_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CtrU3E5__16_23 = value;
	}

	inline static int32_t get_offset_of_U3CbrU3E5__17_24() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CbrU3E5__17_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CbrU3E5__17_24() const { return ___U3CbrU3E5__17_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CbrU3E5__17_24() { return &___U3CbrU3E5__17_24; }
	inline void set_U3CbrU3E5__17_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CbrU3E5__17_24 = value;
	}

	inline static int32_t get_offset_of_U3Cuvs0U3E5__18_25() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3Cuvs0U3E5__18_25)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_U3Cuvs0U3E5__18_25() const { return ___U3Cuvs0U3E5__18_25; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_U3Cuvs0U3E5__18_25() { return &___U3Cuvs0U3E5__18_25; }
	inline void set_U3Cuvs0U3E5__18_25(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___U3Cuvs0U3E5__18_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cuvs0U3E5__18_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cuv0U3E5__19_26() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3Cuv0U3E5__19_26)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3Cuv0U3E5__19_26() const { return ___U3Cuv0U3E5__19_26; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3Cuv0U3E5__19_26() { return &___U3Cuv0U3E5__19_26; }
	inline void set_U3Cuv0U3E5__19_26(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3Cuv0U3E5__19_26 = value;
	}

	inline static int32_t get_offset_of_U3Cuv1U3E5__20_27() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3Cuv1U3E5__20_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3Cuv1U3E5__20_27() const { return ___U3Cuv1U3E5__20_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3Cuv1U3E5__20_27() { return &___U3Cuv1U3E5__20_27; }
	inline void set_U3Cuv1U3E5__20_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3Cuv1U3E5__20_27 = value;
	}

	inline static int32_t get_offset_of_U3Cuv2U3E5__21_28() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3Cuv2U3E5__21_28)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3Cuv2U3E5__21_28() const { return ___U3Cuv2U3E5__21_28; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3Cuv2U3E5__21_28() { return &___U3Cuv2U3E5__21_28; }
	inline void set_U3Cuv2U3E5__21_28(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3Cuv2U3E5__21_28 = value;
	}

	inline static int32_t get_offset_of_U3Cuv3U3E5__22_29() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3Cuv3U3E5__22_29)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3Cuv3U3E5__22_29() const { return ___U3Cuv3U3E5__22_29; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3Cuv3U3E5__22_29() { return &___U3Cuv3U3E5__22_29; }
	inline void set_U3Cuv3U3E5__22_29(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3Cuv3U3E5__22_29 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36
struct U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::tag
	String_t* ___tag_3;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>3__tag
	String_t* ___U3CU3E3__tag_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>4__this
	MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * ___U3CU3E4__this_5;
	// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>s__1
	Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3  ___U3CU3Es__1_6;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<contentScene>5__2
	SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  ___U3CcontentSceneU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_tag_3() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___tag_3)); }
	inline String_t* get_tag_3() const { return ___tag_3; }
	inline String_t** get_address_of_tag_3() { return &___tag_3; }
	inline void set_tag_3(String_t* value)
	{
		___tag_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__tag_4() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3E3__tag_4)); }
	inline String_t* get_U3CU3E3__tag_4() const { return ___U3CU3E3__tag_4; }
	inline String_t** get_address_of_U3CU3E3__tag_4() { return &___U3CU3E3__tag_4; }
	inline void set_U3CU3E3__tag_4(String_t* value)
	{
		___U3CU3E3__tag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__tag_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3E4__this_5)); }
	inline MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(MixedRealitySceneSystemProfile_t752F05A9C0EB7B344CDD30160E3DAFD7389B4360 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CU3Es__1_6)); }
	inline Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3  get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3 * get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(Enumerator_t04B917F995CCD0D1A1C7CE68BD4FF181A4190BD3  value)
	{
		___U3CU3Es__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__1_6))->___current_3))->___Name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__1_6))->___current_3))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__1_6))->___current_3))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__1_6))->___current_3))->___Asset_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CcontentSceneU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933, ___U3CcontentSceneU3E5__2_7)); }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  get_U3CcontentSceneU3E5__2_7() const { return ___U3CcontentSceneU3E5__2_7; }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD * get_address_of_U3CcontentSceneU3E5__2_7() { return &___U3CcontentSceneU3E5__2_7; }
	inline void set_U3CcontentSceneU3E5__2_7(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  value)
	{
		___U3CcontentSceneU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcontentSceneU3E5__2_7))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcontentSceneU3E5__2_7))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcontentSceneU3E5__2_7))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcontentSceneU3E5__2_7))->___Asset_6), (void*)NULL);
		#endif
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);


// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::WriteAsync(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.NetFxToWinRtStreamAdapter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Size_mFD8C8AF2B59C9B158F4FD5EC91CFAE7F33947EE3 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::Windows.Storage.Streams.IRandomAccessStream.put_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m9D2CE9CC6523D0D74FD43684002D590A4B9096BE (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __this, uint64_t ___value0, const RuntimeMethod* method);
// Windows.Storage.Streams.IInputStream System.IO.NetFxToWinRtStreamAdapter::GetInputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetInputStreamAt_m570BCD8F5293AC6BD7206B8F13641E09831A6BFC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// Windows.Storage.Streams.IOutputStream System.IO.NetFxToWinRtStreamAdapter::GetOutputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetOutputStreamAt_m6FD92CC3130BFC5290A86CFDAA1450B59FA3AB93 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Position_m26FD8C0876A65ABDFF37AB9A53993EABC0EBECD1 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter::Seek(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// Windows.Storage.Streams.IRandomAccessStream System.IO.NetFxToWinRtStreamAdapter::CloneStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_CloneStream_m880CA0AA9596D6A1122DBCC52F331185D25674C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanRead_m511B6ED32D3ED2745BE81C0B0670A3B5696045A9 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanWrite_m96164AE9C8728C35995BB7E2E74B44314C7FC9C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36
struct U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetContentSceneNamesByTagU3Ed__36_tD29F9067330DD4FC5691D55F700E13169911E933_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20
struct U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper>, IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67(IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_tB348D45C8782CDF1D33BC4D4C8E18B4C5EACB6BD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31
struct U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFollowSequenceU3Ed__31_tF39A60B26D29AA7BC7C858DA7C47D11B24FFE75B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29
struct U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMoveHintSequenceU3Ed__29_tB33B7B7632A2DEE80108295CE1A52A0A3FE9A425_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
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
		interfaceIds[1] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;
		interfaceIds[2] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

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

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
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
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
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
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
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
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2
{
	inline InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
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
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
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
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
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
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A::IID;
		interfaceIds[2] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;
		interfaceIds[3] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Size_mFD8C8AF2B59C9B158F4FD5EC91CFAE7F33947EE3(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7(uint64_t ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __thisValue = (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 *)GetManagedObjectInline();
			RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m9D2CE9CC6523D0D74FD43684002D590A4B9096BE(__thisValue, ___value0, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB(uint64_t ___position0, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetInputStreamAt_m570BCD8F5293AC6BD7206B8F13641E09831A6BFC(__thisValue, ___position0, NULL);
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
		IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023(uint64_t ___position0, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetOutputStreamAt_m6FD92CC3130BFC5290A86CFDAA1450B59FA3AB93(__thisValue, ___position0, NULL);
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
		IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Position_m26FD8C0876A65ABDFF37AB9A53993EABC0EBECD1(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A(uint64_t ___position0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C(__thisValue, ___position0, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A(IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_CloneStream_m880CA0AA9596D6A1122DBCC52F331185D25674C4(__thisValue, NULL);
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
		IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071(bool* comReturnValue) IL2CPP_OVERRIDE
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
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanRead_m511B6ED32D3ED2745BE81C0B0670A3B5696045A9(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146(bool* comReturnValue) IL2CPP_OVERRIDE
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
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanWrite_m96164AE9C8728C35995BB7E2E74B44314C7FC9C4(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
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
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
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
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
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
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1
struct U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCreateOBJFileContentAsyncU3Ed__1_tB037DFEC670E4317ED394E050856C4AAE411E366_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6
struct U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Observable/<EveryCycleCore>d__311
struct U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CEveryCycleCoreU3Ed__311_tE6722FB9A85C470D758105594B5B20FE3138C6B3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Observable/<NextFrameCore>d__316
struct U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CNextFrameCoreU3Ed__316_t90C77B135BE2871B2CA73F8FEAB3E34C5E50A68D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Observable/<TimerFrameCore>d__320
struct U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTimerFrameCoreU3Ed__320_t49B630151BF7F00978C0C4444541F58086DE5B82_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Observable/<TimerFrameCore>d__321
struct U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTimerFrameCoreU3Ed__321_tD0C950252EC9472F2322BA3FBEAB9093D432D856_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Observable/<WrapEnumerator>d__291
struct U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CWrapEnumeratorU3Ed__291_tEFABD866D6363295A1C4D7A8413154357CCA0C49_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.ObservableWWW/<Fetch>d__20
struct U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFetchU3Ed__20_t1A64D4B323CAEB720A130EB38DC2D4F4D9E10C56_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.ObservableWWW/<FetchAssetBundle>d__23
struct U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFetchAssetBundleU3Ed__23_tDACF3199E1152E0D64F85B0B97478BD97C368062_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.ObservableWWW/<FetchBytes>d__22
struct U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFetchBytesU3Ed__22_t16A6AA29586F5D293C41F54345C3AC991A452E8B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.ObservableWWW/<FetchText>d__21
struct U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFetchTextU3Ed__21_tA76D55AE9CC66E5099516B0397F97AF1E7851A40_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.ObserveExtensions/<EmptyEnumerator>d__3
struct U3CEmptyEnumeratorU3Ed__3_t7A48C264054742328E6E5790361BC0CD2D6BFDAF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CEmptyEnumeratorU3Ed__3_t7A48C264054742328E6E5790361BC0CD2D6BFDAF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CEmptyEnumeratorU3Ed__3_t7A48C264054742328E6E5790361BC0CD2D6BFDAF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CEmptyEnumeratorU3Ed__3_t7A48C264054742328E6E5790361BC0CD2D6BFDAF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CEmptyEnumeratorU3Ed__3_t7A48C264054742328E6E5790361BC0CD2D6BFDAF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CEmptyEnumeratorU3Ed__3_t7A48C264054742328E6E5790361BC0CD2D6BFDAF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CEmptyEnumeratorU3Ed__3_t7A48C264054742328E6E5790361BC0CD2D6BFDAF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__13
struct U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRestartCoroutineU3Ed__13_t0FDD048F1668DDAEF245E0B447E725EB0D7315DF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7
struct U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78
struct U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46_ComCallableWrapper(obj));
}

// COM Callable Wrapper for PanelManager/<DisablePanelDeleyed>d__10
struct U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDisablePanelDeleyedU3Ed__10_t4CAAB3F558085CA83AB05C4C4B8FC4C6A0F5D38F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for PartAssemblyDemo/<checkForSnap>d__14
struct U3CcheckForSnapU3Ed__14_t3ABE1AC47D0D00440E203E294E87E8E089E0F460_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CcheckForSnapU3Ed__14_t3ABE1AC47D0D00440E203E294E87E8E089E0F460_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CcheckForSnapU3Ed__14_t3ABE1AC47D0D00440E203E294E87E8E089E0F460_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CcheckForSnapU3Ed__14_t3ABE1AC47D0D00440E203E294E87E8E089E0F460_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CcheckForSnapU3Ed__14_t3ABE1AC47D0D00440E203E294E87E8E089E0F460(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CcheckForSnapU3Ed__14_t3ABE1AC47D0D00440E203E294E87E8E089E0F460_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CcheckForSnapU3Ed__14_t3ABE1AC47D0D00440E203E294E87E8E089E0F460_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4
struct U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for PlayerController/<JumpEvent>d__12
struct U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CJumpEventU3Ed__12_t3CB6EC746F935D9C198E5D5092B48389D1125232_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7
struct U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetPointersU3Ed__7_tEFE32D184DC5841A988CBFE581DBBF783DE4B030_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23
struct U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateHighlightPlateU3Ed__23_t0E368EF3B5B7DF82CF888831BF2E506D015126B1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4
struct U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CResetViewMatricesOnFrameEndU3Ed__4_t569CF35E153EC5D48A50D394579FF8B6BA3F2926_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22
struct U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPulseRoutineU3Ed__22_tF2FF4E8F28FB44421C877461D0B0E8B69D08D28A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40
struct U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoAnimatePulseU3Ed__40_tDE5662062EB5D01D0936C05500E705DB84250DC2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41
struct U3CCoRepeatPulseU3Ed__41_t27D831AF6E4846008EB1E6061966E64FCB28DE6E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoRepeatPulseU3Ed__41_t27D831AF6E4846008EB1E6061966E64FCB28DE6E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCoRepeatPulseU3Ed__41_t27D831AF6E4846008EB1E6061966E64FCB28DE6E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoRepeatPulseU3Ed__41_t27D831AF6E4846008EB1E6061966E64FCB28DE6E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoRepeatPulseU3Ed__41_t27D831AF6E4846008EB1E6061966E64FCB28DE6E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoRepeatPulseU3Ed__41_t27D831AF6E4846008EB1E6061966E64FCB28DE6E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoRepeatPulseU3Ed__41_t27D831AF6E4846008EB1E6061966E64FCB28DE6E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38
struct U3CCoSinglePulseU3Ed__38_tCAEDC05F7FA47AED6F0B976C9EBC3522DBF7EB84_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoSinglePulseU3Ed__38_tCAEDC05F7FA47AED6F0B976C9EBC3522DBF7EB84_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCoSinglePulseU3Ed__38_tCAEDC05F7FA47AED6F0B976C9EBC3522DBF7EB84_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoSinglePulseU3Ed__38_tCAEDC05F7FA47AED6F0B976C9EBC3522DBF7EB84_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoSinglePulseU3Ed__38_tCAEDC05F7FA47AED6F0B976C9EBC3522DBF7EB84(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoSinglePulseU3Ed__38_tCAEDC05F7FA47AED6F0B976C9EBC3522DBF7EB84_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoSinglePulseU3Ed__38_tCAEDC05F7FA47AED6F0B976C9EBC3522DBF7EB84_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39
struct U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoWaitForRepeatDelayU3Ed__39_t69EF8FE272E97E865334883D533E07217565ABD8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID;
		interfaceIds[3] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CExecuteFilterU3Ed__4_t4899D3BA2F16795EFE5A322DFB21F719C57371F6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.RangeObservable/Range
struct Range_t8010107F598968FC30318C0EDEBFEF2571BD18BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Range_t8010107F598968FC30318C0EDEBFEF2571BD18BE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Range_t8010107F598968FC30318C0EDEBFEF2571BD18BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Range_t8010107F598968FC30318C0EDEBFEF2571BD18BE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Range_t8010107F598968FC30318C0EDEBFEF2571BD18BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Range_t8010107F598968FC30318C0EDEBFEF2571BD18BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Range_t8010107F598968FC30318C0EDEBFEF2571BD18BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Reader/<Start>d__0
struct U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__0_tCADF2D90D0D123F4818A9FB74DC1554F48ECA143_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.RefCountDisposable/InnerDisposable
struct InnerDisposable_tCC5CCCF4D787F585851A44ADAB1BB69355074338_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InnerDisposable_tCC5CCCF4D787F585851A44ADAB1BB69355074338_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline InnerDisposable_tCC5CCCF4D787F585851A44ADAB1BB69355074338_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InnerDisposable_tCC5CCCF4D787F585851A44ADAB1BB69355074338_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InnerDisposable_tCC5CCCF4D787F585851A44ADAB1BB69355074338(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InnerDisposable_tCC5CCCF4D787F585851A44ADAB1BB69355074338_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InnerDisposable_tCC5CCCF4D787F585851A44ADAB1BB69355074338_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber
struct Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscriber_t37F5718FD6154BF6F1B469392F8460ECCED936BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.ResourceFallbackManager/<GetEnumerator>d__5
struct U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29
struct U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CResetAndDeterminePivotU3Ed__29_t1263740A514C9F3FF7300BA1B5CE2B85C44F9F5E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31
struct U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRotateHintSequenceU3Ed__31_tC67AD24B435C97AED6A2047991900735B45F03F6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30
struct U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTrackPositionSequenceU3Ed__30_t087ED00176BA60192681929809084C1FF79F9BA6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2
struct U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for SaveLoad/<SaveTextRoll>d__5
struct U3CSaveTextRollU3Ed__5_t484C4013312D251CC274865815FC073593D132FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSaveTextRollU3Ed__5_t484C4013312D251CC274865815FC073593D132FB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSaveTextRollU3Ed__5_t484C4013312D251CC274865815FC073593D132FB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSaveTextRollU3Ed__5_t484C4013312D251CC274865815FC073593D132FB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSaveTextRollU3Ed__5_t484C4013312D251CC274865815FC073593D132FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSaveTextRollU3Ed__5_t484C4013312D251CC274865815FC073593D132FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSaveTextRollU3Ed__5_t484C4013312D251CC274865815FC073593D132FB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID;
		interfaceIds[3] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CExecuteFilterU3Ed__4_tFB00DAAECFE6F463B57A35A149DD608099F8C91C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID;
		interfaceIds[3] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEC161C6918AC07CCD35F30165C19059B40CE65C9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CExecuteFilterU3Ed__4_t13B28F644C355CBEF7FADC7FEE976E865D206E30_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Examples.Demos.ScrollableListPopulator/<UpdateListOverTime>d__33
struct U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdateListOverTimeU3Ed__33_t72AC4A12F0C568CCC4A53C7E56704DDB353FBA32_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
struct U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204
struct U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateToU3Ed__204_tE989D027F55C11838468D16531D199D3D2A9EB55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.Examples.ShaderPropAnimator/<AnimateProperties>d__6
struct U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimatePropertiesU3Ed__6_t6EF9435006F3F335B99084BECD0ABFEFFEF4A32D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.Examples.SkewTextExample/<WarpText>d__7
struct U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CWarpTextU3Ed__7_tD8218C916B979E7CA67B10A730BD2ACF4B97CA2B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityStandardAssets.Vehicles.Car.SkidTrail/<Start>d__1
struct U3CStartU3Ed__1_tFA371E77840E7C68F30E715324F62E8003456AC0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__1_tFA371E77840E7C68F30E715324F62E8003456AC0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__1_tFA371E77840E7C68F30E715324F62E8003456AC0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__1_tFA371E77840E7C68F30E715324F62E8003456AC0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__1_tFA371E77840E7C68F30E715324F62E8003456AC0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__1_tFA371E77840E7C68F30E715324F62E8003456AC0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__1_tFA371E77840E7C68F30E715324F62E8003456AC0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.SortedList/KeyList
struct KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyList_t90FF026A62D56329DEFC1B768358977E70839881(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyList_t90FF026A62D56329DEFC1B768358977E70839881_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.SortedList/SyncSortedList
struct SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SyncSortedList_t144C2A188AE608D832DBA393CC114DF3AF0696C3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.SortedList/ValueList
struct ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
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

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2
struct U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSaveInternalU3Ed__2_t5CBC9130613ABF63918CF6DA2A265CEFA57380AC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.StableCompositeDisposable/Binary
struct Binary_tBF03B71F14BF3C408FA52EB1925D6E5166533A02_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Binary_tBF03B71F14BF3C408FA52EB1925D6E5166533A02_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Binary_tBF03B71F14BF3C408FA52EB1925D6E5166533A02_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Binary_tBF03B71F14BF3C408FA52EB1925D6E5166533A02_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Binary_tBF03B71F14BF3C408FA52EB1925D6E5166533A02(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Binary_tBF03B71F14BF3C408FA52EB1925D6E5166533A02_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Binary_tBF03B71F14BF3C408FA52EB1925D6E5166533A02_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.StableCompositeDisposable/NAry
struct NAry_tBCA7095912C3532203766C81E270E4981DEA9DDE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NAry_tBCA7095912C3532203766C81E270E4981DEA9DDE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline NAry_tBCA7095912C3532203766C81E270E4981DEA9DDE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NAry_tBCA7095912C3532203766C81E270E4981DEA9DDE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NAry_tBCA7095912C3532203766C81E270E4981DEA9DDE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NAry_tBCA7095912C3532203766C81E270E4981DEA9DDE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NAry_tBCA7095912C3532203766C81E270E4981DEA9DDE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.StableCompositeDisposable/NAryUnsafe
struct NAryUnsafe_tFBB231609E6DAD202A4F9F3E221432103DFE5A9C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NAryUnsafe_tFBB231609E6DAD202A4F9F3E221432103DFE5A9C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline NAryUnsafe_tFBB231609E6DAD202A4F9F3E221432103DFE5A9C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NAryUnsafe_tFBB231609E6DAD202A4F9F3E221432103DFE5A9C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NAryUnsafe_tFBB231609E6DAD202A4F9F3E221432103DFE5A9C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NAryUnsafe_tFBB231609E6DAD202A4F9F3E221432103DFE5A9C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NAryUnsafe_tFBB231609E6DAD202A4F9F3E221432103DFE5A9C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.StableCompositeDisposable/Quaternary
struct Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Quaternary_t415D51C27803A07741FC72052892B0CCF4E5FE4D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.StableCompositeDisposable/Trinary
struct Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Trinary_t55CF2A35F402F96F79D09BA3FE1F96A4FFD7D3B0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.Stream/NullStream
struct NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NullStream_tF4575099C488CADA8BB393D6D5A0876CF280E991_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.StreamReader/NullStreamReader
struct NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NullStreamReader_tF7744A1240136221DD6D2B343F3E8430DB1DA838_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9
struct U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSplitU3Ed__9_t9B1D593E5BD92E8A0609A00E7CAED02CCA370245_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8
struct U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTokenizeU3Ed__8_tD80C937B8831732ACD28C538C3ED506842459C16_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__81
struct U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedDestroyDropdownListU3Ed__81_tDCC96D8C2E2A1BBF26E2C4298BEA75436FD00262_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_InputField/<CaretBlink>d__276
struct U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCaretBlinkU3Ed__276_tE391F900890C07848FF4D1C14321A497A5DA401C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_InputField/<MouseDragOutsideRect>d__294
struct U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMouseDragOutsideRectU3Ed__294_t128D204C94949C68CCF257DBC1D467CC63A7C848_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7
struct U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F_ComCallableWrapper(obj));
}
