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

// System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>
struct Action_1_t283B4B503570CC444C675B4B698B3DFE599DE355;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>
struct Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>
struct Action_1_t471A708933EB688D746D88816632407D2D419B13;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494;
// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>
struct GestureRecognizer_1_t997D483D2F7E4115BC41F16CAF72149C4E27A748;
// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>
struct GestureRecognizer_1_tF22A810FBA7B217CF187C632A19B2D9004BA8605;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_tCD2B0F12D0E02D7BF44AA544916B2D1CCCD4246D;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.LowLevel.TouchState>
struct InputProcessor_1_t1EDF76B9305D7E97CB5F33C1BF24A21A6364AF86;
// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<UnityEngine.InputSystem.LowLevel.TouchState>
struct InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1;
// System.Collections.Generic.List`1<System.ModifierSpec>
struct List_1_tF0C12A80ED2228F19412CFF80CBDD6C9D3C7021E;
// System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue>
struct List_1_t691D15165F1892D11210DB2AA498EEE4ACA54806;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tEB4537E121ED7128292F5E49486823EB846576FE;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4;
// System.Collections.Generic.List`1<System.TypeIdentifier>
struct List_1_tF05116F77D9D1198FCD80D3C852416C146DA5708;
// System.Collections.Generic.List`1<System.TypeSpec>
struct List_1_tFCE6826611DDA07BF7BC248A498D8C3690364635;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData>
struct List_1_tB63D3299D00C155882DD98A918CEA1DAD0598679;
// System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>[]
struct Action_1U5BU5D_tE607D3CD5B787DEBE795DCF2E54111D0BB8EC23F;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.LowLevel.TouchState>[]
struct InputProcessor_1U5BU5D_t2754C11048B16020EA25888EFAAB2C22CB508097;
// Microsoft.CSharp.RuntimeBinder.Semantics.CType[]
struct CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.InputSystem.EnhancedTouch.Finger[]
struct FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD;
// UnityEngine.InputSystem.EnhancedTouch.Touch[]
struct TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E;
// UnityEngine.InputSystem.Controls.TouchControl[]
struct TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C;
// UnityEngine.InputSystem.Touchscreen[]
struct TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B;
// UnityEngine.InputSystem.UI.TrackedDeviceRaycaster[]
struct TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.InputSystem.Controls.DoubleControl
struct DoubleControl_tE49E62BF0692C752B3DDBEA7DB2A212793469EC8;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.InputSystem.EnhancedTouch.Finger
struct Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Microsoft.CSharp.RuntimeBinder.Syntax.Name
struct Name_t0D58C5B52214B22C7F1251593E1902DC82080689;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol
struct ParentSymbol_tA772489CF1C65F3DBE49CF7652F7E557831D6A7E;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.Timeline.TimelineClip
struct TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// System.Globalization.TokenHashValue
struct TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE;
// UnityEngine.InputSystem.Controls.TouchControl
struct TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E;
// UnityEngine.InputSystem.Controls.TouchPhaseControl
struct TouchPhaseControl_t61847A8DAEA356BBB51872FCE51DD9EEA9206D01;
// UnityEngine.InputSystem.Controls.TouchPressControl
struct TouchPressControl_t6BFD886FA620112937D72C2C3601F9BA50A600ED;
// UnityEngine.InputSystem.Touchscreen
struct Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26;
// System.Diagnostics.Tracing.TraceLoggingTypeInfo
struct TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628;
// UnityEngine.Timeline.TrackBindingTypeAttribute
struct TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780;
// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData
struct TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63;
// UnityEngine.InputSystem.UI.TrackedDeviceRaycaster
struct TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5;
// System.Net.Http.Headers.TransferCodingHeaderValue
struct TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25;
// System.Net.Http.Headers.TransferCodingWithQualityHeaderValue
struct TransferCodingWithQualityHeaderValue_tAC3B4AEAE5AF0E85C8973A512EE2C71F5592E5A7;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Microsoft.MixedReality.Toolkit.UI.TransformConstraint
struct TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4;
// UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture
struct TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1;
// UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture
struct TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800;
// System.Type
struct Type_t;
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray
struct TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2;
// System.TypeIdentifier
struct TypeIdentifier_t9E06B931A267178BD1565C8055561237CF86171D;
// System.Runtime.Serialization.Formatters.Binary.TypeInformation
struct TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B;
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol
struct TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7;
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType
struct TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D;
// System.TypeSpec
struct TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.Timer/Scheduler
struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;

IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953;
struct IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D;
struct IVectorView_1_tA4F80E29F324A04831B458B897F638645DC796DF;
struct Il2CppWindowsRuntimeTypeName;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;
struct Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C_marshaled_com;
struct Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD;
struct TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387;
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF;
struct TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3;
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
struct TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E;
struct TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C;
struct TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63;
struct TraceLoggingTypeInfoU5BU5D_tA90F7957051B6937994E8E00BDFBEB11DA71739F;
struct TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B;
struct TrackBindingTypeAttributeU5BU5D_t7A715A925DD676A66296E7420B9A44D182592AE4;
struct TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0;
struct TrackedDeviceEventDataU5BU5D_t10AFCA5C11AE2084B842B316FCC202EA849E5B74;
struct TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D;
struct TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE;
struct TransferCodingHeaderValueU5BU5D_tD995FB23F77C8D95B39A6384C68FFB317CE374B7;
struct TransferCodingWithQualityHeaderValueU5BU5D_t4046809AA80FE966E30D949AAC31E3EAB5F42888;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct TransformConstraintU5BU5D_t5642B8CBEC1A53788619009D919B44FC2B817900;
struct TwistGestureU5BU5D_tC6878D08F9DE572784F77FDD6D233646EB20EAF5;
struct TwoFingerDragGestureU5BU5D_tDB0AD7310CE23E933A4CB19441AB3E80A211939E;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct TypeArrayU5BU5D_tA99D115AC27B10BDF262CB20518DA00E0462C468;
struct TypeCodeU5BU5D_t739FFE1DCDDA7CAB8776CF8717CD472E32DC59AE;
struct TypeIdentifierU5BU5D_t3265157B9A697E40451D0B00C1BCBA9B0298FD80;
struct TypeInformationU5BU5D_tD576CAD79CF9BB3BC2FDA1600DEFEE383B10BB92;
struct TypeNameKeyU5BU5D_t2501C6DD0BEC8B867E2DA0BE386396D24357CA2E;
struct TypeParameterSymbolU5BU5D_t2B49553927EC2E977B4C6C1D1DDA530DEC2C85E2;
struct TypeParameterTypeU5BU5D_tE8A081E99D9E3E4E1451C5B1C51F6B6D815D2F9C;
struct TypeSpecU5BU5D_t7283191FE6CC324F4D59517D154470947E071F24;
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
// Windows.Foundation.Collections.IIterable`1<System.IDisposable>
struct NOVTABLE IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) = 0;
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
// Windows.Foundation.Collections.IIterable`1<System.Type>
struct NOVTABLE IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67(IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.Type>
struct NOVTABLE IReferenceArray_1_tD46608331082351F1B529D3654C4B9C1F042B7D4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mA84565C4024FDE69169C568211FAB93BAED50FC9(uint32_t* comReturnValueArraySize, Il2CppWindowsRuntimeTypeName** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.IDisposable>
struct NOVTABLE IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348(uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896(IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.IEnumerable>
struct NOVTABLE IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E(uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17(IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue) = 0;
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


// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture>
struct Gesture_1_t500AA69F85363BC944CC93355B07FB46B67EAE6E  : public RuntimeObject
{
public:
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onStart
	Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E * ___onStart_0;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onUpdated
	Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E * ___onUpdated_1;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onFinished
	Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E * ___onFinished_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<targetObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CtargetObjectU3Ek__BackingField_4;
	// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<recognizer>k__BackingField
	GestureRecognizer_1_t997D483D2F7E4115BC41F16CAF72149C4E27A748 * ___U3CrecognizerU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::m_HasStarted
	bool ___m_HasStarted_6;

public:
	inline static int32_t get_offset_of_onStart_0() { return static_cast<int32_t>(offsetof(Gesture_1_t500AA69F85363BC944CC93355B07FB46B67EAE6E, ___onStart_0)); }
	inline Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E * get_onStart_0() const { return ___onStart_0; }
	inline Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E ** get_address_of_onStart_0() { return &___onStart_0; }
	inline void set_onStart_0(Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E * value)
	{
		___onStart_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_0), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdated_1() { return static_cast<int32_t>(offsetof(Gesture_1_t500AA69F85363BC944CC93355B07FB46B67EAE6E, ___onUpdated_1)); }
	inline Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E * get_onUpdated_1() const { return ___onUpdated_1; }
	inline Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E ** get_address_of_onUpdated_1() { return &___onUpdated_1; }
	inline void set_onUpdated_1(Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E * value)
	{
		___onUpdated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdated_1), (void*)value);
	}

	inline static int32_t get_offset_of_onFinished_2() { return static_cast<int32_t>(offsetof(Gesture_1_t500AA69F85363BC944CC93355B07FB46B67EAE6E, ___onFinished_2)); }
	inline Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E * get_onFinished_2() const { return ___onFinished_2; }
	inline Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E ** get_address_of_onFinished_2() { return &___onFinished_2; }
	inline void set_onFinished_2(Action_1_t7122F520E9361E13B8AAA9F3BE1F1B5848D0DC4E * value)
	{
		___onFinished_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFinished_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisCanceledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Gesture_1_t500AA69F85363BC944CC93355B07FB46B67EAE6E, ___U3CisCanceledU3Ek__BackingField_3)); }
	inline bool get_U3CisCanceledU3Ek__BackingField_3() const { return ___U3CisCanceledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CisCanceledU3Ek__BackingField_3() { return &___U3CisCanceledU3Ek__BackingField_3; }
	inline void set_U3CisCanceledU3Ek__BackingField_3(bool value)
	{
		___U3CisCanceledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtargetObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Gesture_1_t500AA69F85363BC944CC93355B07FB46B67EAE6E, ___U3CtargetObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CtargetObjectU3Ek__BackingField_4() const { return ___U3CtargetObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CtargetObjectU3Ek__BackingField_4() { return &___U3CtargetObjectU3Ek__BackingField_4; }
	inline void set_U3CtargetObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CtargetObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetObjectU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrecognizerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Gesture_1_t500AA69F85363BC944CC93355B07FB46B67EAE6E, ___U3CrecognizerU3Ek__BackingField_5)); }
	inline GestureRecognizer_1_t997D483D2F7E4115BC41F16CAF72149C4E27A748 * get_U3CrecognizerU3Ek__BackingField_5() const { return ___U3CrecognizerU3Ek__BackingField_5; }
	inline GestureRecognizer_1_t997D483D2F7E4115BC41F16CAF72149C4E27A748 ** get_address_of_U3CrecognizerU3Ek__BackingField_5() { return &___U3CrecognizerU3Ek__BackingField_5; }
	inline void set_U3CrecognizerU3Ek__BackingField_5(GestureRecognizer_1_t997D483D2F7E4115BC41F16CAF72149C4E27A748 * value)
	{
		___U3CrecognizerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrecognizerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasStarted_6() { return static_cast<int32_t>(offsetof(Gesture_1_t500AA69F85363BC944CC93355B07FB46B67EAE6E, ___m_HasStarted_6)); }
	inline bool get_m_HasStarted_6() const { return ___m_HasStarted_6; }
	inline bool* get_address_of_m_HasStarted_6() { return &___m_HasStarted_6; }
	inline void set_m_HasStarted_6(bool value)
	{
		___m_HasStarted_6 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1<UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture>
struct Gesture_1_tB2B2697E93FDB20DD494954ADAE6BE900D85DA4D  : public RuntimeObject
{
public:
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onStart
	Action_1_t471A708933EB688D746D88816632407D2D419B13 * ___onStart_0;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onUpdated
	Action_1_t471A708933EB688D746D88816632407D2D419B13 * ___onUpdated_1;
	// System.Action`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::onFinished
	Action_1_t471A708933EB688D746D88816632407D2D419B13 * ___onFinished_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<targetObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CtargetObjectU3Ek__BackingField_4;
	// UnityEngine.XR.Interaction.Toolkit.AR.GestureRecognizer`1<T> UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::<recognizer>k__BackingField
	GestureRecognizer_1_tF22A810FBA7B217CF187C632A19B2D9004BA8605 * ___U3CrecognizerU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.AR.Gesture`1::m_HasStarted
	bool ___m_HasStarted_6;

public:
	inline static int32_t get_offset_of_onStart_0() { return static_cast<int32_t>(offsetof(Gesture_1_tB2B2697E93FDB20DD494954ADAE6BE900D85DA4D, ___onStart_0)); }
	inline Action_1_t471A708933EB688D746D88816632407D2D419B13 * get_onStart_0() const { return ___onStart_0; }
	inline Action_1_t471A708933EB688D746D88816632407D2D419B13 ** get_address_of_onStart_0() { return &___onStart_0; }
	inline void set_onStart_0(Action_1_t471A708933EB688D746D88816632407D2D419B13 * value)
	{
		___onStart_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_0), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdated_1() { return static_cast<int32_t>(offsetof(Gesture_1_tB2B2697E93FDB20DD494954ADAE6BE900D85DA4D, ___onUpdated_1)); }
	inline Action_1_t471A708933EB688D746D88816632407D2D419B13 * get_onUpdated_1() const { return ___onUpdated_1; }
	inline Action_1_t471A708933EB688D746D88816632407D2D419B13 ** get_address_of_onUpdated_1() { return &___onUpdated_1; }
	inline void set_onUpdated_1(Action_1_t471A708933EB688D746D88816632407D2D419B13 * value)
	{
		___onUpdated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdated_1), (void*)value);
	}

	inline static int32_t get_offset_of_onFinished_2() { return static_cast<int32_t>(offsetof(Gesture_1_tB2B2697E93FDB20DD494954ADAE6BE900D85DA4D, ___onFinished_2)); }
	inline Action_1_t471A708933EB688D746D88816632407D2D419B13 * get_onFinished_2() const { return ___onFinished_2; }
	inline Action_1_t471A708933EB688D746D88816632407D2D419B13 ** get_address_of_onFinished_2() { return &___onFinished_2; }
	inline void set_onFinished_2(Action_1_t471A708933EB688D746D88816632407D2D419B13 * value)
	{
		___onFinished_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFinished_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisCanceledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Gesture_1_tB2B2697E93FDB20DD494954ADAE6BE900D85DA4D, ___U3CisCanceledU3Ek__BackingField_3)); }
	inline bool get_U3CisCanceledU3Ek__BackingField_3() const { return ___U3CisCanceledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CisCanceledU3Ek__BackingField_3() { return &___U3CisCanceledU3Ek__BackingField_3; }
	inline void set_U3CisCanceledU3Ek__BackingField_3(bool value)
	{
		___U3CisCanceledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtargetObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Gesture_1_tB2B2697E93FDB20DD494954ADAE6BE900D85DA4D, ___U3CtargetObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CtargetObjectU3Ek__BackingField_4() const { return ___U3CtargetObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CtargetObjectU3Ek__BackingField_4() { return &___U3CtargetObjectU3Ek__BackingField_4; }
	inline void set_U3CtargetObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CtargetObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetObjectU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrecognizerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Gesture_1_tB2B2697E93FDB20DD494954ADAE6BE900D85DA4D, ___U3CrecognizerU3Ek__BackingField_5)); }
	inline GestureRecognizer_1_tF22A810FBA7B217CF187C632A19B2D9004BA8605 * get_U3CrecognizerU3Ek__BackingField_5() const { return ___U3CrecognizerU3Ek__BackingField_5; }
	inline GestureRecognizer_1_tF22A810FBA7B217CF187C632A19B2D9004BA8605 ** get_address_of_U3CrecognizerU3Ek__BackingField_5() { return &___U3CrecognizerU3Ek__BackingField_5; }
	inline void set_U3CrecognizerU3Ek__BackingField_5(GestureRecognizer_1_tF22A810FBA7B217CF187C632A19B2D9004BA8605 * value)
	{
		___U3CrecognizerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrecognizerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasStarted_6() { return static_cast<int32_t>(offsetof(Gesture_1_tB2B2697E93FDB20DD494954ADAE6BE900D85DA4D, ___m_HasStarted_6)); }
	inline bool get_m_HasStarted_6() const { return ___m_HasStarted_6; }
	inline bool* get_address_of_m_HasStarted_6() { return &___m_HasStarted_6; }
	inline void set_m_HasStarted_6(bool value)
	{
		___m_HasStarted_6 = value;
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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


// System.Net.Http.Headers.TransferCodingHeaderValue
struct TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25  : public RuntimeObject
{
public:
	// System.String System.Net.Http.Headers.TransferCodingHeaderValue::value
	String_t* ___value_0;
	// System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> System.Net.Http.Headers.TransferCodingHeaderValue::parameters
	List_1_t691D15165F1892D11210DB2AA498EEE4ACA54806 * ___parameters_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}

	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25, ___parameters_1)); }
	inline List_1_t691D15165F1892D11210DB2AA498EEE4ACA54806 * get_parameters_1() const { return ___parameters_1; }
	inline List_1_t691D15165F1892D11210DB2AA498EEE4ACA54806 ** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(List_1_t691D15165F1892D11210DB2AA498EEE4ACA54806 * value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameters_1), (void*)value);
	}
};


// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray
struct TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType[] Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray::<Items>k__BackingField
	CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0* ___U3CItemsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CItemsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2, ___U3CItemsU3Ek__BackingField_0)); }
	inline CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0* get_U3CItemsU3Ek__BackingField_0() const { return ___U3CItemsU3Ek__BackingField_0; }
	inline CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0** get_address_of_U3CItemsU3Ek__BackingField_0() { return &___U3CItemsU3Ek__BackingField_0; }
	inline void set_U3CItemsU3Ek__BackingField_0(CTypeU5BU5D_t3DDCE80A812479C8E1F709996EE79FC9435A7CD0* value)
	{
		___U3CItemsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemsU3Ek__BackingField_0), (void*)value);
	}
};


// System.Runtime.Serialization.Formatters.Binary.TypeInformation
struct TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B  : public RuntimeObject
{
public:
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeInformation::fullTypeName
	String_t* ___fullTypeName_0;
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeInformation::assemblyString
	String_t* ___assemblyString_1;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.TypeInformation::hasTypeForwardedFrom
	bool ___hasTypeForwardedFrom_2;

public:
	inline static int32_t get_offset_of_fullTypeName_0() { return static_cast<int32_t>(offsetof(TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B, ___fullTypeName_0)); }
	inline String_t* get_fullTypeName_0() const { return ___fullTypeName_0; }
	inline String_t** get_address_of_fullTypeName_0() { return &___fullTypeName_0; }
	inline void set_fullTypeName_0(String_t* value)
	{
		___fullTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullTypeName_0), (void*)value);
	}

	inline static int32_t get_offset_of_assemblyString_1() { return static_cast<int32_t>(offsetof(TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B, ___assemblyString_1)); }
	inline String_t* get_assemblyString_1() const { return ___assemblyString_1; }
	inline String_t** get_address_of_assemblyString_1() { return &___assemblyString_1; }
	inline void set_assemblyString_1(String_t* value)
	{
		___assemblyString_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyString_1), (void*)value);
	}

	inline static int32_t get_offset_of_hasTypeForwardedFrom_2() { return static_cast<int32_t>(offsetof(TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B, ___hasTypeForwardedFrom_2)); }
	inline bool get_hasTypeForwardedFrom_2() const { return ___hasTypeForwardedFrom_2; }
	inline bool* get_address_of_hasTypeForwardedFrom_2() { return &___hasTypeForwardedFrom_2; }
	inline void set_hasTypeForwardedFrom_2(bool value)
	{
		___hasTypeForwardedFrom_2 = value;
	}
};


// System.TypeSpec
struct TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29  : public RuntimeObject
{
public:
	// System.TypeIdentifier System.TypeSpec::name
	RuntimeObject* ___name_0;
	// System.String System.TypeSpec::assembly_name
	String_t* ___assembly_name_1;
	// System.Collections.Generic.List`1<System.TypeIdentifier> System.TypeSpec::nested
	List_1_tF05116F77D9D1198FCD80D3C852416C146DA5708 * ___nested_2;
	// System.Collections.Generic.List`1<System.TypeSpec> System.TypeSpec::generic_params
	List_1_tFCE6826611DDA07BF7BC248A498D8C3690364635 * ___generic_params_3;
	// System.Collections.Generic.List`1<System.ModifierSpec> System.TypeSpec::modifier_spec
	List_1_tF0C12A80ED2228F19412CFF80CBDD6C9D3C7021E * ___modifier_spec_4;
	// System.Boolean System.TypeSpec::is_byref
	bool ___is_byref_5;
	// System.String System.TypeSpec::display_fullname
	String_t* ___display_fullname_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29, ___name_0)); }
	inline RuntimeObject* get_name_0() const { return ___name_0; }
	inline RuntimeObject** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(RuntimeObject* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_name_1() { return static_cast<int32_t>(offsetof(TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29, ___assembly_name_1)); }
	inline String_t* get_assembly_name_1() const { return ___assembly_name_1; }
	inline String_t** get_address_of_assembly_name_1() { return &___assembly_name_1; }
	inline void set_assembly_name_1(String_t* value)
	{
		___assembly_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_name_1), (void*)value);
	}

	inline static int32_t get_offset_of_nested_2() { return static_cast<int32_t>(offsetof(TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29, ___nested_2)); }
	inline List_1_tF05116F77D9D1198FCD80D3C852416C146DA5708 * get_nested_2() const { return ___nested_2; }
	inline List_1_tF05116F77D9D1198FCD80D3C852416C146DA5708 ** get_address_of_nested_2() { return &___nested_2; }
	inline void set_nested_2(List_1_tF05116F77D9D1198FCD80D3C852416C146DA5708 * value)
	{
		___nested_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nested_2), (void*)value);
	}

	inline static int32_t get_offset_of_generic_params_3() { return static_cast<int32_t>(offsetof(TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29, ___generic_params_3)); }
	inline List_1_tFCE6826611DDA07BF7BC248A498D8C3690364635 * get_generic_params_3() const { return ___generic_params_3; }
	inline List_1_tFCE6826611DDA07BF7BC248A498D8C3690364635 ** get_address_of_generic_params_3() { return &___generic_params_3; }
	inline void set_generic_params_3(List_1_tFCE6826611DDA07BF7BC248A498D8C3690364635 * value)
	{
		___generic_params_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generic_params_3), (void*)value);
	}

	inline static int32_t get_offset_of_modifier_spec_4() { return static_cast<int32_t>(offsetof(TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29, ___modifier_spec_4)); }
	inline List_1_tF0C12A80ED2228F19412CFF80CBDD6C9D3C7021E * get_modifier_spec_4() const { return ___modifier_spec_4; }
	inline List_1_tF0C12A80ED2228F19412CFF80CBDD6C9D3C7021E ** get_address_of_modifier_spec_4() { return &___modifier_spec_4; }
	inline void set_modifier_spec_4(List_1_tF0C12A80ED2228F19412CFF80CBDD6C9D3C7021E * value)
	{
		___modifier_spec_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modifier_spec_4), (void*)value);
	}

	inline static int32_t get_offset_of_is_byref_5() { return static_cast<int32_t>(offsetof(TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29, ___is_byref_5)); }
	inline bool get_is_byref_5() const { return ___is_byref_5; }
	inline bool* get_address_of_is_byref_5() { return &___is_byref_5; }
	inline void set_is_byref_5(bool value)
	{
		___is_byref_5 = value;
	}

	inline static int32_t get_offset_of_display_fullname_6() { return static_cast<int32_t>(offsetof(TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29, ___display_fullname_6)); }
	inline String_t* get_display_fullname_6() const { return ___display_fullname_6; }
	inline String_t** get_address_of_display_fullname_6() { return &___display_fullname_6; }
	inline void set_display_fullname_6(String_t* value)
	{
		___display_fullname_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___display_fullname_6), (void*)value);
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>>
struct InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t283B4B503570CC444C675B4B698B3DFE599DE355 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tE607D3CD5B787DEBE795DCF2E54111D0BB8EC23F* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E, ___firstValue_1)); }
	inline Action_1_t283B4B503570CC444C675B4B698B3DFE599DE355 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t283B4B503570CC444C675B4B698B3DFE599DE355 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t283B4B503570CC444C675B4B698B3DFE599DE355 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E, ___additionalValues_2)); }
	inline Action_1U5BU5D_tE607D3CD5B787DEBE795DCF2E54111D0BB8EC23F* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_tE607D3CD5B787DEBE795DCF2E54111D0BB8EC23F** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_tE607D3CD5B787DEBE795DCF2E54111D0BB8EC23F* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.LowLevel.TouchState>>
