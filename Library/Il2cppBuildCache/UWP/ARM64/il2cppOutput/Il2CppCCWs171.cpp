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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>
struct Dictionary_2_t0C7926C07A15BF08BE0C036189B2EB18180B70B4;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_tCD2B0F12D0E02D7BF44AA544916B2D1CCCD4246D;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tEB4537E121ED7128292F5E49486823EB846576FE;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t322EC09791E11E0A99B2E1599FE18BFC27446277;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// TMPro.TextMeshPro[]
struct TextMeshProU5BU5D_t3778A870DEA9C539BB120444989B11661251B7B2;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Timeline.AnimationTrack
struct AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4;
// Microsoft.MixedReality.Toolkit.UI.AppBar
struct AppBar_t5C0EC3FCAD62E29A6548F121C2467D0CF9B123C7;
// Microsoft.MixedReality.Toolkit.UI.AppBarButton
struct AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType
struct ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9;
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9;
// System.Xml.Schema.Asttree
struct Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Xml.AttributePSVIInfo
struct AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C;
// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C;
// UnityEngine.AvatarMask
struct AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// Mono.Math.BigInteger
struct BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D;
// Mono.Math.BigInteger
struct BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00;
// System.Dynamic.BindingRestrictions
struct BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC;
// System.Xml.Schema.BitSet
struct BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438;
// Microsoft.WindowsAzure.Storage.Blob.Protocol.BlobContainerEntry
struct BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0;
// Microsoft.WindowsAzure.Storage.Blob.BlobContainerProperties
struct BlobContainerProperties_t632E9745F16B621558065A86C3AB69A2585E0FA8;
// System.Linq.Expressions.Interpreter.BranchLabel
struct BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5;
// Newtonsoft.Json.Bson.BsonProperty
struct BsonProperty_t655B421995773A6BD1E0C530CC3AFDADE88D549A;
// Newtonsoft.Json.Bson.BsonString
struct BsonString_t9B4577B51E33EBA5FAEBF3C2E6AC6E5583F02A18;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7;
// System.Linq.Expressions.Interpreter.ByRefUpdater
struct ByRefUpdater_t947287A35823D0D1649B767460D71471A72AE717;
// Mono.Net.CFDictionary
struct CFDictionary_tCC86FC857C703D57D0134BAB9D6AB795E52ABF2D;
// Mono.Net.CFProxy
struct CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D;
// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo
struct CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3;
// Microsoft.CSharp.RuntimeBinder.Semantics.CType
struct CType_tDF33E6E64458FDAD600CB42D44998815294363DC;
// System.Text.RegularExpressions.CachedCodeEntry
struct CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95;
// System.Globalization.CalendarData
struct CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_tD410F25D6080088B842DCB67C0051DF4EC6862A2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t923212C7B71ADAD3E3C21B99009C9612530D3FE7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition
struct IMixedRealityInputSourceDefinition_t3EBC1E73FEDD698558A1D9B93A30D18EDD45D334;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B;
// Microsoft.MixedReality.Toolkit.UI.Interactable
struct Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// Microsoft.CSharp.RuntimeBinder.Syntax.Name
struct Name_t0D58C5B52214B22C7F1251593E1902DC82080689;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137;
// Microsoft.MixedReality.Toolkit.UI.PressableButton
struct PressableButton_tAB64524DA813FC7A3EF56078F9FA0E7AB5C8FB77;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.String
struct String_t;
// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465;
// System.Xml.Schema.XmlSchemaInfo
struct XmlSchemaInfo_t0C254CFF8C2758ADB658FC8DA817E5E6D040594B;

IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF;
struct IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD;
struct IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;

struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489;
struct AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A;
struct AnimationTrackU5BU5D_t5421CC5701295BDDCC59B8562285DEE8AEE53157;
struct AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2;
struct AppBarButtonU5BU5D_t7B47F14D0EE1011607E591082BBA11A23AC75EF2;
struct ArgumentObjectU5BU5D_t1F885176A372E7976F3FC8D913DBC40E073FA92D;
struct ArrayTypeU5BU5D_t54C267B544C5B1752FAA157CBE15883524F2C747;
struct ArticulatedHandPoseU5BU5D_t33E5F3215751DBAEFCD55B3D3D0E7B883089A495;
struct AsttreeU5BU5D_t46A15283CE66BEF443E654340B11BC0169C6EC55;
struct AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3;
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4;
struct AttributePSVIInfoU5BU5D_tFC012DB6C5789EA4097CDCDF79848220A8239A8E;
struct AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952;
struct AudioLoFiSourceQualityU5BU5D_tBF182521842AA5E866145D55A64EEFBD9418A39C;
struct AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB;
struct AxisTypeU5BU5D_tC8EB8BC7E5FF37859157F74DD8EE4738B490A794;
struct BaseControllerU5BU5D_t04366F7B7ABDC3FD4B2AA2CB51D44C71D9C09B2E;
struct BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04;
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC;
struct BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11;
struct BatchVisibilityU5BU5D_t4BBF54DA6EFC8E836C4873647C175F2B1F17690B;
struct BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B;
struct BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145;
struct BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7;
struct BindingRestrictionsU5BU5D_t453FB03BCAC3F59B8B67274DC3242F1F4D909AD7;
struct BitSetU5BU5D_t95400D30DE4EA8396AA8017C81305F0A68B3B1FD;
struct BlobContainerEntryU5BU5D_t1778938F8DE645EE53976401A6E3057CDDD24B0E;
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
struct BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684;
struct BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335;
struct BranchLabelU5BU5D_tFC83E1551164B86C7F0FDDA08507782424C8D22F;
struct BsonPropertyU5BU5D_t4ED8AC2085B27079AF707B6D2FC9549A085052FB;
struct BsonTokenU5BU5D_t7CB0391695B8F22EB0DEE56B2FB12A04E5B3B914;
struct ButtonControlU5BU5D_t3EAE436FD15AF49C30C74FA6D88048650D65D191;
struct ByRefUpdaterU5BU5D_t0FAE787778490964F634E1734FBF728A93E13A84;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26;
struct CSharpArgumentInfoU5BU5D_t5585CCCCAD4D3A2F16B7E27F633AD71546DE7A9E;
struct CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0;
struct CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD;
struct CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Boolean>
struct NOVTABLE IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB(IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Byte>
struct NOVTABLE IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.Boolean>
struct NOVTABLE IReferenceArray_1_t48259FE322824681F348D90FD4026837611A6741 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mD17835FF1D2A2588B1182DDD078179FC94636E80(uint32_t* comReturnValueArraySize, bool** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.Byte>
struct NOVTABLE IReferenceArray_1_t80CD13C8F5FD9D0C9F37FB41C9A0854230D759DE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mECA8C42F721DD0D91E170257E9DBC6C9746F8DEA(uint32_t* comReturnValueArraySize, uint8_t** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Boolean>
struct NOVTABLE IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m6F799ADF54AECADE79946CB6469CB6BF49B38135(uint32_t ___index0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD8B6592916D3739AAC161FDA1D630543219E9D7D(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mA4B38845B990B4640F82CC8363BFB67E20945E9B(bool ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4340482DAAA20E17654D33CFD65BE7ED60A353C3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Byte>
struct NOVTABLE IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB(uint32_t ___index0, uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Boolean>
struct NOVTABLE IVector_1_t3AC2680BA65E508568784202EDBE66AA4B9FDBD5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mC72C7E4492535B801A9836EE9B294754AA15E4CC(uint32_t ___index0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m524C3F1DA919856922598A4F9F974E76762505F1(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m9A4C974BF7C31CFB2CC06C51775F63E5159350E0(IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mA9C9AC4FE9777E80D36F86220C2A7251EA278D6D(bool ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m6532677A8FFFC8BE39E4487E8B5B957DEB895258(uint32_t ___index0, bool ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mA71A9B77FAE574BBB3C8B8545D7D31AC6904F175(uint32_t ___index0, bool ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mFB31764EA0E4A914AC690D50E107200DA8F477BD(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_mC5076A05A69921B6EBDAF1281FF5561C9E9791B5(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mE9D09CA75800B62324F89063623FC3566CBDFA76() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mD2EC4E85D8B8C83D22294D25A576B428A27D5CD6() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mFAEFB6B3F4D153F96F9D9B3DAA2D33F732AD3365(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m410FDC792A0957EC89ABB07AD1555D630AAECAC2(uint32_t ___items0ArraySize, bool* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Byte>
struct NOVTABLE IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B(uint32_t ___index0, uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536(IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79(uint32_t ___index0, uint8_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818(uint32_t ___index0, uint8_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D(uint8_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B(uint32_t ___items0ArraySize, uint8_t* ___items0) = 0;
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

// System.Object


// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::localJointPoses
	MixedRealityPoseU5BU5D_t322EC09791E11E0A99B2E1599FE18BFC27446277* ___localJointPoses_2;

public:
	inline static int32_t get_offset_of_localJointPoses_2() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9, ___localJointPoses_2)); }
	inline MixedRealityPoseU5BU5D_t322EC09791E11E0A99B2E1599FE18BFC27446277* get_localJointPoses_2() const { return ___localJointPoses_2; }
	inline MixedRealityPoseU5BU5D_t322EC09791E11E0A99B2E1599FE18BFC27446277** get_address_of_localJointPoses_2() { return &___localJointPoses_2; }
	inline void set_localJointPoses_2(MixedRealityPoseU5BU5D_t322EC09791E11E0A99B2E1599FE18BFC27446277* value)
	{
		___localJointPoses_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localJointPoses_2), (void*)value);
	}
};

struct ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::Joints
	TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE* ___Joints_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::<JointCount>k__BackingField
	int32_t ___U3CJointCountU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose> Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::handPoses
	Dictionary_2_t0C7926C07A15BF08BE0C036189B2EB18180B70B4 * ___handPoses_3;

public:
	inline static int32_t get_offset_of_Joints_0() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9_StaticFields, ___Joints_0)); }
	inline TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE* get_Joints_0() const { return ___Joints_0; }
	inline TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE** get_address_of_Joints_0() { return &___Joints_0; }
	inline void set_Joints_0(TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE* value)
	{
		___Joints_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Joints_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJointCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9_StaticFields, ___U3CJointCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CJointCountU3Ek__BackingField_1() const { return ___U3CJointCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CJointCountU3Ek__BackingField_1() { return &___U3CJointCountU3Ek__BackingField_1; }
	inline void set_U3CJointCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CJointCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_handPoses_3() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9_StaticFields, ___handPoses_3)); }
	inline Dictionary_2_t0C7926C07A15BF08BE0C036189B2EB18180B70B4 * get_handPoses_3() const { return ___handPoses_3; }
	inline Dictionary_2_t0C7926C07A15BF08BE0C036189B2EB18180B70B4 ** get_address_of_handPoses_3() { return &___handPoses_3; }
	inline void set_handPoses_3(Dictionary_2_t0C7926C07A15BF08BE0C036189B2EB18180B70B4 * value)
	{
		___handPoses_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPoses_3), (void*)value);
	}
};


// System.Xml.Schema.Asttree
struct Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Xml.Schema.Asttree::fAxisArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___fAxisArray_0;
	// System.String System.Xml.Schema.Asttree::xpathexpr
	String_t* ___xpathexpr_1;
	// System.Boolean System.Xml.Schema.Asttree::isField
	bool ___isField_2;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.Asttree::nsmgr
	XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 * ___nsmgr_3;

public:
	inline static int32_t get_offset_of_fAxisArray_0() { return static_cast<int32_t>(offsetof(Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571, ___fAxisArray_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_fAxisArray_0() const { return ___fAxisArray_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_fAxisArray_0() { return &___fAxisArray_0; }
	inline void set_fAxisArray_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___fAxisArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fAxisArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_xpathexpr_1() { return static_cast<int32_t>(offsetof(Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571, ___xpathexpr_1)); }
	inline String_t* get_xpathexpr_1() const { return ___xpathexpr_1; }
	inline String_t** get_address_of_xpathexpr_1() { return &___xpathexpr_1; }
	inline void set_xpathexpr_1(String_t* value)
	{
		___xpathexpr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xpathexpr_1), (void*)value);
	}

	inline static int32_t get_offset_of_isField_2() { return static_cast<int32_t>(offsetof(Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571, ___isField_2)); }
	inline bool get_isField_2() const { return ___isField_2; }
	inline bool* get_address_of_isField_2() { return &___isField_2; }
	inline void set_isField_2(bool value)
	{
		___isField_2 = value;
	}

	inline static int32_t get_offset_of_nsmgr_3() { return static_cast<int32_t>(offsetof(Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571, ___nsmgr_3)); }
	inline XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 * get_nsmgr_3() const { return ___nsmgr_3; }
	inline XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 ** get_address_of_nsmgr_3() { return &___nsmgr_3; }
	inline void set_nsmgr_3(XmlNamespaceManager_t6A4FCF4236F34CF069932BF51B62FD2E62402465 * value)
	{
		___nsmgr_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nsmgr_3), (void*)value);
	}
};


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Xml.AttributePSVIInfo
struct AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81  : public RuntimeObject
{
public:
	// System.String System.Xml.AttributePSVIInfo::localName
	String_t* ___localName_0;
	// System.String System.Xml.AttributePSVIInfo::namespaceUri
	String_t* ___namespaceUri_1;
	// System.Object System.Xml.AttributePSVIInfo::typedAttributeValue
	RuntimeObject * ___typedAttributeValue_2;
	// System.Xml.Schema.XmlSchemaInfo System.Xml.AttributePSVIInfo::attributeSchemaInfo
	XmlSchemaInfo_t0C254CFF8C2758ADB658FC8DA817E5E6D040594B * ___attributeSchemaInfo_3;

public:
	inline static int32_t get_offset_of_localName_0() { return static_cast<int32_t>(offsetof(AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81, ___localName_0)); }
	inline String_t* get_localName_0() const { return ___localName_0; }
	inline String_t** get_address_of_localName_0() { return &___localName_0; }
	inline void set_localName_0(String_t* value)
	{
		___localName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_0), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceUri_1() { return static_cast<int32_t>(offsetof(AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81, ___namespaceUri_1)); }
	inline String_t* get_namespaceUri_1() const { return ___namespaceUri_1; }
	inline String_t** get_address_of_namespaceUri_1() { return &___namespaceUri_1; }
	inline void set_namespaceUri_1(String_t* value)
	{
		___namespaceUri_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceUri_1), (void*)value);
	}

	inline static int32_t get_offset_of_typedAttributeValue_2() { return static_cast<int32_t>(offsetof(AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81, ___typedAttributeValue_2)); }
	inline RuntimeObject * get_typedAttributeValue_2() const { return ___typedAttributeValue_2; }
	inline RuntimeObject ** get_address_of_typedAttributeValue_2() { return &___typedAttributeValue_2; }
	inline void set_typedAttributeValue_2(RuntimeObject * value)
	{
		___typedAttributeValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typedAttributeValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_attributeSchemaInfo_3() { return static_cast<int32_t>(offsetof(AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81, ___attributeSchemaInfo_3)); }
	inline XmlSchemaInfo_t0C254CFF8C2758ADB658FC8DA817E5E6D040594B * get_attributeSchemaInfo_3() const { return ___attributeSchemaInfo_3; }
	inline XmlSchemaInfo_t0C254CFF8C2758ADB658FC8DA817E5E6D040594B ** get_address_of_attributeSchemaInfo_3() { return &___attributeSchemaInfo_3; }
	inline void set_attributeSchemaInfo_3(XmlSchemaInfo_t0C254CFF8C2758ADB658FC8DA817E5E6D040594B * value)
	{
		___attributeSchemaInfo_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeSchemaInfo_3), (void*)value);
	}
};


// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C  : public RuntimeObject
{
public:
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Parameter>k__BackingField
	String_t* ___U3CParameterU3Ek__BackingField_0;
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CParameterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C, ___U3CParameterU3Ek__BackingField_0)); }
	inline String_t* get_U3CParameterU3Ek__BackingField_0() const { return ___U3CParameterU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CParameterU3Ek__BackingField_0() { return &___U3CParameterU3Ek__BackingField_0; }
	inline void set_U3CParameterU3Ek__BackingField_0(String_t* value)
	{
		___U3CParameterU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParameterU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSchemeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C, ___U3CSchemeU3Ek__BackingField_1)); }
	inline String_t* get_U3CSchemeU3Ek__BackingField_1() const { return ___U3CSchemeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSchemeU3Ek__BackingField_1() { return &___U3CSchemeU3Ek__BackingField_1; }
	inline void set_U3CSchemeU3Ek__BackingField_1(String_t* value)
	{
		___U3CSchemeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSchemeU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784  : public RuntimeObject
{
public:

public:
};


// Mono.Math.BigInteger
struct BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D, ___data_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}
};

struct BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smallPrimes_2), (void*)value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rng_3), (void*)value);
	}
};


// Mono.Math.BigInteger
struct BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00, ___data_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}
};

struct BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smallPrimes_2), (void*)value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rng_3), (void*)value);
	}
};


// System.Dynamic.BindingRestrictions
struct BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC  : public RuntimeObject
{
public:

public:
};

struct BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC_StaticFields
{
public:
	// System.Dynamic.BindingRestrictions System.Dynamic.BindingRestrictions::Empty
	BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC_StaticFields, ___Empty_0)); }
	inline BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC * get_Empty_0() const { return ___Empty_0; }
	inline BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Xml.Schema.BitSet
struct BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Schema.BitSet::count
	int32_t ___count_0;
	// System.UInt32[] System.Xml.Schema.BitSet::bits
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___bits_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_bits_1() { return static_cast<int32_t>(offsetof(BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438, ___bits_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_bits_1() const { return ___bits_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_bits_1() { return &___bits_1; }
	inline void set_bits_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___bits_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bits_1), (void*)value);
	}
};