struct InlinedArray_1_t8E6FA67F3F8EABAC17CA30356EF80DD58431ADFB 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t1EDF76B9305D7E97CB5F33C1BF24A21A6364AF86 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t2754C11048B16020EA25888EFAAB2C22CB508097* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8E6FA67F3F8EABAC17CA30356EF80DD58431ADFB, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8E6FA67F3F8EABAC17CA30356EF80DD58431ADFB, ___firstValue_1)); }
	inline InputProcessor_1_t1EDF76B9305D7E97CB5F33C1BF24A21A6364AF86 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t1EDF76B9305D7E97CB5F33C1BF24A21A6364AF86 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t1EDF76B9305D7E97CB5F33C1BF24A21A6364AF86 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8E6FA67F3F8EABAC17CA30356EF80DD58431ADFB, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t2754C11048B16020EA25888EFAAB2C22CB508097* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t2754C11048B16020EA25888EFAAB2C22CB508097** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t2754C11048B16020EA25888EFAAB2C22CB508097* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Touchscreen>
struct InlinedArray_1_tEC86F375C1A467DD12DB23BB0BDB798B5D1DECA4 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tEC86F375C1A467DD12DB23BB0BDB798B5D1DECA4, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tEC86F375C1A467DD12DB23BB0BDB798B5D1DECA4, ___firstValue_1)); }
	inline Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 * get_firstValue_1() const { return ___firstValue_1; }
	inline Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tEC86F375C1A467DD12DB23BB0BDB798B5D1DECA4, ___additionalValues_2)); }
	inline TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63* get_additionalValues_2() const { return ___additionalValues_2; }
	inline TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster>
struct InlinedArray_1_t1B88323B7E4838768EC6929E3291D42A4F05B9FB 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1B88323B7E4838768EC6929E3291D42A4F05B9FB, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1B88323B7E4838768EC6929E3291D42A4F05B9FB, ___firstValue_1)); }
	inline TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5 * get_firstValue_1() const { return ___firstValue_1; }
	inline TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1B88323B7E4838768EC6929E3291D42A4F05B9FB, ___additionalValues_2)); }
	inline TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D* get_additionalValues_2() const { return ___additionalValues_2; }
	inline TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D* value)
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


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl>
struct ReadOnlyArray_1_tC4FF518272A433578904F795928D86983A14C439 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC4FF518272A433578904F795928D86983A14C439, ___m_Array_0)); }
	inline TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C* get_m_Array_0() const { return ___m_Array_0; }
	inline TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC4FF518272A433578904F795928D86983A14C439, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC4FF518272A433578904F795928D86983A14C439, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record<UnityEngine.InputSystem.LowLevel.TouchState>
struct Record_t29552BBAABACF86D78938F25B4169F99BFCECA3D 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<TValue> UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record::m_Owner
	InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * ___m_Owner_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record::m_IndexPlusOne
	int32_t ___m_IndexPlusOne_1;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record::m_Version
	uint32_t ___m_Version_2;

public:
	inline static int32_t get_offset_of_m_Owner_0() { return static_cast<int32_t>(offsetof(Record_t29552BBAABACF86D78938F25B4169F99BFCECA3D, ___m_Owner_0)); }
	inline InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * get_m_Owner_0() const { return ___m_Owner_0; }
	inline InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 ** get_address_of_m_Owner_0() { return &___m_Owner_0; }
	inline void set_m_Owner_0(InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * value)
	{
		___m_Owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Owner_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexPlusOne_1() { return static_cast<int32_t>(offsetof(Record_t29552BBAABACF86D78938F25B4169F99BFCECA3D, ___m_IndexPlusOne_1)); }
	inline int32_t get_m_IndexPlusOne_1() const { return ___m_IndexPlusOne_1; }
	inline int32_t* get_address_of_m_IndexPlusOne_1() { return &___m_IndexPlusOne_1; }
	inline void set_m_IndexPlusOne_1(int32_t value)
	{
		___m_IndexPlusOne_1 = value;
	}

	inline static int32_t get_offset_of_m_Version_2() { return static_cast<int32_t>(offsetof(Record_t29552BBAABACF86D78938F25B4169F99BFCECA3D, ___m_Version_2)); }
	inline uint32_t get_m_Version_2() const { return ___m_Version_2; }
	inline uint32_t* get_address_of_m_Version_2() { return &___m_Version_2; }
	inline void set_m_Version_2(uint32_t value)
	{
		___m_Version_2 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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

// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___callback_2;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___callback_2)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_3), (void*)value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields, ___scheduler_1)); }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheduler_1), (void*)value);
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


// System.Net.Http.Headers.TransferCodingWithQualityHeaderValue
struct TransferCodingWithQualityHeaderValue_tAC3B4AEAE5AF0E85C8973A512EE2C71F5592E5A7  : public TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25
{
public:

public:
};


// Newtonsoft.Json.Utilities.TypeNameKey
struct TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772 
{
public:
	// System.String Newtonsoft.Json.Utilities.TypeNameKey::AssemblyName
	String_t* ___AssemblyName_0;
	// System.String Newtonsoft.Json.Utilities.TypeNameKey::TypeName
	String_t* ___TypeName_1;

public:
	inline static int32_t get_offset_of_AssemblyName_0() { return static_cast<int32_t>(offsetof(TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772, ___AssemblyName_0)); }
	inline String_t* get_AssemblyName_0() const { return ___AssemblyName_0; }
	inline String_t** get_address_of_AssemblyName_0() { return &___AssemblyName_0; }
	inline void set_AssemblyName_0(String_t* value)
	{
		___AssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.TypeNameKey
struct TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772_marshaled_pinvoke
{
	char* ___AssemblyName_0;
	char* ___TypeName_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.TypeNameKey
struct TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772_marshaled_com
{
	Il2CppChar* ___AssemblyName_0;
	Il2CppChar* ___TypeName_1;
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

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>>
struct CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4, ___m_Callbacks_1)); }
	inline InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t3E15E885113C5B3DEABC637C5C195E2398BB343E  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// Microsoft.CSharp.RuntimeBinder.Semantics.ACCESS
struct ACCESS_tFD9B032DFFBCD5B4525CCEC3471B7710F68A7BE7 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.ACCESS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ACCESS_tFD9B032DFFBCD5B4525CCEC3471B7710F68A7BE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.ClipCaps
struct ClipCaps_t4DAFD870481888D50D7D4F5892B6AFECEA975919 
{
public:
	// System.Int32 UnityEngine.Timeline.ClipCaps::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipCaps_t4DAFD870481888D50D7D4F5892B6AFECEA975919, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Diagnostics.Tracing.EventKeywords
struct EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC 
{
public:
	// System.Int64 System.Diagnostics.Tracing.EventKeywords::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventLevel
struct EventLevel_t094E14CCC4B697F0F2FF0BFAE792EC0A5DD6614D 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventLevel_t094E14CCC4B697F0F2FF0BFAE792EC0A5DD6614D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventOpcode
struct EventOpcode_tD66AB0AC182F39C8131AEC80495658FA5B6A89AC 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventOpcode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventOpcode_tD66AB0AC182F39C8131AEC80495658FA5B6A89AC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventTags
struct EventTags_t6712DD5B62AA97E89B779D09C0E33F384A19ABD3 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventTags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventTags_t6712DD5B62AA97E89B779D09C0E33F384A19ABD3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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


// UnityEngine.InputSystem.LowLevel.InputUpdateType
struct InputUpdateType_tC0C5E304EE6EBE06F165903265DE9B79B516CE18 
{
public:
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputUpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputUpdateType_tC0C5E304EE6EBE06F165903265DE9B79B516CE18, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags
struct ManipulationHandFlags_t0D3858BF3502CED537AF36600D4B25C2FB48A63F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ManipulationHandFlags_t0D3858BF3502CED537AF36600D4B25C2FB48A63F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ManipulationProximityFlags
struct ManipulationProximityFlags_tA3255943B9DA20091D5F6AB141A44F37EE32827F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ManipulationProximityFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ManipulationProximityFlags_tA3255943B9DA20091D5F6AB141A44F37EE32827F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
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


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Microsoft.CSharp.RuntimeBinder.Semantics.SYMKIND
struct SYMKIND_t91DC3117FF5C0FFE01C0ED4461C51CD59D6A0F26 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.SYMKIND::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SYMKIND_t91DC3117FF5C0FFE01C0ED4461C51CD59D6A0F26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CSharp.RuntimeBinder.Semantics.SpecCons
struct SpecCons_tE251DC1B169335EAF3CA5E49FF2E7A6CDFF56DC6 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.SpecCons::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecCons_tE251DC1B169335EAF3CA5E49FF2E7A6CDFF56DC6, ___value___2)); }
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


// System.TokenType
struct TokenType_tC708A43A29DB65495842F3E3A5058D23CDDCD192 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_tC708A43A29DB65495842F3E3A5058D23CDDCD192, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TrackBindingFlags
struct TrackBindingFlags_t934F14348EB76C252C02391539711C45063B40E5 
{
public:
	// System.Int32 UnityEngine.Timeline.TrackBindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackBindingFlags_t934F14348EB76C252C02391539711C45063B40E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_t7A77550CBE01F505D2756B4F0D5A2978A4473339 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t7A77550CBE01F505D2756B4F0D5A2978A4473339, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture
struct TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1  : public Gesture_1_t500AA69F85363BC944CC93355B07FB46B67EAE6E
{
public:
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::m_PreviousPosition1
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPosition1_7;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::m_PreviousPosition2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPosition2_8;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::<fingerId1>k__BackingField
	int32_t ___U3CfingerId1U3Ek__BackingField_9;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::<fingerId2>k__BackingField
	int32_t ___U3CfingerId2U3Ek__BackingField_10;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::<startPosition1>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CstartPosition1U3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::<startPosition2>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CstartPosition2U3Ek__BackingField_12;
	// System.Single UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture::<deltaRotation>k__BackingField
	float ___U3CdeltaRotationU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_m_PreviousPosition1_7() { return static_cast<int32_t>(offsetof(TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1, ___m_PreviousPosition1_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPosition1_7() const { return ___m_PreviousPosition1_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPosition1_7() { return &___m_PreviousPosition1_7; }
	inline void set_m_PreviousPosition1_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPosition1_7 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPosition2_8() { return static_cast<int32_t>(offsetof(TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1, ___m_PreviousPosition2_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPosition2_8() const { return ___m_PreviousPosition2_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPosition2_8() { return &___m_PreviousPosition2_8; }
	inline void set_m_PreviousPosition2_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPosition2_8 = value;
	}

	inline static int32_t get_offset_of_U3CfingerId1U3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1, ___U3CfingerId1U3Ek__BackingField_9)); }
	inline int32_t get_U3CfingerId1U3Ek__BackingField_9() const { return ___U3CfingerId1U3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CfingerId1U3Ek__BackingField_9() { return &___U3CfingerId1U3Ek__BackingField_9; }
	inline void set_U3CfingerId1U3Ek__BackingField_9(int32_t value)
	{
		___U3CfingerId1U3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CfingerId2U3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1, ___U3CfingerId2U3Ek__BackingField_10)); }
	inline int32_t get_U3CfingerId2U3Ek__BackingField_10() const { return ___U3CfingerId2U3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CfingerId2U3Ek__BackingField_10() { return &___U3CfingerId2U3Ek__BackingField_10; }
	inline void set_U3CfingerId2U3Ek__BackingField_10(int32_t value)
	{
		___U3CfingerId2U3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CstartPosition1U3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1, ___U3CstartPosition1U3Ek__BackingField_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CstartPosition1U3Ek__BackingField_11() const { return ___U3CstartPosition1U3Ek__BackingField_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CstartPosition1U3Ek__BackingField_11() { return &___U3CstartPosition1U3Ek__BackingField_11; }
	inline void set_U3CstartPosition1U3Ek__BackingField_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CstartPosition1U3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CstartPosition2U3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1, ___U3CstartPosition2U3Ek__BackingField_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CstartPosition2U3Ek__BackingField_12() const { return ___U3CstartPosition2U3Ek__BackingField_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CstartPosition2U3Ek__BackingField_12() { return &___U3CstartPosition2U3Ek__BackingField_12; }
	inline void set_U3CstartPosition2U3Ek__BackingField_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CstartPosition2U3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaRotationU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1, ___U3CdeltaRotationU3Ek__BackingField_13)); }
	inline float get_U3CdeltaRotationU3Ek__BackingField_13() const { return ___U3CdeltaRotationU3Ek__BackingField_13; }
	inline float* get_address_of_U3CdeltaRotationU3Ek__BackingField_13() { return &___U3CdeltaRotationU3Ek__BackingField_13; }
	inline void set_U3CdeltaRotationU3Ek__BackingField_13(float value)
	{
		___U3CdeltaRotationU3Ek__BackingField_13 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture
struct TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800  : public Gesture_1_tB2B2697E93FDB20DD494954ADAE6BE900D85DA4D
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture::<fingerId1>k__BackingField
	int32_t ___U3CfingerId1U3Ek__BackingField_7;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture::<fingerId2>k__BackingField
	int32_t ___U3CfingerId2U3Ek__BackingField_8;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture::<startPosition1>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CstartPosition1U3Ek__BackingField_9;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture::<startPosition2>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CstartPosition2U3Ek__BackingField_10;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CfingerId1U3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800, ___U3CfingerId1U3Ek__BackingField_7)); }
	inline int32_t get_U3CfingerId1U3Ek__BackingField_7() const { return ___U3CfingerId1U3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CfingerId1U3Ek__BackingField_7() { return &___U3CfingerId1U3Ek__BackingField_7; }
	inline void set_U3CfingerId1U3Ek__BackingField_7(int32_t value)
	{
		___U3CfingerId1U3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CfingerId2U3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800, ___U3CfingerId2U3Ek__BackingField_8)); }
	inline int32_t get_U3CfingerId2U3Ek__BackingField_8() const { return ___U3CfingerId2U3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CfingerId2U3Ek__BackingField_8() { return &___U3CfingerId2U3Ek__BackingField_8; }
	inline void set_U3CfingerId2U3Ek__BackingField_8(int32_t value)
	{
		___U3CfingerId2U3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CstartPosition1U3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800, ___U3CstartPosition1U3Ek__BackingField_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CstartPosition1U3Ek__BackingField_9() const { return ___U3CstartPosition1U3Ek__BackingField_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CstartPosition1U3Ek__BackingField_9() { return &___U3CstartPosition1U3Ek__BackingField_9; }
	inline void set_U3CstartPosition1U3Ek__BackingField_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CstartPosition1U3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CstartPosition2U3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800, ___U3CstartPosition2U3Ek__BackingField_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CstartPosition2U3Ek__BackingField_10() const { return ___U3CstartPosition2U3Ek__BackingField_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CstartPosition2U3Ek__BackingField_10() { return &___U3CstartPosition2U3Ek__BackingField_10; }
	inline void set_U3CstartPosition2U3Ek__BackingField_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CstartPosition2U3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800, ___U3CpositionU3Ek__BackingField_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_11() const { return ___U3CpositionU3Ek__BackingField_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_11() { return &___U3CpositionU3Ek__BackingField_11; }
	inline void set_U3CpositionU3Ek__BackingField_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800, ___U3CdeltaU3Ek__BackingField_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_12() const { return ___U3CdeltaU3Ek__BackingField_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_12() { return &___U3CdeltaU3Ek__BackingField_12; }
	inline void set_U3CdeltaU3Ek__BackingField_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_12 = value;
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


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tB40D8B346595D970F7AE011F634BEC05E2861605 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tB40D8B346595D970F7AE011F634BEC05E2861605, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip/BlendCurveMode
struct BlendCurveMode_t1719A4548449E4B9ACD7FF16FA5EC5666654147D 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip/BlendCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendCurveMode_t1719A4548449E4B9ACD7FF16FA5EC5666654147D, ___value___2)); }
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


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform
struct MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::pose
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___pose_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_2;

public:
	inline static int32_t get_offset_of_pose_1() { return static_cast<int32_t>(offsetof(MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95, ___pose_1)); }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  get_pose_1() const { return ___pose_1; }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * get_address_of_pose_1() { return &___pose_1; }
	inline void set_pose_1(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  value)
	{
		___pose_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95, ___scale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_2() const { return ___scale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_2 = value;
	}
};

struct MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::<Identity>k__BackingField
	MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95  ___U3CIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95_StaticFields, ___U3CIdentityU3Ek__BackingField_0)); }
	inline MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95  get_U3CIdentityU3Ek__BackingField_0() const { return ___U3CIdentityU3Ek__BackingField_0; }
	inline MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95 * get_address_of_U3CIdentityU3Ek__BackingField_0() { return &___U3CIdentityU3Ek__BackingField_0; }
	inline void set_U3CIdentityU3Ek__BackingField_0(MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95  value)
	{
		___U3CIdentityU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
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

// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol
struct Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.SYMKIND Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::_kind
	int32_t ____kind_0;
	// Microsoft.CSharp.RuntimeBinder.Semantics.ACCESS Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::_access
	int32_t ____access_1;
	// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::name
	Name_t0D58C5B52214B22C7F1251593E1902DC82080689 * ___name_2;
	// Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::parent
	ParentSymbol_tA772489CF1C65F3DBE49CF7652F7E557831D6A7E * ___parent_3;
	// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::nextChild
	Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702 * ___nextChild_4;
	// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::nextSameName
	Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702 * ___nextSameName_5;

public:
	inline static int32_t get_offset_of__kind_0() { return static_cast<int32_t>(offsetof(Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702, ____kind_0)); }
	inline int32_t get__kind_0() const { return ____kind_0; }
	inline int32_t* get_address_of__kind_0() { return &____kind_0; }
	inline void set__kind_0(int32_t value)
	{
		____kind_0 = value;
	}

	inline static int32_t get_offset_of__access_1() { return static_cast<int32_t>(offsetof(Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702, ____access_1)); }
	inline int32_t get__access_1() const { return ____access_1; }
	inline int32_t* get_address_of__access_1() { return &____access_1; }
	inline void set__access_1(int32_t value)
	{
		____access_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702, ___name_2)); }
	inline Name_t0D58C5B52214B22C7F1251593E1902DC82080689 * get_name_2() const { return ___name_2; }
	inline Name_t0D58C5B52214B22C7F1251593E1902DC82080689 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(Name_t0D58C5B52214B22C7F1251593E1902DC82080689 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702, ___parent_3)); }
	inline ParentSymbol_tA772489CF1C65F3DBE49CF7652F7E557831D6A7E * get_parent_3() const { return ___parent_3; }
	inline ParentSymbol_tA772489CF1C65F3DBE49CF7652F7E557831D6A7E ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(ParentSymbol_tA772489CF1C65F3DBE49CF7652F7E557831D6A7E * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_3), (void*)value);
	}

	inline static int32_t get_offset_of_nextChild_4() { return static_cast<int32_t>(offsetof(Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702, ___nextChild_4)); }
	inline Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702 * get_nextChild_4() const { return ___nextChild_4; }
	inline Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702 ** get_address_of_nextChild_4() { return &___nextChild_4; }
	inline void set_nextChild_4(Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702 * value)
	{
		___nextChild_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextChild_4), (void*)value);
	}

	inline static int32_t get_offset_of_nextSameName_5() { return static_cast<int32_t>(offsetof(Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702, ___nextSameName_5)); }
	inline Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702 * get_nextSameName_5() const { return ___nextSameName_5; }
	inline Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702 ** get_address_of_nextSameName_5() { return &___nextSameName_5; }
	inline void set_nextSameName_5(Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702 * value)
	{
		___nextSameName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextSameName_5), (void*)value);
	}
};


// UnityEngine.Timeline.TimelineClip
struct TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip::m_Version
	int32_t ___m_Version_1;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Start
	double ___m_Start_9;
	// System.Double UnityEngine.Timeline.TimelineClip::m_ClipIn
	double ___m_ClipIn_10;
	// UnityEngine.Object UnityEngine.Timeline.TimelineClip::m_Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Asset_11;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Duration
	double ___m_Duration_12;
	// System.Double UnityEngine.Timeline.TimelineClip::m_TimeScale
	double ___m_TimeScale_13;
	// UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.TimelineClip::m_ParentTrack
	TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___m_ParentTrack_14;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseInDuration
	double ___m_EaseInDuration_15;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseOutDuration
	double ___m_EaseOutDuration_16;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendInDuration
	double ___m_BlendInDuration_17;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendOutDuration
	double ___m_BlendOutDuration_18;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixInCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_MixInCurve_19;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixOutCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_MixOutCurve_20;
	// UnityEngine.Timeline.TimelineClip/BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendInCurveMode
	int32_t ___m_BlendInCurveMode_21;
	// UnityEngine.Timeline.TimelineClip/BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendOutCurveMode
	int32_t ___m_BlendOutCurveMode_22;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Timeline.TimelineClip::m_ExposedParameterNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_ExposedParameterNames_23;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TimelineClip::m_AnimationCurves
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_AnimationCurves_24;
	// System.Boolean UnityEngine.Timeline.TimelineClip::m_Recordable
	bool ___m_Recordable_25;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PostExtrapolationMode
	int32_t ___m_PostExtrapolationMode_26;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PreExtrapolationMode
	int32_t ___m_PreExtrapolationMode_27;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PostExtrapolationTime
	double ___m_PostExtrapolationTime_28;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PreExtrapolationTime
	double ___m_PreExtrapolationTime_29;
	// System.String UnityEngine.Timeline.TimelineClip::m_DisplayName
	String_t* ___m_DisplayName_30;

public:
	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_Start_9() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Start_9)); }
	inline double get_m_Start_9() const { return ___m_Start_9; }
	inline double* get_address_of_m_Start_9() { return &___m_Start_9; }
	inline void set_m_Start_9(double value)
	{
		___m_Start_9 = value;
	}

	inline static int32_t get_offset_of_m_ClipIn_10() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ClipIn_10)); }
	inline double get_m_ClipIn_10() const { return ___m_ClipIn_10; }
	inline double* get_address_of_m_ClipIn_10() { return &___m_ClipIn_10; }
	inline void set_m_ClipIn_10(double value)
	{
		___m_ClipIn_10 = value;
	}

	inline static int32_t get_offset_of_m_Asset_11() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Asset_11)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Asset_11() const { return ___m_Asset_11; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Asset_11() { return &___m_Asset_11; }
	inline void set_m_Asset_11(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Asset_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Duration_12() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Duration_12)); }
	inline double get_m_Duration_12() const { return ___m_Duration_12; }
	inline double* get_address_of_m_Duration_12() { return &___m_Duration_12; }
	inline void set_m_Duration_12(double value)
	{
		___m_Duration_12 = value;
	}

	inline static int32_t get_offset_of_m_TimeScale_13() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_TimeScale_13)); }
	inline double get_m_TimeScale_13() const { return ___m_TimeScale_13; }
	inline double* get_address_of_m_TimeScale_13() { return &___m_TimeScale_13; }
	inline void set_m_TimeScale_13(double value)
	{
		___m_TimeScale_13 = value;
	}

	inline static int32_t get_offset_of_m_ParentTrack_14() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ParentTrack_14)); }
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * get_m_ParentTrack_14() const { return ___m_ParentTrack_14; }
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 ** get_address_of_m_ParentTrack_14() { return &___m_ParentTrack_14; }
	inline void set_m_ParentTrack_14(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * value)
	{
		___m_ParentTrack_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentTrack_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_EaseInDuration_15() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_EaseInDuration_15)); }
	inline double get_m_EaseInDuration_15() const { return ___m_EaseInDuration_15; }
	inline double* get_address_of_m_EaseInDuration_15() { return &___m_EaseInDuration_15; }
	inline void set_m_EaseInDuration_15(double value)
	{
		___m_EaseInDuration_15 = value;
	}

	inline static int32_t get_offset_of_m_EaseOutDuration_16() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_EaseOutDuration_16)); }
	inline double get_m_EaseOutDuration_16() const { return ___m_EaseOutDuration_16; }
	inline double* get_address_of_m_EaseOutDuration_16() { return &___m_EaseOutDuration_16; }
	inline void set_m_EaseOutDuration_16(double value)
	{
		___m_EaseOutDuration_16 = value;
	}

	inline static int32_t get_offset_of_m_BlendInDuration_17() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendInDuration_17)); }
	inline double get_m_BlendInDuration_17() const { return ___m_BlendInDuration_17; }
	inline double* get_address_of_m_BlendInDuration_17() { return &___m_BlendInDuration_17; }
	inline void set_m_BlendInDuration_17(double value)
	{
		___m_BlendInDuration_17 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutDuration_18() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendOutDuration_18)); }
	inline double get_m_BlendOutDuration_18() const { return ___m_BlendOutDuration_18; }
	inline double* get_address_of_m_BlendOutDuration_18() { return &___m_BlendOutDuration_18; }
	inline void set_m_BlendOutDuration_18(double value)
	{
		___m_BlendOutDuration_18 = value;
	}

	inline static int32_t get_offset_of_m_MixInCurve_19() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_MixInCurve_19)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_MixInCurve_19() const { return ___m_MixInCurve_19; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_MixInCurve_19() { return &___m_MixInCurve_19; }
	inline void set_m_MixInCurve_19(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_MixInCurve_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixInCurve_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_MixOutCurve_20() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_MixOutCurve_20)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_MixOutCurve_20() const { return ___m_MixOutCurve_20; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_MixOutCurve_20() { return &___m_MixOutCurve_20; }
	inline void set_m_MixOutCurve_20(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_MixOutCurve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixOutCurve_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlendInCurveMode_21() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendInCurveMode_21)); }
	inline int32_t get_m_BlendInCurveMode_21() const { return ___m_BlendInCurveMode_21; }
	inline int32_t* get_address_of_m_BlendInCurveMode_21() { return &___m_BlendInCurveMode_21; }
	inline void set_m_BlendInCurveMode_21(int32_t value)
	{
		___m_BlendInCurveMode_21 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutCurveMode_22() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendOutCurveMode_22)); }
	inline int32_t get_m_BlendOutCurveMode_22() const { return ___m_BlendOutCurveMode_22; }
	inline int32_t* get_address_of_m_BlendOutCurveMode_22() { return &___m_BlendOutCurveMode_22; }
	inline void set_m_BlendOutCurveMode_22(int32_t value)
	{
		___m_BlendOutCurveMode_22 = value;
	}

	inline static int32_t get_offset_of_m_ExposedParameterNames_23() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ExposedParameterNames_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_ExposedParameterNames_23() const { return ___m_ExposedParameterNames_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_ExposedParameterNames_23() { return &___m_ExposedParameterNames_23; }
	inline void set_m_ExposedParameterNames_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_ExposedParameterNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExposedParameterNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimationCurves_24() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_AnimationCurves_24)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_AnimationCurves_24() const { return ___m_AnimationCurves_24; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_AnimationCurves_24() { return &___m_AnimationCurves_24; }
	inline void set_m_AnimationCurves_24(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_AnimationCurves_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationCurves_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Recordable_25() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Recordable_25)); }
	inline bool get_m_Recordable_25() const { return ___m_Recordable_25; }
	inline bool* get_address_of_m_Recordable_25() { return &___m_Recordable_25; }
	inline void set_m_Recordable_25(bool value)
	{
		___m_Recordable_25 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationMode_26() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PostExtrapolationMode_26)); }
	inline int32_t get_m_PostExtrapolationMode_26() const { return ___m_PostExtrapolationMode_26; }
	inline int32_t* get_address_of_m_PostExtrapolationMode_26() { return &___m_PostExtrapolationMode_26; }
	inline void set_m_PostExtrapolationMode_26(int32_t value)
	{
		___m_PostExtrapolationMode_26 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationMode_27() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PreExtrapolationMode_27)); }
	inline int32_t get_m_PreExtrapolationMode_27() const { return ___m_PreExtrapolationMode_27; }
	inline int32_t* get_address_of_m_PreExtrapolationMode_27() { return &___m_PreExtrapolationMode_27; }
	inline void set_m_PreExtrapolationMode_27(int32_t value)
	{
		___m_PreExtrapolationMode_27 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationTime_28() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PostExtrapolationTime_28)); }
	inline double get_m_PostExtrapolationTime_28() const { return ___m_PostExtrapolationTime_28; }
	inline double* get_address_of_m_PostExtrapolationTime_28() { return &___m_PostExtrapolationTime_28; }
	inline void set_m_PostExtrapolationTime_28(double value)
	{
		___m_PostExtrapolationTime_28 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationTime_29() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PreExtrapolationTime_29)); }
	inline double get_m_PreExtrapolationTime_29() const { return ___m_PreExtrapolationTime_29; }
	inline double* get_address_of_m_PreExtrapolationTime_29() { return &___m_PreExtrapolationTime_29; }
	inline void set_m_PreExtrapolationTime_29(double value)
	{
		___m_PreExtrapolationTime_29 = value;
	}

	inline static int32_t get_offset_of_m_DisplayName_30() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_DisplayName_30)); }
	inline String_t* get_m_DisplayName_30() const { return ___m_DisplayName_30; }
	inline String_t** get_address_of_m_DisplayName_30() { return &___m_DisplayName_30; }
	inline void set_m_DisplayName_30(String_t* value)
	{
		___m_DisplayName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_30), (void*)value);
	}
};