// Microsoft.WindowsAzure.Storage.Blob.Protocol.BlobContainerEntry
struct BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.WindowsAzure.Storage.Blob.Protocol.BlobContainerEntry::<Metadata>k__BackingField
	RuntimeObject* ___U3CMetadataU3Ek__BackingField_0;
	// Microsoft.WindowsAzure.Storage.Blob.BlobContainerProperties Microsoft.WindowsAzure.Storage.Blob.Protocol.BlobContainerEntry::<Properties>k__BackingField
	BlobContainerProperties_t632E9745F16B621558065A86C3AB69A2585E0FA8 * ___U3CPropertiesU3Ek__BackingField_1;
	// System.String Microsoft.WindowsAzure.Storage.Blob.Protocol.BlobContainerEntry::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Uri Microsoft.WindowsAzure.Storage.Blob.Protocol.BlobContainerEntry::<Uri>k__BackingField
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___U3CUriU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMetadataU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0, ___U3CMetadataU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CMetadataU3Ek__BackingField_0() const { return ___U3CMetadataU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CMetadataU3Ek__BackingField_0() { return &___U3CMetadataU3Ek__BackingField_0; }
	inline void set_U3CMetadataU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CMetadataU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetadataU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0, ___U3CPropertiesU3Ek__BackingField_1)); }
	inline BlobContainerProperties_t632E9745F16B621558065A86C3AB69A2585E0FA8 * get_U3CPropertiesU3Ek__BackingField_1() const { return ___U3CPropertiesU3Ek__BackingField_1; }
	inline BlobContainerProperties_t632E9745F16B621558065A86C3AB69A2585E0FA8 ** get_address_of_U3CPropertiesU3Ek__BackingField_1() { return &___U3CPropertiesU3Ek__BackingField_1; }
	inline void set_U3CPropertiesU3Ek__BackingField_1(BlobContainerProperties_t632E9745F16B621558065A86C3AB69A2585E0FA8 * value)
	{
		___U3CPropertiesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0, ___U3CNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUriU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0, ___U3CUriU3Ek__BackingField_3)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_U3CUriU3Ek__BackingField_3() const { return ___U3CUriU3Ek__BackingField_3; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_U3CUriU3Ek__BackingField_3() { return &___U3CUriU3Ek__BackingField_3; }
	inline void set_U3CUriU3Ek__BackingField_3(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___U3CUriU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUriU3Ek__BackingField_3), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.BranchLabel
struct BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Expressions.Interpreter.BranchLabel::_targetIndex
	int32_t ____targetIndex_0;
	// System.Int32 System.Linq.Expressions.Interpreter.BranchLabel::_stackDepth
	int32_t ____stackDepth_1;
	// System.Int32 System.Linq.Expressions.Interpreter.BranchLabel::_continuationStackDepth
	int32_t ____continuationStackDepth_2;
	// System.Collections.Generic.List`1<System.Int32> System.Linq.Expressions.Interpreter.BranchLabel::_forwardBranchFixups
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ____forwardBranchFixups_3;
	// System.Int32 System.Linq.Expressions.Interpreter.BranchLabel::<LabelIndex>k__BackingField
	int32_t ___U3CLabelIndexU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__targetIndex_0() { return static_cast<int32_t>(offsetof(BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5, ____targetIndex_0)); }
	inline int32_t get__targetIndex_0() const { return ____targetIndex_0; }
	inline int32_t* get_address_of__targetIndex_0() { return &____targetIndex_0; }
	inline void set__targetIndex_0(int32_t value)
	{
		____targetIndex_0 = value;
	}

	inline static int32_t get_offset_of__stackDepth_1() { return static_cast<int32_t>(offsetof(BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5, ____stackDepth_1)); }
	inline int32_t get__stackDepth_1() const { return ____stackDepth_1; }
	inline int32_t* get_address_of__stackDepth_1() { return &____stackDepth_1; }
	inline void set__stackDepth_1(int32_t value)
	{
		____stackDepth_1 = value;
	}

	inline static int32_t get_offset_of__continuationStackDepth_2() { return static_cast<int32_t>(offsetof(BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5, ____continuationStackDepth_2)); }
	inline int32_t get__continuationStackDepth_2() const { return ____continuationStackDepth_2; }
	inline int32_t* get_address_of__continuationStackDepth_2() { return &____continuationStackDepth_2; }
	inline void set__continuationStackDepth_2(int32_t value)
	{
		____continuationStackDepth_2 = value;
	}

	inline static int32_t get_offset_of__forwardBranchFixups_3() { return static_cast<int32_t>(offsetof(BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5, ____forwardBranchFixups_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get__forwardBranchFixups_3() const { return ____forwardBranchFixups_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of__forwardBranchFixups_3() { return &____forwardBranchFixups_3; }
	inline void set__forwardBranchFixups_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		____forwardBranchFixups_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forwardBranchFixups_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLabelIndexU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5, ___U3CLabelIndexU3Ek__BackingField_4)); }
	inline int32_t get_U3CLabelIndexU3Ek__BackingField_4() const { return ___U3CLabelIndexU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CLabelIndexU3Ek__BackingField_4() { return &___U3CLabelIndexU3Ek__BackingField_4; }
	inline void set_U3CLabelIndexU3Ek__BackingField_4(int32_t value)
	{
		___U3CLabelIndexU3Ek__BackingField_4 = value;
	}
};


// Newtonsoft.Json.Bson.BsonProperty
struct BsonProperty_t655B421995773A6BD1E0C530CC3AFDADE88D549A  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::<Name>k__BackingField
	BsonString_t9B4577B51E33EBA5FAEBF3C2E6AC6E5583F02A18 * ___U3CNameU3Ek__BackingField_0;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::<Value>k__BackingField
	BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 * ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BsonProperty_t655B421995773A6BD1E0C530CC3AFDADE88D549A, ___U3CNameU3Ek__BackingField_0)); }
	inline BsonString_t9B4577B51E33EBA5FAEBF3C2E6AC6E5583F02A18 * get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline BsonString_t9B4577B51E33EBA5FAEBF3C2E6AC6E5583F02A18 ** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(BsonString_t9B4577B51E33EBA5FAEBF3C2E6AC6E5583F02A18 * value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BsonProperty_t655B421995773A6BD1E0C530CC3AFDADE88D549A, ___U3CValueU3Ek__BackingField_1)); }
	inline BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 * get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 ** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 * value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_1), (void*)value);
	}
};


// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonToken::<Parent>k__BackingField
	BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 * ___U3CParentU3Ek__BackingField_0;
	// System.Int32 Newtonsoft.Json.Bson.BsonToken::<CalculatedSize>k__BackingField
	int32_t ___U3CCalculatedSizeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198, ___U3CParentU3Ek__BackingField_0)); }
	inline BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 * get_U3CParentU3Ek__BackingField_0() const { return ___U3CParentU3Ek__BackingField_0; }
	inline BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 ** get_address_of_U3CParentU3Ek__BackingField_0() { return &___U3CParentU3Ek__BackingField_0; }
	inline void set_U3CParentU3Ek__BackingField_0(BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 * value)
	{
		___U3CParentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParentU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCalculatedSizeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198, ___U3CCalculatedSizeU3Ek__BackingField_1)); }
	inline int32_t get_U3CCalculatedSizeU3Ek__BackingField_1() const { return ___U3CCalculatedSizeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CCalculatedSizeU3Ek__BackingField_1() { return &___U3CCalculatedSizeU3Ek__BackingField_1; }
	inline void set_U3CCalculatedSizeU3Ek__BackingField_1(int32_t value)
	{
		___U3CCalculatedSizeU3Ek__BackingField_1 = value;
	}
};


// System.Linq.Expressions.Interpreter.ByRefUpdater
struct ByRefUpdater_t947287A35823D0D1649B767460D71471A72AE717  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Expressions.Interpreter.ByRefUpdater::ArgumentIndex
	int32_t ___ArgumentIndex_0;

public:
	inline static int32_t get_offset_of_ArgumentIndex_0() { return static_cast<int32_t>(offsetof(ByRefUpdater_t947287A35823D0D1649B767460D71471A72AE717, ___ArgumentIndex_0)); }
	inline int32_t get_ArgumentIndex_0() const { return ___ArgumentIndex_0; }
	inline int32_t* get_address_of_ArgumentIndex_0() { return &___ArgumentIndex_0; }
	inline void set_ArgumentIndex_0(int32_t value)
	{
		___ArgumentIndex_0 = value;
	}
};


// System.Text.RegularExpressions.CachedCodeEntry
struct CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.CachedCodeEntry::_key
	String_t* ____key_0;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.CachedCodeEntry::_code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ____code_1;
	// System.Collections.Hashtable System.Text.RegularExpressions.CachedCodeEntry::_caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____caps_2;
	// System.Collections.Hashtable System.Text.RegularExpressions.CachedCodeEntry::_capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____capnames_3;
	// System.String[] System.Text.RegularExpressions.CachedCodeEntry::_capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____capslist_4;
	// System.Int32 System.Text.RegularExpressions.CachedCodeEntry::_capsize
	int32_t ____capsize_5;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.CachedCodeEntry::_factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ____factory_6;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.CachedCodeEntry::_runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ____runnerref_7;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.CachedCodeEntry::_replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ____replref_8;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____key_0)); }
	inline String_t* get__key_0() const { return ____key_0; }
	inline String_t** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(String_t* value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__code_1() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____code_1)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get__code_1() const { return ____code_1; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of__code_1() { return &____code_1; }
	inline void set__code_1(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		____code_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____code_1), (void*)value);
	}

	inline static int32_t get_offset_of__caps_2() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____caps_2)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__caps_2() const { return ____caps_2; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__caps_2() { return &____caps_2; }
	inline void set__caps_2(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____caps_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caps_2), (void*)value);
	}

	inline static int32_t get_offset_of__capnames_3() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____capnames_3)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__capnames_3() const { return ____capnames_3; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__capnames_3() { return &____capnames_3; }
	inline void set__capnames_3(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____capnames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____capnames_3), (void*)value);
	}

	inline static int32_t get_offset_of__capslist_4() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____capslist_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__capslist_4() const { return ____capslist_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__capslist_4() { return &____capslist_4; }
	inline void set__capslist_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____capslist_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____capslist_4), (void*)value);
	}

	inline static int32_t get_offset_of__capsize_5() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____capsize_5)); }
	inline int32_t get__capsize_5() const { return ____capsize_5; }
	inline int32_t* get_address_of__capsize_5() { return &____capsize_5; }
	inline void set__capsize_5(int32_t value)
	{
		____capsize_5 = value;
	}

	inline static int32_t get_offset_of__factory_6() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____factory_6)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get__factory_6() const { return ____factory_6; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of__factory_6() { return &____factory_6; }
	inline void set__factory_6(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		____factory_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____factory_6), (void*)value);
	}

	inline static int32_t get_offset_of__runnerref_7() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____runnerref_7)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get__runnerref_7() const { return ____runnerref_7; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of__runnerref_7() { return &____runnerref_7; }
	inline void set__runnerref_7(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		____runnerref_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runnerref_7), (void*)value);
	}

	inline static int32_t get_offset_of__replref_8() { return static_cast<int32_t>(offsetof(CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95, ____replref_8)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get__replref_8() const { return ____replref_8; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of__replref_8() { return &____replref_8; }
	inline void set__replref_8(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		____replref_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____replref_8), (void*)value);
	}
};


// System.Globalization.CalendarData
struct CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4  : public RuntimeObject
{
public:
	// System.String System.Globalization.CalendarData::sNativeName
	String_t* ___sNativeName_1;
	// System.String[] System.Globalization.CalendarData::saShortDates
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saShortDates_2;
	// System.String[] System.Globalization.CalendarData::saYearMonths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saYearMonths_3;
	// System.String[] System.Globalization.CalendarData::saLongDates
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saLongDates_4;
	// System.String System.Globalization.CalendarData::sMonthDay
	String_t* ___sMonthDay_5;
	// System.String[] System.Globalization.CalendarData::saEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saEraNames_6;
	// System.String[] System.Globalization.CalendarData::saAbbrevEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saAbbrevEraNames_7;
	// System.String[] System.Globalization.CalendarData::saAbbrevEnglishEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saAbbrevEnglishEraNames_8;
	// System.String[] System.Globalization.CalendarData::saDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saDayNames_9;
	// System.String[] System.Globalization.CalendarData::saAbbrevDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saAbbrevDayNames_10;
	// System.String[] System.Globalization.CalendarData::saSuperShortDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saSuperShortDayNames_11;
	// System.String[] System.Globalization.CalendarData::saMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saMonthNames_12;
	// System.String[] System.Globalization.CalendarData::saAbbrevMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saAbbrevMonthNames_13;
	// System.String[] System.Globalization.CalendarData::saMonthGenitiveNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saMonthGenitiveNames_14;
	// System.String[] System.Globalization.CalendarData::saAbbrevMonthGenitiveNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saAbbrevMonthGenitiveNames_15;
	// System.String[] System.Globalization.CalendarData::saLeapYearMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___saLeapYearMonthNames_16;
	// System.Int32 System.Globalization.CalendarData::iTwoDigitYearMax
	int32_t ___iTwoDigitYearMax_17;
	// System.Int32 System.Globalization.CalendarData::iCurrentEra
	int32_t ___iCurrentEra_18;
	// System.Boolean System.Globalization.CalendarData::bUseUserOverrides
	bool ___bUseUserOverrides_19;

public:
	inline static int32_t get_offset_of_sNativeName_1() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___sNativeName_1)); }
	inline String_t* get_sNativeName_1() const { return ___sNativeName_1; }
	inline String_t** get_address_of_sNativeName_1() { return &___sNativeName_1; }
	inline void set_sNativeName_1(String_t* value)
	{
		___sNativeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sNativeName_1), (void*)value);
	}

	inline static int32_t get_offset_of_saShortDates_2() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saShortDates_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saShortDates_2() const { return ___saShortDates_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saShortDates_2() { return &___saShortDates_2; }
	inline void set_saShortDates_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saShortDates_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saShortDates_2), (void*)value);
	}

	inline static int32_t get_offset_of_saYearMonths_3() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saYearMonths_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saYearMonths_3() const { return ___saYearMonths_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saYearMonths_3() { return &___saYearMonths_3; }
	inline void set_saYearMonths_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saYearMonths_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saYearMonths_3), (void*)value);
	}

	inline static int32_t get_offset_of_saLongDates_4() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saLongDates_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saLongDates_4() const { return ___saLongDates_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saLongDates_4() { return &___saLongDates_4; }
	inline void set_saLongDates_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saLongDates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saLongDates_4), (void*)value);
	}

	inline static int32_t get_offset_of_sMonthDay_5() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___sMonthDay_5)); }
	inline String_t* get_sMonthDay_5() const { return ___sMonthDay_5; }
	inline String_t** get_address_of_sMonthDay_5() { return &___sMonthDay_5; }
	inline void set_sMonthDay_5(String_t* value)
	{
		___sMonthDay_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sMonthDay_5), (void*)value);
	}

	inline static int32_t get_offset_of_saEraNames_6() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saEraNames_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saEraNames_6() const { return ___saEraNames_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saEraNames_6() { return &___saEraNames_6; }
	inline void set_saEraNames_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saEraNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saEraNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_saAbbrevEraNames_7() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saAbbrevEraNames_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saAbbrevEraNames_7() const { return ___saAbbrevEraNames_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saAbbrevEraNames_7() { return &___saAbbrevEraNames_7; }
	inline void set_saAbbrevEraNames_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saAbbrevEraNames_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saAbbrevEraNames_7), (void*)value);
	}

	inline static int32_t get_offset_of_saAbbrevEnglishEraNames_8() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saAbbrevEnglishEraNames_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saAbbrevEnglishEraNames_8() const { return ___saAbbrevEnglishEraNames_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saAbbrevEnglishEraNames_8() { return &___saAbbrevEnglishEraNames_8; }
	inline void set_saAbbrevEnglishEraNames_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saAbbrevEnglishEraNames_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saAbbrevEnglishEraNames_8), (void*)value);
	}

	inline static int32_t get_offset_of_saDayNames_9() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saDayNames_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saDayNames_9() const { return ___saDayNames_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saDayNames_9() { return &___saDayNames_9; }
	inline void set_saDayNames_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saDayNames_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saDayNames_9), (void*)value);
	}

	inline static int32_t get_offset_of_saAbbrevDayNames_10() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saAbbrevDayNames_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saAbbrevDayNames_10() const { return ___saAbbrevDayNames_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saAbbrevDayNames_10() { return &___saAbbrevDayNames_10; }
	inline void set_saAbbrevDayNames_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saAbbrevDayNames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saAbbrevDayNames_10), (void*)value);
	}

	inline static int32_t get_offset_of_saSuperShortDayNames_11() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saSuperShortDayNames_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saSuperShortDayNames_11() const { return ___saSuperShortDayNames_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saSuperShortDayNames_11() { return &___saSuperShortDayNames_11; }
	inline void set_saSuperShortDayNames_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saSuperShortDayNames_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saSuperShortDayNames_11), (void*)value);
	}

	inline static int32_t get_offset_of_saMonthNames_12() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saMonthNames_12)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saMonthNames_12() const { return ___saMonthNames_12; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saMonthNames_12() { return &___saMonthNames_12; }
	inline void set_saMonthNames_12(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saMonthNames_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saMonthNames_12), (void*)value);
	}

	inline static int32_t get_offset_of_saAbbrevMonthNames_13() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saAbbrevMonthNames_13)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saAbbrevMonthNames_13() const { return ___saAbbrevMonthNames_13; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saAbbrevMonthNames_13() { return &___saAbbrevMonthNames_13; }
	inline void set_saAbbrevMonthNames_13(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saAbbrevMonthNames_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saAbbrevMonthNames_13), (void*)value);
	}

	inline static int32_t get_offset_of_saMonthGenitiveNames_14() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saMonthGenitiveNames_14)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saMonthGenitiveNames_14() const { return ___saMonthGenitiveNames_14; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saMonthGenitiveNames_14() { return &___saMonthGenitiveNames_14; }
	inline void set_saMonthGenitiveNames_14(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saMonthGenitiveNames_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saMonthGenitiveNames_14), (void*)value);
	}

	inline static int32_t get_offset_of_saAbbrevMonthGenitiveNames_15() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saAbbrevMonthGenitiveNames_15)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saAbbrevMonthGenitiveNames_15() const { return ___saAbbrevMonthGenitiveNames_15; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saAbbrevMonthGenitiveNames_15() { return &___saAbbrevMonthGenitiveNames_15; }
	inline void set_saAbbrevMonthGenitiveNames_15(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saAbbrevMonthGenitiveNames_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saAbbrevMonthGenitiveNames_15), (void*)value);
	}

	inline static int32_t get_offset_of_saLeapYearMonthNames_16() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___saLeapYearMonthNames_16)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_saLeapYearMonthNames_16() const { return ___saLeapYearMonthNames_16; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_saLeapYearMonthNames_16() { return &___saLeapYearMonthNames_16; }
	inline void set_saLeapYearMonthNames_16(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___saLeapYearMonthNames_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saLeapYearMonthNames_16), (void*)value);
	}

	inline static int32_t get_offset_of_iTwoDigitYearMax_17() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___iTwoDigitYearMax_17)); }
	inline int32_t get_iTwoDigitYearMax_17() const { return ___iTwoDigitYearMax_17; }
	inline int32_t* get_address_of_iTwoDigitYearMax_17() { return &___iTwoDigitYearMax_17; }
	inline void set_iTwoDigitYearMax_17(int32_t value)
	{
		___iTwoDigitYearMax_17 = value;
	}

	inline static int32_t get_offset_of_iCurrentEra_18() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___iCurrentEra_18)); }
	inline int32_t get_iCurrentEra_18() const { return ___iCurrentEra_18; }
	inline int32_t* get_address_of_iCurrentEra_18() { return &___iCurrentEra_18; }
	inline void set_iCurrentEra_18(int32_t value)
	{
		___iCurrentEra_18 = value;
	}

	inline static int32_t get_offset_of_bUseUserOverrides_19() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4, ___bUseUserOverrides_19)); }
	inline bool get_bUseUserOverrides_19() const { return ___bUseUserOverrides_19; }
	inline bool* get_address_of_bUseUserOverrides_19() { return &___bUseUserOverrides_19; }
	inline void set_bUseUserOverrides_19(bool value)
	{
		___bUseUserOverrides_19 = value;
	}
};

struct CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_StaticFields
{
public:
	// System.Globalization.CalendarData System.Globalization.CalendarData::Invariant
	CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * ___Invariant_20;

public:
	inline static int32_t get_offset_of_Invariant_20() { return static_cast<int32_t>(offsetof(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_StaticFields, ___Invariant_20)); }
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * get_Invariant_20() const { return ___Invariant_20; }
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 ** get_address_of_Invariant_20() { return &___Invariant_20; }
	inline void set_Invariant_20(CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * value)
	{
		___Invariant_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Invariant_20), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CalendarData
struct CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshaled_pinvoke
{
	char* ___sNativeName_1;
	char** ___saShortDates_2;
	char** ___saYearMonths_3;
	char** ___saLongDates_4;
	char* ___sMonthDay_5;
	char** ___saEraNames_6;
	char** ___saAbbrevEraNames_7;
	char** ___saAbbrevEnglishEraNames_8;
	char** ___saDayNames_9;
	char** ___saAbbrevDayNames_10;
	char** ___saSuperShortDayNames_11;
	char** ___saMonthNames_12;
	char** ___saAbbrevMonthNames_13;
	char** ___saMonthGenitiveNames_14;
	char** ___saAbbrevMonthGenitiveNames_15;
	char** ___saLeapYearMonthNames_16;
	int32_t ___iTwoDigitYearMax_17;
	int32_t ___iCurrentEra_18;
	int32_t ___bUseUserOverrides_19;
};
// Native definition for COM marshalling of System.Globalization.CalendarData
struct CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4_marshaled_com
{
	Il2CppChar* ___sNativeName_1;
	Il2CppChar** ___saShortDates_2;
	Il2CppChar** ___saYearMonths_3;
	Il2CppChar** ___saLongDates_4;
	Il2CppChar* ___sMonthDay_5;
	Il2CppChar** ___saEraNames_6;
	Il2CppChar** ___saAbbrevEraNames_7;
	Il2CppChar** ___saAbbrevEnglishEraNames_8;
	Il2CppChar** ___saDayNames_9;
	Il2CppChar** ___saAbbrevDayNames_10;
	Il2CppChar** ___saSuperShortDayNames_11;
	Il2CppChar** ___saMonthNames_12;
	Il2CppChar** ___saAbbrevMonthNames_13;
	Il2CppChar** ___saMonthGenitiveNames_14;
	Il2CppChar** ___saAbbrevMonthGenitiveNames_15;
	Il2CppChar** ___saLeapYearMonthNames_16;
	int32_t ___iTwoDigitYearMax_17;
	int32_t ___iCurrentEra_18;
	int32_t ___bUseUserOverrides_19;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___firstValue_1)); }
	inline InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
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


// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// Microsoft.CSharp.RuntimeBinder.ArgumentObject
struct ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF 
{
public:
	// System.Object Microsoft.CSharp.RuntimeBinder.ArgumentObject::Value
	RuntimeObject * ___Value_0;
	// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo Microsoft.CSharp.RuntimeBinder.ArgumentObject::Info
	CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * ___Info_1;
	// System.Type Microsoft.CSharp.RuntimeBinder.ArgumentObject::Type
	Type_t * ___Type_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF, ___Value_0)); }
	inline RuntimeObject * get_Value_0() const { return ___Value_0; }
	inline RuntimeObject ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(RuntimeObject * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_Info_1() { return static_cast<int32_t>(offsetof(ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF, ___Info_1)); }
	inline CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * get_Info_1() const { return ___Info_1; }
	inline CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 ** get_address_of_Info_1() { return &___Info_1; }
	inline void set_Info_1(CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * value)
	{
		___Info_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_1), (void*)value);
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.CSharp.RuntimeBinder.ArgumentObject
struct ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF_marshaled_pinvoke
{
	Il2CppIUnknown* ___Value_0;
	CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * ___Info_1;
	Type_t * ___Type_2;
};
// Native definition for COM marshalling of Microsoft.CSharp.RuntimeBinder.ArgumentObject
struct ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF_marshaled_com
{
	Il2CppIUnknown* ___Value_0;
	CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * ___Info_1;
	Type_t * ___Type_2;
};

// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// UnityEngine.XR.Bone
struct Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 
{
public:
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// UnityEngine.BoneWeight
struct BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8 
{
public:
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;

public:
	inline static int32_t get_offset_of_m_Weight0_0() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight0_0)); }
	inline float get_m_Weight0_0() const { return ___m_Weight0_0; }
	inline float* get_address_of_m_Weight0_0() { return &___m_Weight0_0; }
	inline void set_m_Weight0_0(float value)
	{
		___m_Weight0_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight1_1() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight1_1)); }
	inline float get_m_Weight1_1() const { return ___m_Weight1_1; }
	inline float* get_address_of_m_Weight1_1() { return &___m_Weight1_1; }
	inline void set_m_Weight1_1(float value)
	{
		___m_Weight1_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight2_2() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight2_2)); }
	inline float get_m_Weight2_2() const { return ___m_Weight2_2; }
	inline float* get_address_of_m_Weight2_2() { return &___m_Weight2_2; }
	inline void set_m_Weight2_2(float value)
	{
		___m_Weight2_2 = value;
	}

	inline static int32_t get_offset_of_m_Weight3_3() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight3_3)); }
	inline float get_m_Weight3_3() const { return ___m_Weight3_3; }
	inline float* get_address_of_m_Weight3_3() { return &___m_Weight3_3; }
	inline void set_m_Weight3_3(float value)
	{
		___m_Weight3_3 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex0_4() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex0_4)); }
	inline int32_t get_m_BoneIndex0_4() const { return ___m_BoneIndex0_4; }
	inline int32_t* get_address_of_m_BoneIndex0_4() { return &___m_BoneIndex0_4; }
	inline void set_m_BoneIndex0_4(int32_t value)
	{
		___m_BoneIndex0_4 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex1_5() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex1_5)); }
	inline int32_t get_m_BoneIndex1_5() const { return ___m_BoneIndex1_5; }
	inline int32_t* get_address_of_m_BoneIndex1_5() { return &___m_BoneIndex1_5; }
	inline void set_m_BoneIndex1_5(int32_t value)
	{
		___m_BoneIndex1_5 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex2_6() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex2_6)); }
	inline int32_t get_m_BoneIndex2_6() const { return ___m_BoneIndex2_6; }
	inline int32_t* get_address_of_m_BoneIndex2_6() { return &___m_BoneIndex2_6; }
	inline void set_m_BoneIndex2_6(int32_t value)
	{
		___m_BoneIndex2_6 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex3_7() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex3_7)); }
	inline int32_t get_m_BoneIndex3_7() const { return ___m_BoneIndex3_7; }
	inline int32_t* get_address_of_m_BoneIndex3_7() { return &___m_BoneIndex3_7; }
	inline void set_m_BoneIndex3_7(int32_t value)
	{
		___m_BoneIndex3_7 = value;
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


// UnityEngine.Timeline.DiscreteTime
struct DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F 
{
public:
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;

public:
	inline static int32_t get_offset_of_m_DiscreteTime_2() { return static_cast<int32_t>(offsetof(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F, ___m_DiscreteTime_2)); }
	inline int64_t get_m_DiscreteTime_2() const { return ___m_DiscreteTime_2; }
	inline int64_t* get_address_of_m_DiscreteTime_2() { return &___m_DiscreteTime_2; }
	inline void set_m_DiscreteTime_2(int64_t value)
	{
		___m_DiscreteTime_2 = value;
	}
};

struct DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F_StaticFields
{
public:
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___kMaxTime_1;

public:
	inline static int32_t get_offset_of_kMaxTime_1() { return static_cast<int32_t>(offsetof(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F_StaticFields, ___kMaxTime_1)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_kMaxTime_1() const { return ___kMaxTime_1; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_kMaxTime_1() { return &___kMaxTime_1; }
	inline void set_kMaxTime_1(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___kMaxTime_1 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
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


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.Timeline.MarkerList
struct MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.MarkerList::m_Objects
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.MarkerList::m_Cache
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_CacheDirty
	bool ___m_CacheDirty_2;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_HasNotifications
	bool ___m_HasNotifications_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_Objects_0)); }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tEB4537E121ED7128292F5E49486823EB846576FE * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_1() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_Cache_1)); }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * get_m_Cache_1() const { return ___m_Cache_1; }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 ** get_address_of_m_Cache_1() { return &___m_Cache_1; }
	inline void set_m_Cache_1(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * value)
	{
		___m_Cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheDirty_2() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_CacheDirty_2)); }
	inline bool get_m_CacheDirty_2() const { return ___m_CacheDirty_2; }
	inline bool* get_address_of_m_CacheDirty_2() { return &___m_CacheDirty_2; }
	inline void set_m_CacheDirty_2(bool value)
	{
		___m_CacheDirty_2 = value;
	}

	inline static int32_t get_offset_of_m_HasNotifications_3() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_HasNotifications_3)); }
	inline bool get_m_HasNotifications_3() const { return ___m_HasNotifications_3; }
	inline bool* get_address_of_m_HasNotifications_3() { return &___m_HasNotifications_3; }
	inline void set_m_HasNotifications_3(bool value)
	{
		___m_HasNotifications_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D_marshaled_pinvoke
{
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D_marshaled_com
{
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
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


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset/TransientBuildData::trackList
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset/TransientBuildData::clipList
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.TrackAsset/TransientBuildData::markerList
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;

public:
	inline static int32_t get_offset_of_trackList_0() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___trackList_0)); }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * get_trackList_0() const { return ___trackList_0; }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 ** get_address_of_trackList_0() { return &___trackList_0; }
	inline void set_trackList_0(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * value)
	{
		___trackList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackList_0), (void*)value);
	}

	inline static int32_t get_offset_of_clipList_1() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___clipList_1)); }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * get_clipList_1() const { return ___clipList_1; }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C ** get_address_of_clipList_1() { return &___clipList_1; }
	inline void set_clipList_1(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * value)
	{
		___clipList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipList_1), (void*)value);
	}

	inline static int32_t get_offset_of_markerList_2() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___markerList_2)); }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * get_markerList_2() const { return ___markerList_2; }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 ** get_address_of_markerList_2() { return &___markerList_2; }
	inline void set_markerList_2(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * value)
	{
		___markerList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerList_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_pinvoke
{
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;
};
// Native definition for COM marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_com
{
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.AttributeTargets
struct AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality
struct AudioLoFiSourceQuality_tB0B8222A3E335AAE104B87705671BF3A80D7D6B6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioLoFiSourceQuality_tB0B8222A3E335AAE104B87705671BF3A80D7D6B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tB606C85BE8C41F8EDB09DBC39718C91E7CA874D1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB606C85BE8C41F8EDB09DBC39718C91E7CA874D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
struct BinaryTypeEnum_tC64D097C71D4D8F090D20424FCF2BD4CF9FE60A4 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BinaryTypeEnum_tC64D097C71D4D8F090D20424FCF2BD4CF9FE60A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Mono.Net.CFProxy
struct CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D  : public RuntimeObject
{
public:
	// Mono.Net.CFDictionary Mono.Net.CFProxy::settings
	CFDictionary_tCC86FC857C703D57D0134BAB9D6AB795E52ABF2D * ___settings_13;

public:
	inline static int32_t get_offset_of_settings_13() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D, ___settings_13)); }
	inline CFDictionary_tCC86FC857C703D57D0134BAB9D6AB795E52ABF2D * get_settings_13() const { return ___settings_13; }
	inline CFDictionary_tCC86FC857C703D57D0134BAB9D6AB795E52ABF2D ** get_address_of_settings_13() { return &___settings_13; }
	inline void set_settings_13(CFDictionary_tCC86FC857C703D57D0134BAB9D6AB795E52ABF2D * value)
	{
		___settings_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_13), (void*)value);
	}
};

struct CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields
{
public:
	// System.IntPtr Mono.Net.CFProxy::kCFProxyAutoConfigurationJavaScriptKey
	intptr_t ___kCFProxyAutoConfigurationJavaScriptKey_0;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyAutoConfigurationURLKey
	intptr_t ___kCFProxyAutoConfigurationURLKey_1;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyHostNameKey
	intptr_t ___kCFProxyHostNameKey_2;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyPasswordKey
	intptr_t ___kCFProxyPasswordKey_3;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyPortNumberKey
	intptr_t ___kCFProxyPortNumberKey_4;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeKey
	intptr_t ___kCFProxyTypeKey_5;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyUsernameKey
	intptr_t ___kCFProxyUsernameKey_6;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeAutoConfigurationURL
	intptr_t ___kCFProxyTypeAutoConfigurationURL_7;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeAutoConfigurationJavaScript
	intptr_t ___kCFProxyTypeAutoConfigurationJavaScript_8;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeFTP
	intptr_t ___kCFProxyTypeFTP_9;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeHTTP
	intptr_t ___kCFProxyTypeHTTP_10;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeHTTPS
	intptr_t ___kCFProxyTypeHTTPS_11;
	// System.IntPtr Mono.Net.CFProxy::kCFProxyTypeSOCKS
	intptr_t ___kCFProxyTypeSOCKS_12;

public:
	inline static int32_t get_offset_of_kCFProxyAutoConfigurationJavaScriptKey_0() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyAutoConfigurationJavaScriptKey_0)); }
	inline intptr_t get_kCFProxyAutoConfigurationJavaScriptKey_0() const { return ___kCFProxyAutoConfigurationJavaScriptKey_0; }
	inline intptr_t* get_address_of_kCFProxyAutoConfigurationJavaScriptKey_0() { return &___kCFProxyAutoConfigurationJavaScriptKey_0; }
	inline void set_kCFProxyAutoConfigurationJavaScriptKey_0(intptr_t value)
	{
		___kCFProxyAutoConfigurationJavaScriptKey_0 = value;
	}

	inline static int32_t get_offset_of_kCFProxyAutoConfigurationURLKey_1() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyAutoConfigurationURLKey_1)); }
	inline intptr_t get_kCFProxyAutoConfigurationURLKey_1() const { return ___kCFProxyAutoConfigurationURLKey_1; }
	inline intptr_t* get_address_of_kCFProxyAutoConfigurationURLKey_1() { return &___kCFProxyAutoConfigurationURLKey_1; }
	inline void set_kCFProxyAutoConfigurationURLKey_1(intptr_t value)
	{
		___kCFProxyAutoConfigurationURLKey_1 = value;
	}

	inline static int32_t get_offset_of_kCFProxyHostNameKey_2() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyHostNameKey_2)); }
	inline intptr_t get_kCFProxyHostNameKey_2() const { return ___kCFProxyHostNameKey_2; }
	inline intptr_t* get_address_of_kCFProxyHostNameKey_2() { return &___kCFProxyHostNameKey_2; }
	inline void set_kCFProxyHostNameKey_2(intptr_t value)
	{
		___kCFProxyHostNameKey_2 = value;
	}

	inline static int32_t get_offset_of_kCFProxyPasswordKey_3() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyPasswordKey_3)); }
	inline intptr_t get_kCFProxyPasswordKey_3() const { return ___kCFProxyPasswordKey_3; }
	inline intptr_t* get_address_of_kCFProxyPasswordKey_3() { return &___kCFProxyPasswordKey_3; }
	inline void set_kCFProxyPasswordKey_3(intptr_t value)
	{
		___kCFProxyPasswordKey_3 = value;
	}

	inline static int32_t get_offset_of_kCFProxyPortNumberKey_4() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyPortNumberKey_4)); }
	inline intptr_t get_kCFProxyPortNumberKey_4() const { return ___kCFProxyPortNumberKey_4; }
	inline intptr_t* get_address_of_kCFProxyPortNumberKey_4() { return &___kCFProxyPortNumberKey_4; }
	inline void set_kCFProxyPortNumberKey_4(intptr_t value)
	{
		___kCFProxyPortNumberKey_4 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeKey_5() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeKey_5)); }
	inline intptr_t get_kCFProxyTypeKey_5() const { return ___kCFProxyTypeKey_5; }
	inline intptr_t* get_address_of_kCFProxyTypeKey_5() { return &___kCFProxyTypeKey_5; }
	inline void set_kCFProxyTypeKey_5(intptr_t value)
	{
		___kCFProxyTypeKey_5 = value;
	}

	inline static int32_t get_offset_of_kCFProxyUsernameKey_6() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyUsernameKey_6)); }
	inline intptr_t get_kCFProxyUsernameKey_6() const { return ___kCFProxyUsernameKey_6; }
	inline intptr_t* get_address_of_kCFProxyUsernameKey_6() { return &___kCFProxyUsernameKey_6; }
	inline void set_kCFProxyUsernameKey_6(intptr_t value)
	{
		___kCFProxyUsernameKey_6 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeAutoConfigurationURL_7() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeAutoConfigurationURL_7)); }
	inline intptr_t get_kCFProxyTypeAutoConfigurationURL_7() const { return ___kCFProxyTypeAutoConfigurationURL_7; }
	inline intptr_t* get_address_of_kCFProxyTypeAutoConfigurationURL_7() { return &___kCFProxyTypeAutoConfigurationURL_7; }
	inline void set_kCFProxyTypeAutoConfigurationURL_7(intptr_t value)
	{
		___kCFProxyTypeAutoConfigurationURL_7 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeAutoConfigurationJavaScript_8() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeAutoConfigurationJavaScript_8)); }
	inline intptr_t get_kCFProxyTypeAutoConfigurationJavaScript_8() const { return ___kCFProxyTypeAutoConfigurationJavaScript_8; }
	inline intptr_t* get_address_of_kCFProxyTypeAutoConfigurationJavaScript_8() { return &___kCFProxyTypeAutoConfigurationJavaScript_8; }
	inline void set_kCFProxyTypeAutoConfigurationJavaScript_8(intptr_t value)
	{
		___kCFProxyTypeAutoConfigurationJavaScript_8 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeFTP_9() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeFTP_9)); }
	inline intptr_t get_kCFProxyTypeFTP_9() const { return ___kCFProxyTypeFTP_9; }
	inline intptr_t* get_address_of_kCFProxyTypeFTP_9() { return &___kCFProxyTypeFTP_9; }
	inline void set_kCFProxyTypeFTP_9(intptr_t value)
	{
		___kCFProxyTypeFTP_9 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeHTTP_10() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeHTTP_10)); }
	inline intptr_t get_kCFProxyTypeHTTP_10() const { return ___kCFProxyTypeHTTP_10; }
	inline intptr_t* get_address_of_kCFProxyTypeHTTP_10() { return &___kCFProxyTypeHTTP_10; }
	inline void set_kCFProxyTypeHTTP_10(intptr_t value)
	{
		___kCFProxyTypeHTTP_10 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeHTTPS_11() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeHTTPS_11)); }
	inline intptr_t get_kCFProxyTypeHTTPS_11() const { return ___kCFProxyTypeHTTPS_11; }
	inline intptr_t* get_address_of_kCFProxyTypeHTTPS_11() { return &___kCFProxyTypeHTTPS_11; }
	inline void set_kCFProxyTypeHTTPS_11(intptr_t value)
	{
		___kCFProxyTypeHTTPS_11 = value;
	}

	inline static int32_t get_offset_of_kCFProxyTypeSOCKS_12() { return static_cast<int32_t>(offsetof(CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D_StaticFields, ___kCFProxyTypeSOCKS_12)); }
	inline intptr_t get_kCFProxyTypeSOCKS_12() const { return ___kCFProxyTypeSOCKS_12; }
	inline intptr_t* get_address_of_kCFProxyTypeSOCKS_12() { return &___kCFProxyTypeSOCKS_12; }
	inline void set_kCFProxyTypeSOCKS_12(intptr_t value)
	{
		___kCFProxyTypeSOCKS_12 = value;
	}
};


// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfoFlags
struct CSharpArgumentInfoFlags_tD1A212DEDA96849ABCCDF1D53E590A0248230435 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfoFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CSharpArgumentInfoFlags_tD1A212DEDA96849ABCCDF1D53E590A0248230435, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t7DEC811DD30F861923A89CE6011693C3FD00F450 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t7DEC811DD30F861923A89CE6011693C3FD00F450, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CformatU3Ek__BackingField_33)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_U3CformatU3Ek__BackingField_33() const { return ___U3CformatU3Ek__BackingField_33; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_U3CformatU3Ek__BackingField_33() { return &___U3CformatU3Ek__BackingField_33; }
	inline void set_U3CformatU3Ek__BackingField_33(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___U3CformatU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CbyteOffsetU3Ek__BackingField_34)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_34() const { return ___U3CbyteOffsetU3Ek__BackingField_34; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_34() { return &___U3CbyteOffsetU3Ek__BackingField_34; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_34(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CbitOffsetU3Ek__BackingField_35)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_35() const { return ___U3CbitOffsetU3Ek__BackingField_35; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_35() { return &___U3CbitOffsetU3Ek__BackingField_35; }
	inline void set_U3CbitOffsetU3Ek__BackingField_35(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CsizeInBitsU3Ek__BackingField_36)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_36() const { return ___U3CsizeInBitsU3Ek__BackingField_36; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_36() { return &___U3CsizeInBitsU3Ek__BackingField_36; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_36(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_36 = value;
	}
};

struct InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3Byte_32;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatBit_2)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatSBit_4)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatSBit_4() const { return ___FormatSBit_4; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatSBit_4() { return &___FormatSBit_4; }
	inline void set_FormatSBit_4(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatSBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatInt_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatInt_6)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatInt_6() const { return ___FormatInt_6; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatInt_6() { return &___FormatInt_6; }
	inline void set_FormatInt_6(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatInt_6 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatUInt_8)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatUInt_8() const { return ___FormatUInt_8; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatUInt_8() { return &___FormatUInt_8; }
	inline void set_FormatUInt_8(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatUInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatShort_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatShort_10)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatShort_10() const { return ___FormatShort_10; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatShort_10() { return &___FormatShort_10; }
	inline void set_FormatShort_10(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatShort_10 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatUShort_12)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatUShort_12() const { return ___FormatUShort_12; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatUShort_12() { return &___FormatUShort_12; }
	inline void set_FormatUShort_12(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatUShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatByte_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatByte_14)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatByte_14() const { return ___FormatByte_14; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatByte_14() { return &___FormatByte_14; }
	inline void set_FormatByte_14(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatByte_14 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatSByte_16)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatSByte_16() const { return ___FormatSByte_16; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatSByte_16() { return &___FormatSByte_16; }
	inline void set_FormatSByte_16(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatSByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatLong_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatLong_18)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatLong_18() const { return ___FormatLong_18; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatLong_18() { return &___FormatLong_18; }
	inline void set_FormatLong_18(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatLong_18 = value;
	}

	inline static int32_t get_offset_of_FormatULong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatULong_20)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatULong_20() const { return ___FormatULong_20; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatULong_20() { return &___FormatULong_20; }
	inline void set_FormatULong_20(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatULong_20 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatFloat_22)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatFloat_22() const { return ___FormatFloat_22; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatFloat_22() { return &___FormatFloat_22; }
	inline void set_FormatFloat_22(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatFloat_22 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatDouble_24)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatDouble_24() const { return ___FormatDouble_24; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatDouble_24() { return &___FormatDouble_24; }
	inline void set_FormatDouble_24(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatDouble_24 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_26() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2_26)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2_26() const { return ___FormatVector2_26; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2_26() { return &___FormatVector2_26; }
	inline void set_FormatVector2_26(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_27() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3_27)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3_27() const { return ___FormatVector3_27; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3_27() { return &___FormatVector3_27; }
	inline void set_FormatVector3_27(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3_27 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_28() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatQuaternion_28)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatQuaternion_28() const { return ___FormatQuaternion_28; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatQuaternion_28() { return &___FormatQuaternion_28; }
	inline void set_FormatQuaternion_28(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatQuaternion_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_29() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2Short_29)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2Short_29() const { return ___FormatVector2Short_29; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2Short_29() { return &___FormatVector2Short_29; }
	inline void set_FormatVector2Short_29(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2Short_29 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_30() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3Short_30)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3Short_30() const { return ___FormatVector3Short_30; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3Short_30() { return &___FormatVector3Short_30; }
	inline void set_FormatVector3Short_30(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3Short_30 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_31() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2Byte_31)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2Byte_31() const { return ___FormatVector2Byte_31; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2Byte_31() { return &___FormatVector2Byte_31; }
	inline void set_FormatVector2Byte_31(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2Byte_31 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_32() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3Byte_32)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3Byte_32() const { return ___FormatVector3Byte_32; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3Byte_32() { return &___FormatVector3Byte_32; }
	inline void set_FormatVector3Byte_32(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3Byte_32 = value;
	}
};


// UnityEngine.Timeline.MatchTargetFields
struct MatchTargetFields_t535271993DC8D708057D5011D01784ECF14B6BBF 
{
public:
	// System.Int32 UnityEngine.Timeline.MatchTargetFields::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchTargetFields_t535271993DC8D708057D5011D01784ECF14B6BBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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

// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
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


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.Timeline.TrackOffset
struct TrackOffset_t56232BDA14656AA4B17C7B26E5FE8C763E2175FE 
{
public:
	// System.Int32 UnityEngine.Timeline.TrackOffset::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackOffset_t56232BDA14656AA4B17C7B26E5FE8C763E2175FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_t96C3290B2A0194D3BFC33FDBBA047C54CC1F613B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t96C3290B2A0194D3BFC33FDBBA047C54CC1F613B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CSharp.RuntimeBinder.Semantics.TypeKind
struct TypeKind_t09C96359B5649775CFA7798CB59230C37F8F7BF0 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_t09C96359B5649775CFA7798CB59230C37F8F7BF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.AnimationPlayableAsset/LoopMode
struct LoopMode_tEBA3378CB3F5E9A2B1023829A293E4A15DA9FE6A 
{
public:
	// System.Int32 UnityEngine.Timeline.AnimationPlayableAsset/LoopMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopMode_tEBA3378CB3F5E9A2B1023829A293E4A15DA9FE6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.AppBar/ButtonTypeEnum
struct ButtonTypeEnum_t321477C072A6F786409A1F957D7F11977AE284CE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.AppBar/ButtonTypeEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonTypeEnum_t321477C072A6F786409A1F957D7F11977AE284CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Controls.AxisControl/Clamp
struct Clamp_t46C43183F1EDCDFC5B889B8A2C06B86C658047EA 
{
public:
	// System.Int32 UnityEngine.InputSystem.Controls.AxisControl/Clamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Clamp_t46C43183F1EDCDFC5B889B8A2C06B86C658047EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t4F538C23EE3512FB9E4189AA486CDED3DE70771B 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t4F538C23EE3512FB9E4189AA486CDED3DE70771B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip/ClipExtrapolation
struct ClipExtrapolation_tF277CAC1FEA6B43D5124C383D47FE5729DDB29A5 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip/ClipExtrapolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipExtrapolation_tF277CAC1FEA6B43D5124C383D47FE5729DDB29A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.AttributeUsageAttribute
struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.AttributeTargets System.AttributeUsageAttribute::m_attributeTarget
	int32_t ___m_attributeTarget_0;
	// System.Boolean System.AttributeUsageAttribute::m_allowMultiple
	bool ___m_allowMultiple_1;
	// System.Boolean System.AttributeUsageAttribute::m_inherited
	bool ___m_inherited_2;

public:
	inline static int32_t get_offset_of_m_attributeTarget_0() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_attributeTarget_0)); }
	inline int32_t get_m_attributeTarget_0() const { return ___m_attributeTarget_0; }
	inline int32_t* get_address_of_m_attributeTarget_0() { return &___m_attributeTarget_0; }
	inline void set_m_attributeTarget_0(int32_t value)
	{
		___m_attributeTarget_0 = value;
	}

	inline static int32_t get_offset_of_m_allowMultiple_1() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_allowMultiple_1)); }
	inline bool get_m_allowMultiple_1() const { return ___m_allowMultiple_1; }
	inline bool* get_address_of_m_allowMultiple_1() { return &___m_allowMultiple_1; }
	inline void set_m_allowMultiple_1(bool value)
	{
		___m_allowMultiple_1 = value;
	}

	inline static int32_t get_offset_of_m_inherited_2() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_inherited_2)); }
	inline bool get_m_inherited_2() const { return ___m_inherited_2; }
	inline bool* get_address_of_m_inherited_2() { return &___m_inherited_2; }
	inline void set_m_inherited_2(bool value)
	{
		___m_inherited_2 = value;
	}
};

struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C_StaticFields
{
public:
	// System.AttributeUsageAttribute System.AttributeUsageAttribute::Default
	AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * ___Default_3;

public:
	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C_StaticFields, ___Default_3)); }
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * get_Default_3() const { return ___Default_3; }
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::<Definition>k__BackingField
	RuntimeObject* ___U3CDefinitionU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* ___U3CInteractionsU3Ek__BackingField_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CAngularVelocityU3Ek__BackingField_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CVelocityU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CDefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CDefinitionU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CDefinitionU3Ek__BackingField_0() const { return ___U3CDefinitionU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CDefinitionU3Ek__BackingField_0() { return &___U3CDefinitionU3Ek__BackingField_0; }
	inline void set_U3CDefinitionU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CDefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CEnabledU3Ek__BackingField_1() const { return ___U3CEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_1() { return &___U3CEnabledU3Ek__BackingField_1; }
	inline void set_U3CEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CTrackingStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_2() const { return ___U3CTrackingStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_2() { return &___U3CTrackingStateU3Ek__BackingField_2; }
	inline void set_U3CTrackingStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CControllerHandednessU3Ek__BackingField_3)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_3() const { return ___U3CControllerHandednessU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_3() { return &___U3CControllerHandednessU3Ek__BackingField_3; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_3(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CInputSourceU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_4() const { return ___U3CInputSourceU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_4() { return &___U3CInputSourceU3Ek__BackingField_4; }
	inline void set_U3CInputSourceU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CVisualizerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_5() const { return ___U3CVisualizerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_5() { return &___U3CVisualizerU3Ek__BackingField_5; }
	inline void set_U3CVisualizerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CIsPositionAvailableU3Ek__BackingField_6)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_6() const { return ___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return &___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_6(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CIsPositionApproximateU3Ek__BackingField_7)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_7() const { return ___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return &___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_7(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CIsRotationAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_8() const { return ___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return &___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CInteractionsU3Ek__BackingField_9)); }
	inline MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* get_U3CInteractionsU3Ek__BackingField_9() const { return ___U3CInteractionsU3Ek__BackingField_9; }
	inline MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912** get_address_of_U3CInteractionsU3Ek__BackingField_9() { return &___U3CInteractionsU3Ek__BackingField_9; }
	inline void set_U3CInteractionsU3Ek__BackingField_9(MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* value)
	{
		___U3CInteractionsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CAngularVelocityU3Ek__BackingField_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CAngularVelocityU3Ek__BackingField_10() const { return ___U3CAngularVelocityU3Ek__BackingField_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CAngularVelocityU3Ek__BackingField_10() { return &___U3CAngularVelocityU3Ek__BackingField_10; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CVelocityU3Ek__BackingField_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CVelocityU3Ek__BackingField_11() const { return ___U3CVelocityU3Ek__BackingField_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CVelocityU3Ek__BackingField_11() { return &___U3CVelocityU3Ek__BackingField_11; }
	inline void set_U3CVelocityU3Ek__BackingField_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CVelocityU3Ek__BackingField_11 = value;
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
};


// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo
struct CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfoFlags Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo::<Flags>k__BackingField
	int32_t ___U3CFlagsU3Ek__BackingField_1;
	// System.String Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CFlagsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3, ___U3CFlagsU3Ek__BackingField_1)); }
	inline int32_t get_U3CFlagsU3Ek__BackingField_1() const { return ___U3CFlagsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFlagsU3Ek__BackingField_1() { return &___U3CFlagsU3Ek__BackingField_1; }
	inline void set_U3CFlagsU3Ek__BackingField_1(int32_t value)
	{
		___U3CFlagsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3, ___U3CNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_2), (void*)value);
	}
};

struct CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3_StaticFields
{
public:
	// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo::None
	CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * ___None_0;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3_StaticFields, ___None_0)); }
	inline CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * get_None_0() const { return ___None_0; }
	inline CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 ** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_0), (void*)value);
	}
};


// Microsoft.CSharp.RuntimeBinder.Semantics.CType
struct CType_tDF33E6E64458FDAD600CB42D44998815294363DC  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeKind Microsoft.CSharp.RuntimeBinder.Semantics.CType::_typeKind
	int32_t ____typeKind_0;
	// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Semantics.CType::_pName
	Name_t0D58C5B52214B22C7F1251593E1902DC82080689 * ____pName_1;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.CType::_fHasErrors
	bool ____fHasErrors_2;
	// System.Type Microsoft.CSharp.RuntimeBinder.Semantics.CType::_associatedSystemType
	Type_t * ____associatedSystemType_3;

public:
	inline static int32_t get_offset_of__typeKind_0() { return static_cast<int32_t>(offsetof(CType_tDF33E6E64458FDAD600CB42D44998815294363DC, ____typeKind_0)); }
	inline int32_t get__typeKind_0() const { return ____typeKind_0; }
	inline int32_t* get_address_of__typeKind_0() { return &____typeKind_0; }
	inline void set__typeKind_0(int32_t value)
	{
		____typeKind_0 = value;
	}

	inline static int32_t get_offset_of__pName_1() { return static_cast<int32_t>(offsetof(CType_tDF33E6E64458FDAD600CB42D44998815294363DC, ____pName_1)); }
	inline Name_t0D58C5B52214B22C7F1251593E1902DC82080689 * get__pName_1() const { return ____pName_1; }
	inline Name_t0D58C5B52214B22C7F1251593E1902DC82080689 ** get_address_of__pName_1() { return &____pName_1; }
	inline void set__pName_1(Name_t0D58C5B52214B22C7F1251593E1902DC82080689 * value)
	{
		____pName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pName_1), (void*)value);
	}

	inline static int32_t get_offset_of__fHasErrors_2() { return static_cast<int32_t>(offsetof(CType_tDF33E6E64458FDAD600CB42D44998815294363DC, ____fHasErrors_2)); }
	inline bool get__fHasErrors_2() const { return ____fHasErrors_2; }
	inline bool* get_address_of__fHasErrors_2() { return &____fHasErrors_2; }
	inline void set__fHasErrors_2(bool value)
	{
		____fHasErrors_2 = value;
	}

	inline static int32_t get_offset_of__associatedSystemType_3() { return static_cast<int32_t>(offsetof(CType_tDF33E6E64458FDAD600CB42D44998815294363DC, ____associatedSystemType_3)); }
	inline Type_t * get__associatedSystemType_3() const { return ____associatedSystemType_3; }
	inline Type_t ** get_address_of__associatedSystemType_3() { return &____associatedSystemType_3; }
	inline void set__associatedSystemType_3(Type_t * value)
	{
		____associatedSystemType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____associatedSystemType_3), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.Motion
struct Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67, ___U3CisAnimatorMotionU3Ek__BackingField_4)); }
	inline bool get_U3CisAnimatorMotionU3Ek__BackingField_4() const { return ___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return &___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline void set_U3CisAnimatorMotionU3Ek__BackingField_4(bool value)
	{
		___U3CisAnimatorMotionU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178  : public Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67
{
public:

public:
};


// Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType
struct ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9  : public CType_tDF33E6E64458FDAD600CB42D44998815294363DC
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType::rank
	int32_t ___rank_4;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType::<IsSZArray>k__BackingField
	bool ___U3CIsSZArrayU3Ek__BackingField_5;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType::_pElementType
	CType_tDF33E6E64458FDAD600CB42D44998815294363DC * ____pElementType_6;

public:
	inline static int32_t get_offset_of_rank_4() { return static_cast<int32_t>(offsetof(ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9, ___rank_4)); }
	inline int32_t get_rank_4() const { return ___rank_4; }
	inline int32_t* get_address_of_rank_4() { return &___rank_4; }
	inline void set_rank_4(int32_t value)
	{
		___rank_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsSZArrayU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9, ___U3CIsSZArrayU3Ek__BackingField_5)); }
	inline bool get_U3CIsSZArrayU3Ek__BackingField_5() const { return ___U3CIsSZArrayU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsSZArrayU3Ek__BackingField_5() { return &___U3CIsSZArrayU3Ek__BackingField_5; }
	inline void set_U3CIsSZArrayU3Ek__BackingField_5(bool value)
	{
		___U3CIsSZArrayU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of__pElementType_6() { return static_cast<int32_t>(offsetof(ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9, ____pElementType_6)); }
	inline CType_tDF33E6E64458FDAD600CB42D44998815294363DC * get__pElementType_6() const { return ____pElementType_6; }
	inline CType_tDF33E6E64458FDAD600CB42D44998815294363DC ** get_address_of__pElementType_6() { return &____pElementType_6; }
	inline void set__pElementType_6(CType_tDF33E6E64458FDAD600CB42D44998815294363DC * value)
	{
		____pElementType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pElementType_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_StateBlock_0)); }
	inline InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Name_1)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Layout_7)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Variants_8)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Device_9)); }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Parent_10)); }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DefaultState_18)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_MinValue_19)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_MaxValue_20)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_MaxValue_20 = value;
	}
};


// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A  : public InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628  : public PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_5;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_AnimClip_6;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_11;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_12;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_13;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_Curves
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_Curves_14;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * ___m_Parent_15;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Children_16;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_17;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* ___m_ClipsCache_18;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___m_Start_19;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___m_End_20;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_21;
	// System.Nullable`1<System.Boolean> UnityEngine.Timeline.TrackAsset::m_SupportsNotifications
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_SupportsNotifications_22;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_24;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___m_Clips_26;
	// UnityEngine.Timeline.MarkerList UnityEngine.Timeline.TrackAsset::m_Markers
	MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  ___m_Markers_27;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_AnimClip_6() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_AnimClip_6)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_AnimClip_6() const { return ___m_AnimClip_6; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_AnimClip_6() { return &___m_AnimClip_6; }
	inline void set_m_AnimClip_6(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_AnimClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Locked_11() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Locked_11)); }
	inline bool get_m_Locked_11() const { return ___m_Locked_11; }
	inline bool* get_address_of_m_Locked_11() { return &___m_Locked_11; }
	inline void set_m_Locked_11(bool value)
	{
		___m_Locked_11 = value;
	}

	inline static int32_t get_offset_of_m_Muted_12() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Muted_12)); }
	inline bool get_m_Muted_12() const { return ___m_Muted_12; }
	inline bool* get_address_of_m_Muted_12() { return &___m_Muted_12; }
	inline void set_m_Muted_12(bool value)
	{
		___m_Muted_12 = value;
	}

	inline static int32_t get_offset_of_m_CustomPlayableFullTypename_13() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_CustomPlayableFullTypename_13)); }
	inline String_t* get_m_CustomPlayableFullTypename_13() const { return ___m_CustomPlayableFullTypename_13; }
	inline String_t** get_address_of_m_CustomPlayableFullTypename_13() { return &___m_CustomPlayableFullTypename_13; }
	inline void set_m_CustomPlayableFullTypename_13(String_t* value)
	{
		___m_CustomPlayableFullTypename_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomPlayableFullTypename_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Curves_14() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Curves_14)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_Curves_14() const { return ___m_Curves_14; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_Curves_14() { return &___m_Curves_14; }
	inline void set_m_Curves_14(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_Curves_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Curves_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_15() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Parent_15)); }
	inline PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * get_m_Parent_15() const { return ___m_Parent_15; }
	inline PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 ** get_address_of_m_Parent_15() { return &___m_Parent_15; }
	inline void set_m_Parent_15(PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * value)
	{
		___m_Parent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_16() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Children_16)); }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE * get_m_Children_16() const { return ___m_Children_16; }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE ** get_address_of_m_Children_16() { return &___m_Children_16; }
	inline void set_m_Children_16(List_1_tEB4537E121ED7128292F5E49486823EB846576FE * value)
	{
		___m_Children_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemsHash_17() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ItemsHash_17)); }
	inline int32_t get_m_ItemsHash_17() const { return ___m_ItemsHash_17; }
	inline int32_t* get_address_of_m_ItemsHash_17() { return &___m_ItemsHash_17; }
	inline void set_m_ItemsHash_17(int32_t value)
	{
		___m_ItemsHash_17 = value;
	}

	inline static int32_t get_offset_of_m_ClipsCache_18() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ClipsCache_18)); }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* get_m_ClipsCache_18() const { return ___m_ClipsCache_18; }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD** get_address_of_m_ClipsCache_18() { return &___m_ClipsCache_18; }
	inline void set_m_ClipsCache_18(TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* value)
	{
		___m_ClipsCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipsCache_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Start_19() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Start_19)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_m_Start_19() const { return ___m_Start_19; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_m_Start_19() { return &___m_Start_19; }
	inline void set_m_Start_19(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___m_Start_19 = value;
	}

	inline static int32_t get_offset_of_m_End_20() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_End_20)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_m_End_20() const { return ___m_End_20; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_m_End_20() { return &___m_End_20; }
	inline void set_m_End_20(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___m_End_20 = value;
	}

	inline static int32_t get_offset_of_m_CacheSorted_21() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_CacheSorted_21)); }
	inline bool get_m_CacheSorted_21() const { return ___m_CacheSorted_21; }
	inline bool* get_address_of_m_CacheSorted_21() { return &___m_CacheSorted_21; }
	inline void set_m_CacheSorted_21(bool value)
	{
		___m_CacheSorted_21 = value;
	}

	inline static int32_t get_offset_of_m_SupportsNotifications_22() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_SupportsNotifications_22)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_SupportsNotifications_22() const { return ___m_SupportsNotifications_22; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_SupportsNotifications_22() { return &___m_SupportsNotifications_22; }
	inline void set_m_SupportsNotifications_22(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_SupportsNotifications_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildTrackCache_24() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ChildTrackCache_24)); }
	inline RuntimeObject* get_m_ChildTrackCache_24() const { return ___m_ChildTrackCache_24; }
	inline RuntimeObject** get_address_of_m_ChildTrackCache_24() { return &___m_ChildTrackCache_24; }
	inline void set_m_ChildTrackCache_24(RuntimeObject* value)
	{
		___m_ChildTrackCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildTrackCache_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Clips_26() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Clips_26)); }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * get_m_Clips_26() const { return ___m_Clips_26; }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C ** get_address_of_m_Clips_26() { return &___m_Clips_26; }
	inline void set_m_Clips_26(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * value)
	{
		___m_Clips_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clips_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Markers_27() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Markers_27)); }
	inline MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  get_m_Markers_27() const { return ___m_Markers_27; }
	inline MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D * get_address_of_m_Markers_27() { return &___m_Markers_27; }
	inline void set_m_Markers_27(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  value)
	{
		___m_Markers_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Objects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Cache_1), (void*)NULL);
		#endif
	}
};

struct TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields
{
public:
	// UnityEngine.Timeline.TrackAsset/TransientBuildData UnityEngine.Timeline.TrackAsset::s_BuildData
	TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  ___s_BuildData_7;
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnClipPlayableCreate
	Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * ___OnClipPlayableCreate_9;
	// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnTrackAnimationPlayableCreate
	Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * ___OnTrackAnimationPlayableCreate_10;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* ___s_EmptyCache_23;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * ___s_TrackBindingTypeAttributeCache_25;

public:
	inline static int32_t get_offset_of_s_BuildData_7() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_BuildData_7)); }
	inline TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  get_s_BuildData_7() const { return ___s_BuildData_7; }
	inline TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F * get_address_of_s_BuildData_7() { return &___s_BuildData_7; }
	inline void set_s_BuildData_7(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  value)
	{
		___s_BuildData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___trackList_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___clipList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___markerList_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_OnClipPlayableCreate_9() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___OnClipPlayableCreate_9)); }
	inline Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * get_OnClipPlayableCreate_9() const { return ___OnClipPlayableCreate_9; }
	inline Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 ** get_address_of_OnClipPlayableCreate_9() { return &___OnClipPlayableCreate_9; }
	inline void set_OnClipPlayableCreate_9(Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * value)
	{
		___OnClipPlayableCreate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipPlayableCreate_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackAnimationPlayableCreate_10() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___OnTrackAnimationPlayableCreate_10)); }
	inline Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * get_OnTrackAnimationPlayableCreate_10() const { return ___OnTrackAnimationPlayableCreate_10; }
	inline Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 ** get_address_of_OnTrackAnimationPlayableCreate_10() { return &___OnTrackAnimationPlayableCreate_10; }
	inline void set_OnTrackAnimationPlayableCreate_10(Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * value)
	{
		___OnTrackAnimationPlayableCreate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackAnimationPlayableCreate_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_EmptyCache_23() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_EmptyCache_23)); }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* get_s_EmptyCache_23() const { return ___s_EmptyCache_23; }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B** get_address_of_s_EmptyCache_23() { return &___s_EmptyCache_23; }
	inline void set_s_EmptyCache_23(TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* value)
	{
		___s_EmptyCache_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyCache_23), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrackBindingTypeAttributeCache_25() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_TrackBindingTypeAttributeCache_25)); }
	inline Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * get_s_TrackBindingTypeAttributeCache_25() const { return ___s_TrackBindingTypeAttributeCache_25; }
	inline Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 ** get_address_of_s_TrackBindingTypeAttributeCache_25() { return &___s_TrackBindingTypeAttributeCache_25; }
	inline void set_s_TrackBindingTypeAttributeCache_25(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * value)
	{
		___s_TrackBindingTypeAttributeCache_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackBindingTypeAttributeCache_25), (void*)value);
	}
};


// UnityEngine.Timeline.AnimationTrack
struct AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4  : public TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628
{
public:
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.AnimationTrack::m_InfiniteClipPreExtrapolation
	int32_t ___m_InfiniteClipPreExtrapolation_30;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.AnimationTrack::m_InfiniteClipPostExtrapolation
	int32_t ___m_InfiniteClipPostExtrapolation_31;
	// UnityEngine.Vector3 UnityEngine.Timeline.AnimationTrack::m_InfiniteClipOffsetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_InfiniteClipOffsetPosition_32;
	// UnityEngine.Vector3 UnityEngine.Timeline.AnimationTrack::m_InfiniteClipOffsetEulerAngles
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_InfiniteClipOffsetEulerAngles_33;
	// System.Double UnityEngine.Timeline.AnimationTrack::m_InfiniteClipTimeOffset
	double ___m_InfiniteClipTimeOffset_34;
	// System.Boolean UnityEngine.Timeline.AnimationTrack::m_InfiniteClipRemoveOffset
	bool ___m_InfiniteClipRemoveOffset_35;
	// System.Boolean UnityEngine.Timeline.AnimationTrack::m_InfiniteClipApplyFootIK
	bool ___m_InfiniteClipApplyFootIK_36;
	// UnityEngine.Timeline.AnimationPlayableAsset/LoopMode UnityEngine.Timeline.AnimationTrack::mInfiniteClipLoop
	int32_t ___mInfiniteClipLoop_37;
	// UnityEngine.Timeline.MatchTargetFields UnityEngine.Timeline.AnimationTrack::m_MatchTargetFields
	int32_t ___m_MatchTargetFields_38;
	// UnityEngine.Vector3 UnityEngine.Timeline.AnimationTrack::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_39;
	// UnityEngine.Vector3 UnityEngine.Timeline.AnimationTrack::m_EulerAngles
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_EulerAngles_40;
	// UnityEngine.AvatarMask UnityEngine.Timeline.AnimationTrack::m_AvatarMask
	AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * ___m_AvatarMask_41;
	// System.Boolean UnityEngine.Timeline.AnimationTrack::m_ApplyAvatarMask
	bool ___m_ApplyAvatarMask_42;
	// UnityEngine.Timeline.TrackOffset UnityEngine.Timeline.AnimationTrack::m_TrackOffset
	int32_t ___m_TrackOffset_43;
	// UnityEngine.AnimationClip UnityEngine.Timeline.AnimationTrack::m_InfiniteClip
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_InfiniteClip_44;
	// UnityEngine.Quaternion UnityEngine.Timeline.AnimationTrack::m_OpenClipOffsetRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_OpenClipOffsetRotation_46;
	// UnityEngine.Quaternion UnityEngine.Timeline.AnimationTrack::m_Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_Rotation_47;
	// System.Boolean UnityEngine.Timeline.AnimationTrack::m_ApplyOffsets
	bool ___m_ApplyOffsets_48;

public:
	inline static int32_t get_offset_of_m_InfiniteClipPreExtrapolation_30() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipPreExtrapolation_30)); }
	inline int32_t get_m_InfiniteClipPreExtrapolation_30() const { return ___m_InfiniteClipPreExtrapolation_30; }
	inline int32_t* get_address_of_m_InfiniteClipPreExtrapolation_30() { return &___m_InfiniteClipPreExtrapolation_30; }
	inline void set_m_InfiniteClipPreExtrapolation_30(int32_t value)
	{
		___m_InfiniteClipPreExtrapolation_30 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipPostExtrapolation_31() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipPostExtrapolation_31)); }
	inline int32_t get_m_InfiniteClipPostExtrapolation_31() const { return ___m_InfiniteClipPostExtrapolation_31; }
	inline int32_t* get_address_of_m_InfiniteClipPostExtrapolation_31() { return &___m_InfiniteClipPostExtrapolation_31; }
	inline void set_m_InfiniteClipPostExtrapolation_31(int32_t value)
	{
		___m_InfiniteClipPostExtrapolation_31 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipOffsetPosition_32() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipOffsetPosition_32)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_InfiniteClipOffsetPosition_32() const { return ___m_InfiniteClipOffsetPosition_32; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_InfiniteClipOffsetPosition_32() { return &___m_InfiniteClipOffsetPosition_32; }
	inline void set_m_InfiniteClipOffsetPosition_32(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_InfiniteClipOffsetPosition_32 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipOffsetEulerAngles_33() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipOffsetEulerAngles_33)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_InfiniteClipOffsetEulerAngles_33() const { return ___m_InfiniteClipOffsetEulerAngles_33; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_InfiniteClipOffsetEulerAngles_33() { return &___m_InfiniteClipOffsetEulerAngles_33; }
	inline void set_m_InfiniteClipOffsetEulerAngles_33(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_InfiniteClipOffsetEulerAngles_33 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipTimeOffset_34() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipTimeOffset_34)); }
	inline double get_m_InfiniteClipTimeOffset_34() const { return ___m_InfiniteClipTimeOffset_34; }
	inline double* get_address_of_m_InfiniteClipTimeOffset_34() { return &___m_InfiniteClipTimeOffset_34; }
	inline void set_m_InfiniteClipTimeOffset_34(double value)
	{
		___m_InfiniteClipTimeOffset_34 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipRemoveOffset_35() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipRemoveOffset_35)); }
	inline bool get_m_InfiniteClipRemoveOffset_35() const { return ___m_InfiniteClipRemoveOffset_35; }
	inline bool* get_address_of_m_InfiniteClipRemoveOffset_35() { return &___m_InfiniteClipRemoveOffset_35; }
	inline void set_m_InfiniteClipRemoveOffset_35(bool value)
	{
		___m_InfiniteClipRemoveOffset_35 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipApplyFootIK_36() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipApplyFootIK_36)); }
	inline bool get_m_InfiniteClipApplyFootIK_36() const { return ___m_InfiniteClipApplyFootIK_36; }
	inline bool* get_address_of_m_InfiniteClipApplyFootIK_36() { return &___m_InfiniteClipApplyFootIK_36; }
	inline void set_m_InfiniteClipApplyFootIK_36(bool value)
	{
		___m_InfiniteClipApplyFootIK_36 = value;
	}

	inline static int32_t get_offset_of_mInfiniteClipLoop_37() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___mInfiniteClipLoop_37)); }
	inline int32_t get_mInfiniteClipLoop_37() const { return ___mInfiniteClipLoop_37; }
	inline int32_t* get_address_of_mInfiniteClipLoop_37() { return &___mInfiniteClipLoop_37; }
	inline void set_mInfiniteClipLoop_37(int32_t value)
	{
		___mInfiniteClipLoop_37 = value;
	}

	inline static int32_t get_offset_of_m_MatchTargetFields_38() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_MatchTargetFields_38)); }
	inline int32_t get_m_MatchTargetFields_38() const { return ___m_MatchTargetFields_38; }
	inline int32_t* get_address_of_m_MatchTargetFields_38() { return &___m_MatchTargetFields_38; }
	inline void set_m_MatchTargetFields_38(int32_t value)
	{
		___m_MatchTargetFields_38 = value;
	}

	inline static int32_t get_offset_of_m_Position_39() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_Position_39)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_39() const { return ___m_Position_39; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_39() { return &___m_Position_39; }
	inline void set_m_Position_39(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_39 = value;
	}

	inline static int32_t get_offset_of_m_EulerAngles_40() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_EulerAngles_40)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_EulerAngles_40() const { return ___m_EulerAngles_40; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_EulerAngles_40() { return &___m_EulerAngles_40; }
	inline void set_m_EulerAngles_40(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_EulerAngles_40 = value;
	}

	inline static int32_t get_offset_of_m_AvatarMask_41() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_AvatarMask_41)); }
	inline AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * get_m_AvatarMask_41() const { return ___m_AvatarMask_41; }
	inline AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE ** get_address_of_m_AvatarMask_41() { return &___m_AvatarMask_41; }
	inline void set_m_AvatarMask_41(AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * value)
	{
		___m_AvatarMask_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AvatarMask_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_ApplyAvatarMask_42() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_ApplyAvatarMask_42)); }
	inline bool get_m_ApplyAvatarMask_42() const { return ___m_ApplyAvatarMask_42; }
	inline bool* get_address_of_m_ApplyAvatarMask_42() { return &___m_ApplyAvatarMask_42; }
	inline void set_m_ApplyAvatarMask_42(bool value)
	{
		___m_ApplyAvatarMask_42 = value;
	}

	inline static int32_t get_offset_of_m_TrackOffset_43() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_TrackOffset_43)); }
	inline int32_t get_m_TrackOffset_43() const { return ___m_TrackOffset_43; }
	inline int32_t* get_address_of_m_TrackOffset_43() { return &___m_TrackOffset_43; }
	inline void set_m_TrackOffset_43(int32_t value)
	{
		___m_TrackOffset_43 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClip_44() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClip_44)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_InfiniteClip_44() const { return ___m_InfiniteClip_44; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_InfiniteClip_44() { return &___m_InfiniteClip_44; }
	inline void set_m_InfiniteClip_44(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_InfiniteClip_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InfiniteClip_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_OpenClipOffsetRotation_46() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_OpenClipOffsetRotation_46)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_OpenClipOffsetRotation_46() const { return ___m_OpenClipOffsetRotation_46; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_OpenClipOffsetRotation_46() { return &___m_OpenClipOffsetRotation_46; }
	inline void set_m_OpenClipOffsetRotation_46(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_OpenClipOffsetRotation_46 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_47() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_Rotation_47)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_Rotation_47() const { return ___m_Rotation_47; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_Rotation_47() { return &___m_Rotation_47; }
	inline void set_m_Rotation_47(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_Rotation_47 = value;
	}

	inline static int32_t get_offset_of_m_ApplyOffsets_48() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_ApplyOffsets_48)); }
	inline bool get_m_ApplyOffsets_48() const { return ___m_ApplyOffsets_48; }
	inline bool* get_address_of_m_ApplyOffsets_48() { return &___m_ApplyOffsets_48; }
	inline void set_m_ApplyOffsets_48(bool value)
	{
		___m_ApplyOffsets_48 = value;
	}
};