struct TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields
{
public:
	// UnityEngine.Timeline.ClipCaps UnityEngine.Timeline.TimelineClip::kDefaultClipCaps
	int32_t ___kDefaultClipCaps_2;
	// System.Single UnityEngine.Timeline.TimelineClip::kDefaultClipDurationInSeconds
	float ___kDefaultClipDurationInSeconds_3;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMin
	double ___kTimeScaleMin_4;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMax
	double ___kTimeScaleMax_5;
	// System.String UnityEngine.Timeline.TimelineClip::kDefaultCurvesName
	String_t* ___kDefaultCurvesName_6;
	// System.Double UnityEngine.Timeline.TimelineClip::kMinDuration
	double ___kMinDuration_7;
	// System.Double UnityEngine.Timeline.TimelineClip::kMaxTimeValue
	double ___kMaxTimeValue_8;

public:
	inline static int32_t get_offset_of_kDefaultClipCaps_2() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultClipCaps_2)); }
	inline int32_t get_kDefaultClipCaps_2() const { return ___kDefaultClipCaps_2; }
	inline int32_t* get_address_of_kDefaultClipCaps_2() { return &___kDefaultClipCaps_2; }
	inline void set_kDefaultClipCaps_2(int32_t value)
	{
		___kDefaultClipCaps_2 = value;
	}

	inline static int32_t get_offset_of_kDefaultClipDurationInSeconds_3() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultClipDurationInSeconds_3)); }
	inline float get_kDefaultClipDurationInSeconds_3() const { return ___kDefaultClipDurationInSeconds_3; }
	inline float* get_address_of_kDefaultClipDurationInSeconds_3() { return &___kDefaultClipDurationInSeconds_3; }
	inline void set_kDefaultClipDurationInSeconds_3(float value)
	{
		___kDefaultClipDurationInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMin_4() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kTimeScaleMin_4)); }
	inline double get_kTimeScaleMin_4() const { return ___kTimeScaleMin_4; }
	inline double* get_address_of_kTimeScaleMin_4() { return &___kTimeScaleMin_4; }
	inline void set_kTimeScaleMin_4(double value)
	{
		___kTimeScaleMin_4 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMax_5() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kTimeScaleMax_5)); }
	inline double get_kTimeScaleMax_5() const { return ___kTimeScaleMax_5; }
	inline double* get_address_of_kTimeScaleMax_5() { return &___kTimeScaleMax_5; }
	inline void set_kTimeScaleMax_5(double value)
	{
		___kTimeScaleMax_5 = value;
	}

	inline static int32_t get_offset_of_kDefaultCurvesName_6() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultCurvesName_6)); }
	inline String_t* get_kDefaultCurvesName_6() const { return ___kDefaultCurvesName_6; }
	inline String_t** get_address_of_kDefaultCurvesName_6() { return &___kDefaultCurvesName_6; }
	inline void set_kDefaultCurvesName_6(String_t* value)
	{
		___kDefaultCurvesName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kDefaultCurvesName_6), (void*)value);
	}

	inline static int32_t get_offset_of_kMinDuration_7() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kMinDuration_7)); }
	inline double get_kMinDuration_7() const { return ___kMinDuration_7; }
	inline double* get_address_of_kMinDuration_7() { return &___kMinDuration_7; }
	inline void set_kMinDuration_7(double value)
	{
		___kMinDuration_7 = value;
	}

	inline static int32_t get_offset_of_kMaxTimeValue_8() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kMaxTimeValue_8)); }
	inline double get_kMaxTimeValue_8() const { return ___kMaxTimeValue_8; }
	inline double* get_address_of_kMaxTimeValue_8() { return &___kMaxTimeValue_8; }
	inline void set_kMaxTimeValue_8(double value)
	{
		___kMaxTimeValue_8 = value;
	}
};


// System.Globalization.TokenHashValue
struct TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE  : public RuntimeObject
{
public:
	// System.String System.Globalization.TokenHashValue::tokenString
	String_t* ___tokenString_0;
	// System.TokenType System.Globalization.TokenHashValue::tokenType
	int32_t ___tokenType_1;
	// System.Int32 System.Globalization.TokenHashValue::tokenValue
	int32_t ___tokenValue_2;

public:
	inline static int32_t get_offset_of_tokenString_0() { return static_cast<int32_t>(offsetof(TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE, ___tokenString_0)); }
	inline String_t* get_tokenString_0() const { return ___tokenString_0; }
	inline String_t** get_address_of_tokenString_0() { return &___tokenString_0; }
	inline void set_tokenString_0(String_t* value)
	{
		___tokenString_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenString_0), (void*)value);
	}

	inline static int32_t get_offset_of_tokenType_1() { return static_cast<int32_t>(offsetof(TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE, ___tokenType_1)); }
	inline int32_t get_tokenType_1() const { return ___tokenType_1; }
	inline int32_t* get_address_of_tokenType_1() { return &___tokenType_1; }
	inline void set_tokenType_1(int32_t value)
	{
		___tokenType_1 = value;
	}

	inline static int32_t get_offset_of_tokenValue_2() { return static_cast<int32_t>(offsetof(TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE, ___tokenValue_2)); }
	inline int32_t get_tokenValue_2() const { return ___tokenValue_2; }
	inline int32_t* get_address_of_tokenValue_2() { return &___tokenValue_2; }
	inline void set_tokenValue_2(int32_t value)
	{
		___tokenValue_2 = value;
	}
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Diagnostics.Tracing.TraceLoggingTypeInfo
struct TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.Tracing.TraceLoggingTypeInfo::name
	String_t* ___name_0;
	// System.Diagnostics.Tracing.EventKeywords System.Diagnostics.Tracing.TraceLoggingTypeInfo::keywords
	int64_t ___keywords_1;
	// System.Diagnostics.Tracing.EventLevel System.Diagnostics.Tracing.TraceLoggingTypeInfo::level
	int32_t ___level_2;
	// System.Diagnostics.Tracing.EventOpcode System.Diagnostics.Tracing.TraceLoggingTypeInfo::opcode
	int32_t ___opcode_3;
	// System.Diagnostics.Tracing.EventTags System.Diagnostics.Tracing.TraceLoggingTypeInfo::tags
	int32_t ___tags_4;
	// System.Type System.Diagnostics.Tracing.TraceLoggingTypeInfo::dataType
	Type_t * ___dataType_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_keywords_1() { return static_cast<int32_t>(offsetof(TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE, ___keywords_1)); }
	inline int64_t get_keywords_1() const { return ___keywords_1; }
	inline int64_t* get_address_of_keywords_1() { return &___keywords_1; }
	inline void set_keywords_1(int64_t value)
	{
		___keywords_1 = value;
	}

	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_opcode_3() { return static_cast<int32_t>(offsetof(TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE, ___opcode_3)); }
	inline int32_t get_opcode_3() const { return ___opcode_3; }
	inline int32_t* get_address_of_opcode_3() { return &___opcode_3; }
	inline void set_opcode_3(int32_t value)
	{
		___opcode_3 = value;
	}

	inline static int32_t get_offset_of_tags_4() { return static_cast<int32_t>(offsetof(TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE, ___tags_4)); }
	inline int32_t get_tags_4() const { return ___tags_4; }
	inline int32_t* get_address_of_tags_4() { return &___tags_4; }
	inline void set_tags_4(int32_t value)
	{
		___tags_4 = value;
	}

	inline static int32_t get_offset_of_dataType_5() { return static_cast<int32_t>(offsetof(TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE, ___dataType_5)); }
	inline Type_t * get_dataType_5() const { return ___dataType_5; }
	inline Type_t ** get_address_of_dataType_5() { return &___dataType_5; }
	inline void set_dataType_5(Type_t * value)
	{
		___dataType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataType_5), (void*)value);
	}
};


// UnityEngine.Timeline.TrackBindingTypeAttribute
struct TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type UnityEngine.Timeline.TrackBindingTypeAttribute::type
	Type_t * ___type_0;
	// UnityEngine.Timeline.TrackBindingFlags UnityEngine.Timeline.TrackBindingTypeAttribute::flags
	int32_t ___flags_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_flags_1() { return static_cast<int32_t>(offsetof(TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780, ___flags_1)); }
	inline int32_t get_flags_1() const { return ___flags_1; }
	inline int32_t* get_address_of_flags_1() { return &___flags_1; }
	inline void set_flags_1(int32_t value)
	{
		___flags_1 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState
struct FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputUpdateType UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::updateMask
	int32_t ___updateMask_0;
	// UnityEngine.InputSystem.EnhancedTouch.Finger[] UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::fingers
	FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9* ___fingers_1;
	// UnityEngine.InputSystem.EnhancedTouch.Finger[] UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::activeFingers
	FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9* ___activeFingers_2;
	// UnityEngine.InputSystem.EnhancedTouch.Touch[] UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::activeTouches
	TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E* ___activeTouches_3;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::activeFingerCount
	int32_t ___activeFingerCount_4;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::activeTouchCount
	int32_t ___activeTouchCount_5;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::totalFingerCount
	int32_t ___totalFingerCount_6;
	// System.UInt32 UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::lastId
	uint32_t ___lastId_7;
	// System.Boolean UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::haveBuiltActiveTouches
	bool ___haveBuiltActiveTouches_8;
	// System.Boolean UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::haveActiveTouchesNeedingRefreshNextUpdate
	bool ___haveActiveTouchesNeedingRefreshNextUpdate_9;
	// UnityEngine.InputSystem.LowLevel.InputStateHistory`1<UnityEngine.InputSystem.LowLevel.TouchState> UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState::activeTouchState
	InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * ___activeTouchState_10;

public:
	inline static int32_t get_offset_of_updateMask_0() { return static_cast<int32_t>(offsetof(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213, ___updateMask_0)); }
	inline int32_t get_updateMask_0() const { return ___updateMask_0; }
	inline int32_t* get_address_of_updateMask_0() { return &___updateMask_0; }
	inline void set_updateMask_0(int32_t value)
	{
		___updateMask_0 = value;
	}

	inline static int32_t get_offset_of_fingers_1() { return static_cast<int32_t>(offsetof(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213, ___fingers_1)); }
	inline FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9* get_fingers_1() const { return ___fingers_1; }
	inline FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9** get_address_of_fingers_1() { return &___fingers_1; }
	inline void set_fingers_1(FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9* value)
	{
		___fingers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingers_1), (void*)value);
	}

	inline static int32_t get_offset_of_activeFingers_2() { return static_cast<int32_t>(offsetof(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213, ___activeFingers_2)); }
	inline FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9* get_activeFingers_2() const { return ___activeFingers_2; }
	inline FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9** get_address_of_activeFingers_2() { return &___activeFingers_2; }
	inline void set_activeFingers_2(FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9* value)
	{
		___activeFingers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeFingers_2), (void*)value);
	}

	inline static int32_t get_offset_of_activeTouches_3() { return static_cast<int32_t>(offsetof(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213, ___activeTouches_3)); }
	inline TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E* get_activeTouches_3() const { return ___activeTouches_3; }
	inline TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E** get_address_of_activeTouches_3() { return &___activeTouches_3; }
	inline void set_activeTouches_3(TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E* value)
	{
		___activeTouches_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeTouches_3), (void*)value);
	}

	inline static int32_t get_offset_of_activeFingerCount_4() { return static_cast<int32_t>(offsetof(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213, ___activeFingerCount_4)); }
	inline int32_t get_activeFingerCount_4() const { return ___activeFingerCount_4; }
	inline int32_t* get_address_of_activeFingerCount_4() { return &___activeFingerCount_4; }
	inline void set_activeFingerCount_4(int32_t value)
	{
		___activeFingerCount_4 = value;
	}

	inline static int32_t get_offset_of_activeTouchCount_5() { return static_cast<int32_t>(offsetof(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213, ___activeTouchCount_5)); }
	inline int32_t get_activeTouchCount_5() const { return ___activeTouchCount_5; }
	inline int32_t* get_address_of_activeTouchCount_5() { return &___activeTouchCount_5; }
	inline void set_activeTouchCount_5(int32_t value)
	{
		___activeTouchCount_5 = value;
	}

	inline static int32_t get_offset_of_totalFingerCount_6() { return static_cast<int32_t>(offsetof(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213, ___totalFingerCount_6)); }
	inline int32_t get_totalFingerCount_6() const { return ___totalFingerCount_6; }
	inline int32_t* get_address_of_totalFingerCount_6() { return &___totalFingerCount_6; }
	inline void set_totalFingerCount_6(int32_t value)
	{
		___totalFingerCount_6 = value;
	}

	inline static int32_t get_offset_of_lastId_7() { return static_cast<int32_t>(offsetof(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213, ___lastId_7)); }
	inline uint32_t get_lastId_7() const { return ___lastId_7; }
	inline uint32_t* get_address_of_lastId_7() { return &___lastId_7; }
	inline void set_lastId_7(uint32_t value)
	{
		___lastId_7 = value;
	}

	inline static int32_t get_offset_of_haveBuiltActiveTouches_8() { return static_cast<int32_t>(offsetof(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213, ___haveBuiltActiveTouches_8)); }
	inline bool get_haveBuiltActiveTouches_8() const { return ___haveBuiltActiveTouches_8; }
	inline bool* get_address_of_haveBuiltActiveTouches_8() { return &___haveBuiltActiveTouches_8; }
	inline void set_haveBuiltActiveTouches_8(bool value)
	{
		___haveBuiltActiveTouches_8 = value;
	}

	inline static int32_t get_offset_of_haveActiveTouchesNeedingRefreshNextUpdate_9() { return static_cast<int32_t>(offsetof(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213, ___haveActiveTouchesNeedingRefreshNextUpdate_9)); }
	inline bool get_haveActiveTouchesNeedingRefreshNextUpdate_9() const { return ___haveActiveTouchesNeedingRefreshNextUpdate_9; }
	inline bool* get_address_of_haveActiveTouchesNeedingRefreshNextUpdate_9() { return &___haveActiveTouchesNeedingRefreshNextUpdate_9; }
	inline void set_haveActiveTouchesNeedingRefreshNextUpdate_9(bool value)
	{
		___haveActiveTouchesNeedingRefreshNextUpdate_9 = value;
	}

	inline static int32_t get_offset_of_activeTouchState_10() { return static_cast<int32_t>(offsetof(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213, ___activeTouchState_10)); }
	inline InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * get_activeTouchState_10() const { return ___activeTouchState_10; }
	inline InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 ** get_address_of_activeTouchState_10() { return &___activeTouchState_10; }
	inline void set_activeTouchState_10(InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * value)
	{
		___activeTouchState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeTouchState_10), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState
struct FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213_marshaled_pinvoke
{
	int32_t ___updateMask_0;
	FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9* ___fingers_1;
	FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9* ___activeFingers_2;
	Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C_marshaled_pinvoke* ___activeTouches_3;
	int32_t ___activeFingerCount_4;
	int32_t ___activeTouchCount_5;
	int32_t ___totalFingerCount_6;
	uint32_t ___lastId_7;
	int32_t ___haveBuiltActiveTouches_8;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate_9;
	InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * ___activeTouchState_10;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState
struct FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213_marshaled_com
{
	int32_t ___updateMask_0;
	FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9* ___fingers_1;
	FingerU5BU5D_t4744708E16B86ACC7D4B83E6E15CCB750B26FCB9* ___activeFingers_2;
	Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C_marshaled_com* ___activeTouches_3;
	int32_t ___activeFingerCount_4;
	int32_t ___activeTouchCount_5;
	int32_t ___totalFingerCount_6;
	uint32_t ___lastId_7;
	int32_t ___haveBuiltActiveTouches_8;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate_9;
	InputStateHistory_1_t2203335FFD524E3495623275256E4F68BAC5E280 * ___activeTouchState_10;
};
// Windows.Foundation.Collections.IVectorView`1<System.Type>
struct NOVTABLE IVectorView_1_tA4F80E29F324A04831B458B897F638645DC796DF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m0FCA4F3CF85CDEAE401BD771812FBA0FF656799E(uint32_t ___index0, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m7D4E5453C718E8B658AF62E96BB267FCE257FA1D(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mCCF7C1E4067EF69EAEC7583927E27835810A5CB0(Il2CppWindowsRuntimeTypeName ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m38430F9901EB062209CA17C9D70B14B6DFA17DF3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppWindowsRuntimeTypeName* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Type>
struct NOVTABLE IVector_1_t9AA20A6BF2B49B25D446E8374A7117284562FBCA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mFE515DF9962EEF37A8D418932523EF41B9462851(uint32_t ___index0, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_mD946EED87850050B3718B08D42883F0BC40F6819(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2ED00737E784C34FB8B1F5BDCEFEDDB9439DC259(IVectorView_1_tA4F80E29F324A04831B458B897F638645DC796DF** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m6F846F2FF7CF31B90CD59311B0A97F16CB84A331(Il2CppWindowsRuntimeTypeName ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m9552562016BCC367E36F02415C25C18CDD175D0E(uint32_t ___index0, Il2CppWindowsRuntimeTypeName ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mCAB35A67B8B2B513CBEA9C58A8D7554C1BC7145E(uint32_t ___index0, Il2CppWindowsRuntimeTypeName ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m95C9D29C1A7E72DA624C2F94BD6CAE6D1D9C525E(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m36FE1A22EAB93A8B070916A36357BD5538A0EF6F(Il2CppWindowsRuntimeTypeName ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m61DFA478F68D50087FBBA712F9AF1817291AA3D6() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mA7069DA87A6C2A6E230C54044EF68848350E721E() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m02167D18718839E4D31A871D56DFE26E84692E21(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppWindowsRuntimeTypeName* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m1E5CB73563F49CA839320C916CA3C311D42A0994(uint32_t ___items0ArraySize, Il2CppWindowsRuntimeTypeName* ___items0) = 0;
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


// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData
struct TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63  : public PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData::<rayPoints>k__BackingField
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___U3CrayPointsU3Ek__BackingField_24;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData::<rayHitIndex>k__BackingField
	int32_t ___U3CrayHitIndexU3Ek__BackingField_25;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData::<layerMask>k__BackingField
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___U3ClayerMaskU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_U3CrayPointsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63, ___U3CrayPointsU3Ek__BackingField_24)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_U3CrayPointsU3Ek__BackingField_24() const { return ___U3CrayPointsU3Ek__BackingField_24; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_U3CrayPointsU3Ek__BackingField_24() { return &___U3CrayPointsU3Ek__BackingField_24; }
	inline void set_U3CrayPointsU3Ek__BackingField_24(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___U3CrayPointsU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrayPointsU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrayHitIndexU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63, ___U3CrayHitIndexU3Ek__BackingField_25)); }
	inline int32_t get_U3CrayHitIndexU3Ek__BackingField_25() const { return ___U3CrayHitIndexU3Ek__BackingField_25; }
	inline int32_t* get_address_of_U3CrayHitIndexU3Ek__BackingField_25() { return &___U3CrayHitIndexU3Ek__BackingField_25; }
	inline void set_U3CrayHitIndexU3Ek__BackingField_25(int32_t value)
	{
		___U3CrayHitIndexU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3ClayerMaskU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63, ___U3ClayerMaskU3Ek__BackingField_26)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_U3ClayerMaskU3Ek__BackingField_26() const { return ___U3ClayerMaskU3Ek__BackingField_26; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_U3ClayerMaskU3Ek__BackingField_26() { return &___U3ClayerMaskU3Ek__BackingField_26; }
	inline void set_U3ClayerMaskU3Ek__BackingField_26(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___U3ClayerMaskU3Ek__BackingField_26 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol
struct TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7  : public Symbol_t0F01B8D3B39AF8A64E9692D89D9CA6976CDF7702
{
public:
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_bIsMethodTypeParameter
	bool ____bIsMethodTypeParameter_6;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SpecCons Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_constraints
	int32_t ____constraints_7;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_pTypeParameterType
	TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D * ____pTypeParameterType_8;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_nIndexInOwnParameters
	int32_t ____nIndexInOwnParameters_9;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_nIndexInTotalParameters
	int32_t ____nIndexInTotalParameters_10;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_pBounds
	TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 * ____pBounds_11;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::Covariant
	bool ___Covariant_12;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::Contravariant
	bool ___Contravariant_13;

public:
	inline static int32_t get_offset_of__bIsMethodTypeParameter_6() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7, ____bIsMethodTypeParameter_6)); }
	inline bool get__bIsMethodTypeParameter_6() const { return ____bIsMethodTypeParameter_6; }
	inline bool* get_address_of__bIsMethodTypeParameter_6() { return &____bIsMethodTypeParameter_6; }
	inline void set__bIsMethodTypeParameter_6(bool value)
	{
		____bIsMethodTypeParameter_6 = value;
	}

	inline static int32_t get_offset_of__constraints_7() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7, ____constraints_7)); }
	inline int32_t get__constraints_7() const { return ____constraints_7; }
	inline int32_t* get_address_of__constraints_7() { return &____constraints_7; }
	inline void set__constraints_7(int32_t value)
	{
		____constraints_7 = value;
	}

	inline static int32_t get_offset_of__pTypeParameterType_8() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7, ____pTypeParameterType_8)); }
	inline TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D * get__pTypeParameterType_8() const { return ____pTypeParameterType_8; }
	inline TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D ** get_address_of__pTypeParameterType_8() { return &____pTypeParameterType_8; }
	inline void set__pTypeParameterType_8(TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D * value)
	{
		____pTypeParameterType_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pTypeParameterType_8), (void*)value);
	}

	inline static int32_t get_offset_of__nIndexInOwnParameters_9() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7, ____nIndexInOwnParameters_9)); }
	inline int32_t get__nIndexInOwnParameters_9() const { return ____nIndexInOwnParameters_9; }
	inline int32_t* get_address_of__nIndexInOwnParameters_9() { return &____nIndexInOwnParameters_9; }
	inline void set__nIndexInOwnParameters_9(int32_t value)
	{
		____nIndexInOwnParameters_9 = value;
	}

	inline static int32_t get_offset_of__nIndexInTotalParameters_10() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7, ____nIndexInTotalParameters_10)); }
	inline int32_t get__nIndexInTotalParameters_10() const { return ____nIndexInTotalParameters_10; }
	inline int32_t* get_address_of__nIndexInTotalParameters_10() { return &____nIndexInTotalParameters_10; }
	inline void set__nIndexInTotalParameters_10(int32_t value)
	{
		____nIndexInTotalParameters_10 = value;
	}

	inline static int32_t get_offset_of__pBounds_11() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7, ____pBounds_11)); }
	inline TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 * get__pBounds_11() const { return ____pBounds_11; }
	inline TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 ** get_address_of__pBounds_11() { return &____pBounds_11; }
	inline void set__pBounds_11(TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 * value)
	{
		____pBounds_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pBounds_11), (void*)value);
	}

	inline static int32_t get_offset_of_Covariant_12() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7, ___Covariant_12)); }
	inline bool get_Covariant_12() const { return ___Covariant_12; }
	inline bool* get_address_of_Covariant_12() { return &___Covariant_12; }
	inline void set_Covariant_12(bool value)
	{
		___Covariant_12 = value;
	}

	inline static int32_t get_offset_of_Contravariant_13() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7, ___Contravariant_13)); }
	inline bool get_Contravariant_13() const { return ___Contravariant_13; }
	inline bool* get_address_of_Contravariant_13() { return &___Contravariant_13; }
	inline void set_Contravariant_13(bool value)
	{
		___Contravariant_13 = value;
	}
};


// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType
struct TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D  : public CType_tDF33E6E64458FDAD600CB42D44998815294363DC
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType::_pTypeParameterSymbol
	TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7 * ____pTypeParameterSymbol_4;

public:
	inline static int32_t get_offset_of__pTypeParameterSymbol_4() { return static_cast<int32_t>(offsetof(TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D, ____pTypeParameterSymbol_4)); }
	inline TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7 * get__pTypeParameterSymbol_4() const { return ____pTypeParameterSymbol_4; }
	inline TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7 ** get_address_of__pTypeParameterSymbol_4() { return &____pTypeParameterSymbol_4; }
	inline void set__pTypeParameterSymbol_4(TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7 * value)
	{
		____pTypeParameterSymbol_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pTypeParameterSymbol_4), (void*)value);
	}
};


// UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState
struct GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE 
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Touchscreen> UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::touchscreens
	InlinedArray_1_tEC86F375C1A467DD12DB23BB0BDB798B5D1DECA4  ___touchscreens_0;
	// System.Int32 UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::historyLengthPerFinger
	int32_t ___historyLengthPerFinger_1;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>> UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::onFingerDown
	CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  ___onFingerDown_2;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>> UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::onFingerMove
	CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  ___onFingerMove_3;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.EnhancedTouch.Finger>> UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::onFingerUp
	CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  ___onFingerUp_4;
	// UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState::playerState
	FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213  ___playerState_5;

public:
	inline static int32_t get_offset_of_touchscreens_0() { return static_cast<int32_t>(offsetof(GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE, ___touchscreens_0)); }
	inline InlinedArray_1_tEC86F375C1A467DD12DB23BB0BDB798B5D1DECA4  get_touchscreens_0() const { return ___touchscreens_0; }
	inline InlinedArray_1_tEC86F375C1A467DD12DB23BB0BDB798B5D1DECA4 * get_address_of_touchscreens_0() { return &___touchscreens_0; }
	inline void set_touchscreens_0(InlinedArray_1_tEC86F375C1A467DD12DB23BB0BDB798B5D1DECA4  value)
	{
		___touchscreens_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___touchscreens_0))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___touchscreens_0))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_historyLengthPerFinger_1() { return static_cast<int32_t>(offsetof(GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE, ___historyLengthPerFinger_1)); }
	inline int32_t get_historyLengthPerFinger_1() const { return ___historyLengthPerFinger_1; }
	inline int32_t* get_address_of_historyLengthPerFinger_1() { return &___historyLengthPerFinger_1; }
	inline void set_historyLengthPerFinger_1(int32_t value)
	{
		___historyLengthPerFinger_1 = value;
	}

	inline static int32_t get_offset_of_onFingerDown_2() { return static_cast<int32_t>(offsetof(GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE, ___onFingerDown_2)); }
	inline CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  get_onFingerDown_2() const { return ___onFingerDown_2; }
	inline CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4 * get_address_of_onFingerDown_2() { return &___onFingerDown_2; }
	inline void set_onFingerDown_2(CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  value)
	{
		___onFingerDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerDown_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerDown_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerDown_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerDown_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerDown_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerDown_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onFingerMove_3() { return static_cast<int32_t>(offsetof(GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE, ___onFingerMove_3)); }
	inline CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  get_onFingerMove_3() const { return ___onFingerMove_3; }
	inline CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4 * get_address_of_onFingerMove_3() { return &___onFingerMove_3; }
	inline void set_onFingerMove_3(CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  value)
	{
		___onFingerMove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerMove_3))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerMove_3))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerMove_3))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerMove_3))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerMove_3))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerMove_3))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onFingerUp_4() { return static_cast<int32_t>(offsetof(GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE, ___onFingerUp_4)); }
	inline CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  get_onFingerUp_4() const { return ___onFingerUp_4; }
	inline CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4 * get_address_of_onFingerUp_4() { return &___onFingerUp_4; }
	inline void set_onFingerUp_4(CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  value)
	{
		___onFingerUp_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerUp_4))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerUp_4))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerUp_4))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerUp_4))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerUp_4))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onFingerUp_4))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_playerState_5() { return static_cast<int32_t>(offsetof(GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE, ___playerState_5)); }
	inline FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213  get_playerState_5() const { return ___playerState_5; }
	inline FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213 * get_address_of_playerState_5() { return &___playerState_5; }
	inline void set_playerState_5(FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213  value)
	{
		___playerState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___playerState_5))->___fingers_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___playerState_5))->___activeFingers_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___playerState_5))->___activeTouches_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___playerState_5))->___activeTouchState_10), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState
struct GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE_marshaled_pinvoke
{
	InlinedArray_1_tEC86F375C1A467DD12DB23BB0BDB798B5D1DECA4  ___touchscreens_0;
	int32_t ___historyLengthPerFinger_1;
	CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  ___onFingerDown_2;
	CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  ___onFingerMove_3;
	CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  ___onFingerUp_4;
	FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213_marshaled_pinvoke ___playerState_5;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState
struct GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE_marshaled_com
{
	InlinedArray_1_tEC86F375C1A467DD12DB23BB0BDB798B5D1DECA4  ___touchscreens_0;
	int32_t ___historyLengthPerFinger_1;
	CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  ___onFingerDown_2;
	CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  ___onFingerMove_3;
	CallbackArray_1_t0118A91B3E43F612A59ED3499F6849628F693EC4  ___onFingerUp_4;
	FingerAndTouchState_tD97CBD353F475B0A4B1F578A87631B215E3AA213_marshaled_com ___playerState_5;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.InputSystem.LowLevel.TouchState>
struct InputControl_1_tAE05ABE96FB5D651FF8F3A124EBCD0B8E99807CF  : public InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t8E6FA67F3F8EABAC17CA30356EF80DD58431ADFB  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tAE05ABE96FB5D651FF8F3A124EBCD0B8E99807CF, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t8E6FA67F3F8EABAC17CA30356EF80DD58431ADFB  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t8E6FA67F3F8EABAC17CA30356EF80DD58431ADFB * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t8E6FA67F3F8EABAC17CA30356EF80DD58431ADFB  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B  : public InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlMap_35;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_Description_28)); }
	inline InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlMap_35() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_StateOffsetToControlMap_35)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlMap_35() const { return ___m_StateOffsetToControlMap_35; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlMap_35() { return &___m_StateOffsetToControlMap_35; }
	inline void set_m_StateOffsetToControlMap_35(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlMap_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlMap_35), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.InputSystem.EnhancedTouch.Touch
struct Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C 
{
public:
	// UnityEngine.InputSystem.EnhancedTouch.Finger UnityEngine.InputSystem.EnhancedTouch.Touch::m_Finger
	Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C * ___m_Finger_0;
	// UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record<UnityEngine.InputSystem.LowLevel.TouchState> UnityEngine.InputSystem.EnhancedTouch.Touch::m_TouchRecord
	Record_t29552BBAABACF86D78938F25B4169F99BFCECA3D  ___m_TouchRecord_1;

public:
	inline static int32_t get_offset_of_m_Finger_0() { return static_cast<int32_t>(offsetof(Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C, ___m_Finger_0)); }
	inline Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C * get_m_Finger_0() const { return ___m_Finger_0; }
	inline Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C ** get_address_of_m_Finger_0() { return &___m_Finger_0; }
	inline void set_m_Finger_0(Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C * value)
	{
		___m_Finger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Finger_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchRecord_1() { return static_cast<int32_t>(offsetof(Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C, ___m_TouchRecord_1)); }
	inline Record_t29552BBAABACF86D78938F25B4169F99BFCECA3D  get_m_TouchRecord_1() const { return ___m_TouchRecord_1; }
	inline Record_t29552BBAABACF86D78938F25B4169F99BFCECA3D * get_address_of_m_TouchRecord_1() { return &___m_TouchRecord_1; }
	inline void set_m_TouchRecord_1(Record_t29552BBAABACF86D78938F25B4169F99BFCECA3D  value)
	{
		___m_TouchRecord_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TouchRecord_1))->___m_Owner_0), (void*)NULL);
	}
};

struct Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C_StaticFields
{
public:
	// UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState UnityEngine.InputSystem.EnhancedTouch.Touch::s_GlobalState
	GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE  ___s_GlobalState_2;

public:
	inline static int32_t get_offset_of_s_GlobalState_2() { return static_cast<int32_t>(offsetof(Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C_StaticFields, ___s_GlobalState_2)); }
	inline GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE  get_s_GlobalState_2() const { return ___s_GlobalState_2; }
	inline GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE * get_address_of_s_GlobalState_2() { return &___s_GlobalState_2; }
	inline void set_s_GlobalState_2(GlobalState_t0AFA7BA85CD0AA5ABD3930634020337BB7F108AE  value)
	{
		___s_GlobalState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_2))->___touchscreens_0))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_2))->___touchscreens_0))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerDown_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerDown_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerDown_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerDown_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerDown_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerDown_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerMove_3))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerMove_3))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerMove_3))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerMove_3))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerMove_3))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerMove_3))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerUp_4))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerUp_4))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerUp_4))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerUp_4))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerUp_4))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onFingerUp_4))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_2))->___playerState_5))->___fingers_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_2))->___playerState_5))->___activeFingers_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_2))->___playerState_5))->___activeTouches_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_2))->___playerState_5))->___activeTouchState_10), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch
struct Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C_marshaled_pinvoke
{
	Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C * ___m_Finger_0;
	Record_t29552BBAABACF86D78938F25B4169F99BFCECA3D  ___m_TouchRecord_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.EnhancedTouch.Touch
struct Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C_marshaled_com
{
	Finger_tAD3C5F54752F7B6E50B2A4787465EA2268F1F64C * ___m_Finger_0;
	Record_t29552BBAABACF86D78938F25B4169F99BFCECA3D  ___m_TouchRecord_1;
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


// UnityEngine.InputSystem.Pointer
struct Pointer_t535177A10A9382726617C45A5924352711ABDF8E  : public InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B
{
public:
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<position>k__BackingField
	Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * ___U3CpositionU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<delta>k__BackingField
	Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * ___U3CdeltaU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<radius>k__BackingField
	Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * ___U3CradiusU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Pointer::<pressure>k__BackingField
	AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF * ___U3CpressureU3Ek__BackingField_42;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pointer::<press>k__BackingField
	ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * ___U3CpressU3Ek__BackingField_43;

public:
	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Pointer_t535177A10A9382726617C45A5924352711ABDF8E, ___U3CpositionU3Ek__BackingField_39)); }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * get_U3CpositionU3Ek__BackingField_39() const { return ___U3CpositionU3Ek__BackingField_39; }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 ** get_address_of_U3CpositionU3Ek__BackingField_39() { return &___U3CpositionU3Ek__BackingField_39; }
	inline void set_U3CpositionU3Ek__BackingField_39(Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * value)
	{
		___U3CpositionU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpositionU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(Pointer_t535177A10A9382726617C45A5924352711ABDF8E, ___U3CdeltaU3Ek__BackingField_40)); }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * get_U3CdeltaU3Ek__BackingField_40() const { return ___U3CdeltaU3Ek__BackingField_40; }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 ** get_address_of_U3CdeltaU3Ek__BackingField_40() { return &___U3CdeltaU3Ek__BackingField_40; }
	inline void set_U3CdeltaU3Ek__BackingField_40(Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * value)
	{
		___U3CdeltaU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeltaU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(Pointer_t535177A10A9382726617C45A5924352711ABDF8E, ___U3CradiusU3Ek__BackingField_41)); }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * get_U3CradiusU3Ek__BackingField_41() const { return ___U3CradiusU3Ek__BackingField_41; }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 ** get_address_of_U3CradiusU3Ek__BackingField_41() { return &___U3CradiusU3Ek__BackingField_41; }
	inline void set_U3CradiusU3Ek__BackingField_41(Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * value)
	{
		___U3CradiusU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CradiusU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(Pointer_t535177A10A9382726617C45A5924352711ABDF8E, ___U3CpressureU3Ek__BackingField_42)); }
	inline AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF * get_U3CpressureU3Ek__BackingField_42() const { return ___U3CpressureU3Ek__BackingField_42; }
	inline AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF ** get_address_of_U3CpressureU3Ek__BackingField_42() { return &___U3CpressureU3Ek__BackingField_42; }
	inline void set_U3CpressureU3Ek__BackingField_42(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF * value)
	{
		___U3CpressureU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpressureU3Ek__BackingField_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpressU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(Pointer_t535177A10A9382726617C45A5924352711ABDF8E, ___U3CpressU3Ek__BackingField_43)); }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * get_U3CpressU3Ek__BackingField_43() const { return ___U3CpressU3Ek__BackingField_43; }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 ** get_address_of_U3CpressU3Ek__BackingField_43() { return &___U3CpressU3Ek__BackingField_43; }
	inline void set_U3CpressU3Ek__BackingField_43(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * value)
	{
		___U3CpressU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpressU3Ek__BackingField_43), (void*)value);
	}
};

struct Pointer_t535177A10A9382726617C45A5924352711ABDF8E_StaticFields
{
public:
	// UnityEngine.InputSystem.Pointer UnityEngine.InputSystem.Pointer::<current>k__BackingField
	Pointer_t535177A10A9382726617C45A5924352711ABDF8E * ___U3CcurrentU3Ek__BackingField_44;

public:
	inline static int32_t get_offset_of_U3CcurrentU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(Pointer_t535177A10A9382726617C45A5924352711ABDF8E_StaticFields, ___U3CcurrentU3Ek__BackingField_44)); }
	inline Pointer_t535177A10A9382726617C45A5924352711ABDF8E * get_U3CcurrentU3Ek__BackingField_44() const { return ___U3CcurrentU3Ek__BackingField_44; }
	inline Pointer_t535177A10A9382726617C45A5924352711ABDF8E ** get_address_of_U3CcurrentU3Ek__BackingField_44() { return &___U3CcurrentU3Ek__BackingField_44; }
	inline void set_U3CcurrentU3Ek__BackingField_44(Pointer_t535177A10A9382726617C45A5924352711ABDF8E * value)
	{
		___U3CcurrentU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3Ek__BackingField_44), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.TouchControl
struct TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E  : public InputControl_1_tAE05ABE96FB5D651FF8F3A124EBCD0B8E99807CF
{
public:
	// UnityEngine.InputSystem.Controls.TouchPressControl UnityEngine.InputSystem.Controls.TouchControl::<press>k__BackingField
	TouchPressControl_t6BFD886FA620112937D72C2C3601F9BA50A600ED * ___U3CpressU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Controls.TouchControl::<touchId>k__BackingField
	IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * ___U3CtouchIdU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Controls.TouchControl::<position>k__BackingField
	Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * ___U3CpositionU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Controls.TouchControl::<delta>k__BackingField
	Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * ___U3CdeltaU3Ek__BackingField_25;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.TouchControl::<pressure>k__BackingField
	AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF * ___U3CpressureU3Ek__BackingField_26;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Controls.TouchControl::<radius>k__BackingField
	Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * ___U3CradiusU3Ek__BackingField_27;
	// UnityEngine.InputSystem.Controls.TouchPhaseControl UnityEngine.InputSystem.Controls.TouchControl::<phase>k__BackingField
	TouchPhaseControl_t61847A8DAEA356BBB51872FCE51DD9EEA9206D01 * ___U3CphaseU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Controls.TouchControl::<indirectTouch>k__BackingField
	ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * ___U3CindirectTouchU3Ek__BackingField_29;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Controls.TouchControl::<tap>k__BackingField
	ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * ___U3CtapU3Ek__BackingField_30;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Controls.TouchControl::<tapCount>k__BackingField
	IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * ___U3CtapCountU3Ek__BackingField_31;
	// UnityEngine.InputSystem.Controls.DoubleControl UnityEngine.InputSystem.Controls.TouchControl::<startTime>k__BackingField
	DoubleControl_tE49E62BF0692C752B3DDBEA7DB2A212793469EC8 * ___U3CstartTimeU3Ek__BackingField_32;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Controls.TouchControl::<startPosition>k__BackingField
	Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * ___U3CstartPositionU3Ek__BackingField_33;

public:
	inline static int32_t get_offset_of_U3CpressU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CpressU3Ek__BackingField_22)); }
	inline TouchPressControl_t6BFD886FA620112937D72C2C3601F9BA50A600ED * get_U3CpressU3Ek__BackingField_22() const { return ___U3CpressU3Ek__BackingField_22; }
	inline TouchPressControl_t6BFD886FA620112937D72C2C3601F9BA50A600ED ** get_address_of_U3CpressU3Ek__BackingField_22() { return &___U3CpressU3Ek__BackingField_22; }
	inline void set_U3CpressU3Ek__BackingField_22(TouchPressControl_t6BFD886FA620112937D72C2C3601F9BA50A600ED * value)
	{
		___U3CpressU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpressU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchIdU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CtouchIdU3Ek__BackingField_23)); }
	inline IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * get_U3CtouchIdU3Ek__BackingField_23() const { return ___U3CtouchIdU3Ek__BackingField_23; }
	inline IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 ** get_address_of_U3CtouchIdU3Ek__BackingField_23() { return &___U3CtouchIdU3Ek__BackingField_23; }
	inline void set_U3CtouchIdU3Ek__BackingField_23(IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * value)
	{
		___U3CtouchIdU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchIdU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CpositionU3Ek__BackingField_24)); }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * get_U3CpositionU3Ek__BackingField_24() const { return ___U3CpositionU3Ek__BackingField_24; }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 ** get_address_of_U3CpositionU3Ek__BackingField_24() { return &___U3CpositionU3Ek__BackingField_24; }
	inline void set_U3CpositionU3Ek__BackingField_24(Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * value)
	{
		___U3CpositionU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpositionU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CdeltaU3Ek__BackingField_25)); }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * get_U3CdeltaU3Ek__BackingField_25() const { return ___U3CdeltaU3Ek__BackingField_25; }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 ** get_address_of_U3CdeltaU3Ek__BackingField_25() { return &___U3CdeltaU3Ek__BackingField_25; }
	inline void set_U3CdeltaU3Ek__BackingField_25(Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * value)
	{
		___U3CdeltaU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeltaU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CpressureU3Ek__BackingField_26)); }
	inline AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF * get_U3CpressureU3Ek__BackingField_26() const { return ___U3CpressureU3Ek__BackingField_26; }
	inline AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF ** get_address_of_U3CpressureU3Ek__BackingField_26() { return &___U3CpressureU3Ek__BackingField_26; }
	inline void set_U3CpressureU3Ek__BackingField_26(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF * value)
	{
		___U3CpressureU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpressureU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CradiusU3Ek__BackingField_27)); }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * get_U3CradiusU3Ek__BackingField_27() const { return ___U3CradiusU3Ek__BackingField_27; }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 ** get_address_of_U3CradiusU3Ek__BackingField_27() { return &___U3CradiusU3Ek__BackingField_27; }
	inline void set_U3CradiusU3Ek__BackingField_27(Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * value)
	{
		___U3CradiusU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CradiusU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CphaseU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CphaseU3Ek__BackingField_28)); }
	inline TouchPhaseControl_t61847A8DAEA356BBB51872FCE51DD9EEA9206D01 * get_U3CphaseU3Ek__BackingField_28() const { return ___U3CphaseU3Ek__BackingField_28; }
	inline TouchPhaseControl_t61847A8DAEA356BBB51872FCE51DD9EEA9206D01 ** get_address_of_U3CphaseU3Ek__BackingField_28() { return &___U3CphaseU3Ek__BackingField_28; }
	inline void set_U3CphaseU3Ek__BackingField_28(TouchPhaseControl_t61847A8DAEA356BBB51872FCE51DD9EEA9206D01 * value)
	{
		___U3CphaseU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CphaseU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CindirectTouchU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CindirectTouchU3Ek__BackingField_29)); }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * get_U3CindirectTouchU3Ek__BackingField_29() const { return ___U3CindirectTouchU3Ek__BackingField_29; }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 ** get_address_of_U3CindirectTouchU3Ek__BackingField_29() { return &___U3CindirectTouchU3Ek__BackingField_29; }
	inline void set_U3CindirectTouchU3Ek__BackingField_29(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * value)
	{
		___U3CindirectTouchU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CindirectTouchU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtapU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CtapU3Ek__BackingField_30)); }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * get_U3CtapU3Ek__BackingField_30() const { return ___U3CtapU3Ek__BackingField_30; }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 ** get_address_of_U3CtapU3Ek__BackingField_30() { return &___U3CtapU3Ek__BackingField_30; }
	inline void set_U3CtapU3Ek__BackingField_30(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * value)
	{
		___U3CtapU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtapU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtapCountU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CtapCountU3Ek__BackingField_31)); }
	inline IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * get_U3CtapCountU3Ek__BackingField_31() const { return ___U3CtapCountU3Ek__BackingField_31; }
	inline IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 ** get_address_of_U3CtapCountU3Ek__BackingField_31() { return &___U3CtapCountU3Ek__BackingField_31; }
	inline void set_U3CtapCountU3Ek__BackingField_31(IntegerControl_tD3A8B371DCD372DF24903DA6805D969229E10328 * value)
	{
		___U3CtapCountU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtapCountU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartTimeU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CstartTimeU3Ek__BackingField_32)); }
	inline DoubleControl_tE49E62BF0692C752B3DDBEA7DB2A212793469EC8 * get_U3CstartTimeU3Ek__BackingField_32() const { return ___U3CstartTimeU3Ek__BackingField_32; }
	inline DoubleControl_tE49E62BF0692C752B3DDBEA7DB2A212793469EC8 ** get_address_of_U3CstartTimeU3Ek__BackingField_32() { return &___U3CstartTimeU3Ek__BackingField_32; }
	inline void set_U3CstartTimeU3Ek__BackingField_32(DoubleControl_tE49E62BF0692C752B3DDBEA7DB2A212793469EC8 * value)
	{
		___U3CstartTimeU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstartTimeU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartPositionU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E, ___U3CstartPositionU3Ek__BackingField_33)); }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * get_U3CstartPositionU3Ek__BackingField_33() const { return ___U3CstartPositionU3Ek__BackingField_33; }
	inline Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 ** get_address_of_U3CstartPositionU3Ek__BackingField_33() { return &___U3CstartPositionU3Ek__BackingField_33; }
	inline void set_U3CstartPositionU3Ek__BackingField_33(Vector2Control_tCEF1B69B09E4D079E488A229A1B6720CEE559D13 * value)
	{
		___U3CstartPositionU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstartPositionU3Ek__BackingField_33), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.TransformConstraint
struct TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags Microsoft.MixedReality.Toolkit.UI.TransformConstraint::handType
	int32_t ___handType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationProximityFlags Microsoft.MixedReality.Toolkit.UI.TransformConstraint::proximityType
	int32_t ___proximityType_5;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform Microsoft.MixedReality.Toolkit.UI.TransformConstraint::worldPoseOnManipulationStart
	MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95  ___worldPoseOnManipulationStart_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.TransformConstraint::<TargetTransform>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTargetTransformU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_handType_4() { return static_cast<int32_t>(offsetof(TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4, ___handType_4)); }
	inline int32_t get_handType_4() const { return ___handType_4; }
	inline int32_t* get_address_of_handType_4() { return &___handType_4; }
	inline void set_handType_4(int32_t value)
	{
		___handType_4 = value;
	}

	inline static int32_t get_offset_of_proximityType_5() { return static_cast<int32_t>(offsetof(TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4, ___proximityType_5)); }
	inline int32_t get_proximityType_5() const { return ___proximityType_5; }
	inline int32_t* get_address_of_proximityType_5() { return &___proximityType_5; }
	inline void set_proximityType_5(int32_t value)
	{
		___proximityType_5 = value;
	}

	inline static int32_t get_offset_of_worldPoseOnManipulationStart_6() { return static_cast<int32_t>(offsetof(TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4, ___worldPoseOnManipulationStart_6)); }
	inline MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95  get_worldPoseOnManipulationStart_6() const { return ___worldPoseOnManipulationStart_6; }
	inline MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95 * get_address_of_worldPoseOnManipulationStart_6() { return &___worldPoseOnManipulationStart_6; }
	inline void set_worldPoseOnManipulationStart_6(MixedRealityTransform_tB8BF0B2CCF0776ABB28C6356EEF0FC1C3CBACE95  value)
	{
		___worldPoseOnManipulationStart_6 = value;
	}

	inline static int32_t get_offset_of_U3CTargetTransformU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4, ___U3CTargetTransformU3Ek__BackingField_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CTargetTransformU3Ek__BackingField_7() const { return ___U3CTargetTransformU3Ek__BackingField_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CTargetTransformU3Ek__BackingField_7() { return &___U3CTargetTransformU3Ek__BackingField_7; }
	inline void set_U3CTargetTransformU3Ek__BackingField_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CTargetTransformU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetTransformU3Ek__BackingField_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
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


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.InputSystem.Touchscreen
struct Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26  : public Pointer_t535177A10A9382726617C45A5924352711ABDF8E
{
public:
	// UnityEngine.InputSystem.Controls.TouchControl UnityEngine.InputSystem.Touchscreen::<primaryTouch>k__BackingField
	TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E * ___U3CprimaryTouchU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl> UnityEngine.InputSystem.Touchscreen::<touches>k__BackingField
	ReadOnlyArray_1_tC4FF518272A433578904F795928D86983A14C439  ___U3CtouchesU3Ek__BackingField_46;

public:
	inline static int32_t get_offset_of_U3CprimaryTouchU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26, ___U3CprimaryTouchU3Ek__BackingField_45)); }
	inline TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E * get_U3CprimaryTouchU3Ek__BackingField_45() const { return ___U3CprimaryTouchU3Ek__BackingField_45; }
	inline TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E ** get_address_of_U3CprimaryTouchU3Ek__BackingField_45() { return &___U3CprimaryTouchU3Ek__BackingField_45; }
	inline void set_U3CprimaryTouchU3Ek__BackingField_45(TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E * value)
	{
		___U3CprimaryTouchU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprimaryTouchU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchesU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26, ___U3CtouchesU3Ek__BackingField_46)); }
	inline ReadOnlyArray_1_tC4FF518272A433578904F795928D86983A14C439  get_U3CtouchesU3Ek__BackingField_46() const { return ___U3CtouchesU3Ek__BackingField_46; }
	inline ReadOnlyArray_1_tC4FF518272A433578904F795928D86983A14C439 * get_address_of_U3CtouchesU3Ek__BackingField_46() { return &___U3CtouchesU3Ek__BackingField_46; }
	inline void set_U3CtouchesU3Ek__BackingField_46(ReadOnlyArray_1_tC4FF518272A433578904F795928D86983A14C439  value)
	{
		___U3CtouchesU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CtouchesU3Ek__BackingField_46))->___m_Array_0), (void*)NULL);
	}
};