struct AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4_StaticFields
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> UnityEngine.Timeline.AnimationTrack::s_CachedQueue
	Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * ___s_CachedQueue_45;

public:
	inline static int32_t get_offset_of_s_CachedQueue_45() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4_StaticFields, ___s_CachedQueue_45)); }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * get_s_CachedQueue_45() const { return ___s_CachedQueue_45; }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 ** get_address_of_s_CachedQueue_45() { return &___s_CachedQueue_45; }
	inline void set_s_CachedQueue_45(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * value)
	{
		___s_CachedQueue_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CachedQueue_45), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.AppBarButton
struct AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.UI.PressableButton Microsoft.MixedReality.Toolkit.UI.AppBarButton::button
	PressableButton_tAB64524DA813FC7A3EF56078F9FA0E7AB5C8FB77 * ___button_5;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.Toolkit.UI.AppBarButton::interactable
	Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C * ___interactable_6;
	// TMPro.TextMeshPro[] Microsoft.MixedReality.Toolkit.UI.AppBarButton::primaryLabels
	TextMeshProU5BU5D_t3778A870DEA9C539BB120444989B11661251B7B2* ___primaryLabels_7;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.UI.AppBarButton::seeItSayItLabel
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___seeItSayItLabel_8;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.UI.AppBarButton::icon
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___icon_9;
	// Microsoft.MixedReality.Toolkit.UI.AppBar/ButtonTypeEnum Microsoft.MixedReality.Toolkit.UI.AppBarButton::buttonType
	int32_t ___buttonType_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.AppBarButton::displayOrder
	int32_t ___displayOrder_11;
	// Microsoft.MixedReality.Toolkit.UI.AppBar Microsoft.MixedReality.Toolkit.UI.AppBarButton::parentToolBar
	AppBar_t5C0EC3FCAD62E29A6548F121C2467D0CF9B123C7 * ___parentToolBar_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.AppBarButton::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_13;
	// UnityEngine.Texture Microsoft.MixedReality.Toolkit.UI.AppBarButton::buttonIcon
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___buttonIcon_14;
	// System.String Microsoft.MixedReality.Toolkit.UI.AppBarButton::buttonText
	String_t* ___buttonText_15;

public:
	inline static int32_t get_offset_of_button_5() { return static_cast<int32_t>(offsetof(AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE, ___button_5)); }
	inline PressableButton_tAB64524DA813FC7A3EF56078F9FA0E7AB5C8FB77 * get_button_5() const { return ___button_5; }
	inline PressableButton_tAB64524DA813FC7A3EF56078F9FA0E7AB5C8FB77 ** get_address_of_button_5() { return &___button_5; }
	inline void set_button_5(PressableButton_tAB64524DA813FC7A3EF56078F9FA0E7AB5C8FB77 * value)
	{
		___button_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_5), (void*)value);
	}

	inline static int32_t get_offset_of_interactable_6() { return static_cast<int32_t>(offsetof(AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE, ___interactable_6)); }
	inline Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C * get_interactable_6() const { return ___interactable_6; }
	inline Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C ** get_address_of_interactable_6() { return &___interactable_6; }
	inline void set_interactable_6(Interactable_t9254BFC469816BE97E2A155BAB97E180B6DCBA8C * value)
	{
		___interactable_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactable_6), (void*)value);
	}

	inline static int32_t get_offset_of_primaryLabels_7() { return static_cast<int32_t>(offsetof(AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE, ___primaryLabels_7)); }
	inline TextMeshProU5BU5D_t3778A870DEA9C539BB120444989B11661251B7B2* get_primaryLabels_7() const { return ___primaryLabels_7; }
	inline TextMeshProU5BU5D_t3778A870DEA9C539BB120444989B11661251B7B2** get_address_of_primaryLabels_7() { return &___primaryLabels_7; }
	inline void set_primaryLabels_7(TextMeshProU5BU5D_t3778A870DEA9C539BB120444989B11661251B7B2* value)
	{
		___primaryLabels_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryLabels_7), (void*)value);
	}

	inline static int32_t get_offset_of_seeItSayItLabel_8() { return static_cast<int32_t>(offsetof(AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE, ___seeItSayItLabel_8)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_seeItSayItLabel_8() const { return ___seeItSayItLabel_8; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_seeItSayItLabel_8() { return &___seeItSayItLabel_8; }
	inline void set_seeItSayItLabel_8(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___seeItSayItLabel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seeItSayItLabel_8), (void*)value);
	}

	inline static int32_t get_offset_of_icon_9() { return static_cast<int32_t>(offsetof(AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE, ___icon_9)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_icon_9() const { return ___icon_9; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_icon_9() { return &___icon_9; }
	inline void set_icon_9(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___icon_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_9), (void*)value);
	}

	inline static int32_t get_offset_of_buttonType_10() { return static_cast<int32_t>(offsetof(AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE, ___buttonType_10)); }
	inline int32_t get_buttonType_10() const { return ___buttonType_10; }
	inline int32_t* get_address_of_buttonType_10() { return &___buttonType_10; }
	inline void set_buttonType_10(int32_t value)
	{
		___buttonType_10 = value;
	}

	inline static int32_t get_offset_of_displayOrder_11() { return static_cast<int32_t>(offsetof(AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE, ___displayOrder_11)); }
	inline int32_t get_displayOrder_11() const { return ___displayOrder_11; }
	inline int32_t* get_address_of_displayOrder_11() { return &___displayOrder_11; }
	inline void set_displayOrder_11(int32_t value)
	{
		___displayOrder_11 = value;
	}

	inline static int32_t get_offset_of_parentToolBar_12() { return static_cast<int32_t>(offsetof(AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE, ___parentToolBar_12)); }
	inline AppBar_t5C0EC3FCAD62E29A6548F121C2467D0CF9B123C7 * get_parentToolBar_12() const { return ___parentToolBar_12; }
	inline AppBar_t5C0EC3FCAD62E29A6548F121C2467D0CF9B123C7 ** get_address_of_parentToolBar_12() { return &___parentToolBar_12; }
	inline void set_parentToolBar_12(AppBar_t5C0EC3FCAD62E29A6548F121C2467D0CF9B123C7 * value)
	{
		___parentToolBar_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentToolBar_12), (void*)value);
	}

	inline static int32_t get_offset_of_targetPosition_13() { return static_cast<int32_t>(offsetof(AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE, ___targetPosition_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_13() const { return ___targetPosition_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_13() { return &___targetPosition_13; }
	inline void set_targetPosition_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_13 = value;
	}

	inline static int32_t get_offset_of_buttonIcon_14() { return static_cast<int32_t>(offsetof(AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE, ___buttonIcon_14)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_buttonIcon_14() const { return ___buttonIcon_14; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_buttonIcon_14() { return &___buttonIcon_14; }
	inline void set_buttonIcon_14(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___buttonIcon_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonIcon_14), (void*)value);
	}

	inline static int32_t get_offset_of_buttonText_15() { return static_cast<int32_t>(offsetof(AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE, ___buttonText_15)); }
	inline String_t* get_buttonText_15() const { return ___buttonText_15; }
	inline String_t** get_address_of_buttonText_15() { return &___buttonText_15; }
	inline void set_buttonText_15(String_t* value)
	{
		___buttonText_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonText_15), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF  : public InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_22;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_23;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_24;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_25;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_26;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_27;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_30;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_31;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_32;

public:
	inline static int32_t get_offset_of_clamp_22() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___clamp_22)); }
	inline int32_t get_clamp_22() const { return ___clamp_22; }
	inline int32_t* get_address_of_clamp_22() { return &___clamp_22; }
	inline void set_clamp_22(int32_t value)
	{
		___clamp_22 = value;
	}

	inline static int32_t get_offset_of_clampMin_23() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___clampMin_23)); }
	inline float get_clampMin_23() const { return ___clampMin_23; }
	inline float* get_address_of_clampMin_23() { return &___clampMin_23; }
	inline void set_clampMin_23(float value)
	{
		___clampMin_23 = value;
	}

	inline static int32_t get_offset_of_clampMax_24() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___clampMax_24)); }
	inline float get_clampMax_24() const { return ___clampMax_24; }
	inline float* get_address_of_clampMax_24() { return &___clampMax_24; }
	inline void set_clampMax_24(float value)
	{
		___clampMax_24 = value;
	}

	inline static int32_t get_offset_of_clampConstant_25() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___clampConstant_25)); }
	inline float get_clampConstant_25() const { return ___clampConstant_25; }
	inline float* get_address_of_clampConstant_25() { return &___clampConstant_25; }
	inline void set_clampConstant_25(float value)
	{
		___clampConstant_25 = value;
	}

	inline static int32_t get_offset_of_invert_26() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___invert_26)); }
	inline bool get_invert_26() const { return ___invert_26; }
	inline bool* get_address_of_invert_26() { return &___invert_26; }
	inline void set_invert_26(bool value)
	{
		___invert_26 = value;
	}

	inline static int32_t get_offset_of_normalize_27() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___normalize_27)); }
	inline bool get_normalize_27() const { return ___normalize_27; }
	inline bool* get_address_of_normalize_27() { return &___normalize_27; }
	inline void set_normalize_27(bool value)
	{
		___normalize_27 = value;
	}

	inline static int32_t get_offset_of_normalizeMin_28() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___normalizeMin_28)); }
	inline float get_normalizeMin_28() const { return ___normalizeMin_28; }
	inline float* get_address_of_normalizeMin_28() { return &___normalizeMin_28; }
	inline void set_normalizeMin_28(float value)
	{
		___normalizeMin_28 = value;
	}

	inline static int32_t get_offset_of_normalizeMax_29() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___normalizeMax_29)); }
	inline float get_normalizeMax_29() const { return ___normalizeMax_29; }
	inline float* get_address_of_normalizeMax_29() { return &___normalizeMax_29; }
	inline void set_normalizeMax_29(float value)
	{
		___normalizeMax_29 = value;
	}

	inline static int32_t get_offset_of_normalizeZero_30() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___normalizeZero_30)); }
	inline float get_normalizeZero_30() const { return ___normalizeZero_30; }
	inline float* get_address_of_normalizeZero_30() { return &___normalizeZero_30; }
	inline void set_normalizeZero_30(float value)
	{
		___normalizeZero_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___scale_31)); }
	inline bool get_scale_31() const { return ___scale_31; }
	inline bool* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(bool value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_32() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___scaleFactor_32)); }
	inline float get_scaleFactor_32() const { return ___scaleFactor_32; }
	inline float* get_address_of_scaleFactor_32() { return &___scaleFactor_32; }
	inline void set_scaleFactor_32(float value)
	{
		___scaleFactor_32 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___m_RootRaycaster_4;

public:
	inline static int32_t get_offset_of_m_RootRaycaster_4() { return static_cast<int32_t>(offsetof(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876, ___m_RootRaycaster_4)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_m_RootRaycaster_4() const { return ___m_RootRaycaster_4; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_m_RootRaycaster_4() { return &___m_RootRaycaster_4; }
	inline void set_m_RootRaycaster_4(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___m_RootRaycaster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootRaycaster_4), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7  : public AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_33;

public:
	inline static int32_t get_offset_of_pressPoint_33() { return static_cast<int32_t>(offsetof(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7, ___pressPoint_33)); }
	inline float get_pressPoint_33() const { return ___pressPoint_33; }
	inline float* get_address_of_pressPoint_33() { return &___pressPoint_33; }
	inline void set_pressPoint_33(float value)
	{
		___pressPoint_33 = value;
	}
};

struct ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7_StaticFields
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_34;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_35;

public:
	inline static int32_t get_offset_of_s_GlobalDefaultButtonPressPoint_34() { return static_cast<int32_t>(offsetof(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7_StaticFields, ___s_GlobalDefaultButtonPressPoint_34)); }
	inline float get_s_GlobalDefaultButtonPressPoint_34() const { return ___s_GlobalDefaultButtonPressPoint_34; }
	inline float* get_address_of_s_GlobalDefaultButtonPressPoint_34() { return &___s_GlobalDefaultButtonPressPoint_34; }
	inline void set_s_GlobalDefaultButtonPressPoint_34(float value)
	{
		___s_GlobalDefaultButtonPressPoint_34 = value;
	}

	inline static int32_t get_offset_of_s_GlobalDefaultButtonReleaseThreshold_35() { return static_cast<int32_t>(offsetof(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7_StaticFields, ___s_GlobalDefaultButtonReleaseThreshold_35)); }
	inline float get_s_GlobalDefaultButtonReleaseThreshold_35() const { return ___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline float* get_address_of_s_GlobalDefaultButtonReleaseThreshold_35() { return &___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline void set_s_GlobalDefaultButtonReleaseThreshold_35(float value)
	{
		___s_GlobalDefaultButtonReleaseThreshold_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * m_Items[1];

public:
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * m_Items[1];

public:
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Timeline.AnimationTrack[]
struct AnimationTrackU5BU5D_t5421CC5701295BDDCC59B8562285DEE8AEE53157  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * m_Items[1];

public:
	inline AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  m_Items[1];

public:
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.UI.AppBarButton[]
struct AppBarButtonU5BU5D_t7B47F14D0EE1011607E591082BBA11A23AC75EF2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE * m_Items[1];

public:
	inline AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AppBarButton_t83B705E81414DB4117F8CF27B298F5F8547986AE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.CSharp.RuntimeBinder.ArgumentObject[]
struct ArgumentObjectU5BU5D_t1F885176A372E7976F3FC8D913DBC40E073FA92D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF  m_Items[1];

public:
	inline ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Info_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Type_2), (void*)NULL);
		#endif
	}
	inline ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArgumentObject_tCC83ECF583AF16080388CA47FC4AB4C23B862FEF  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Info_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Type_2), (void*)NULL);
		#endif
	}
};
// Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType[]
struct ArrayTypeU5BU5D_t54C267B544C5B1752FAA157CBE15883524F2C747  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9 * m_Items[1];

public:
	inline ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArrayType_t7A513D956CCF489FD34B4FD55610AA6E42EE01E9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose[]
struct ArticulatedHandPoseU5BU5D_t33E5F3215751DBAEFCD55B3D3D0E7B883089A495  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9 * m_Items[1];

public:
	inline ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArticulatedHandPose_tB8DCE1D94DB71EFBF588AC56CE55FAC2BDD5DAF9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Xml.Schema.Asttree[]
struct AsttreeU5BU5D_t46A15283CE66BEF443E654340B11BC0169C6EC55  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571 * m_Items[1];

public:
	inline Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Asttree_t0F1B5F80574040787F649DB6AB4F2F5C77F26571 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AsyncOperation[]
struct AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * m_Items[1];

public:
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Attribute[]
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * m_Items[1];

public:
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Xml.AttributePSVIInfo[]
struct AttributePSVIInfoU5BU5D_tFC012DB6C5789EA4097CDCDF79848220A8239A8E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81 * m_Items[1];

public:
	inline AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AttributePSVIInfo_t8F3922ECC12B102CAE8AB73B11ED15E8D60ACA81 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.AttributeUsageAttribute[]
struct AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * m_Items[1];

public:
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality[]
struct AudioLoFiSourceQualityU5BU5D_tBF182521842AA5E866145D55A64EEFBD9418A39C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Net.Http.Headers.AuthenticationHeaderValue[]
struct AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C * m_Items[1];

public:
	inline AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AuthenticationHeaderValue_t07CCC74D5C4E41633939E42E96E531818AC1933C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.AxisType[]
struct AxisTypeU5BU5D_tC8EB8BC7E5FF37859157F74DD8EE4738B490A794  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Input.BaseController[]
struct BaseControllerU5BU5D_t04366F7B7ABDC3FD4B2AA2CB51D44C71D9C09B2E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * m_Items[1];

public:
	inline BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.EventSystems.BaseInputModule[]
struct BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * m_Items[1];

public:
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * m_Items[1];

public:
	inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * m_Items[1];

public:
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.BatchVisibility[]
struct BatchVisibilityU5BU5D_t4BBF54DA6EFC8E836C4873647C175F2B1F17690B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  m_Items[1];

public:
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  value)
	{
		m_Items[index] = value;
	}
};
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * m_Items[1];

public:
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * m_Items[1];

public:
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[]
struct BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Dynamic.BindingRestrictions[]
struct BindingRestrictionsU5BU5D_t453FB03BCAC3F59B8B67274DC3242F1F4D909AD7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC * m_Items[1];

public:
	inline BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Xml.Schema.BitSet[]
struct BitSetU5BU5D_t95400D30DE4EA8396AA8017C81305F0A68B3B1FD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438 * m_Items[1];

public:
	inline BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.WindowsAzure.Storage.Blob.Protocol.BlobContainerEntry[]
struct BlobContainerEntryU5BU5D_t1778938F8DE645EE53976401A6E3057CDDD24B0E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0 * m_Items[1];

public:
	inline BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BlobContainerEntry_t19992DD4FBB09EF43162CED91F0A17F3F185DBE0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  m_Items[1];

public:
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  m_Items[1];

public:
	inline BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
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
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Guid[]
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Guid_t  m_Items[1];

public:
	inline Guid_t  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.ARSubsystems.BoundedPlane[]
struct BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  m_Items[1];

public:
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Bounds[]
struct BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  m_Items[1];

public:
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		m_Items[index] = value;
	}
};
// System.Linq.Expressions.Interpreter.BranchLabel[]
struct BranchLabelU5BU5D_tFC83E1551164B86C7F0FDDA08507782424C8D22F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5 * m_Items[1];

public:
	inline BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BranchLabel_t1AD05E18FF3172A1D4FC287CAE57C9CE6EB96FB5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Newtonsoft.Json.Bson.BsonProperty[]
struct BsonPropertyU5BU5D_t4ED8AC2085B27079AF707B6D2FC9549A085052FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BsonProperty_t655B421995773A6BD1E0C530CC3AFDADE88D549A * m_Items[1];

public:
	inline BsonProperty_t655B421995773A6BD1E0C530CC3AFDADE88D549A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BsonProperty_t655B421995773A6BD1E0C530CC3AFDADE88D549A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BsonProperty_t655B421995773A6BD1E0C530CC3AFDADE88D549A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BsonProperty_t655B421995773A6BD1E0C530CC3AFDADE88D549A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BsonProperty_t655B421995773A6BD1E0C530CC3AFDADE88D549A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BsonProperty_t655B421995773A6BD1E0C530CC3AFDADE88D549A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Newtonsoft.Json.Bson.BsonToken[]
struct BsonTokenU5BU5D_t7CB0391695B8F22EB0DEE56B2FB12A04E5B3B914  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 * m_Items[1];

public:
	inline BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BsonToken_t8023E3449D8C6CFEA0F05221A4AA911A52724198 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.InputSystem.Controls.ButtonControl[]
struct ButtonControlU5BU5D_t3EAE436FD15AF49C30C74FA6D88048650D65D191  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * m_Items[1];

public:
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.Interpreter.ByRefUpdater[]
struct ByRefUpdaterU5BU5D_t0FAE787778490964F634E1734FBF728A93E13A84  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ByRefUpdater_t947287A35823D0D1649B767460D71471A72AE717 * m_Items[1];

public:
	inline ByRefUpdater_t947287A35823D0D1649B767460D71471A72AE717 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByRefUpdater_t947287A35823D0D1649B767460D71471A72AE717 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByRefUpdater_t947287A35823D0D1649B767460D71471A72AE717 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByRefUpdater_t947287A35823D0D1649B767460D71471A72AE717 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByRefUpdater_t947287A35823D0D1649B767460D71471A72AE717 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByRefUpdater_t947287A35823D0D1649B767460D71471A72AE717 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.Net.CFProxy[]
struct CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D * m_Items[1];

public:
	inline CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CFProxy_t2A52C79EE9B5BC0CB18D5B40A2859C0F8CC1B04D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo[]
struct CSharpArgumentInfoU5BU5D_t5585CCCCAD4D3A2F16B7E27F633AD71546DE7A9E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * m_Items[1];

public:
	inline CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CSharpArgumentInfo_t18758AA8E5FA243D1B2431D03A55ED42516F8AF3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.CSharp.RuntimeBinder.Semantics.CType[]
struct CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CType_tDF33E6E64458FDAD600CB42D44998815294363DC * m_Items[1];

public:
	inline CType_tDF33E6E64458FDAD600CB42D44998815294363DC * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CType_tDF33E6E64458FDAD600CB42D44998815294363DC ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CType_tDF33E6E64458FDAD600CB42D44998815294363DC * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CType_tDF33E6E64458FDAD600CB42D44998815294363DC * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CType_tDF33E6E64458FDAD600CB42D44998815294363DC ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CType_tDF33E6E64458FDAD600CB42D44998815294363DC * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Text.RegularExpressions.CachedCodeEntry[]
struct CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 * m_Items[1];

public:
	inline CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CachedCodeEntry_tFB2B7B36D8DB46F8538DC70C3B1616ED9D43CD95 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Globalization.CalendarData[]
struct CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * m_Items[1];

public:
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CalendarData_t76EF6EAAED8C2BC4089643722CE589E213F7B4A4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);
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
il2cpp_hresult_t IVector_1_GetAt_mC72C7E4492535B801A9836EE9B294754AA15E4CC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m524C3F1DA919856922598A4F9F974E76762505F1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m9A4C974BF7C31CFB2CC06C51775F63E5159350E0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mA9C9AC4FE9777E80D36F86220C2A7251EA278D6D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m6532677A8FFFC8BE39E4487E8B5B957DEB895258_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool ___value1);
il2cpp_hresult_t IVector_1_InsertAt_mA71A9B77FAE574BBB3C8B8545D7D31AC6904F175_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_mFB31764EA0E4A914AC690D50E107200DA8F477BD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_mC5076A05A69921B6EBDAF1281FF5561C9E9791B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_mE9D09CA75800B62324F89063623FC3566CBDFA76_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_mD2EC4E85D8B8C83D22294D25A576B428A27D5CD6_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_mFAEFB6B3F4D153F96F9D9B3DAA2D33F732AD3365_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_m410FDC792A0957EC89ABB07AD1555D630AAECAC2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, bool* ___items0);
il2cpp_hresult_t IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m6F799ADF54AECADE79946CB6469CB6BF49B38135_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mD8B6592916D3739AAC161FDA1D630543219E9D7D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mA4B38845B990B4640F82CC8363BFB67E20945E9B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m4340482DAAA20E17654D33CFD65BE7ED60A353C3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, uint8_t* ___items0);
il2cpp_hresult_t IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, uint8_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue);