struct Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26_StaticFields
{
public:
	// UnityEngine.InputSystem.Touchscreen UnityEngine.InputSystem.Touchscreen::<current>k__BackingField
	Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 * ___U3CcurrentU3Ek__BackingField_47;
	// System.Single UnityEngine.InputSystem.Touchscreen::s_TapTime
	float ___s_TapTime_48;
	// System.Single UnityEngine.InputSystem.Touchscreen::s_TapDelayTime
	float ___s_TapDelayTime_49;
	// System.Single UnityEngine.InputSystem.Touchscreen::s_TapRadiusSquared
	float ___s_TapRadiusSquared_50;

public:
	inline static int32_t get_offset_of_U3CcurrentU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26_StaticFields, ___U3CcurrentU3Ek__BackingField_47)); }
	inline Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 * get_U3CcurrentU3Ek__BackingField_47() const { return ___U3CcurrentU3Ek__BackingField_47; }
	inline Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 ** get_address_of_U3CcurrentU3Ek__BackingField_47() { return &___U3CcurrentU3Ek__BackingField_47; }
	inline void set_U3CcurrentU3Ek__BackingField_47(Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 * value)
	{
		___U3CcurrentU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_s_TapTime_48() { return static_cast<int32_t>(offsetof(Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26_StaticFields, ___s_TapTime_48)); }
	inline float get_s_TapTime_48() const { return ___s_TapTime_48; }
	inline float* get_address_of_s_TapTime_48() { return &___s_TapTime_48; }
	inline void set_s_TapTime_48(float value)
	{
		___s_TapTime_48 = value;
	}

	inline static int32_t get_offset_of_s_TapDelayTime_49() { return static_cast<int32_t>(offsetof(Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26_StaticFields, ___s_TapDelayTime_49)); }
	inline float get_s_TapDelayTime_49() const { return ___s_TapDelayTime_49; }
	inline float* get_address_of_s_TapDelayTime_49() { return &___s_TapDelayTime_49; }
	inline void set_s_TapDelayTime_49(float value)
	{
		___s_TapDelayTime_49 = value;
	}

	inline static int32_t get_offset_of_s_TapRadiusSquared_50() { return static_cast<int32_t>(offsetof(Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26_StaticFields, ___s_TapRadiusSquared_50)); }
	inline float get_s_TapRadiusSquared_50() const { return ___s_TapRadiusSquared_50; }
	inline float* get_address_of_s_TapRadiusSquared_50() { return &___s_TapRadiusSquared_50; }
	inline void set_s_TapRadiusSquared_50(float value)
	{
		___s_TapRadiusSquared_50 = value;
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.InputSystem.UI.TrackedDeviceRaycaster
struct TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5  : public BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876
{
public:
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData> UnityEngine.InputSystem.UI.TrackedDeviceRaycaster::m_RaycastResultsCache
	List_1_tB63D3299D00C155882DD98A918CEA1DAD0598679 * ___m_RaycastResultsCache_5;
	// System.Boolean UnityEngine.InputSystem.UI.TrackedDeviceRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_8;
	// System.Boolean UnityEngine.InputSystem.UI.TrackedDeviceRaycaster::m_CheckFor2DOcclusion
	bool ___m_CheckFor2DOcclusion_9;
	// System.Boolean UnityEngine.InputSystem.UI.TrackedDeviceRaycaster::m_CheckFor3DOcclusion
	bool ___m_CheckFor3DOcclusion_10;
	// System.Single UnityEngine.InputSystem.UI.TrackedDeviceRaycaster::m_MaxDistance
	float ___m_MaxDistance_11;
	// UnityEngine.LayerMask UnityEngine.InputSystem.UI.TrackedDeviceRaycaster::m_BlockingMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_BlockingMask_12;
	// UnityEngine.Canvas UnityEngine.InputSystem.UI.TrackedDeviceRaycaster::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_13;

public:
	inline static int32_t get_offset_of_m_RaycastResultsCache_5() { return static_cast<int32_t>(offsetof(TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5, ___m_RaycastResultsCache_5)); }
	inline List_1_tB63D3299D00C155882DD98A918CEA1DAD0598679 * get_m_RaycastResultsCache_5() const { return ___m_RaycastResultsCache_5; }
	inline List_1_tB63D3299D00C155882DD98A918CEA1DAD0598679 ** get_address_of_m_RaycastResultsCache_5() { return &___m_RaycastResultsCache_5; }
	inline void set_m_RaycastResultsCache_5(List_1_tB63D3299D00C155882DD98A918CEA1DAD0598679 * value)
	{
		___m_RaycastResultsCache_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultsCache_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_IgnoreReversedGraphics_8() { return static_cast<int32_t>(offsetof(TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5, ___m_IgnoreReversedGraphics_8)); }
	inline bool get_m_IgnoreReversedGraphics_8() const { return ___m_IgnoreReversedGraphics_8; }
	inline bool* get_address_of_m_IgnoreReversedGraphics_8() { return &___m_IgnoreReversedGraphics_8; }
	inline void set_m_IgnoreReversedGraphics_8(bool value)
	{
		___m_IgnoreReversedGraphics_8 = value;
	}

	inline static int32_t get_offset_of_m_CheckFor2DOcclusion_9() { return static_cast<int32_t>(offsetof(TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5, ___m_CheckFor2DOcclusion_9)); }
	inline bool get_m_CheckFor2DOcclusion_9() const { return ___m_CheckFor2DOcclusion_9; }
	inline bool* get_address_of_m_CheckFor2DOcclusion_9() { return &___m_CheckFor2DOcclusion_9; }
	inline void set_m_CheckFor2DOcclusion_9(bool value)
	{
		___m_CheckFor2DOcclusion_9 = value;
	}

	inline static int32_t get_offset_of_m_CheckFor3DOcclusion_10() { return static_cast<int32_t>(offsetof(TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5, ___m_CheckFor3DOcclusion_10)); }
	inline bool get_m_CheckFor3DOcclusion_10() const { return ___m_CheckFor3DOcclusion_10; }
	inline bool* get_address_of_m_CheckFor3DOcclusion_10() { return &___m_CheckFor3DOcclusion_10; }
	inline void set_m_CheckFor3DOcclusion_10(bool value)
	{
		___m_CheckFor3DOcclusion_10 = value;
	}

	inline static int32_t get_offset_of_m_MaxDistance_11() { return static_cast<int32_t>(offsetof(TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5, ___m_MaxDistance_11)); }
	inline float get_m_MaxDistance_11() const { return ___m_MaxDistance_11; }
	inline float* get_address_of_m_MaxDistance_11() { return &___m_MaxDistance_11; }
	inline void set_m_MaxDistance_11(float value)
	{
		___m_MaxDistance_11 = value;
	}

	inline static int32_t get_offset_of_m_BlockingMask_12() { return static_cast<int32_t>(offsetof(TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5, ___m_BlockingMask_12)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_BlockingMask_12() const { return ___m_BlockingMask_12; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_BlockingMask_12() { return &___m_BlockingMask_12; }
	inline void set_m_BlockingMask_12(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_BlockingMask_12 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5, ___m_Canvas_13)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}
};

struct TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster> UnityEngine.InputSystem.UI.TrackedDeviceRaycaster::s_Instances
	InlinedArray_1_t1B88323B7E4838768EC6929E3291D42A4F05B9FB  ___s_Instances_6;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData> UnityEngine.InputSystem.UI.TrackedDeviceRaycaster::s_SortedGraphics
	List_1_tB63D3299D00C155882DD98A918CEA1DAD0598679 * ___s_SortedGraphics_7;

public:
	inline static int32_t get_offset_of_s_Instances_6() { return static_cast<int32_t>(offsetof(TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5_StaticFields, ___s_Instances_6)); }
	inline InlinedArray_1_t1B88323B7E4838768EC6929E3291D42A4F05B9FB  get_s_Instances_6() const { return ___s_Instances_6; }
	inline InlinedArray_1_t1B88323B7E4838768EC6929E3291D42A4F05B9FB * get_address_of_s_Instances_6() { return &___s_Instances_6; }
	inline void set_s_Instances_6(InlinedArray_1_t1B88323B7E4838768EC6929E3291D42A4F05B9FB  value)
	{
		___s_Instances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Instances_6))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Instances_6))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_SortedGraphics_7() { return static_cast<int32_t>(offsetof(TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5_StaticFields, ___s_SortedGraphics_7)); }
	inline List_1_tB63D3299D00C155882DD98A918CEA1DAD0598679 * get_s_SortedGraphics_7() const { return ___s_SortedGraphics_7; }
	inline List_1_tB63D3299D00C155882DD98A918CEA1DAD0598679 ** get_address_of_s_SortedGraphics_7() { return &___s_SortedGraphics_7; }
	inline void set_s_SortedGraphics_7(List_1_tB63D3299D00C155882DD98A918CEA1DAD0598679 * value)
	{
		___s_SortedGraphics_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SortedGraphics_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * m_Items[1];

public:
	inline TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Threading.Timer[]
struct TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * m_Items[1];

public:
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * m_Items[1];

public:
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE * m_Items[1];

public:
	inline TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TokenHashValue_tB0AE1E936B85B34D296293DC063F53900B629BBE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  m_Items[1];

public:
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.InputSystem.EnhancedTouch.Touch[]
struct TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C  m_Items[1];

public:
	inline Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Finger_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_TouchRecord_1))->___m_Owner_0), (void*)NULL);
		#endif
	}
	inline Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t8530FFB54A0C21DF0CE1FC74E103081F6FBF4D6C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Finger_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_TouchRecord_1))->___m_Owner_0), (void*)NULL);
		#endif
	}
};
// UnityEngine.InputSystem.Controls.TouchControl[]
struct TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E * m_Items[1];

public:
	inline TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TouchControl_t23146C5CA6596F27C2BC8585E7F936783BAE375E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.InputSystem.Touchscreen[]
struct TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 * m_Items[1];

public:
	inline Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touchscreen_t5659054E44F116BD123493F42B79A991F9FA7A26 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Diagnostics.Tracing.TraceLoggingTypeInfo[]
struct TraceLoggingTypeInfoU5BU5D_tA90F7957051B6937994E8E00BDFBEB11DA71739F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE * m_Items[1];

public:
	inline TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TraceLoggingTypeInfo_t1A7BD5C2E0BF5D1AC23EEE6C22D724CBAA91CDDE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * m_Items[1];

public:
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Timeline.TrackBindingTypeAttribute[]
struct TrackBindingTypeAttributeU5BU5D_t7A715A925DD676A66296E7420B9A44D182592AE4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * m_Items[1];

public:
	inline TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  m_Items[1];

public:
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData[]
struct TrackedDeviceEventDataU5BU5D_t10AFCA5C11AE2084B842B316FCC202EA849E5B74  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63 * m_Items[1];

public:
	inline TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackedDeviceEventData_tC99E271E6E72059A3D9F95C1CC26ED897952CA63 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.InputSystem.UI.TrackedDeviceRaycaster[]
struct TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5 * m_Items[1];

public:
	inline TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackedDeviceRaycaster_tA2F4339BCE87F955537366780F67B43261E4F6B5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE  : public RuntimeArray
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
// System.Net.Http.Headers.TransferCodingHeaderValue[]
struct TransferCodingHeaderValueU5BU5D_tD995FB23F77C8D95B39A6384C68FFB317CE374B7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25 * m_Items[1];

public:
	inline TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransferCodingHeaderValue_t7ACEB0A8AA23003A8D8308090D5BA0BE469ABB25 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.Http.Headers.TransferCodingWithQualityHeaderValue[]
struct TransferCodingWithQualityHeaderValueU5BU5D_t4046809AA80FE966E30D949AAC31E3EAB5F42888  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TransferCodingWithQualityHeaderValue_tAC3B4AEAE5AF0E85C8973A512EE2C71F5592E5A7 * m_Items[1];

public:
	inline TransferCodingWithQualityHeaderValue_tAC3B4AEAE5AF0E85C8973A512EE2C71F5592E5A7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransferCodingWithQualityHeaderValue_tAC3B4AEAE5AF0E85C8973A512EE2C71F5592E5A7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransferCodingWithQualityHeaderValue_tAC3B4AEAE5AF0E85C8973A512EE2C71F5592E5A7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TransferCodingWithQualityHeaderValue_tAC3B4AEAE5AF0E85C8973A512EE2C71F5592E5A7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransferCodingWithQualityHeaderValue_tAC3B4AEAE5AF0E85C8973A512EE2C71F5592E5A7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransferCodingWithQualityHeaderValue_tAC3B4AEAE5AF0E85C8973A512EE2C71F5592E5A7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.UI.TransformConstraint[]
struct TransformConstraintU5BU5D_t5642B8CBEC1A53788619009D919B44FC2B817900  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4 * m_Items[1];

public:
	inline TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransformConstraint_t532C16F2A89F41E9413540F6A3C04FE0F7AB73E4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture[]
struct TwistGestureU5BU5D_tC6878D08F9DE572784F77FDD6D233646EB20EAF5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1 * m_Items[1];

public:
	inline TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TwistGesture_t22B4ABFBB0E1AC3B06CDBC5E326D343D8807A1A1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture[]
struct TwoFingerDragGestureU5BU5D_tDB0AD7310CE23E933A4CB19441AB3E80A211939E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800 * m_Items[1];

public:
	inline TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TwoFingerDragGesture_t4B2E707BD3A1F46F29876784E33A16C4C6F66800 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray[]
struct TypeArrayU5BU5D_tA99D115AC27B10BDF262CB20518DA00E0462C468  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 * m_Items[1];

public:
	inline TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.TypeCode[]
struct TypeCodeU5BU5D_t739FFE1DCDDA7CAB8776CF8717CD472E32DC59AE  : public RuntimeArray
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
// System.TypeIdentifier[]
struct TypeIdentifierU5BU5D_t3265157B9A697E40451D0B00C1BCBA9B0298FD80  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Runtime.Serialization.Formatters.Binary.TypeInformation[]
struct TypeInformationU5BU5D_tD576CAD79CF9BB3BC2FDA1600DEFEE383B10BB92  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B * m_Items[1];

public:
	inline TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeInformation_t3503150669B72C7392EACBC8F63F3E0392C3B34B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Newtonsoft.Json.Utilities.TypeNameKey[]
struct TypeNameKeyU5BU5D_t2501C6DD0BEC8B867E2DA0BE386396D24357CA2E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772  m_Items[1];

public:
	inline TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___AssemblyName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___TypeName_1), (void*)NULL);
		#endif
	}
	inline TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeNameKey_tBAAD13FFB380A663F66E1B91476D04E055840772  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___AssemblyName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___TypeName_1), (void*)NULL);
		#endif
	}
};
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol[]
struct TypeParameterSymbolU5BU5D_t2B49553927EC2E977B4C6C1D1DDA530DEC2C85E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7 * m_Items[1];

public:
	inline TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeParameterSymbol_t5BAFD247A19E6F0FE23FF10BA543B91CE2095ED7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType[]
struct TypeParameterTypeU5BU5D_tE8A081E99D9E3E4E1451C5B1C51F6B6D815D2F9C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D * m_Items[1];

public:
	inline TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeParameterType_t3E01F364D16B138B38C2B140677D27F2C5D50A3D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.TypeSpec[]
struct TypeSpecU5BU5D_t7283191FE6CC324F4D59517D154470947E071F24  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29 * m_Items[1];

public:
	inline TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeSpec_tE9E80FF0411D2895C6D07A09A5B02E65D6AFCF29 * value)
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
il2cpp_hresult_t IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_mFE515DF9962EEF37A8D418932523EF41B9462851_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_mD946EED87850050B3718B08D42883F0BC40F6819_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m2ED00737E784C34FB8B1F5BDCEFEDDB9439DC259_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_tA4F80E29F324A04831B458B897F638645DC796DF** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_m6F846F2FF7CF31B90CD59311B0A97F16CB84A331_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m9552562016BCC367E36F02415C25C18CDD175D0E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppWindowsRuntimeTypeName ___value1);
il2cpp_hresult_t IVector_1_InsertAt_mCAB35A67B8B2B513CBEA9C58A8D7554C1BC7145E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppWindowsRuntimeTypeName ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_m95C9D29C1A7E72DA624C2F94BD6CAE6D1D9C525E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m36FE1A22EAB93A8B070916A36357BD5538A0EF6F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m61DFA478F68D50087FBBA712F9AF1817291AA3D6_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_mA7069DA87A6C2A6E230C54044EF68848350E721E_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m02167D18718839E4D31A871D56DFE26E84692E21_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppWindowsRuntimeTypeName* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_m1E5CB73563F49CA839320C916CA3C311D42A0994_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, Il2CppWindowsRuntimeTypeName* ___items0);
il2cpp_hresult_t IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m0FCA4F3CF85CDEAE401BD771812FBA0FF656799E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m7D4E5453C718E8B658AF62E96BB267FCE257FA1D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mCCF7C1E4067EF69EAEC7583927E27835810A5CB0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m38430F9901EB062209CA17C9D70B14B6DFA17DF3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppWindowsRuntimeTypeName* ___items1, uint32_t* comReturnValue);



// COM Callable Wrapper for UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Timer[]
struct TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

		if (::memcmp(&iid, &IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588*>(this);
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

		if (::memcmp(&iid, &IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[4] = IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID;
		interfaceIds[5] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
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

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348(uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896(IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.EnhancedTouch.Touch[]
struct TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TouchU5BU5D_t020517DC05542FFC0BA6DB5DF14D93D46A5A3E0E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Controls.TouchControl[]
struct TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TouchControlU5BU5D_t12DAB42995F31F17DAF539C07EEC73028B74E46C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Touchscreen[]
struct TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TouchscreenU5BU5D_t98ADCE066F22968E92B2CF9450B445EA94560B63_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.TraceLoggingTypeInfo[]
struct TraceLoggingTypeInfoU5BU5D_tA90F7957051B6937994E8E00BDFBEB11DA71739F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TraceLoggingTypeInfoU5BU5D_tA90F7957051B6937994E8E00BDFBEB11DA71739F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TraceLoggingTypeInfoU5BU5D_tA90F7957051B6937994E8E00BDFBEB11DA71739F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TraceLoggingTypeInfoU5BU5D_tA90F7957051B6937994E8E00BDFBEB11DA71739F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TraceLoggingTypeInfoU5BU5D_tA90F7957051B6937994E8E00BDFBEB11DA71739F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TraceLoggingTypeInfoU5BU5D_tA90F7957051B6937994E8E00BDFBEB11DA71739F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TraceLoggingTypeInfoU5BU5D_tA90F7957051B6937994E8E00BDFBEB11DA71739F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Timeline.TrackBindingTypeAttribute[]
struct TrackBindingTypeAttributeU5BU5D_t7A715A925DD676A66296E7420B9A44D182592AE4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackBindingTypeAttributeU5BU5D_t7A715A925DD676A66296E7420B9A44D182592AE4_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TrackBindingTypeAttributeU5BU5D_t7A715A925DD676A66296E7420B9A44D182592AE4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackBindingTypeAttributeU5BU5D_t7A715A925DD676A66296E7420B9A44D182592AE4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackBindingTypeAttributeU5BU5D_t7A715A925DD676A66296E7420B9A44D182592AE4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackBindingTypeAttributeU5BU5D_t7A715A925DD676A66296E7420B9A44D182592AE4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackBindingTypeAttributeU5BU5D_t7A715A925DD676A66296E7420B9A44D182592AE4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData[]
struct TrackedDeviceEventDataU5BU5D_t10AFCA5C11AE2084B842B316FCC202EA849E5B74_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackedDeviceEventDataU5BU5D_t10AFCA5C11AE2084B842B316FCC202EA849E5B74_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TrackedDeviceEventDataU5BU5D_t10AFCA5C11AE2084B842B316FCC202EA849E5B74_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackedDeviceEventDataU5BU5D_t10AFCA5C11AE2084B842B316FCC202EA849E5B74_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackedDeviceEventDataU5BU5D_t10AFCA5C11AE2084B842B316FCC202EA849E5B74(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackedDeviceEventDataU5BU5D_t10AFCA5C11AE2084B842B316FCC202EA849E5B74_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackedDeviceEventDataU5BU5D_t10AFCA5C11AE2084B842B316FCC202EA849E5B74_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.UI.TrackedDeviceRaycaster[]
struct TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackedDeviceRaycasterU5BU5D_t2BDB15F399F07646E4D930AC4112CA44603D032D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackedHandJointU5BU5D_t78AAD3600842A2680B22B8D44CDBC849A126EEBE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Http.Headers.TransferCodingHeaderValue[]
struct TransferCodingHeaderValueU5BU5D_tD995FB23F77C8D95B39A6384C68FFB317CE374B7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TransferCodingHeaderValueU5BU5D_tD995FB23F77C8D95B39A6384C68FFB317CE374B7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TransferCodingHeaderValueU5BU5D_tD995FB23F77C8D95B39A6384C68FFB317CE374B7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TransferCodingHeaderValueU5BU5D_tD995FB23F77C8D95B39A6384C68FFB317CE374B7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TransferCodingHeaderValueU5BU5D_tD995FB23F77C8D95B39A6384C68FFB317CE374B7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TransferCodingHeaderValueU5BU5D_tD995FB23F77C8D95B39A6384C68FFB317CE374B7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TransferCodingHeaderValueU5BU5D_tD995FB23F77C8D95B39A6384C68FFB317CE374B7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Http.Headers.TransferCodingWithQualityHeaderValue[]
struct TransferCodingWithQualityHeaderValueU5BU5D_t4046809AA80FE966E30D949AAC31E3EAB5F42888_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TransferCodingWithQualityHeaderValueU5BU5D_t4046809AA80FE966E30D949AAC31E3EAB5F42888_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TransferCodingWithQualityHeaderValueU5BU5D_t4046809AA80FE966E30D949AAC31E3EAB5F42888_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TransferCodingWithQualityHeaderValueU5BU5D_t4046809AA80FE966E30D949AAC31E3EAB5F42888_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TransferCodingWithQualityHeaderValueU5BU5D_t4046809AA80FE966E30D949AAC31E3EAB5F42888(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TransferCodingWithQualityHeaderValueU5BU5D_t4046809AA80FE966E30D949AAC31E3EAB5F42888_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TransferCodingWithQualityHeaderValueU5BU5D_t4046809AA80FE966E30D949AAC31E3EAB5F42888_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[4] = IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A::IID;
		interfaceIds[5] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
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

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E(uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17(IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.TransformConstraint[]
struct TransformConstraintU5BU5D_t5642B8CBEC1A53788619009D919B44FC2B817900_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TransformConstraintU5BU5D_t5642B8CBEC1A53788619009D919B44FC2B817900_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TransformConstraintU5BU5D_t5642B8CBEC1A53788619009D919B44FC2B817900_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TransformConstraintU5BU5D_t5642B8CBEC1A53788619009D919B44FC2B817900_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TransformConstraintU5BU5D_t5642B8CBEC1A53788619009D919B44FC2B817900(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TransformConstraintU5BU5D_t5642B8CBEC1A53788619009D919B44FC2B817900_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TransformConstraintU5BU5D_t5642B8CBEC1A53788619009D919B44FC2B817900_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture[]
struct TwistGestureU5BU5D_tC6878D08F9DE572784F77FDD6D233646EB20EAF5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TwistGestureU5BU5D_tC6878D08F9DE572784F77FDD6D233646EB20EAF5_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TwistGestureU5BU5D_tC6878D08F9DE572784F77FDD6D233646EB20EAF5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TwistGestureU5BU5D_tC6878D08F9DE572784F77FDD6D233646EB20EAF5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TwistGestureU5BU5D_tC6878D08F9DE572784F77FDD6D233646EB20EAF5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TwistGestureU5BU5D_tC6878D08F9DE572784F77FDD6D233646EB20EAF5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TwistGestureU5BU5D_tC6878D08F9DE572784F77FDD6D233646EB20EAF5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.Interaction.Toolkit.AR.TwoFingerDragGesture[]
struct TwoFingerDragGestureU5BU5D_tDB0AD7310CE23E933A4CB19441AB3E80A211939E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TwoFingerDragGestureU5BU5D_tDB0AD7310CE23E933A4CB19441AB3E80A211939E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TwoFingerDragGestureU5BU5D_tDB0AD7310CE23E933A4CB19441AB3E80A211939E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TwoFingerDragGestureU5BU5D_tDB0AD7310CE23E933A4CB19441AB3E80A211939E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TwoFingerDragGestureU5BU5D_tDB0AD7310CE23E933A4CB19441AB3E80A211939E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TwoFingerDragGestureU5BU5D_tDB0AD7310CE23E933A4CB19441AB3E80A211939E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TwoFingerDragGestureU5BU5D_tDB0AD7310CE23E933A4CB19441AB3E80A211939E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_ComCallableWrapper>, IVector_1_t9AA20A6BF2B49B25D446E8374A7117284562FBCA, IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_tA4F80E29F324A04831B458B897F638645DC796DF, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IReferenceArray_1_tD46608331082351F1B529D3654C4B9C1F042B7D4, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_t9AA20A6BF2B49B25D446E8374A7117284562FBCA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t9AA20A6BF2B49B25D446E8374A7117284562FBCA*>(this);
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

		if (::memcmp(&iid, &IVectorView_1_tA4F80E29F324A04831B458B897F638645DC796DF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tA4F80E29F324A04831B458B897F638645DC796DF*>(this);
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

		if (::memcmp(&iid, &IReferenceArray_1_tD46608331082351F1B529D3654C4B9C1F042B7D4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_tD46608331082351F1B529D3654C4B9C1F042B7D4*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(9);
		interfaceIds[0] = IVector_1_t9AA20A6BF2B49B25D446E8374A7117284562FBCA::IID;
		interfaceIds[1] = IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872::IID;
		interfaceIds[2] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[3] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[4] = IVectorView_1_tA4F80E29F324A04831B458B897F638645DC796DF::IID;
		interfaceIds[5] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[6] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[7] = IReferenceArray_1_tD46608331082351F1B529D3654C4B9C1F042B7D4::IID;
		interfaceIds[8] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 9;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mFE515DF9962EEF37A8D418932523EF41B9462851(uint32_t ___index0, Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mFE515DF9962EEF37A8D418932523EF41B9462851_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_mD946EED87850050B3718B08D42883F0BC40F6819(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_mD946EED87850050B3718B08D42883F0BC40F6819_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2ED00737E784C34FB8B1F5BDCEFEDDB9439DC259(IVectorView_1_tA4F80E29F324A04831B458B897F638645DC796DF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m2ED00737E784C34FB8B1F5BDCEFEDDB9439DC259_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m6F846F2FF7CF31B90CD59311B0A97F16CB84A331(Il2CppWindowsRuntimeTypeName ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_m6F846F2FF7CF31B90CD59311B0A97F16CB84A331_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m9552562016BCC367E36F02415C25C18CDD175D0E(uint32_t ___index0, Il2CppWindowsRuntimeTypeName ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m9552562016BCC367E36F02415C25C18CDD175D0E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mCAB35A67B8B2B513CBEA9C58A8D7554C1BC7145E(uint32_t ___index0, Il2CppWindowsRuntimeTypeName ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_mCAB35A67B8B2B513CBEA9C58A8D7554C1BC7145E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m95C9D29C1A7E72DA624C2F94BD6CAE6D1D9C525E(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m95C9D29C1A7E72DA624C2F94BD6CAE6D1D9C525E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m36FE1A22EAB93A8B070916A36357BD5538A0EF6F(Il2CppWindowsRuntimeTypeName ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m36FE1A22EAB93A8B070916A36357BD5538A0EF6F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m61DFA478F68D50087FBBA712F9AF1817291AA3D6() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m61DFA478F68D50087FBBA712F9AF1817291AA3D6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mA7069DA87A6C2A6E230C54044EF68848350E721E() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_mA7069DA87A6C2A6E230C54044EF68848350E721E_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m02167D18718839E4D31A871D56DFE26E84692E21(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppWindowsRuntimeTypeName* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m02167D18718839E4D31A871D56DFE26E84692E21_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m1E5CB73563F49CA839320C916CA3C311D42A0994(uint32_t ___items0ArraySize, Il2CppWindowsRuntimeTypeName* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_m1E5CB73563F49CA839320C916CA3C311D42A0994_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
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

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m0FCA4F3CF85CDEAE401BD771812FBA0FF656799E(uint32_t ___index0, Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m0FCA4F3CF85CDEAE401BD771812FBA0FF656799E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m7D4E5453C718E8B658AF62E96BB267FCE257FA1D(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m7D4E5453C718E8B658AF62E96BB267FCE257FA1D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mCCF7C1E4067EF69EAEC7583927E27835810A5CB0(Il2CppWindowsRuntimeTypeName ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mCCF7C1E4067EF69EAEC7583927E27835810A5CB0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m38430F9901EB062209CA17C9D70B14B6DFA17DF3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppWindowsRuntimeTypeName* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m38430F9901EB062209CA17C9D70B14B6DFA17DF3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
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

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mA84565C4024FDE69169C568211FAB93BAED50FC9(uint32_t* comReturnValueArraySize, Il2CppWindowsRuntimeTypeName** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* returnValue;
		try
		{
			returnValue = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
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
		Il2CppWindowsRuntimeTypeName* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppWindowsRuntimeTypeName>(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				il2cpp_codegen_marshal_type_to_native((returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (_returnValue_marshaled)[i]);
			}
		}
		else
		{
			_returnValue_marshaledArraySize = 0;
			_returnValue_marshaled = NULL;
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
			returnValue = 1044;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Rect");
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
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* managedArray = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("OtherArray", "Other", "Byte", 0);
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
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* managedArray = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("OtherArray", "Other", "Int16", 0);
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
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* managedArray = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("OtherArray", "Other", "UInt16", 0);
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
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* managedArray = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("OtherArray", "Other", "Int32", 0);
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
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* managedArray = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("OtherArray", "Other", "UInt32", 0);
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
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* managedArray = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("OtherArray", "Other", "Int64", 0);
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
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* managedArray = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("OtherArray", "Other", "UInt64", 0);
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
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* managedArray = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("OtherArray", "Other", "Single", 0);
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
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* managedArray = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("OtherArray", "Other", "Double", 0);
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Boolean[]");
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
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* managedArray = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("OtherArray", "Other", "String", 0);
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Inspectable[]");
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
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* managedArray = static_cast<TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("OtherArray", "Other", "Guid", 0);
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("OtherArray", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray[]
struct TypeArrayU5BU5D_tA99D115AC27B10BDF262CB20518DA00E0462C468_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypeArrayU5BU5D_tA99D115AC27B10BDF262CB20518DA00E0462C468_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TypeArrayU5BU5D_tA99D115AC27B10BDF262CB20518DA00E0462C468_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TypeArrayU5BU5D_tA99D115AC27B10BDF262CB20518DA00E0462C468_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypeArrayU5BU5D_tA99D115AC27B10BDF262CB20518DA00E0462C468(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypeArrayU5BU5D_tA99D115AC27B10BDF262CB20518DA00E0462C468_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypeArrayU5BU5D_tA99D115AC27B10BDF262CB20518DA00E0462C468_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.TypeCode[]
struct TypeCodeU5BU5D_t739FFE1DCDDA7CAB8776CF8717CD472E32DC59AE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypeCodeU5BU5D_t739FFE1DCDDA7CAB8776CF8717CD472E32DC59AE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TypeCodeU5BU5D_t739FFE1DCDDA7CAB8776CF8717CD472E32DC59AE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TypeCodeU5BU5D_t739FFE1DCDDA7CAB8776CF8717CD472E32DC59AE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypeCodeU5BU5D_t739FFE1DCDDA7CAB8776CF8717CD472E32DC59AE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypeCodeU5BU5D_t739FFE1DCDDA7CAB8776CF8717CD472E32DC59AE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypeCodeU5BU5D_t739FFE1DCDDA7CAB8776CF8717CD472E32DC59AE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.TypeIdentifier[]
struct TypeIdentifierU5BU5D_t3265157B9A697E40451D0B00C1BCBA9B0298FD80_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypeIdentifierU5BU5D_t3265157B9A697E40451D0B00C1BCBA9B0298FD80_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TypeIdentifierU5BU5D_t3265157B9A697E40451D0B00C1BCBA9B0298FD80_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TypeIdentifierU5BU5D_t3265157B9A697E40451D0B00C1BCBA9B0298FD80_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypeIdentifierU5BU5D_t3265157B9A697E40451D0B00C1BCBA9B0298FD80(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypeIdentifierU5BU5D_t3265157B9A697E40451D0B00C1BCBA9B0298FD80_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypeIdentifierU5BU5D_t3265157B9A697E40451D0B00C1BCBA9B0298FD80_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Serialization.Formatters.Binary.TypeInformation[]
struct TypeInformationU5BU5D_tD576CAD79CF9BB3BC2FDA1600DEFEE383B10BB92_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypeInformationU5BU5D_tD576CAD79CF9BB3BC2FDA1600DEFEE383B10BB92_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TypeInformationU5BU5D_tD576CAD79CF9BB3BC2FDA1600DEFEE383B10BB92_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TypeInformationU5BU5D_tD576CAD79CF9BB3BC2FDA1600DEFEE383B10BB92_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypeInformationU5BU5D_tD576CAD79CF9BB3BC2FDA1600DEFEE383B10BB92(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypeInformationU5BU5D_tD576CAD79CF9BB3BC2FDA1600DEFEE383B10BB92_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypeInformationU5BU5D_tD576CAD79CF9BB3BC2FDA1600DEFEE383B10BB92_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Utilities.TypeNameKey[]
struct TypeNameKeyU5BU5D_t2501C6DD0BEC8B867E2DA0BE386396D24357CA2E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypeNameKeyU5BU5D_t2501C6DD0BEC8B867E2DA0BE386396D24357CA2E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TypeNameKeyU5BU5D_t2501C6DD0BEC8B867E2DA0BE386396D24357CA2E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TypeNameKeyU5BU5D_t2501C6DD0BEC8B867E2DA0BE386396D24357CA2E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypeNameKeyU5BU5D_t2501C6DD0BEC8B867E2DA0BE386396D24357CA2E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypeNameKeyU5BU5D_t2501C6DD0BEC8B867E2DA0BE386396D24357CA2E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypeNameKeyU5BU5D_t2501C6DD0BEC8B867E2DA0BE386396D24357CA2E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol[]
struct TypeParameterSymbolU5BU5D_t2B49553927EC2E977B4C6C1D1DDA530DEC2C85E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypeParameterSymbolU5BU5D_t2B49553927EC2E977B4C6C1D1DDA530DEC2C85E2_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TypeParameterSymbolU5BU5D_t2B49553927EC2E977B4C6C1D1DDA530DEC2C85E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TypeParameterSymbolU5BU5D_t2B49553927EC2E977B4C6C1D1DDA530DEC2C85E2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypeParameterSymbolU5BU5D_t2B49553927EC2E977B4C6C1D1DDA530DEC2C85E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypeParameterSymbolU5BU5D_t2B49553927EC2E977B4C6C1D1DDA530DEC2C85E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypeParameterSymbolU5BU5D_t2B49553927EC2E977B4C6C1D1DDA530DEC2C85E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType[]
struct TypeParameterTypeU5BU5D_tE8A081E99D9E3E4E1451C5B1C51F6B6D815D2F9C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypeParameterTypeU5BU5D_tE8A081E99D9E3E4E1451C5B1C51F6B6D815D2F9C_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TypeParameterTypeU5BU5D_tE8A081E99D9E3E4E1451C5B1C51F6B6D815D2F9C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TypeParameterTypeU5BU5D_tE8A081E99D9E3E4E1451C5B1C51F6B6D815D2F9C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypeParameterTypeU5BU5D_tE8A081E99D9E3E4E1451C5B1C51F6B6D815D2F9C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypeParameterTypeU5BU5D_tE8A081E99D9E3E4E1451C5B1C51F6B6D815D2F9C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypeParameterTypeU5BU5D_tE8A081E99D9E3E4E1451C5B1C51F6B6D815D2F9C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.TypeSpec[]
struct TypeSpecU5BU5D_t7283191FE6CC324F4D59517D154470947E071F24_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypeSpecU5BU5D_t7283191FE6CC324F4D59517D154470947E071F24_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TypeSpecU5BU5D_t7283191FE6CC324F4D59517D154470947E071F24_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TypeSpecU5BU5D_t7283191FE6CC324F4D59517D154470947E071F24_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypeSpecU5BU5D_t7283191FE6CC324F4D59517D154470947E071F24(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypeSpecU5BU5D_t7283191FE6CC324F4D59517D154470947E071F24_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypeSpecU5BU5D_t7283191FE6CC324F4D59517D154470947E071F24_ComCallableWrapper(obj));
}