// System.Int16 System.Byte::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Byte_System_IConvertible_ToInt16_m134A951FF6D7DA4EECC86CB702A8B4DB2ADADDC8 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Byte::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Byte_System_IConvertible_ToUInt16_mCE446BE1A404904AEFD1DAB2706A4AF355186299 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Byte::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_System_IConvertible_ToInt32_m56A786C5BB3125C5C8ADAA2C40F28421959FBEB0 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Byte::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Byte_System_IConvertible_ToUInt32_m2D1C50FE2959C26DA3FA56BE5D91778B06F172C0 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Byte::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Byte_System_IConvertible_ToInt64_m79BB20D0471F008EEFA00F72C560EF92BE8AB6BF (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Byte::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Byte_System_IConvertible_ToUInt64_mD29B4938670EA99ADE6DCA11ADA0E57EA9D5CEC7 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Byte::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Byte_System_IConvertible_ToSingle_m5C04949AD8A80B18C9FF7895CB6DD9BD4ABF07CB (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Byte::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Byte_System_IConvertible_ToDouble_mAF1EAA014190ACF0A646AEE270FC1BFAF28F20A7 (uint8_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Timeline.AnimationTrack[]
struct AnimationTrackU5BU5D_t5421CC5701295BDDCC59B8562285DEE8AEE53157_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AnimationTrackU5BU5D_t5421CC5701295BDDCC59B8562285DEE8AEE53157_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AnimationTrackU5BU5D_t5421CC5701295BDDCC59B8562285DEE8AEE53157_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AnimationTrackU5BU5D_t5421CC5701295BDDCC59B8562285DEE8AEE53157_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AnimationTrackU5BU5D_t5421CC5701295BDDCC59B8562285DEE8AEE53157(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AnimationTrackU5BU5D_t5421CC5701295BDDCC59B8562285DEE8AEE53157_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AnimationTrackU5BU5D_t5421CC5701295BDDCC59B8562285DEE8AEE53157_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.AppBarButton[]
struct AppBarButtonU5BU5D_t7B47F14D0EE1011607E591082BBA11A23AC75EF2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AppBarButtonU5BU5D_t7B47F14D0EE1011607E591082BBA11A23AC75EF2_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AppBarButtonU5BU5D_t7B47F14D0EE1011607E591082BBA11A23AC75EF2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AppBarButtonU5BU5D_t7B47F14D0EE1011607E591082BBA11A23AC75EF2_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AppBarButtonU5BU5D_t7B47F14D0EE1011607E591082BBA11A23AC75EF2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AppBarButtonU5BU5D_t7B47F14D0EE1011607E591082BBA11A23AC75EF2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AppBarButtonU5BU5D_t7B47F14D0EE1011607E591082BBA11A23AC75EF2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.CSharp.RuntimeBinder.ArgumentObject[]
struct ArgumentObjectU5BU5D_t1F885176A372E7976F3FC8D913DBC40E073FA92D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArgumentObjectU5BU5D_t1F885176A372E7976F3FC8D913DBC40E073FA92D_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ArgumentObjectU5BU5D_t1F885176A372E7976F3FC8D913DBC40E073FA92D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArgumentObjectU5BU5D_t1F885176A372E7976F3FC8D913DBC40E073FA92D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArgumentObjectU5BU5D_t1F885176A372E7976F3FC8D913DBC40E073FA92D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArgumentObjectU5BU5D_t1F885176A372E7976F3FC8D913DBC40E073FA92D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArgumentObjectU5BU5D_t1F885176A372E7976F3FC8D913DBC40E073FA92D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType[]
struct ArrayTypeU5BU5D_t54C267B544C5B1752FAA157CBE15883524F2C747_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArrayTypeU5BU5D_t54C267B544C5B1752FAA157CBE15883524F2C747_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ArrayTypeU5BU5D_t54C267B544C5B1752FAA157CBE15883524F2C747_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArrayTypeU5BU5D_t54C267B544C5B1752FAA157CBE15883524F2C747_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArrayTypeU5BU5D_t54C267B544C5B1752FAA157CBE15883524F2C747(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArrayTypeU5BU5D_t54C267B544C5B1752FAA157CBE15883524F2C747_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArrayTypeU5BU5D_t54C267B544C5B1752FAA157CBE15883524F2C747_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose[]
struct ArticulatedHandPoseU5BU5D_t33E5F3215751DBAEFCD55B3D3D0E7B883089A495_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ArticulatedHandPoseU5BU5D_t33E5F3215751DBAEFCD55B3D3D0E7B883089A495_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ArticulatedHandPoseU5BU5D_t33E5F3215751DBAEFCD55B3D3D0E7B883089A495_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ArticulatedHandPoseU5BU5D_t33E5F3215751DBAEFCD55B3D3D0E7B883089A495_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ArticulatedHandPoseU5BU5D_t33E5F3215751DBAEFCD55B3D3D0E7B883089A495(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ArticulatedHandPoseU5BU5D_t33E5F3215751DBAEFCD55B3D3D0E7B883089A495_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ArticulatedHandPoseU5BU5D_t33E5F3215751DBAEFCD55B3D3D0E7B883089A495_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.Schema.Asttree[]
struct AsttreeU5BU5D_t46A15283CE66BEF443E654340B11BC0169C6EC55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsttreeU5BU5D_t46A15283CE66BEF443E654340B11BC0169C6EC55_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AsttreeU5BU5D_t46A15283CE66BEF443E654340B11BC0169C6EC55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsttreeU5BU5D_t46A15283CE66BEF443E654340B11BC0169C6EC55_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsttreeU5BU5D_t46A15283CE66BEF443E654340B11BC0169C6EC55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsttreeU5BU5D_t46A15283CE66BEF443E654340B11BC0169C6EC55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsttreeU5BU5D_t46A15283CE66BEF443E654340B11BC0169C6EC55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.AsyncOperation[]
struct AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationU5BU5D_tE03821547580746DEF05704BD43516FF279602B3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Attribute[]
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.AttributePSVIInfo[]
struct AttributePSVIInfoU5BU5D_tFC012DB6C5789EA4097CDCDF79848220A8239A8E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AttributePSVIInfoU5BU5D_tFC012DB6C5789EA4097CDCDF79848220A8239A8E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AttributePSVIInfoU5BU5D_tFC012DB6C5789EA4097CDCDF79848220A8239A8E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AttributePSVIInfoU5BU5D_tFC012DB6C5789EA4097CDCDF79848220A8239A8E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AttributePSVIInfoU5BU5D_tFC012DB6C5789EA4097CDCDF79848220A8239A8E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AttributePSVIInfoU5BU5D_tFC012DB6C5789EA4097CDCDF79848220A8239A8E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AttributePSVIInfoU5BU5D_tFC012DB6C5789EA4097CDCDF79848220A8239A8E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.AttributeUsageAttribute[]
struct AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AttributeUsageAttributeU5BU5D_t8B71063ABF70BA2876A22090848AE7A79FE52952_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality[]
struct AudioLoFiSourceQualityU5BU5D_tBF182521842AA5E866145D55A64EEFBD9418A39C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AudioLoFiSourceQualityU5BU5D_tBF182521842AA5E866145D55A64EEFBD9418A39C_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AudioLoFiSourceQualityU5BU5D_tBF182521842AA5E866145D55A64EEFBD9418A39C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AudioLoFiSourceQualityU5BU5D_tBF182521842AA5E866145D55A64EEFBD9418A39C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AudioLoFiSourceQualityU5BU5D_tBF182521842AA5E866145D55A64EEFBD9418A39C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AudioLoFiSourceQualityU5BU5D_tBF182521842AA5E866145D55A64EEFBD9418A39C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AudioLoFiSourceQualityU5BU5D_tBF182521842AA5E866145D55A64EEFBD9418A39C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Http.Headers.AuthenticationHeaderValue[]
struct AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AuthenticationHeaderValueU5BU5D_tC95409FB34ECD00E7DE768C6B25E1187196B91BB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.AxisType[]
struct AxisTypeU5BU5D_tC8EB8BC7E5FF37859157F74DD8EE4738B490A794_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AxisTypeU5BU5D_tC8EB8BC7E5FF37859157F74DD8EE4738B490A794_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline AxisTypeU5BU5D_tC8EB8BC7E5FF37859157F74DD8EE4738B490A794_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AxisTypeU5BU5D_tC8EB8BC7E5FF37859157F74DD8EE4738B490A794_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AxisTypeU5BU5D_tC8EB8BC7E5FF37859157F74DD8EE4738B490A794(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AxisTypeU5BU5D_tC8EB8BC7E5FF37859157F74DD8EE4738B490A794_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AxisTypeU5BU5D_tC8EB8BC7E5FF37859157F74DD8EE4738B490A794_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.BaseController[]
struct BaseControllerU5BU5D_t04366F7B7ABDC3FD4B2AA2CB51D44C71D9C09B2E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BaseControllerU5BU5D_t04366F7B7ABDC3FD4B2AA2CB51D44C71D9C09B2E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BaseControllerU5BU5D_t04366F7B7ABDC3FD4B2AA2CB51D44C71D9C09B2E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BaseControllerU5BU5D_t04366F7B7ABDC3FD4B2AA2CB51D44C71D9C09B2E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BaseControllerU5BU5D_t04366F7B7ABDC3FD4B2AA2CB51D44C71D9C09B2E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BaseControllerU5BU5D_t04366F7B7ABDC3FD4B2AA2CB51D44C71D9C09B2E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BaseControllerU5BU5D_t04366F7B7ABDC3FD4B2AA2CB51D44C71D9C09B2E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.EventSystems.BaseInputModule[]
struct BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BaseInputModuleU5BU5D_t3231AF13119354DF0DBD112CDE47F3B2E944BE04_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BaseRaycasterU5BU5D_t6920F03F4E6ECC164F57F62E35735BDE17D18A11_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.BatchVisibility[]
struct BatchVisibilityU5BU5D_t4BBF54DA6EFC8E836C4873647C175F2B1F17690B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BatchVisibilityU5BU5D_t4BBF54DA6EFC8E836C4873647C175F2B1F17690B_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BatchVisibilityU5BU5D_t4BBF54DA6EFC8E836C4873647C175F2B1F17690B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BatchVisibilityU5BU5D_t4BBF54DA6EFC8E836C4873647C175F2B1F17690B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BatchVisibilityU5BU5D_t4BBF54DA6EFC8E836C4873647C175F2B1F17690B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BatchVisibilityU5BU5D_t4BBF54DA6EFC8E836C4873647C175F2B1F17690B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BatchVisibilityU5BU5D_t4BBF54DA6EFC8E836C4873647C175F2B1F17690B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BigIntegerU5BU5D_t6022448CCCBEFC252B4AB0A751120EA47004299B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BigIntegerU5BU5D_tCAAF1BEC9F85A73E7E6043A040871D066C2C4145_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[]
struct BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BinaryTypeEnumU5BU5D_t5950CE9E53B3DCB20CBCB2B2F15D47C264BF86E7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Dynamic.BindingRestrictions[]
struct BindingRestrictionsU5BU5D_t453FB03BCAC3F59B8B67274DC3242F1F4D909AD7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BindingRestrictionsU5BU5D_t453FB03BCAC3F59B8B67274DC3242F1F4D909AD7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BindingRestrictionsU5BU5D_t453FB03BCAC3F59B8B67274DC3242F1F4D909AD7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BindingRestrictionsU5BU5D_t453FB03BCAC3F59B8B67274DC3242F1F4D909AD7_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BindingRestrictionsU5BU5D_t453FB03BCAC3F59B8B67274DC3242F1F4D909AD7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BindingRestrictionsU5BU5D_t453FB03BCAC3F59B8B67274DC3242F1F4D909AD7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BindingRestrictionsU5BU5D_t453FB03BCAC3F59B8B67274DC3242F1F4D909AD7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.Schema.BitSet[]
struct BitSetU5BU5D_t95400D30DE4EA8396AA8017C81305F0A68B3B1FD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BitSetU5BU5D_t95400D30DE4EA8396AA8017C81305F0A68B3B1FD_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BitSetU5BU5D_t95400D30DE4EA8396AA8017C81305F0A68B3B1FD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BitSetU5BU5D_t95400D30DE4EA8396AA8017C81305F0A68B3B1FD_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BitSetU5BU5D_t95400D30DE4EA8396AA8017C81305F0A68B3B1FD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BitSetU5BU5D_t95400D30DE4EA8396AA8017C81305F0A68B3B1FD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BitSetU5BU5D_t95400D30DE4EA8396AA8017C81305F0A68B3B1FD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.WindowsAzure.Storage.Blob.Protocol.BlobContainerEntry[]
struct BlobContainerEntryU5BU5D_t1778938F8DE645EE53976401A6E3057CDDD24B0E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BlobContainerEntryU5BU5D_t1778938F8DE645EE53976401A6E3057CDDD24B0E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BlobContainerEntryU5BU5D_t1778938F8DE645EE53976401A6E3057CDDD24B0E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BlobContainerEntryU5BU5D_t1778938F8DE645EE53976401A6E3057CDDD24B0E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BlobContainerEntryU5BU5D_t1778938F8DE645EE53976401A6E3057CDDD24B0E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BlobContainerEntryU5BU5D_t1778938F8DE645EE53976401A6E3057CDDD24B0E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BlobContainerEntryU5BU5D_t1778938F8DE645EE53976401A6E3057CDDD24B0E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper>, IVector_1_t3AC2680BA65E508568784202EDBE66AA4B9FDBD5, IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IReferenceArray_1_t48259FE322824681F348D90FD4026837611A6741, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVector_1_t3AC2680BA65E508568784202EDBE66AA4B9FDBD5::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t3AC2680BA65E508568784202EDBE66AA4B9FDBD5*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReferenceArray_1_t48259FE322824681F348D90FD4026837611A6741::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_t48259FE322824681F348D90FD4026837611A6741*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(7);
		interfaceIds[0] = IVector_1_t3AC2680BA65E508568784202EDBE66AA4B9FDBD5::IID;
		interfaceIds[1] = IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4::IID;
		interfaceIds[4] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[5] = IReferenceArray_1_t48259FE322824681F348D90FD4026837611A6741::IID;
		interfaceIds[6] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 7;
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

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mC72C7E4492535B801A9836EE9B294754AA15E4CC(uint32_t ___index0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mC72C7E4492535B801A9836EE9B294754AA15E4CC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m524C3F1DA919856922598A4F9F974E76762505F1(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m524C3F1DA919856922598A4F9F974E76762505F1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m9A4C974BF7C31CFB2CC06C51775F63E5159350E0(IVectorView_1_t7E7E190C2F48FD04E6537C86A694AA3AB77C26E4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m9A4C974BF7C31CFB2CC06C51775F63E5159350E0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mA9C9AC4FE9777E80D36F86220C2A7251EA278D6D(bool ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mA9C9AC4FE9777E80D36F86220C2A7251EA278D6D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m6532677A8FFFC8BE39E4487E8B5B957DEB895258(uint32_t ___index0, bool ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m6532677A8FFFC8BE39E4487E8B5B957DEB895258_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mA71A9B77FAE574BBB3C8B8545D7D31AC6904F175(uint32_t ___index0, bool ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_mA71A9B77FAE574BBB3C8B8545D7D31AC6904F175_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mFB31764EA0E4A914AC690D50E107200DA8F477BD(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_mFB31764EA0E4A914AC690D50E107200DA8F477BD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_mC5076A05A69921B6EBDAF1281FF5561C9E9791B5(bool ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_mC5076A05A69921B6EBDAF1281FF5561C9E9791B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mE9D09CA75800B62324F89063623FC3566CBDFA76() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_mE9D09CA75800B62324F89063623FC3566CBDFA76_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mD2EC4E85D8B8C83D22294D25A576B428A27D5CD6() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_mD2EC4E85D8B8C83D22294D25A576B428A27D5CD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mFAEFB6B3F4D153F96F9D9B3DAA2D33F732AD3365(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_mFAEFB6B3F4D153F96F9D9B3DAA2D33F732AD3365_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m410FDC792A0957EC89ABB07AD1555D630AAECAC2(uint32_t ___items0ArraySize, bool* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_m410FDC792A0957EC89ABB07AD1555D630AAECAC2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB(IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m6F799ADF54AECADE79946CB6469CB6BF49B38135(uint32_t ___index0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m6F799ADF54AECADE79946CB6469CB6BF49B38135_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD8B6592916D3739AAC161FDA1D630543219E9D7D(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mD8B6592916D3739AAC161FDA1D630543219E9D7D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mA4B38845B990B4640F82CC8363BFB67E20945E9B(bool ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mA4B38845B990B4640F82CC8363BFB67E20945E9B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4340482DAAA20E17654D33CFD65BE7ED60A353C3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m4340482DAAA20E17654D33CFD65BE7ED60A353C3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mD17835FF1D2A2588B1182DDD078179FC94636E80(uint32_t* comReturnValueArraySize, bool** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* returnValue;
		try
		{
			returnValue = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
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
		uint32_t _returnValue_marshaledArraySize = 0;
		bool* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<bool>(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				(_returnValue_marshaled)[i] = (returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		*comReturnValueArraySize = _returnValue_marshaledArraySize;
		*comReturnValue = _returnValue_marshaled;
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
			returnValue = 1035;
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
			returnValue = false;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Byte", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Int16", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "UInt16", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Int32", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "UInt32", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Int64", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "UInt64", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Single", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Double", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			____value0_empty = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<bool>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "String", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				if ((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL);
				}
				(*___value0)[i] = il2cpp_codegen_create_hstring((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* managedArray = static_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("BooleanArray", "Boolean", "Guid", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("BooleanArray", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.BoundedPlane[]
struct BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoundedPlaneU5BU5D_t6DB2EAACF5C678F26D132ED4EE07E9A32612B684_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Bounds[]
struct BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BoundsU5BU5D_tA20244F72ED35E03A7884E16AA871A3213613335_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Expressions.Interpreter.BranchLabel[]
struct BranchLabelU5BU5D_tFC83E1551164B86C7F0FDDA08507782424C8D22F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BranchLabelU5BU5D_tFC83E1551164B86C7F0FDDA08507782424C8D22F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BranchLabelU5BU5D_tFC83E1551164B86C7F0FDDA08507782424C8D22F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BranchLabelU5BU5D_tFC83E1551164B86C7F0FDDA08507782424C8D22F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BranchLabelU5BU5D_tFC83E1551164B86C7F0FDDA08507782424C8D22F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BranchLabelU5BU5D_tFC83E1551164B86C7F0FDDA08507782424C8D22F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BranchLabelU5BU5D_tFC83E1551164B86C7F0FDDA08507782424C8D22F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Bson.BsonProperty[]
struct BsonPropertyU5BU5D_t4ED8AC2085B27079AF707B6D2FC9549A085052FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BsonPropertyU5BU5D_t4ED8AC2085B27079AF707B6D2FC9549A085052FB_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BsonPropertyU5BU5D_t4ED8AC2085B27079AF707B6D2FC9549A085052FB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BsonPropertyU5BU5D_t4ED8AC2085B27079AF707B6D2FC9549A085052FB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BsonPropertyU5BU5D_t4ED8AC2085B27079AF707B6D2FC9549A085052FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BsonPropertyU5BU5D_t4ED8AC2085B27079AF707B6D2FC9549A085052FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BsonPropertyU5BU5D_t4ED8AC2085B27079AF707B6D2FC9549A085052FB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Bson.BsonToken[]
struct BsonTokenU5BU5D_t7CB0391695B8F22EB0DEE56B2FB12A04E5B3B914_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BsonTokenU5BU5D_t7CB0391695B8F22EB0DEE56B2FB12A04E5B3B914_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline BsonTokenU5BU5D_t7CB0391695B8F22EB0DEE56B2FB12A04E5B3B914_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BsonTokenU5BU5D_t7CB0391695B8F22EB0DEE56B2FB12A04E5B3B914_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BsonTokenU5BU5D_t7CB0391695B8F22EB0DEE56B2FB12A04E5B3B914(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BsonTokenU5BU5D_t7CB0391695B8F22EB0DEE56B2FB12A04E5B3B914_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BsonTokenU5BU5D_t7CB0391695B8F22EB0DEE56B2FB12A04E5B3B914_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Controls.ButtonControl[]
struct ButtonControlU5BU5D_t3EAE436FD15AF49C30C74FA6D88048650D65D191_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ButtonControlU5BU5D_t3EAE436FD15AF49C30C74FA6D88048650D65D191_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ButtonControlU5BU5D_t3EAE436FD15AF49C30C74FA6D88048650D65D191_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ButtonControlU5BU5D_t3EAE436FD15AF49C30C74FA6D88048650D65D191_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ButtonControlU5BU5D_t3EAE436FD15AF49C30C74FA6D88048650D65D191(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ButtonControlU5BU5D_t3EAE436FD15AF49C30C74FA6D88048650D65D191_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ButtonControlU5BU5D_t3EAE436FD15AF49C30C74FA6D88048650D65D191_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Expressions.Interpreter.ByRefUpdater[]
struct ByRefUpdaterU5BU5D_t0FAE787778490964F634E1734FBF728A93E13A84_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ByRefUpdaterU5BU5D_t0FAE787778490964F634E1734FBF728A93E13A84_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ByRefUpdaterU5BU5D_t0FAE787778490964F634E1734FBF728A93E13A84_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ByRefUpdaterU5BU5D_t0FAE787778490964F634E1734FBF728A93E13A84_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ByRefUpdaterU5BU5D_t0FAE787778490964F634E1734FBF728A93E13A84(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ByRefUpdaterU5BU5D_t0FAE787778490964F634E1734FBF728A93E13A84_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ByRefUpdaterU5BU5D_t0FAE787778490964F634E1734FBF728A93E13A84_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper>, IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59, IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IReferenceArray_1_t80CD13C8F5FD9D0C9F37FB41C9A0854230D759DE, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReferenceArray_1_t80CD13C8F5FD9D0C9F37FB41C9A0854230D759DE::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_t80CD13C8F5FD9D0C9F37FB41C9A0854230D759DE*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(7);
		interfaceIds[0] = IVector_1_tD956E881CDB8C6BDA0CA319C51BB1069D21F8E59::IID;
		interfaceIds[1] = IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD::IID;
		interfaceIds[4] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[5] = IReferenceArray_1_t80CD13C8F5FD9D0C9F37FB41C9A0854230D759DE::IID;
		interfaceIds[6] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 7;
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

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B(uint32_t ___index0, uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mDAE90E5E6E8E510B0515309A8F71289E6BB70C0B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m321E306D86F392BD05CACC84AF5A45D1D7151FE3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536(IVectorView_1_t15BF888A0FFE0AF17AD3BA5464F7632D8015B4AD** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m51F552BF7283A492B2FC9B8E33E63173125FA536_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mCF10E7A03B12D26D22D2FA8F83EDC94D62189D81_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79(uint32_t ___index0, uint8_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m1514CAF9C402C03DFCFF52DB2751F556A3B69A79_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818(uint32_t ___index0, uint8_t ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m21416D66D612951004350D8C0AAE9A597EC6C818_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m2E4F1800C6E41292A4691D7B481244CE4C3842A0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D(uint8_t ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m3D6FDB2E75142E3186552219AF83AC6C545A1F1D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_mC015CE5E99D9B922B0355029D7CDEFBD3C0EDE67_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_m51B6FD8BF989FA40D87C86E7DC668E99BDF615B3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m7536311FA4E66BC07F778712FC7EF424E222A818_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B(uint32_t ___items0ArraySize, uint8_t* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_m5BB5F8E1921E95ED42499942275F9F0B64FAF66B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB(uint32_t ___index0, uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m4F6DD15131D17894410E6EF9F46A39C1D0593CCB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mBE2E4B8B0EF28DE2637B2E597991378CA72CDBE7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194(uint8_t ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m83CB136EE15DD29EC67055356F595D1513DA2194_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint8_t* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m779B2A1834635CA33A791D9BB22E3CB9C41CAD1E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mECA8C42F721DD0D91E170257E9DBC6C9746F8DEA(uint32_t* comReturnValueArraySize, uint8_t** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* returnValue;
		try
		{
			returnValue = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
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
		uint32_t _returnValue_marshaledArraySize = 0;
		uint8_t* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				(_returnValue_marshaled)[i] = (returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		*comReturnValueArraySize = _returnValue_marshaledArraySize;
		*comReturnValue = _returnValue_marshaled;
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
			returnValue = 1025;
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
			returnValue = false;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			____value0_empty = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int16_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToInt16_m134A951FF6D7DA4EECC86CB702A8B4DB2ADADDC8((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "Int16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Int16", i);
				}
			}
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint16_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToUInt16_mCE446BE1A404904AEFD1DAB2706A4AF355186299((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "UInt16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "UInt16", i);
				}
			}
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int32_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToInt32_m56A786C5BB3125C5C8ADAA2C40F28421959FBEB0((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "Int32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Int32", i);
				}
			}
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint32_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToUInt32_m2D1C50FE2959C26DA3FA56BE5D91778B06F172C0((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "UInt32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "UInt32", i);
				}
			}
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int64_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToInt64_m79BB20D0471F008EEFA00F72C560EF92BE8AB6BF((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "Int64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Int64", i);
				}
			}
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint64_t il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToUInt64_mD29B4938670EA99ADE6DCA11ADA0E57EA9D5CEC7((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "UInt64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "UInt64", i);
				}
			}
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					float il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToSingle_m5C04949AD8A80B18C9FF7895CB6DD9BD4ABF07CB((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "Single", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Single", i);
				}
			}
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				uint8_t item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					double il2cppRetVal;
					il2cppRetVal = Byte_System_IConvertible_ToDouble_mAF1EAA014190ACF0A646AEE270FC1BFAF28F20A7((&item), NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion(Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, (managedArray)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(i))), "UInt8Array", "UInt8", "Double", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Double", i);
				}
			}
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "String", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				if ((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL);
				}
				(*___value0)[i] = il2cpp_codegen_create_hstring((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* managedArray = static_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("UInt8Array", "UInt8", "Guid", 0);
			}

			____value0_empty = NULL;
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

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("UInt8Array", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Net.CFProxy[]
struct CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CFProxyU5BU5D_t6BF6F892949185472362D99799D6650BB6DE5E26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo[]
struct CSharpArgumentInfoU5BU5D_t5585CCCCAD4D3A2F16B7E27F633AD71546DE7A9E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CSharpArgumentInfoU5BU5D_t5585CCCCAD4D3A2F16B7E27F633AD71546DE7A9E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CSharpArgumentInfoU5BU5D_t5585CCCCAD4D3A2F16B7E27F633AD71546DE7A9E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CSharpArgumentInfoU5BU5D_t5585CCCCAD4D3A2F16B7E27F633AD71546DE7A9E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CSharpArgumentInfoU5BU5D_t5585CCCCAD4D3A2F16B7E27F633AD71546DE7A9E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CSharpArgumentInfoU5BU5D_t5585CCCCAD4D3A2F16B7E27F633AD71546DE7A9E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CSharpArgumentInfoU5BU5D_t5585CCCCAD4D3A2F16B7E27F633AD71546DE7A9E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.CSharp.RuntimeBinder.Semantics.CType[]
struct CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.CachedCodeEntry[]
struct CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CachedCodeEntryU5BU5D_t2B02C6D1888E83449481CAF3E2C9D061809532BD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Globalization.CalendarData[]
struct CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CalendarDataU5BU5D_t92EDE3986BAED27678B4F4140BC955434CFEACC7_ComCallableWrapper(obj));
}
